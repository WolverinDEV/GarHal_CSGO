cmake_minimum_required(VERSION 3.15)

set(WINSDK ${WDK_ROOT}/bin/${WDK_VERSION}/x86)
set(OPENSSL "openssl.exe")
set(MAKECERT "${WINSDK}/makecert.exe")
set(CERTUTIL "certutil.exe")
set(CERTMGR "certmgr.exe")
set(CERT2SPC "cert2spc.exe")
set(PVK2PFX "${WINSDK}/pvk2pfx.exe")
set(SIGNTOOL "${WINSDK}/signtool.exe")

# Password "x"
set(SNOOPYPRO_CERT SnoopyProCert)
add_custom_command(OUTPUT ${SNOOPYPRO_CERT}.pfx
        COMMAND "${CMAKE_COMMAND}" -E remove ${SNOOPYPRO_CERT}.pvk ${SNOOPYPRO_CERT}.cer ${SNOOPYPRO_CERT}.pfx ${SNOOPYPRO_CERT}.spc
        COMMAND "${MAKECERT}" -b 09/09/2018 -r -n \"CN=SnoopWare\" -sv ${SNOOPYPRO_CERT}.pvk ${SNOOPYPRO_CERT}.cer
        COMMAND "${CERTMGR}" -add ${SNOOPYPRO_CERT}.cer -s -r localMachine ROOT
        COMMAND "${CERTMGR}" -add ${SNOOPYPRO_CERT}.cer -s -r localMachine TRUSTEDPUBLISHER
        COMMAND "${CERT2SPC}" ${SNOOPYPRO_CERT}.cer ${SNOOPYPRO_CERT}.spc
        COMMAND "${PVK2PFX}" -pvk ${SNOOPYPRO_CERT}.pvk -spc ${SNOOPYPRO_CERT}.spc -pfx ${SNOOPYPRO_CERT}.pfx
        WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
        COMMENT "Generating SSL certificates to sign the drivers and executable ...")


file(GLOB SOURCES "*.c" "*.h")
wdk_add_driver(garhal-driver
        ${SOURCES}
)

add_custom_target(garhal-cert
        DEPENDS ${SNOOPYPRO_CERT}.pfx)

add_custom_command(TARGET garhal-driver
        POST_BUILD
        COMMAND "${SIGNTOOL}" sign /v /fd SHA256 /f ${CMAKE_BINARY_DIR}/${SNOOPYPRO_CERT}.pfx $<TARGET_FILE:garhal-driver>
        COMMENT "Signing $<TARGET_FILE:garhal-driver> ...")