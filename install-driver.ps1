$cleanName = "garhal-driver"

Write-Host "Stopping & deleting driver"
sc.exe stop $cleanName
sc.exe delete $cleanName

Write-Host "Installing & starting driver ($pwd\cmake-build-relwithdebinfo\Garhal\$cleanName.sys)"
sc.exe create $cleanName type= kernel start= demand error= normal binPath= $pwd\cmake-build-relwithdebinfo\Garhal\$cleanName.sys DisplayName= $cleanName
sc.exe start $cleanName