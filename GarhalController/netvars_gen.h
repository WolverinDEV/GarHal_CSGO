DEFINE_NET_CLASS(DT_CSTeamExclusive, 0x0, 0x00, netvar::class_base);
    /* m_iWeaponPurchasesThisMatch at 10acc */
    NET_CLASS_VAR_A(get_weapon_purchases_this_match, int, 0x10acc, /* element count */ 0x1f3, /* element size */ 0x4);
    /* m_EquippedLoadoutItemDefIndices at 116a4 */
    NET_CLASS_VAR_A(get_equipped_loadout_item_def_indices, int, 0x116a4, /* element count */ 0x39, /* element size */ 0x2);
END_NET_CLASS(DT_CSTeamExclusive);
DEFINE_NET_CLASS(DT_EffectData, 0x0, 0x00, netvar::class_base);
    /* m_vOrigin.x at 0 */
    /* TODO: fix name for m_vOrigin.x of type 1 */
    /* entindex at 0 */
    NET_CLASS_VAR_S(get_entindex, int, 0x0);
    /* m_vOrigin.y at 4 */
    /* TODO: fix name for m_vOrigin.y of type 1 */
    /* m_vOrigin.z at 8 */
    /* TODO: fix name for m_vOrigin.z of type 1 */
    /* m_vStart.x at c */
    /* TODO: fix name for m_vStart.x of type 1 */
    /* m_vStart.y at 10 */
    /* TODO: fix name for m_vStart.y of type 1 */
    /* m_vStart.z at 14 */
    /* TODO: fix name for m_vStart.z of type 1 */
    /* m_vNormal at 18 */
    NET_CLASS_VAR_S(get_v_normal, Vector3f, 0x18);
    /* m_vAngles at 24 */
    NET_CLASS_VAR_S(get_v_angles, Vector3f, 0x24);
    /* m_fFlags at 30 */
    NET_CLASS_VAR_S(get_flags, float, 0x30);
    /* m_flScale at 3c */
    NET_CLASS_VAR_S(get_scale, float, 0x3c);
    /* m_flMagnitude at 40 */
    NET_CLASS_VAR_S(get_magnitude, float, 0x40);
    /* m_flRadius at 44 */
    NET_CLASS_VAR_S(get_radius, float, 0x44);
    /* m_nAttachmentIndex at 48 */
    NET_CLASS_VAR_S(get_attachment_index, int32_t, 0x48);
    /* m_nSurfaceProp at 4c */
    NET_CLASS_VAR_S(get_surface_prop, int32_t, 0x4c);
    /* m_nMaterial at 50 */
    NET_CLASS_VAR_S(get_material, int32_t, 0x50);
    /* m_nDamageType at 54 */
    NET_CLASS_VAR_S(get_damage_type, int32_t, 0x54);
    /* m_nHitBox at 58 */
    NET_CLASS_VAR_S(get_hit_box, int32_t, 0x58);
    /* m_nOtherEntIndex at 5c */
    NET_CLASS_VAR_S(get_other_ent_index, int32_t, 0x5c);
    /* m_nColor at 60 */
    NET_CLASS_VAR_S(get_color, int32_t, 0x60);
    /* m_bPositionsAreRelativeToEntity at 61 */
    NET_CLASS_VAR_S(is_positions_are_relative_to_entity, bool, 0x61);
    /* m_iEffectName at 64 */
    NET_CLASS_VAR_S(get_effect_name, int, 0x64);
END_NET_CLASS(DT_EffectData);
DEFINE_NET_CLASS(DT_EnvWindShared, 0x0, 0x00, netvar::class_base);
    /* m_flStartTime at 4 */
    NET_CLASS_VAR_S(get_start_time, float, 0x4);
    /* m_iWindSeed at 8 */
    NET_CLASS_VAR_S(get_wind_seed, int, 0x8);
    /* m_iMinWind at c */
    NET_CLASS_VAR_S(get_min_wind, int, 0xc);
    /* m_iMaxWind at 10 */
    NET_CLASS_VAR_S(get_max_wind, int, 0x10);
    /* m_iMinGust at 18 */
    NET_CLASS_VAR_S(get_min_gust, int, 0x18);
    /* m_iMaxGust at 1c */
    NET_CLASS_VAR_S(get_max_gust, int, 0x1c);
    /* m_flMinGustDelay at 20 */
    NET_CLASS_VAR_S(get_min_gust_delay, float, 0x20);
    /* m_flMaxGustDelay at 24 */
    NET_CLASS_VAR_S(get_max_gust_delay, float, 0x24);
    /* m_flGustDuration at 28 */
    NET_CLASS_VAR_S(get_gust_duration, float, 0x28);
    /* m_iGustDirChange at 2c */
    NET_CLASS_VAR_S(get_gust_dir_change, int, 0x2c);
    /* m_iInitialWindDir at 6c */
    NET_CLASS_VAR_S(get_initial_wind_dir, int, 0x6c);
    /* m_flInitialWindSpeed at 70 */
    NET_CLASS_VAR_S(get_initial_wind_speed, float, 0x70);
END_NET_CLASS(DT_EnvWindShared);
DEFINE_NET_CLASS(DT_TeamplayRoundBasedRules, 0x0, 0x00, netvar::class_base);
    /* m_iRoundState at 28 */
    NET_CLASS_VAR_S(get_round_state, int, 0x28);
    /* m_bInOvertime at 2c */
    NET_CLASS_VAR_S(is_in_overtime, bool, 0x2c);
    /* m_bInSetup at 2d */
    NET_CLASS_VAR_S(is_in_setup, bool, 0x2d);
    /* m_bSwitchedTeamsThisRound at 2e */
    NET_CLASS_VAR_S(is_switched_teams_this_round, bool, 0x2e);
    /* m_iWinningTeam at 30 */
    NET_CLASS_VAR_S(get_winning_team, int, 0x30);
    /* m_bInWaitingForPlayers at 38 */
    NET_CLASS_VAR_S(is_in_waiting_for_players, bool, 0x38);
    /* m_bAwaitingReadyRestart at 39 */
    NET_CLASS_VAR_S(is_awaiting_ready_restart, bool, 0x39);
    /* m_flRestartRoundTime at 3c */
    NET_CLASS_VAR_S(get_restart_round_time, float, 0x3c);
    /* m_flMapResetTime at 40 */
    NET_CLASS_VAR_S(get_map_reset_time, float, 0x40);
    /* m_flNextRespawnWave at 44 */
    NET_CLASS_VAR_A(get_next_respawn_wave, float, 0x44, /* element count */ 0x20, /* element size */ 0x4);
    /* m_bTeamReady at c4 */
    NET_CLASS_VAR_A(is_team_ready, bool, 0xc4, /* element count */ 0x20, /* element size */ 0x1);
    /* m_bStopWatch at e4 */
    NET_CLASS_VAR_S(is_stop_watch, bool, 0xe4);
    /* m_TeamRespawnWaveTimes at e8 */
    NET_CLASS_VAR_A(get_team_respawn_wave_times, int, 0xe8, /* element count */ 0x20, /* element size */ 0x4);
END_NET_CLASS(DT_TeamplayRoundBasedRules);
DEFINE_NET_CLASS(DT_CSLocalPlayerExclusive, 0x0, 0x00, netvar::class_base);
    /* m_vecOrigin at 138 */
    /* TODO: get_origin as PROP_TYPE_VECTOR_XY */
    /* m_vecOrigin[2] at 140 */
    /* TODO: fix name for m_vecOrigin[2] of type 1 */
    /* m_flStamina at 103d8 */
    NET_CLASS_VAR_S(get_stamina, float, 0x103d8);
    /* m_iDirection at 103dc */
    NET_CLASS_VAR_S(get_direction, int, 0x103dc);
    /* m_iShotsFired at 103e0 */
    NET_CLASS_VAR_S(get_shots_fired, int, 0x103e0);
    /* m_nNumFastDucks at 103e4 */
    NET_CLASS_VAR_S(get_num_fast_ducks, int32_t, 0x103e4);
    /* m_bDuckOverride at 103e8 */
    NET_CLASS_VAR_S(is_duck_override, bool, 0x103e8);
    /* m_flVelocityModifier at 103ec */
    NET_CLASS_VAR_S(get_velocity_modifier, float, 0x103ec);
    /* m_iWeaponPurchasesThisRound at 11298 */
    NET_CLASS_VAR_A(get_weapon_purchases_this_round, int, 0x11298, /* element count */ 0x100, /* element size */ 0x4);
    /* m_unActiveQuestId at 11778 */
    NET_CLASS_VAR_S(get_active_quest_id, uint32_t, 0x11778);
    /* m_nQuestProgressReason at 1177c */
    NET_CLASS_VAR_S(get_quest_progress_reason, int32_t, 0x1177c);
    /* m_unPlayerTvControlFlags at 11780 */
    NET_CLASS_VAR_S(get_player_tv_control_flags, uint32_t, 0x11780);
    /* m_bPlayerDominated at 118e8 */
    NET_CLASS_VAR_A(is_player_dominated, bool, 0x118e8, /* element count */ 0x41, /* element size */ 0x1);
    /* m_bPlayerDominatingMe at 11929 */
    NET_CLASS_VAR_A(is_player_dominating_me, bool, 0x11929, /* element count */ 0x41, /* element size */ 0x1);
    /* m_iRetakesOffering at 11cf4 */
    NET_CLASS_VAR_S(get_retakes_offering, int, 0x11cf4);
    /* m_iRetakesOfferingCard at 11cf8 */
    NET_CLASS_VAR_S(get_retakes_offering_card, int, 0x11cf8);
    /* m_bRetakesHasDefuseKit at 11cfc */
    NET_CLASS_VAR_S(is_retakes_has_defuse_kit, bool, 0x11cfc);
    /* m_bRetakesMVPLastRound at 11cfd */
    NET_CLASS_VAR_S(is_retakes_mvp_last_round, bool, 0x11cfd);
    /* m_iRetakesMVPBoostItem at 11d00 */
    NET_CLASS_VAR_S(get_retakes_mvp_boost_item, int, 0x11d00);
    /* m_RetakesMVPBoostExtraUtility at 11d04 */
    NET_CLASS_VAR_S(get_retakes_mvp_boost_extra_utility, int, 0x11d04);
END_NET_CLASS(DT_CSLocalPlayerExclusive);
DEFINE_NET_CLASS(DT_CSNonLocalPlayerExclusive, 0x0, 0x00, netvar::class_base);
    /* m_vecOrigin at 138 */
    /* TODO: get_origin as PROP_TYPE_VECTOR_XY */
    /* m_vecOrigin[2] at 140 */
    /* TODO: fix name for m_vecOrigin[2] of type 1 */
END_NET_CLASS(DT_CSNonLocalPlayerExclusive);
DEFINE_NET_CLASS(DT_EntityParticleTrailInfo, 0x0, 0x00, netvar::class_base);
    /* m_flLifetime at 8 */
    NET_CLASS_VAR_S(get_lifetime, float, 0x8);
    /* m_flStartSize at c */
    NET_CLASS_VAR_S(get_start_size, float, 0xc);
    /* m_flEndSize at 10 */
    NET_CLASS_VAR_S(get_end_size, float, 0x10);
END_NET_CLASS(DT_EntityParticleTrailInfo);
DEFINE_NET_CLASS(DT_ProxyToggle_ProxiedData, 0x0, 0x00, netvar::class_base);
    /* m_WithProxy at 9d8 */
    NET_CLASS_VAR_S(get_with_proxy, int, 0x9d8);
END_NET_CLASS(DT_ProxyToggle_ProxiedData);
DEFINE_NET_CLASS(DT_BCCNonLocalPlayerExclusive, 0x0, 0x00, netvar::class_base);
    /* m_hMyWeapons at 2e08 */
    NET_CLASS_VAR_A(get_my_weapons, EntityHandle, 0x2e08, /* element count */ 0x40, /* element size */ 0x4);
END_NET_CLASS(DT_BCCNonLocalPlayerExclusive);
DEFINE_NET_CLASS(DT_CollisionProperty, 0x0, 0x00, netvar::class_base);
    /* m_vecMins at 8 */
    NET_CLASS_VAR_S(get_mins, Vector3f, 0x8);
    /* m_vecMaxs at 14 */
    NET_CLASS_VAR_S(get_maxs, Vector3f, 0x14);
    /* m_usSolidFlags at 20 */
    NET_CLASS_VAR_S(get_us_solid_flags, int, 0x20);
    /* m_nSolidType at 22 */
    NET_CLASS_VAR_S(get_solid_type, int32_t, 0x22);
    /* m_triggerBloat at 23 */
    NET_CLASS_VAR_S(get_trigger_bloat, int, 0x23);
    /* m_nSurroundType at 2a */
    NET_CLASS_VAR_S(get_surround_type, int32_t, 0x2a);
    /* m_vecSpecifiedSurroundingMins at 2c */
    NET_CLASS_VAR_S(get_specified_surrounding_mins, Vector3f, 0x2c);
    /* m_vecSpecifiedSurroundingMaxs at 38 */
    NET_CLASS_VAR_S(get_specified_surrounding_maxs, Vector3f, 0x38);
END_NET_CLASS(DT_CollisionProperty);
DEFINE_NET_CLASS(DT_PlayerState, 0x0, 0x00, netvar::class_base);
    /* deadflag at 4 */
    NET_CLASS_VAR_S(get_deadflag, int, 0x4);
END_NET_CLASS(DT_PlayerState);
DEFINE_NET_CLASS(DT_AnimTimeMustBeFirst, 0x0, 0x00, netvar::class_base);
    /* m_flAnimTime at 260 */
    NET_CLASS_VAR_S(get_anim_time, float, 0x260);
END_NET_CLASS(DT_AnimTimeMustBeFirst);
DEFINE_NET_CLASS(DT_BCCLocalPlayerExclusive, 0x0, 0x00, netvar::class_base);
    /* m_flNextAttack at 2d80 */
    NET_CLASS_VAR_S(get_next_attack, float, 0x2d80);
END_NET_CLASS(DT_BCCLocalPlayerExclusive);
DEFINE_NET_CLASS(DT_ServerAnimationData, 0x0, 0x00, netvar::class_base);
    /* m_flCycle at a14 */
    NET_CLASS_VAR_S(get_cycle, float, 0xa14);
END_NET_CLASS(DT_ServerAnimationData);
DEFINE_NET_CLASS(DT_LocalWeaponData, 0x0, 0x00, netvar::class_base);
    /* m_nViewModelIndex at 3244 */
    NET_CLASS_VAR_S(get_view_model_index, int32_t, 0x3244);
    /* m_iWeaponModule at 325c */
    NET_CLASS_VAR_S(get_weapon_module, int, 0x325c);
    /* m_iPrimaryAmmoType at 326c */
    NET_CLASS_VAR_S(get_primary_ammo_type, int, 0x326c);
    /* m_iSecondaryAmmoType at 3270 */
    NET_CLASS_VAR_S(get_secondary_ammo_type, int, 0x3270);
    /* m_bFlipViewModel at 32d4 */
    NET_CLASS_VAR_S(is_flip_view_model, bool, 0x32d4);
    /* m_iWeaponOrigin at 32d8 */
    NET_CLASS_VAR_S(get_weapon_origin, int, 0x32d8);
END_NET_CLASS(DT_LocalWeaponData);
DEFINE_NET_CLASS(DT_LocalActiveWeaponData, 0x0, 0x00, netvar::class_base);
    /* m_nNextThinkTick at fc */
    NET_CLASS_VAR_S(get_next_think_tick, int32_t, 0xfc);
    /* m_flNextPrimaryAttack at 3248 */
    NET_CLASS_VAR_S(get_next_primary_attack, float, 0x3248);
    /* m_flNextSecondaryAttack at 324c */
    NET_CLASS_VAR_S(get_next_secondary_attack, float, 0x324c);
    /* m_flTimeWeaponIdle at 3284 */
    NET_CLASS_VAR_S(get_time_weapon_idle, float, 0x3284);
END_NET_CLASS(DT_LocalActiveWeaponData);
DEFINE_NET_CLASS(DT_SurvivalGameRules, 0x0, 0x00, netvar::class_base);
    /* m_vecPlayAreaMins at 0 */
    NET_CLASS_VAR_S(get_play_area_mins, Vector3f, 0x0);
    /* m_vecPlayAreaMaxs at c */
    NET_CLASS_VAR_S(get_play_area_maxs, Vector3f, 0xc);
    /* m_iPlayerSpawnHexIndices at 18 */
    NET_CLASS_VAR_A(get_player_spawn_hex_indices, int, 0x18, /* element count */ 0x40, /* element size */ 0x4);
    /* m_SpawnTileState at 118 */
    NET_CLASS_VAR_A(get_spawn_tile_state, int, 0x118, /* element count */ 0xe0, /* element size */ 0x1);
    /* m_flSpawnSelectionTimeStart at 1f8 */
    NET_CLASS_VAR_S(get_spawn_selection_time_start, float, 0x1f8);
    /* m_flSpawnSelectionTimeEnd at 1fc */
    NET_CLASS_VAR_S(get_spawn_selection_time_end, float, 0x1fc);
    /* m_flSpawnSelectionTimeLoadout at 200 */
    NET_CLASS_VAR_S(get_spawn_selection_time_loadout, float, 0x200);
    /* m_spawnStage at 204 */
    NET_CLASS_VAR_S(get_spawn_stage, int, 0x204);
    /* m_flTabletHexOriginX at 208 */
    NET_CLASS_VAR_S(get_tablet_hex_origin_x, float, 0x208);
    /* m_flTabletHexOriginY at 20c */
    NET_CLASS_VAR_S(get_tablet_hex_origin_y, float, 0x20c);
    /* m_flTabletHexSize at 210 */
    NET_CLASS_VAR_S(get_tablet_hex_size, float, 0x210);
    /* m_roundData_playerXuids at 218 */
    NET_CLASS_VAR_A(get_round_data_player_xuids, int, 0x218, /* element count */ 0x41, /* element size */ 0x8);
    /* m_roundData_playerPositions at 420 */
    NET_CLASS_VAR_A(get_round_data_player_positions, int, 0x420, /* element count */ 0x41, /* element size */ 0x4);
    /* m_roundData_playerTeams at 524 */
    NET_CLASS_VAR_A(get_round_data_player_teams, int, 0x524, /* element count */ 0x41, /* element size */ 0x4);
    /* m_SurvivalGameRuleDecisionTypes at 628 */
    NET_CLASS_VAR_A(get_survival_game_rule_decision_types, int, 0x628, /* element count */ 0x10, /* element size */ 0x4);
    /* m_SurvivalGameRuleDecisionValues at 668 */
    NET_CLASS_VAR_A(get_survival_game_rule_decision_values, int, 0x668, /* element count */ 0x10, /* element size */ 0x4);
    /* m_flSurvivalStartTime at 6a8 */
    NET_CLASS_VAR_S(get_survival_start_time, float, 0x6a8);
END_NET_CLASS(DT_SurvivalGameRules);
DEFINE_NET_CLASS(DT_RetakeGameRules, 0x0, 0x00, netvar::class_base);
    /* m_nMatchSeed at f8 */
    NET_CLASS_VAR_S(get_match_seed, int32_t, 0xf8);
    /* m_bBlockersPresent at fc */
    NET_CLASS_VAR_S(is_blockers_present, bool, 0xfc);
    /* m_bRoundInProgress at fd */
    NET_CLASS_VAR_S(is_round_in_progress, bool, 0xfd);
    /* m_iFirstSecondHalfRound at 100 */
    NET_CLASS_VAR_S(get_first_second_half_round, int, 0x100);
    /* m_iBombSite at 104 */
    NET_CLASS_VAR_S(get_bomb_site, int, 0x104);
END_NET_CLASS(DT_RetakeGameRules);
DEFINE_NET_CLASS(_LPT_m_hActorList_16, 0x0, 0x00, netvar::class_base);
    /* lengthprop16 at 0 */
    NET_CLASS_VAR_S(get_lengthprop16, int, 0x0);
END_NET_CLASS(_LPT_m_hActorList_16);
DEFINE_NET_CLASS(DT_Local, 0x0, 0x00, netvar::class_base);
    /* m_chAreaBits at 4 */
    NET_CLASS_VAR_A(get_ch_area_bits, int, 0x4, /* element count */ 0x20, /* element size */ 0x1);
    /* m_chAreaPortalBits at 24 */
    NET_CLASS_VAR_A(get_ch_area_portal_bits, int, 0x24, /* element count */ 0x18, /* element size */ 0x1);
    /* m_nOldButtons at 40 */
    NET_CLASS_VAR_S(get_old_buttons, int32_t, 0x40);
    /* m_flFOVRate at 44 */
    NET_CLASS_VAR_S(get_fov_rate, float, 0x44);
    /* m_iHideHUD at 48 */
    NET_CLASS_VAR_S(get_hide_hu_d, int, 0x48);
    /* m_nDuckTimeMsecs at 4c */
    NET_CLASS_VAR_S(get_duck_time_msecs, int32_t, 0x4c);
    /* m_nDuckJumpTimeMsecs at 50 */
    NET_CLASS_VAR_S(get_duck_jump_time_msecs, int32_t, 0x50);
    /* m_nJumpTimeMsecs at 54 */
    NET_CLASS_VAR_S(get_jump_time_msecs, int32_t, 0x54);
    /* m_flFallVelocity at 58 */
    NET_CLASS_VAR_S(get_fall_velocity, float, 0x58);
    /* m_flStepSize at 60 */
    NET_CLASS_VAR_S(get_step_size, float, 0x60);
    /* m_viewPunchAngle at 64 */
    NET_CLASS_VAR_S(get_view_punch_angle, Vector3f, 0x64);
    /* m_aimPunchAngle at 70 */
    NET_CLASS_VAR_S(get_aim_punch_angle, Vector3f, 0x70);
    /* m_aimPunchAngleVel at 7c */
    NET_CLASS_VAR_S(get_aim_punch_angle_vel, Vector3f, 0x7c);
    /* m_bDucked at 88 */
    NET_CLASS_VAR_S(is_ducked, bool, 0x88);
    /* m_bDucking at 89 */
    NET_CLASS_VAR_S(is_ducking, bool, 0x89);
    /* m_flLastDuckTime at 8c */
    NET_CLASS_VAR_S(get_last_duck_time, float, 0x8c);
    /* m_bInDuckJump at 90 */
    NET_CLASS_VAR_S(is_in_duck_jump, bool, 0x90);
    /* m_bDrawViewmodel at 91 */
    NET_CLASS_VAR_S(is_draw_viewmodel, bool, 0x91);
    /* m_bWearingSuit at 92 */
    NET_CLASS_VAR_S(is_wearing_suit, bool, 0x92);
    /* m_bPoisoned at 93 */
    NET_CLASS_VAR_S(is_poisoned, bool, 0x93);
    /* m_bAllowAutoMovement at 94 */
    NET_CLASS_VAR_S(is_allow_auto_movement, bool, 0x94);
    /* m_skybox3d.scale at 134 */
    /* TODO: fix name for m_skybox3d.scale of type 0 */
    /* m_skybox3d.origin at 138 */
    /* TODO: fix name for m_skybox3d.origin of type 2 */
    /* m_skybox3d.area at 144 */
    /* TODO: fix name for m_skybox3d.area of type 0 */
    /* m_skybox3d.fog.dirPrimary at 14c */
    /* TODO: fix name for m_skybox3d.fog.dirPrimary of type 2 */
    /* m_skybox3d.fog.colorPrimary at 158 */
    /* TODO: fix name for m_skybox3d.fog.colorPrimary of type 0 */
    /* m_skybox3d.fog.colorSecondary at 15c */
    /* TODO: fix name for m_skybox3d.fog.colorSecondary of type 0 */
    /* m_skybox3d.fog.start at 168 */
    /* TODO: fix name for m_skybox3d.fog.start of type 1 */
    /* m_skybox3d.fog.end at 16c */
    /* TODO: fix name for m_skybox3d.fog.end of type 1 */
    /* m_skybox3d.fog.maxdensity at 174 */
    /* TODO: fix name for m_skybox3d.fog.maxdensity of type 1 */
    /* m_skybox3d.fog.enable at 18c */
    /* TODO: fix name for m_skybox3d.fog.enable of type 0 */
    /* m_skybox3d.fog.blend at 18d */
    /* TODO: fix name for m_skybox3d.fog.blend of type 0 */
    /* m_skybox3d.fog.HDRColorScale at 194 */
    /* TODO: fix name for m_skybox3d.fog.HDRColorScale of type 1 */
    /* m_audio.localSound[0] at 19c */
    /* TODO: fix name for m_audio.localSound[0] of type 2 */
    /* m_audio.localSound[1] at 1a8 */
    /* TODO: fix name for m_audio.localSound[1] of type 2 */
    /* m_audio.localSound[2] at 1b4 */
    /* TODO: fix name for m_audio.localSound[2] of type 2 */
    /* m_audio.localSound[3] at 1c0 */
    /* TODO: fix name for m_audio.localSound[3] of type 2 */
    /* m_audio.localSound[4] at 1cc */
    /* TODO: fix name for m_audio.localSound[4] of type 2 */
    /* m_audio.localSound[5] at 1d8 */
    /* TODO: fix name for m_audio.localSound[5] of type 2 */
    /* m_audio.localSound[6] at 1e4 */
    /* TODO: fix name for m_audio.localSound[6] of type 2 */
    /* m_audio.localSound[7] at 1f0 */
    /* TODO: fix name for m_audio.localSound[7] of type 2 */
    /* m_audio.soundscapeIndex at 1fc */
    /* TODO: fix name for m_audio.soundscapeIndex of type 0 */
    /* m_audio.localBits at 200 */
    /* TODO: fix name for m_audio.localBits of type 0 */
    /* m_audio.entIndex at 204 */
    /* TODO: fix name for m_audio.entIndex of type 0 */
END_NET_CLASS(DT_Local);
DEFINE_NET_CLASS(_LPT_m_AnimOverlay_15, 0x0, 0x00, netvar::class_base);
    /* lengthprop15 at 0 */
    NET_CLASS_VAR_S(get_lengthprop15, int, 0x0);
END_NET_CLASS(_LPT_m_AnimOverlay_15);
DEFINE_NET_CLASS(DT_Animationlayer, 0x0, 0x00, netvar::class_base);
    /* m_nOrder at 14 */
    NET_CLASS_VAR_S(get_order, int32_t, 0x14);
    /* m_nSequence at 18 */
    NET_CLASS_VAR_S(get_sequence, int32_t, 0x18);
    /* m_flPrevCycle at 1c */
    NET_CLASS_VAR_S(get_prev_cycle, float, 0x1c);
    /* m_flWeight at 20 */
    NET_CLASS_VAR_S(get_weight, float, 0x20);
    /* m_flWeightDeltaRate at 24 */
    NET_CLASS_VAR_S(get_weight_delta_rate, float, 0x24);
    /* m_flPlaybackRate at 28 */
    NET_CLASS_VAR_S(get_playback_rate, float, 0x28);
    /* m_flCycle at 2c */
    NET_CLASS_VAR_S(get_cycle, float, 0x2c);
END_NET_CLASS(DT_Animationlayer);
DEFINE_NET_CLASS(_LPT_m_Attributes_32, 0x0, 0x00, netvar::class_base);
    /* lengthprop32 at 0 */
    NET_CLASS_VAR_S(get_lengthprop32, int, 0x0);
END_NET_CLASS(_LPT_m_Attributes_32);
DEFINE_NET_CLASS(DT_ScriptCreatedAttribute, 0x0, 0x00, netvar::class_base);
    /* m_iAttributeDefinitionIndex at 4 */
    NET_CLASS_VAR_S(get_attribute_definition_index, int, 0x4);
    /* m_iRawValue32 at 8 */
    NET_CLASS_VAR_S(get_raw_value32, int, 0x8);
    /* m_flValue at 8 */
    NET_CLASS_VAR_S(get_value, float, 0x8);
    /* m_iRawInitialValue32 at c */
    NET_CLASS_VAR_S(get_raw_initial_value32, int, 0xc);
    /* m_nRefundableCurrency at 10 */
    NET_CLASS_VAR_S(get_refundable_currency, int32_t, 0x10);
    /* m_bSetBonus at 14 */
    NET_CLASS_VAR_S(is_set_bonus, bool, 0x14);
END_NET_CLASS(DT_ScriptCreatedAttribute);
DEFINE_NET_CLASS(CBaseEntity, 0xb, 0x00, netvar::class_base);
    /* AnimTimeMustBeFirst at 0 */
    /* data table reference for DT_AnimTimeMustBeFirst */
    /* movecollide at 0 */
    NET_CLASS_VAR_S(get_movecollide, int, 0x0);
    /* movetype at 0 */
    NET_CLASS_VAR_S(get_movetype, int, 0x0);
    /* m_Collision at 0 */
    /* data table reference for DT_CollisionProperty */
    /* m_flLastMadeNoiseTime at 20 */
    NET_CLASS_VAR_S(get_last_made_noise_time, float, 0x20);
    /* m_bIsAutoaimTarget at 60 */
    NET_CLASS_VAR_S(is_autoaim_target, bool, 0x60);
    /* m_clrRender at 70 */
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    /* m_cellbits at 74 */
    NET_CLASS_VAR_S(get_cellbits, int, 0x74);
    /* m_cellX at 7c */
    NET_CLASS_VAR_S(get_cell_x, int, 0x7c);
    /* m_cellY at 80 */
    NET_CLASS_VAR_S(get_cell_y, int, 0x80);
    /* m_cellZ at 84 */
    NET_CLASS_VAR_S(get_cell_z, int, 0x84);
    /* m_flMaxFallVelocity at dc */
    NET_CLASS_VAR_S(get_max_fall_velocity, float, 0xdc);
    /* m_fEffects at f0 */
    NET_CLASS_VAR_S(get_effects, float, 0xf0);
    /* m_iTeamNum at f4 */
    NET_CLASS_VAR_S(get_team_num, int, 0xf4);
    /* m_iPendingTeamNum at f8 */
    NET_CLASS_VAR_S(get_pending_team_num, int, 0xf8);
    /* m_angRotation at 12c */
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x12c);
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* moveparent at 148 */
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    /* m_hOwnerEntity at 14c */
    NET_CLASS_VAR_S(get_owner_entity, EntityHandle, 0x14c);
    /* m_iName at 154 */
    NET_CLASS_VAR_C(get_i_name, 0x154, /* max length */ 0x104);
    /* m_nModelIndex at 258 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* m_nRenderFX at 25a */
    NET_CLASS_VAR_S(get_render_f_x, int32_t, 0x25a);
    /* m_nRenderMode at 25b */
    NET_CLASS_VAR_S(get_render_mode, int32_t, 0x25b);
    /* m_flSimulationTime at 268 */
    NET_CLASS_VAR_S(get_simulation_time, float, 0x268);
    /* m_flUseLookAtAngle at 2cc */
    NET_CLASS_VAR_S(get_use_look_at_angle, float, 0x2cc);
    /* m_iParentAttachment at 2ec */
    NET_CLASS_VAR_S(get_parent_attachment, int, 0x2ec);
    /* m_fadeMinDist at 2f4 */
    NET_CLASS_VAR_S(get_fade_min_dist, float, 0x2f4);
    /* m_fadeMaxDist at 2f8 */
    NET_CLASS_VAR_S(get_fade_max_dist, float, 0x2f8);
    /* m_flFadeScale at 2fc */
    NET_CLASS_VAR_S(get_fade_scale, float, 0x2fc);
    /* m_flElasticity at 300 */
    NET_CLASS_VAR_S(get_elasticity, float, 0x300);
    /* m_flShadowCastDistance at 3a0 */
    NET_CLASS_VAR_S(get_shadow_cast_distance, float, 0x3a0);
    /* m_CollisionGroup at 474 */
    NET_CLASS_VAR_S(get_collision_group, int, 0x474);
    /* m_bSimulatedEveryTick at 93a */
    NET_CLASS_VAR_S(is_simulated_every_tick, bool, 0x93a);
    /* m_bAnimatedEveryTick at 93b */
    NET_CLASS_VAR_S(is_animated_every_tick, bool, 0x93b);
    /* m_bAlternateSorting at 93c */
    NET_CLASS_VAR_S(is_alternate_sorting, bool, 0x93c);
    /* m_bSpotted at 93d */
    NET_CLASS_VAR_S(is_spotted, bool, 0x93d);
    /* m_bSpottedBy at 93e */
    NET_CLASS_VAR_A(is_spotted_by, bool, 0x93e, /* element count */ 0x41, /* element size */ 0x1);
    /* m_bSpottedByMask at 980 */
    NET_CLASS_VAR_A(is_spotted_by_mask, bool, 0x980, /* element count */ 0x2, /* element size */ 0x4);
    /* m_nMinCPULevel at 988 */
    NET_CLASS_VAR_S(get_min_cpu_level, int32_t, 0x988);
    /* m_nMaxCPULevel at 989 */
    NET_CLASS_VAR_S(get_max_cpu_level, int32_t, 0x989);
    /* m_nMinGPULevel at 98a */
    NET_CLASS_VAR_S(get_min_gpu_level, int32_t, 0x98a);
    /* m_nMaxGPULevel at 98b */
    NET_CLASS_VAR_S(get_max_gpu_level, int32_t, 0x98b);
    /* m_iTextureFrameIndex at 98c */
    NET_CLASS_VAR_S(get_texture_frame_index, int, 0x98c);
    /* m_hEffectEntity at 998 */
    NET_CLASS_VAR_S(get_effect_entity, EntityHandle, 0x998);
    /* m_bEligibleForScreenHighlight at 9b9 */
    NET_CLASS_VAR_S(is_eligible_for_screen_highlight, bool, 0x9b9);
END_NET_CLASS(CBaseEntity);
DEFINE_NET_CLASS(CBaseParticleEntity, 0xe, 0x00, CBaseEntity);
END_NET_CLASS(CBaseParticleEntity);
DEFINE_NET_CLASS(CBaseTeamObjectiveResource, 0x11, 0x00, netvar::class_base);
    /* m_iTimerToShowInHUD at 9d8 */
    NET_CLASS_VAR_S(get_timer_to_show_in_hu_d, int, 0x9d8);
    /* m_iStopWatchTimer at 9dc */
    NET_CLASS_VAR_S(get_stop_watch_timer, int, 0x9dc);
    /* m_iNumControlPoints at 9e0 */
    NET_CLASS_VAR_S(get_num_control_points, int, 0x9e0);
    /* m_bPlayingMiniRounds at 9e8 */
    NET_CLASS_VAR_S(is_playing_mini_rounds, bool, 0x9e8);
    /* m_bControlPointsReset at 9e9 */
    NET_CLASS_VAR_S(is_control_points_reset, bool, 0x9e9);
    /* m_iUpdateCapHudParity at 9ec */
    NET_CLASS_VAR_S(get_update_cap_hud_parity, int, 0x9ec);
    /* m_vCPPositions[0] at 9f4 */
    /* TODO: fix name for m_vCPPositions[0] of type 2 */
    /* m_bCPIsVisible at a54 */
    NET_CLASS_VAR_A(is_cp_is_visible, bool, 0xa54, /* element count */ 0x8, /* element size */ 0x1);
    /* m_flLazyCapPerc at a5c */
    NET_CLASS_VAR_A(get_lazy_cap_perc, float, 0xa5c, /* element count */ 0x8, /* element size */ 0x4);
    /* m_iTeamIcons at a9c */
    NET_CLASS_VAR_A(get_team_icons, int, 0xa9c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_iTeamOverlays at b9c */
    NET_CLASS_VAR_A(get_team_overlays, int, 0xb9c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_iTeamReqCappers at c9c */
    NET_CLASS_VAR_A(get_team_req_cappers, int, 0xc9c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_flTeamCapTime at d9c */
    NET_CLASS_VAR_A(get_team_cap_time, float, 0xd9c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_iPreviousPoints at e9c */
    NET_CLASS_VAR_A(get_previous_points, int, 0xe9c, /* element count */ 0xc0, /* element size */ 0x4);
    /* m_bTeamCanCap at 119c */
    NET_CLASS_VAR_A(is_team_can_cap, bool, 0x119c, /* element count */ 0x40, /* element size */ 0x1);
    /* m_iTeamBaseIcons at 11dc */
    NET_CLASS_VAR_A(get_team_base_icons, int, 0x11dc, /* element count */ 0x20, /* element size */ 0x4);
    /* m_iBaseControlPoints at 125c */
    NET_CLASS_VAR_A(get_base_control_points, int, 0x125c, /* element count */ 0x20, /* element size */ 0x4);
    /* m_bInMiniRound at 12dc */
    NET_CLASS_VAR_A(is_in_mini_round, bool, 0x12dc, /* element count */ 0x8, /* element size */ 0x1);
    /* m_iWarnOnCap at 12e4 */
    NET_CLASS_VAR_A(get_warn_on_cap, int, 0x12e4, /* element count */ 0x8, /* element size */ 0x4);
    /* m_iszWarnSound[0] at 1304 */
    /* TODO: fix name for string m_iszWarnSound[0] */
    /* m_flPathDistance at 1afc */
    NET_CLASS_VAR_A(get_path_distance, float, 0x1afc, /* element count */ 0x8, /* element size */ 0x4);
    /* m_iNumTeamMembers at 1b1c */
    NET_CLASS_VAR_A(get_num_team_members, int, 0x1b1c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_iCappingTeam at 1c1c */
    NET_CLASS_VAR_A(get_capping_team, int, 0x1c1c, /* element count */ 0x8, /* element size */ 0x4);
    /* m_iTeamInZone at 1c3c */
    NET_CLASS_VAR_A(get_team_in_zone, int, 0x1c3c, /* element count */ 0x8, /* element size */ 0x4);
    /* m_bBlocked at 1c5c */
    NET_CLASS_VAR_A(is_blocked, bool, 0x1c5c, /* element count */ 0x8, /* element size */ 0x1);
    /* m_iOwner at 1c64 */
    NET_CLASS_VAR_A(get_owner, int, 0x1c64, /* element count */ 0x8, /* element size */ 0x4);
    /* m_pszCapLayoutInHUD at 1cec */
    NET_CLASS_VAR_C(get_psz_cap_layout_in_hu_d, 0x1cec, /* max length */ 0x20);
END_NET_CLASS(CBaseTeamObjectiveResource);
DEFINE_NET_CLASS(CBaseTempEntity, 0x12, 0x00, netvar::class_base);
END_NET_CLASS(CBaseTempEntity);
DEFINE_NET_CLASS(CBaseToggle, 0x13, 0x00, CBaseEntity);
    /* m_vecFinalDest at 9ec */
    NET_CLASS_VAR_S(get_final_dest, Vector3f, 0x9ec);
    /* m_movementType at 9f8 */
    NET_CLASS_VAR_S(get_movement_type, int, 0x9f8);
    /* m_flMoveTargetTime at 9fc */
    NET_CLASS_VAR_S(get_move_target_time, float, 0x9fc);
END_NET_CLASS(CBaseToggle);
DEFINE_NET_CLASS(CBaseTrigger, 0x14, 0x00, CBaseToggle);
    /* m_spawnflags at 2c8 */
    NET_CLASS_VAR_S(get_spawnflags, int, 0x2c8);
    /* m_bClientSidePredicted at a08 */
    NET_CLASS_VAR_S(is_client_side_predicted, bool, 0xa08);
END_NET_CLASS(CBaseTrigger);
DEFINE_NET_CLASS(CBaseViewModel, 0x15, 0x00, netvar::class_base);
    /* m_fEffects at f0 */
    NET_CLASS_VAR_S(get_effects, float, 0xf0);
    /* m_nModelIndex at 258 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* m_flPlaybackRate at a18 */
    NET_CLASS_VAR_S(get_playback_rate, float, 0xa18);
    /* m_nSkin at a1c */
    NET_CLASS_VAR_S(get_skin, int32_t, 0xa1c);
    /* m_nBody at a20 */
    NET_CLASS_VAR_S(get_body, int32_t, 0xa20);
    /* m_nNewSequenceParity at a44 */
    NET_CLASS_VAR_S(get_new_sequence_parity, int32_t, 0xa44);
    /* m_nResetEventsParity at a48 */
    NET_CLASS_VAR_S(get_reset_events_parity, int32_t, 0xa48);
    /* m_nMuzzleFlashParity at a64 */
    NET_CLASS_VAR_S(get_muzzle_flash_parity, int32_t, 0xa64);
    /* m_nSequence at 28c0 */
    NET_CLASS_VAR_S(get_sequence, int32_t, 0x28c0);
    /* m_bShouldIgnoreOffsetAndAccuracy at 29a0 */
    NET_CLASS_VAR_S(is_should_ignore_offset_and_accuracy, bool, 0x29a0);
    /* m_nViewModelIndex at 29d0 */
    NET_CLASS_VAR_S(get_view_model_index, int32_t, 0x29d0);
    /* m_nAnimationParity at 29d4 */
    NET_CLASS_VAR_S(get_animation_parity, int32_t, 0x29d4);
    /* m_hWeapon at 29d8 */
    NET_CLASS_VAR_S(get_weapon, EntityHandle, 0x29d8);
    /* m_hOwner at 29dc */
    NET_CLASS_VAR_S(get_owner, EntityHandle, 0x29dc);
END_NET_CLASS(CBaseViewModel);
DEFINE_NET_CLASS(CBaseVPhysicsTrigger, 0x16, 0x00, CBaseEntity);
END_NET_CLASS(CBaseVPhysicsTrigger);
DEFINE_NET_CLASS(CBaseWeaponWorldModel, 0x17, 0x00, netvar::class_base);
    /* m_fEffects at f0 */
    NET_CLASS_VAR_S(get_effects, float, 0xf0);
    /* moveparent at 148 */
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    /* m_nModelIndex at 258 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* m_nBody at a20 */
    NET_CLASS_VAR_S(get_body, int32_t, 0xa20);
    /* m_hCombatWeaponParent at 2a00 */
    NET_CLASS_VAR_S(get_combat_weapon_parent, EntityHandle, 0x2a00);
END_NET_CLASS(CBaseWeaponWorldModel);
DEFINE_NET_CLASS(CBeam, 0x18, 0x00, netvar::class_base);
    /* m_clrRender at 70 */
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* moveparent at 148 */
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    /* m_nModelIndex at 258 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* m_nRenderFX at 25a */
    NET_CLASS_VAR_S(get_render_f_x, int32_t, 0x25a);
    /* m_nRenderMode at 25b */
    NET_CLASS_VAR_S(get_render_mode, int32_t, 0x25b);
    /* m_flFrameRate at 9d8 */
    NET_CLASS_VAR_S(get_frame_rate, float, 0x9d8);
    /* m_flHDRColorScale at 9dc */
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0x9dc);
    /* m_nNumBeamEnts at 9e8 */
    NET_CLASS_VAR_S(get_num_beam_ents, int32_t, 0x9e8);
    /* m_nHaloIndex at 9f0 */
    NET_CLASS_VAR_S(get_halo_index, int32_t, 0x9f0);
    /* m_nBeamType at 9f4 */
    NET_CLASS_VAR_S(get_beam_type, int32_t, 0x9f4);
    /* m_nBeamFlags at 9f8 */
    NET_CLASS_VAR_S(get_beam_flags, int32_t, 0x9f8);
    /* m_hAttachEntity at 9fc */
    NET_CLASS_VAR_A(get_attach_entity, EntityHandle, 0x9fc, /* element count */ 0xa, /* element size */ 0x4);
    /* m_nAttachIndex at a24 */
    NET_CLASS_VAR_A(get_attach_index, int32_t, 0xa24, /* element count */ 0xa, /* element size */ 0x4);
    /* m_fWidth at a4c */
    NET_CLASS_VAR_S(get_width, float, 0xa4c);
    /* m_fEndWidth at a50 */
    NET_CLASS_VAR_S(get_end_width, float, 0xa50);
    /* m_fFadeLength at a54 */
    NET_CLASS_VAR_S(get_fade_length, float, 0xa54);
    /* m_fHaloScale at a58 */
    NET_CLASS_VAR_S(get_halo_scale, float, 0xa58);
    /* m_fAmplitude at a5c */
    NET_CLASS_VAR_S(get_amplitude, float, 0xa5c);
    /* m_fStartFrame at a60 */
    NET_CLASS_VAR_S(get_start_frame, float, 0xa60);
    /* m_fSpeed at a64 */
    NET_CLASS_VAR_S(get_speed, float, 0xa64);
    /* m_flFrame at a68 */
    NET_CLASS_VAR_S(get_frame, float, 0xa68);
    /* m_nClipStyle at a6c */
    NET_CLASS_VAR_S(get_clip_style, int32_t, 0xa6c);
    /* m_vecEndPos at a70 */
    NET_CLASS_VAR_S(get_end_pos, Vector3f, 0xa70);
END_NET_CLASS(CBeam);
DEFINE_NET_CLASS(CBeamSpotlight, 0x19, 0x00, CBaseEntity);
    /* m_nHaloIndex at 9d8 */
    NET_CLASS_VAR_S(get_halo_index, int32_t, 0x9d8);
    /* m_nRotationAxis at 9dc */
    NET_CLASS_VAR_S(get_rotation_axis, int32_t, 0x9dc);
    /* m_flRotationSpeed at 9e0 */
    NET_CLASS_VAR_S(get_rotation_speed, float, 0x9e0);
    /* m_bSpotlightOn at 9e4 */
    NET_CLASS_VAR_S(is_spotlight_on, bool, 0x9e4);
    /* m_bHasDynamicLight at 9e5 */
    NET_CLASS_VAR_S(has_dynamic_light, bool, 0x9e5);
    /* m_flSpotlightMaxLength at 9e8 */
    NET_CLASS_VAR_S(get_spotlight_max_length, float, 0x9e8);
    /* m_flSpotlightGoalWidth at 9ec */
    NET_CLASS_VAR_S(get_spotlight_goal_width, float, 0x9ec);
    /* m_flHDRColorScale at 9f0 */
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0x9f0);
END_NET_CLASS(CBeamSpotlight);
DEFINE_NET_CLASS(CBoneFollower, 0x1a, 0x00, CBaseEntity);
    /* m_modelIndex at 9d8 */
    NET_CLASS_VAR_S(get_model_index, int, 0x9d8);
    /* m_solidIndex at 9dc */
    NET_CLASS_VAR_S(get_solid_index, int, 0x9dc);
END_NET_CLASS(CBoneFollower);
DEFINE_NET_CLASS(CBreakableSurface, 0x1f, 0x00, CBaseEntity);
    /* m_nNumWide at 9dc */
    NET_CLASS_VAR_S(get_num_wide, int32_t, 0x9dc);
    /* m_nNumHigh at 9e0 */
    NET_CLASS_VAR_S(get_num_high, int32_t, 0x9e0);
    /* m_flPanelWidth at 9e4 */
    NET_CLASS_VAR_S(get_panel_width, float, 0x9e4);
    /* m_flPanelHeight at 9e8 */
    NET_CLASS_VAR_S(get_panel_height, float, 0x9e8);
    /* m_vNormal at 9ec */
    NET_CLASS_VAR_S(get_v_normal, Vector3f, 0x9ec);
    /* m_vCorner at 9f8 */
    NET_CLASS_VAR_S(get_v_corner, Vector3f, 0x9f8);
    /* m_bIsBroken at a04 */
    NET_CLASS_VAR_S(is_broken, bool, 0xa04);
    /* m_nSurfaceType at a08 */
    NET_CLASS_VAR_S(get_surface_type, int32_t, 0xa08);
    /* m_RawPanelBitVec at a2c */
    NET_CLASS_VAR_A(get_raw_panel_bit_vec, int, 0xa2c, /* element count */ 0x100, /* element size */ 0x1);
END_NET_CLASS(CBreakableSurface);
DEFINE_NET_CLASS(CCascadeLight, 0x23, 0x00, CBaseEntity);
    /* m_shadowDirection at 9d8 */
    NET_CLASS_VAR_S(get_shadow_direction, Vector3f, 0x9d8);
    /* m_envLightShadowDirection at 9e4 */
    NET_CLASS_VAR_S(get_env_light_shadow_direction, Vector3f, 0x9e4);
    /* m_bEnabled at 9f0 */
    NET_CLASS_VAR_S(is_enabled, bool, 0x9f0);
    /* m_bUseLightEnvAngles at 9f1 */
    NET_CLASS_VAR_S(is_use_light_env_angles, bool, 0x9f1);
    /* m_LightColor at 9f2 */
    NET_CLASS_VAR_S(get_light_color, int, 0x9f2);
    /* m_LightColorScale at 9f8 */
    NET_CLASS_VAR_S(get_light_color_scale, int, 0x9f8);
    /* m_flMaxShadowDist at 9fc */
    NET_CLASS_VAR_S(get_max_shadow_dist, float, 0x9fc);
END_NET_CLASS(CCascadeLight);
DEFINE_NET_CLASS(CColorCorrection, 0x25, 0x00, CBaseEntity);
    /* m_vecOrigin at 9d8 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x9d8);
    /* m_minFalloff at 9e4 */
    NET_CLASS_VAR_S(get_min_falloff, float, 0x9e4);
    /* m_maxFalloff at 9e8 */
    NET_CLASS_VAR_S(get_max_falloff, float, 0x9e8);
    /* m_flFadeInDuration at 9ec */
    NET_CLASS_VAR_S(get_fade_in_duration, float, 0x9ec);
    /* m_flFadeOutDuration at 9f0 */
    NET_CLASS_VAR_S(get_fade_out_duration, float, 0x9f0);
    /* m_flMaxWeight at 9f4 */
    NET_CLASS_VAR_S(get_max_weight, float, 0x9f4);
    /* m_flCurWeight at 9f8 */
    NET_CLASS_VAR_S(get_cur_weight, float, 0x9f8);
    /* m_netLookupFilename at 9fc */
    NET_CLASS_VAR_C(get_net_lookup_filename, 0x9fc, /* max length */ 0x104);
    /* m_bEnabled at b00 */
    NET_CLASS_VAR_S(is_enabled, bool, 0xb00);
    /* m_bMaster at b01 */
    NET_CLASS_VAR_S(is_master, bool, 0xb01);
    /* m_bClientSide at b02 */
    NET_CLASS_VAR_S(is_client_side, bool, 0xb02);
    /* m_bExclusive at b03 */
    NET_CLASS_VAR_S(is_exclusive, bool, 0xb03);
END_NET_CLASS(CColorCorrection);
DEFINE_NET_CLASS(CColorCorrectionVolume, 0x26, 0x00, CBaseTrigger);
    /* m_bEnabled at a20 */
    NET_CLASS_VAR_S(is_enabled, bool, 0xa20);
    /* m_MaxWeight at a24 */
    NET_CLASS_VAR_S(get_max_weight, float, 0xa24);
    /* m_FadeDuration at a28 */
    NET_CLASS_VAR_S(get_fade_duration, float, 0xa28);
    /* m_Weight at a2c */
    NET_CLASS_VAR_S(get_weight, float, 0xa2c);
    /* m_lookupFilename at a30 */
    NET_CLASS_VAR_C(get_lookup_filename, 0xa30, /* max length */ 0x104);
END_NET_CLASS(CColorCorrectionVolume);
DEFINE_NET_CLASS(CCSRagdoll, 0x2a, 0x00, netvar::class_base);
    /* m_iTeamNum at f4 */
    NET_CLASS_VAR_S(get_team_num, int, 0xf4);
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* m_nModelIndex at 258 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* m_vecForce at 2680 */
    NET_CLASS_VAR_S(get_force, Vector3f, 0x2680);
    /* m_nForceBone at 268c */
    NET_CLASS_VAR_S(get_force_bone, int32_t, 0x268c);
    /* m_bClientSideAnimation at 28a0 */
    NET_CLASS_VAR_S(is_client_side_animation, bool, 0x28a0);
    /* m_hPlayer at 2a00 */
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x2a00);
    /* m_vecRagdollVelocity at 2a10 */
    NET_CLASS_VAR_S(get_ragdoll_velocity, Vector3f, 0x2a10);
    /* m_vecRagdollOrigin at 2a1c */
    NET_CLASS_VAR_S(get_ragdoll_origin, Vector3f, 0x2a1c);
    /* m_iDeathPose at 2a28 */
    NET_CLASS_VAR_S(get_death_pose, int, 0x2a28);
    /* m_iDeathFrame at 2a2c */
    NET_CLASS_VAR_S(get_death_frame, int, 0x2a2c);
    /* m_flDeathYaw at 2a30 */
    NET_CLASS_VAR_S(get_death_yaw, float, 0x2a30);
    /* m_flAbsYaw at 2a34 */
    NET_CLASS_VAR_S(get_abs_yaw, float, 0x2a34);
    /* m_bDiedAirborne at 2a38 */
    NET_CLASS_VAR_S(is_died_airborne, bool, 0x2a38);
END_NET_CLASS(CCSRagdoll);
DEFINE_NET_CLASS(CDangerZone, 0x2c, 0x00, CBaseEntity);
    /* m_vecDangerZoneOriginStartedAt at 9d8 */
    NET_CLASS_VAR_S(get_danger_zone_origin_started_at, Vector3f, 0x9d8);
    /* m_flBombLaunchTime at 9e4 */
    NET_CLASS_VAR_S(get_bomb_launch_time, float, 0x9e4);
    /* m_flExtraRadius at 9e8 */
    NET_CLASS_VAR_S(get_extra_radius, float, 0x9e8);
    /* m_flExtraRadiusStartTime at 9ec */
    NET_CLASS_VAR_S(get_extra_radius_start_time, float, 0x9ec);
    /* m_flExtraRadiusTotalLerpTime at 9f0 */
    NET_CLASS_VAR_S(get_extra_radius_total_lerp_time, float, 0x9f0);
    /* m_nDropOrder at 9f4 */
    NET_CLASS_VAR_S(get_drop_order, int32_t, 0x9f4);
    /* m_iWave at 9f8 */
    NET_CLASS_VAR_S(get_wave, int, 0x9f8);
END_NET_CLASS(CDangerZone);
DEFINE_NET_CLASS(CDangerZoneController, 0x2d, 0x00, CBaseEntity);
    /* m_bDangerZoneControllerEnabled at 9d8 */
    NET_CLASS_VAR_S(is_danger_zone_controller_enabled, bool, 0x9d8);
    /* m_bMissionControlledExplosions at 9d9 */
    NET_CLASS_VAR_S(is_mission_controlled_explosions, bool, 0x9d9);
    /* m_vecEndGameCircleStart at 9dc */
    NET_CLASS_VAR_S(get_end_game_circle_start, Vector3f, 0x9dc);
    /* m_vecEndGameCircleEnd at 9e8 */
    NET_CLASS_VAR_S(get_end_game_circle_end, Vector3f, 0x9e8);
    /* m_flStartTime at 9f4 */
    NET_CLASS_VAR_S(get_start_time, float, 0x9f4);
    /* m_flFinalExpansionTime at 9f8 */
    NET_CLASS_VAR_S(get_final_expansion_time, float, 0x9f8);
    /* m_DangerZones at 9fc */
    NET_CLASS_VAR_A(get_danger_zones, int, 0x9fc, /* element count */ 0x2a, /* element size */ 0x4);
    /* m_flWaveEndTimes at aa4 */
    NET_CLASS_VAR_A(get_wave_end_times, float, 0xaa4, /* element count */ 0x5, /* element size */ 0x4);
    /* m_hTheFinalZone at ab8 */
    NET_CLASS_VAR_S(get_the_final_zone, EntityHandle, 0xab8);
END_NET_CLASS(CDangerZoneController);
DEFINE_NET_CLASS(CDynamicLight, 0x33, 0x00, CBaseEntity);
    /* m_Flags at 9d8 */
    NET_CLASS_VAR_S(get_flags, int, 0x9d8);
    /* m_LightStyle at 9d9 */
    NET_CLASS_VAR_S(get_light_style, int, 0x9d9);
    /* m_Radius at 9dc */
    NET_CLASS_VAR_S(get_radius, float, 0x9dc);
    /* m_Exponent at 9e0 */
    NET_CLASS_VAR_S(get_exponent, int, 0x9e0);
    /* m_InnerAngle at 9e4 */
    NET_CLASS_VAR_S(get_inner_angle, float, 0x9e4);
    /* m_OuterAngle at 9e8 */
    NET_CLASS_VAR_S(get_outer_angle, float, 0x9e8);
    /* m_SpotRadius at 9ec */
    NET_CLASS_VAR_S(get_spot_radius, float, 0x9ec);
END_NET_CLASS(CDynamicLight);
DEFINE_NET_CLASS(CEmbers, 0x37, 0x00, CBaseEntity);
    /* m_nDensity at 9d8 */
    NET_CLASS_VAR_S(get_density, int32_t, 0x9d8);
    /* m_nLifetime at 9dc */
    NET_CLASS_VAR_S(get_lifetime, int32_t, 0x9dc);
    /* m_nSpeed at 9e0 */
    NET_CLASS_VAR_S(get_speed, int32_t, 0x9e0);
    /* m_bEmit at 9e4 */
    NET_CLASS_VAR_S(is_emit, bool, 0x9e4);
END_NET_CLASS(CEmbers);
DEFINE_NET_CLASS(CEntityDissolve, 0x38, 0x00, CBaseEntity);
    /* m_flStartTime at 9dc */
    NET_CLASS_VAR_S(get_start_time, float, 0x9dc);
    /* m_flFadeOutStart at 9e0 */
    NET_CLASS_VAR_S(get_fade_out_start, float, 0x9e0);
    /* m_flFadeOutLength at 9e4 */
    NET_CLASS_VAR_S(get_fade_out_length, float, 0x9e4);
    /* m_flFadeOutModelStart at 9e8 */
    NET_CLASS_VAR_S(get_fade_out_model_start, float, 0x9e8);
    /* m_flFadeOutModelLength at 9ec */
    NET_CLASS_VAR_S(get_fade_out_model_length, float, 0x9ec);
    /* m_flFadeInStart at 9f0 */
    NET_CLASS_VAR_S(get_fade_in_start, float, 0x9f0);
    /* m_flFadeInLength at 9f4 */
    NET_CLASS_VAR_S(get_fade_in_length, float, 0x9f4);
    /* m_nDissolveType at 9f8 */
    NET_CLASS_VAR_S(get_dissolve_type, int32_t, 0x9f8);
    /* m_vDissolverOrigin at a00 */
    NET_CLASS_VAR_S(get_v_dissolver_origin, Vector3f, 0xa00);
    /* m_nMagnitude at a0c */
    NET_CLASS_VAR_S(get_magnitude, int32_t, 0xa0c);
END_NET_CLASS(CEntityDissolve);
DEFINE_NET_CLASS(CEntityFlame, 0x39, 0x00, CBaseEntity);
    /* m_hEntAttached at 9d8 */
    NET_CLASS_VAR_S(get_ent_attached, EntityHandle, 0x9d8);
    /* m_bCheapEffect at 9ec */
    NET_CLASS_VAR_S(is_cheap_effect, bool, 0x9ec);
END_NET_CLASS(CEntityFlame);
DEFINE_NET_CLASS(CEntityFreezing, 0x3a, 0x00, CBaseEntity);
    /* m_vFreezingOrigin at 9d8 */
    NET_CLASS_VAR_S(get_v_freezing_origin, Vector3f, 0x9d8);
    /* m_flFrozenPerHitbox at 9e4 */
    NET_CLASS_VAR_A(get_frozen_per_hitbox, float, 0x9e4, /* element count */ 0x32, /* element size */ 0x4);
    /* m_flFrozen at aac */
    NET_CLASS_VAR_S(get_frozen, float, 0xaac);
    /* m_bFinishFreezing at ab0 */
    NET_CLASS_VAR_S(is_finish_freezing, bool, 0xab0);
END_NET_CLASS(CEntityFreezing);
DEFINE_NET_CLASS(CEntityParticleTrail, 0x3b, 0x00, CBaseParticleEntity);
    /* m_Info at 0 */
    /* data table reference for DT_EntityParticleTrailInfo */
    /* m_iMaterialName at ac0 */
    NET_CLASS_VAR_S(get_material_name, int, 0xac0);
    /* m_hConstraintEntity at ad8 */
    NET_CLASS_VAR_S(get_constraint_entity, EntityHandle, 0xad8);
END_NET_CLASS(CEntityParticleTrail);
DEFINE_NET_CLASS(CEnvDetailController, 0x3d, 0x00, netvar::class_base);
    /* m_flFadeStartDist at 9d8 */
    NET_CLASS_VAR_S(get_fade_start_dist, float, 0x9d8);
    /* m_flFadeEndDist at 9dc */
    NET_CLASS_VAR_S(get_fade_end_dist, float, 0x9dc);
END_NET_CLASS(CEnvDetailController);
DEFINE_NET_CLASS(CEnvDOFController, 0x3e, 0x00, CBaseEntity);
    /* m_bDOFEnabled at 9d8 */
    NET_CLASS_VAR_S(is_dof_enabled, bool, 0x9d8);
    /* m_flNearBlurDepth at 9dc */
    NET_CLASS_VAR_S(get_near_blur_depth, float, 0x9dc);
    /* m_flNearFocusDepth at 9e0 */
    NET_CLASS_VAR_S(get_near_focus_depth, float, 0x9e0);
    /* m_flFarFocusDepth at 9e4 */
    NET_CLASS_VAR_S(get_far_focus_depth, float, 0x9e4);
    /* m_flFarBlurDepth at 9e8 */
    NET_CLASS_VAR_S(get_far_blur_depth, float, 0x9e8);
    /* m_flNearBlurRadius at 9ec */
    NET_CLASS_VAR_S(get_near_blur_radius, float, 0x9ec);
    /* m_flFarBlurRadius at 9f0 */
    NET_CLASS_VAR_S(get_far_blur_radius, float, 0x9f0);
END_NET_CLASS(CEnvDOFController);
DEFINE_NET_CLASS(CEnvProjectedTexture, 0x41, 0x00, CBaseEntity);
    /* m_hTargetEntity at 9dc */
    NET_CLASS_VAR_S(get_target_entity, EntityHandle, 0x9dc);
    /* m_bState at 9e0 */
    NET_CLASS_VAR_S(is_state, bool, 0x9e0);
    /* m_bAlwaysUpdate at 9e1 */
    NET_CLASS_VAR_S(is_always_update, bool, 0x9e1);
    /* m_flLightFOV at 9e4 */
    NET_CLASS_VAR_S(get_light_fo_v, float, 0x9e4);
    /* m_bEnableShadows at 9e8 */
    NET_CLASS_VAR_S(is_enable_shadows, bool, 0x9e8);
    /* m_bSimpleProjection at 9e9 */
    NET_CLASS_VAR_S(is_simple_projection, bool, 0x9e9);
    /* m_bLightOnlyTarget at 9ea */
    NET_CLASS_VAR_S(is_light_only_target, bool, 0x9ea);
    /* m_bLightWorld at 9eb */
    NET_CLASS_VAR_S(is_light_world, bool, 0x9eb);
    /* m_bCameraSpace at 9ec */
    NET_CLASS_VAR_S(is_camera_space, bool, 0x9ec);
    /* m_flBrightnessScale at 9f0 */
    NET_CLASS_VAR_S(get_brightness_scale, float, 0x9f0);
    /* m_LightColor at 9f4 */
    NET_CLASS_VAR_S(get_light_color, int, 0x9f4);
    /* m_flColorTransitionTime at a08 */
    NET_CLASS_VAR_S(get_color_transition_time, float, 0xa08);
    /* m_flAmbient at a0c */
    NET_CLASS_VAR_S(get_ambient, float, 0xa0c);
    /* m_flNearZ at a10 */
    NET_CLASS_VAR_S(get_near_z, float, 0xa10);
    /* m_flFarZ at a14 */
    NET_CLASS_VAR_S(get_far_z, float, 0xa14);
    /* m_SpotlightTextureName at a18 */
    NET_CLASS_VAR_C(get_spotlight_texture_name, 0xa18, /* max length */ 0x104);
    /* m_nSpotlightTextureFrame at b24 */
    NET_CLASS_VAR_S(get_spotlight_texture_frame, int32_t, 0xb24);
    /* m_nShadowQuality at b28 */
    NET_CLASS_VAR_S(get_shadow_quality, int32_t, 0xb28);
    /* m_iStyle at b2c */
    NET_CLASS_VAR_S(get_style, int, 0xb2c);
    /* m_flProjectionSize at b38 */
    NET_CLASS_VAR_S(get_projection_size, float, 0xb38);
    /* m_flRotation at b3c */
    NET_CLASS_VAR_S(get_rotation, float, 0xb3c);
END_NET_CLASS(CEnvProjectedTexture);
DEFINE_NET_CLASS(CEnvQuadraticBeam, 0x42, 0x00, CBaseEntity);
    /* m_targetPosition at 9d8 */
    NET_CLASS_VAR_S(get_target_position, Vector3f, 0x9d8);
    /* m_controlPosition at 9e4 */
    NET_CLASS_VAR_S(get_control_position, Vector3f, 0x9e4);
    /* m_scrollRate at 9f0 */
    NET_CLASS_VAR_S(get_scroll_rate, float, 0x9f0);
    /* m_flWidth at 9f4 */
    NET_CLASS_VAR_S(get_width, float, 0x9f4);
END_NET_CLASS(CEnvQuadraticBeam);
DEFINE_NET_CLASS(CEnvScreenEffect, 0x43, 0x00, CBaseEntity);
    /* m_flDuration at 9d8 */
    NET_CLASS_VAR_S(get_duration, float, 0x9d8);
    /* m_nType at 9dc */
    NET_CLASS_VAR_S(get_type, int32_t, 0x9dc);
END_NET_CLASS(CEnvScreenEffect);
DEFINE_NET_CLASS(CEnvScreenOverlay, 0x44, 0x00, CBaseEntity);
    /* m_iszOverlayNames[0] at 9d8 */
    /* TODO: fix name for string m_iszOverlayNames[0] */
    /* m_flOverlayTimes[0] at 13d0 */
    /* TODO: fix name for m_flOverlayTimes[0] of type 1 */
    /* m_flStartTime at 13f8 */
    NET_CLASS_VAR_S(get_start_time, float, 0x13f8);
    /* m_iDesiredOverlay at 13fc */
    NET_CLASS_VAR_S(get_desired_overlay, int, 0x13fc);
    /* m_bIsActive at 1400 */
    NET_CLASS_VAR_S(is_active, bool, 0x1400);
END_NET_CLASS(CEnvScreenOverlay);
DEFINE_NET_CLASS(CEnvTonemapController, 0x45, 0x00, CBaseEntity);
    /* m_bUseCustomAutoExposureMin at 9d8 */
    NET_CLASS_VAR_S(is_use_custom_auto_exposure_min, bool, 0x9d8);
    /* m_bUseCustomAutoExposureMax at 9d9 */
    NET_CLASS_VAR_S(is_use_custom_auto_exposure_max, bool, 0x9d9);
    /* m_bUseCustomBloomScale at 9da */
    NET_CLASS_VAR_S(is_use_custom_bloom_scale, bool, 0x9da);
    /* m_flCustomAutoExposureMin at 9dc */
    NET_CLASS_VAR_S(get_custom_auto_exposure_min, float, 0x9dc);
    /* m_flCustomAutoExposureMax at 9e0 */
    NET_CLASS_VAR_S(get_custom_auto_exposure_max, float, 0x9e0);
    /* m_flCustomBloomScale at 9e4 */
    NET_CLASS_VAR_S(get_custom_bloom_scale, float, 0x9e4);
    /* m_flCustomBloomScaleMinimum at 9e8 */
    NET_CLASS_VAR_S(get_custom_bloom_scale_minimum, float, 0x9e8);
    /* m_flBloomExponent at 9ec */
    NET_CLASS_VAR_S(get_bloom_exponent, float, 0x9ec);
    /* m_flBloomSaturation at 9f0 */
    NET_CLASS_VAR_S(get_bloom_saturation, float, 0x9f0);
    /* m_flTonemapPercentTarget at 9f4 */
    NET_CLASS_VAR_S(get_tonemap_percent_target, float, 0x9f4);
    /* m_flTonemapPercentBrightPixels at 9f8 */
    NET_CLASS_VAR_S(get_tonemap_percent_bright_pixels, float, 0x9f8);
    /* m_flTonemapMinAvgLum at 9fc */
    NET_CLASS_VAR_S(get_tonemap_min_avg_lum, float, 0x9fc);
    /* m_flTonemapRate at a00 */
    NET_CLASS_VAR_S(get_tonemap_rate, float, 0xa00);
END_NET_CLASS(CEnvTonemapController);
DEFINE_NET_CLASS(CEnvWind, 0x46, 0x00, CBaseEntity);
    /* m_EnvWindShared at 0 */
    /* data table reference for DT_EnvWindShared */
END_NET_CLASS(CEnvWind);
DEFINE_NET_CLASS(CFEPlayerDecal, 0x47, 0x00, CBaseEntity);
    /* m_nUniqueID at 9d8 */
    NET_CLASS_VAR_S(get_unique_i_d, int32_t, 0x9d8);
    /* m_unAccountID at 9dc */
    NET_CLASS_VAR_S(get_account_i_d, uint32_t, 0x9dc);
    /* m_unTraceID at 9e0 */
    NET_CLASS_VAR_S(get_trace_i_d, uint32_t, 0x9e0);
    /* m_rtGcTime at 9e4 */
    NET_CLASS_VAR_S(get_rt_gc_time, int, 0x9e4);
    /* m_vecEndPos at 9e8 */
    NET_CLASS_VAR_S(get_end_pos, Vector3f, 0x9e8);
    /* m_vecStart at 9f4 */
    NET_CLASS_VAR_S(get_start, Vector3f, 0x9f4);
    /* m_vecRight at a00 */
    NET_CLASS_VAR_S(get_right, Vector3f, 0xa00);
    /* m_vecNormal at a0c */
    NET_CLASS_VAR_S(get_normal, Vector3f, 0xa0c);
    /* m_nPlayer at a18 */
    NET_CLASS_VAR_S(get_player, int32_t, 0xa18);
    /* m_nEntity at a1c */
    NET_CLASS_VAR_S(get_entity, int32_t, 0xa1c);
    /* m_nHitbox at a20 */
    NET_CLASS_VAR_S(get_hitbox, int32_t, 0xa20);
    /* m_nTintID at a24 */
    NET_CLASS_VAR_S(get_tint_i_d, int32_t, 0xa24);
    /* m_flCreationTime at a28 */
    NET_CLASS_VAR_S(get_creation_time, float, 0xa28);
    /* m_nVersion at a2c */
    NET_CLASS_VAR_S(get_version, int32_t, 0xa2c);
    /* m_ubSignature at a2d */
    NET_CLASS_VAR_A(get_ub_signature, int, 0xa2d, /* element count */ 0x80, /* element size */ 0x1);
END_NET_CLASS(CFEPlayerDecal);
DEFINE_NET_CLASS(CFireSmoke, 0x49, 0x00, CBaseEntity);
    /* m_flStartScale at 9d8 */
    NET_CLASS_VAR_S(get_start_scale, float, 0x9d8);
    /* m_flScale at 9dc */
    NET_CLASS_VAR_S(get_scale, float, 0x9dc);
    /* m_flScaleTime at 9e0 */
    NET_CLASS_VAR_S(get_scale_time, float, 0x9e0);
    /* m_nFlags at 9e4 */
    NET_CLASS_VAR_S(get_flags, int32_t, 0x9e4);
    /* m_nFlameModelIndex at 9e8 */
    NET_CLASS_VAR_S(get_flame_model_index, int32_t, 0x9e8);
    /* m_nFlameFromAboveModelIndex at 9ec */
    NET_CLASS_VAR_S(get_flame_from_above_model_index, int32_t, 0x9ec);
END_NET_CLASS(CFireSmoke);
DEFINE_NET_CLASS(CFireTrail, 0x4a, 0x00, CBaseParticleEntity);
    /* m_nAttachment at ac4 */
    NET_CLASS_VAR_S(get_attachment, int32_t, 0xac4);
    /* m_flLifetime at ac8 */
    NET_CLASS_VAR_S(get_lifetime, float, 0xac8);
END_NET_CLASS(CFireTrail);
DEFINE_NET_CLASS(CFish, 0x4b, 0x00, netvar::class_base);
    /* m_nModelIndex at 258 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* m_lifeState at 25f */
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    /* m_x at 29d8 */
    NET_CLASS_VAR_S(get_x, float, 0x29d8);
    /* m_y at 29dc */
    NET_CLASS_VAR_S(get_y, float, 0x29dc);
    /* m_z at 29e0 */
    NET_CLASS_VAR_S(get_z, float, 0x29e0);
    /* m_angle at 29e8 */
    NET_CLASS_VAR_S(get_angle, float, 0x29e8);
    /* m_poolOrigin at 29f0 */
    NET_CLASS_VAR_S(get_pool_origin, Vector3f, 0x29f0);
    /* m_waterLevel at 29fc */
    NET_CLASS_VAR_S(get_water_level, float, 0x29fc);
END_NET_CLASS(CFish);
DEFINE_NET_CLASS(CFogController, 0x4e, 0x00, netvar::class_base);
    /* m_fog.dirPrimary at 9dc */
    /* TODO: fix name for m_fog.dirPrimary of type 2 */
    /* m_fog.colorPrimary at 9e8 */
    /* TODO: fix name for m_fog.colorPrimary of type 0 */
    /* m_fog.colorSecondary at 9ec */
    /* TODO: fix name for m_fog.colorSecondary of type 0 */
    /* m_fog.colorPrimaryLerpTo at 9f0 */
    /* TODO: fix name for m_fog.colorPrimaryLerpTo of type 0 */
    /* m_fog.colorSecondaryLerpTo at 9f4 */
    /* TODO: fix name for m_fog.colorSecondaryLerpTo of type 0 */
    /* m_fog.start at 9f8 */
    /* TODO: fix name for m_fog.start of type 1 */
    /* m_fog.end at 9fc */
    /* TODO: fix name for m_fog.end of type 1 */
    /* m_fog.farz at a00 */
    /* TODO: fix name for m_fog.farz of type 1 */
    /* m_fog.maxdensity at a04 */
    /* TODO: fix name for m_fog.maxdensity of type 1 */
    /* m_fog.startLerpTo at a08 */
    /* TODO: fix name for m_fog.startLerpTo of type 1 */
    /* m_fog.endLerpTo at a0c */
    /* TODO: fix name for m_fog.endLerpTo of type 1 */
    /* m_fog.maxdensityLerpTo at a10 */
    /* TODO: fix name for m_fog.maxdensityLerpTo of type 1 */
    /* m_fog.lerptime at a14 */
    /* TODO: fix name for m_fog.lerptime of type 1 */
    /* m_fog.duration at a18 */
    /* TODO: fix name for m_fog.duration of type 1 */
    /* m_fog.enable at a1c */
    /* TODO: fix name for m_fog.enable of type 0 */
    /* m_fog.blend at a1d */
    /* TODO: fix name for m_fog.blend of type 0 */
    /* m_fog.ZoomFogScale at a20 */
    /* TODO: fix name for m_fog.ZoomFogScale of type 1 */
    /* m_fog.HDRColorScale at a24 */
    /* TODO: fix name for m_fog.HDRColorScale of type 1 */
END_NET_CLASS(CFogController);
DEFINE_NET_CLASS(CFootstepControl, 0x4f, 0x00, CBaseTrigger);
    /* m_source at a10 */
    NET_CLASS_VAR_C(get_source, 0xa10, /* max length */ 0x10);
    /* m_destination at a20 */
    NET_CLASS_VAR_C(get_destination, 0xa20, /* max length */ 0x10);
END_NET_CLASS(CFootstepControl);
DEFINE_NET_CLASS(CFunc_Dust, 0x50, 0x00, netvar::class_base);
    /* m_Collision at 0 */
    /* data table reference for DT_CollisionProperty */
    /* m_nModelIndex at 258 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* m_Color at 9d8 */
    NET_CLASS_VAR_S(get_color, int, 0x9d8);
    /* m_SpawnRate at 9dc */
    NET_CLASS_VAR_S(get_spawn_rate, int, 0x9dc);
    /* m_flSizeMin at 9e0 */
    NET_CLASS_VAR_S(get_size_min, float, 0x9e0);
    /* m_flSizeMax at 9e4 */
    NET_CLASS_VAR_S(get_size_max, float, 0x9e4);
    /* m_SpeedMax at 9e8 */
    NET_CLASS_VAR_S(get_speed_max, int, 0x9e8);
    /* m_LifetimeMin at 9ec */
    NET_CLASS_VAR_S(get_lifetime_min, int, 0x9ec);
    /* m_LifetimeMax at 9f0 */
    NET_CLASS_VAR_S(get_lifetime_max, int, 0x9f0);
    /* m_DistMax at 9f4 */
    NET_CLASS_VAR_S(get_dist_max, int, 0x9f4);
    /* m_FallSpeed at 9f8 */
    NET_CLASS_VAR_S(get_fall_speed, float, 0x9f8);
    /* m_bAffectedByWind at 9fc */
    NET_CLASS_VAR_S(is_affected_by_wind, bool, 0x9fc);
    /* m_DustFlags at a00 */
    NET_CLASS_VAR_S(get_dust_flags, int, 0xa00);
END_NET_CLASS(CFunc_Dust);
DEFINE_NET_CLASS(CFunc_LOD, 0x51, 0x00, CBaseEntity);
    /* m_nDisappearMinDist at 9d8 */
    NET_CLASS_VAR_S(get_disappear_min_dist, int32_t, 0x9d8);
    /* m_nDisappearMaxDist at 9dc */
    NET_CLASS_VAR_S(get_disappear_max_dist, int32_t, 0x9dc);
END_NET_CLASS(CFunc_LOD);
DEFINE_NET_CLASS(CFuncAreaPortalWindow, 0x52, 0x00, CBaseEntity);
    /* m_flFadeStartDist at 9d8 */
    NET_CLASS_VAR_S(get_fade_start_dist, float, 0x9d8);
    /* m_flFadeDist at 9dc */
    NET_CLASS_VAR_S(get_fade_dist, float, 0x9dc);
    /* m_flTranslucencyLimit at 9e0 */
    NET_CLASS_VAR_S(get_translucency_limit, float, 0x9e0);
    /* m_iBackgroundModelIndex at 9e4 */
    NET_CLASS_VAR_S(get_background_model_index, int, 0x9e4);
END_NET_CLASS(CFuncAreaPortalWindow);
DEFINE_NET_CLASS(CFuncBrush, 0x53, 0x00, CBaseEntity);
END_NET_CLASS(CFuncBrush);
DEFINE_NET_CLASS(CFuncConveyor, 0x54, 0x00, CBaseEntity);
    /* m_flConveyorSpeed at 9d8 */
    NET_CLASS_VAR_S(get_conveyor_speed, float, 0x9d8);
END_NET_CLASS(CFuncConveyor);
DEFINE_NET_CLASS(CFuncLadder, 0x55, 0x00, CBaseEntity);
    /* m_vecLadderDir at 9d8 */
    NET_CLASS_VAR_S(get_ladder_dir, Vector3f, 0x9d8);
    /* m_vecPlayerMountPositionTop at 9f8 */
    NET_CLASS_VAR_S(get_player_mount_position_top, Vector3f, 0x9f8);
    /* m_vecPlayerMountPositionBottom at a04 */
    NET_CLASS_VAR_S(get_player_mount_position_bottom, Vector3f, 0xa04);
    /* m_bFakeLadder at a11 */
    NET_CLASS_VAR_S(is_fake_ladder, bool, 0xa11);
END_NET_CLASS(CFuncLadder);
DEFINE_NET_CLASS(CFuncMonitor, 0x56, 0x00, CFuncBrush);
END_NET_CLASS(CFuncMonitor);
DEFINE_NET_CLASS(CFuncMoveLinear, 0x57, 0x00, CBaseToggle);
    /* m_fFlags at 104 */
    NET_CLASS_VAR_S(get_flags, float, 0x104);
    /* m_vecVelocity at 114 */
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x114);
END_NET_CLASS(CFuncMoveLinear);
DEFINE_NET_CLASS(CFuncOccluder, 0x58, 0x00, CBaseEntity);
    /* m_nOccluderIndex at 9d8 */
    NET_CLASS_VAR_S(get_occluder_index, int32_t, 0x9d8);
    /* m_bActive at 9dc */
    NET_CLASS_VAR_S(is_active, bool, 0x9dc);
END_NET_CLASS(CFuncOccluder);
DEFINE_NET_CLASS(CFuncReflectiveGlass, 0x59, 0x00, CFuncBrush);
END_NET_CLASS(CFuncReflectiveGlass);
DEFINE_NET_CLASS(CFuncRotating, 0x5a, 0x00, CBaseEntity);
    /* m_angRotation[0] at 12c */
    /* TODO: fix name for m_angRotation[0] of type 1 */
    /* m_angRotation[1] at 130 */
    /* TODO: fix name for m_angRotation[1] of type 1 */
    /* m_angRotation[2] at 134 */
    /* TODO: fix name for m_angRotation[2] of type 1 */
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* m_flSimulationTime at 268 */
    NET_CLASS_VAR_S(get_simulation_time, float, 0x268);
END_NET_CLASS(CFuncRotating);
DEFINE_NET_CLASS(CFuncSmokeVolume, 0x5b, 0x00, CBaseParticleEntity);
    /* m_Collision at 0 */
    /* data table reference for DT_CollisionProperty */
    /* m_Color1 at ac4 */
    NET_CLASS_VAR_S(get_color1, int, 0xac4);
    /* m_Color2 at ac8 */
    NET_CLASS_VAR_S(get_color2, int, 0xac8);
    /* m_MaterialName at acc */
    NET_CLASS_VAR_C(get_material_name, 0xacc, /* max length */ 0xff);
    /* m_ParticleDrawWidth at bcc */
    NET_CLASS_VAR_S(get_particle_draw_width, float, 0xbcc);
    /* m_ParticleSpacingDistance at bd0 */
    NET_CLASS_VAR_S(get_particle_spacing_distance, float, 0xbd0);
    /* m_DensityRampSpeed at bd4 */
    NET_CLASS_VAR_S(get_density_ramp_speed, float, 0xbd4);
    /* m_RotationSpeed at bd8 */
    NET_CLASS_VAR_S(get_rotation_speed, float, 0xbd8);
    /* m_MovementSpeed at bdc */
    NET_CLASS_VAR_S(get_movement_speed, float, 0xbdc);
    /* m_Density at be0 */
    NET_CLASS_VAR_S(get_density, float, 0xbe0);
    /* m_maxDrawDistance at be4 */
    NET_CLASS_VAR_S(get_max_draw_distance, float, 0xbe4);
    /* m_spawnflags at be8 */
    NET_CLASS_VAR_S(get_spawnflags, int, 0xbe8);
END_NET_CLASS(CFuncSmokeVolume);
DEFINE_NET_CLASS(CFuncTrackTrain, 0x5c, 0x00, CBaseEntity);
END_NET_CLASS(CFuncTrackTrain);
DEFINE_NET_CLASS(CGameRulesProxy, 0x5d, 0x00, netvar::class_base);
END_NET_CLASS(CGameRulesProxy);
DEFINE_NET_CLASS(CGrassBurn, 0x5e, 0x00, CBaseEntity);
    /* m_flGrassBurnClearTime at 9d8 */
    NET_CLASS_VAR_S(get_grass_burn_clear_time, float, 0x9d8);
END_NET_CLASS(CGrassBurn);
DEFINE_NET_CLASS(CHandleTest, 0x5f, 0x00, CBaseEntity);
    /* m_Handle at 9d8 */
    NET_CLASS_VAR_S(get_handle, int, 0x9d8);
    /* m_bSendHandle at 9dc */
    NET_CLASS_VAR_S(is_send_handle, bool, 0x9dc);
END_NET_CLASS(CHandleTest);
DEFINE_NET_CLASS(CInferno, 0x64, 0x00, CBaseEntity);
    /* m_fireXDelta at 9e4 */
    NET_CLASS_VAR_A(get_fire_x_delta, int, 0x9e4, /* element count */ 0x64, /* element size */ 0x4);
    /* m_fireYDelta at b74 */
    NET_CLASS_VAR_A(get_fire_y_delta, int, 0xb74, /* element count */ 0x64, /* element size */ 0x4);
    /* m_fireZDelta at d04 */
    NET_CLASS_VAR_A(get_fire_z_delta, int, 0xd04, /* element count */ 0x64, /* element size */ 0x4);
    /* m_bFireIsBurning at e94 */
    NET_CLASS_VAR_A(is_fire_is_burning, bool, 0xe94, /* element count */ 0x64, /* element size */ 0x1);
    /* m_fireCount at 13a8 */
    NET_CLASS_VAR_S(get_fire_count, int, 0x13a8);
    /* m_nFireEffectTickBegin at 13b4 */
    NET_CLASS_VAR_S(get_fire_effect_tick_begin, int32_t, 0x13b4);
END_NET_CLASS(CInferno);
DEFINE_NET_CLASS(CInfoLadderDismount, 0x65, 0x00, CBaseEntity);
END_NET_CLASS(CInfoLadderDismount);
DEFINE_NET_CLASS(CInfoMapRegion, 0x66, 0x00, CBaseEntity);
    /* m_flRadius at 9d8 */
    NET_CLASS_VAR_S(get_radius, float, 0x9d8);
    /* m_szLocToken at 9dc */
    NET_CLASS_VAR_C(get_loc_token, 0x9dc, /* max length */ 0x80);
END_NET_CLASS(CInfoMapRegion);
DEFINE_NET_CLASS(CInfoOverlayAccessor, 0x67, 0x00, netvar::class_base);
    /* m_iTextureFrameIndex at 98c */
    NET_CLASS_VAR_S(get_texture_frame_index, int, 0x98c);
    /* m_iOverlayID at 9d8 */
    NET_CLASS_VAR_S(get_overlay_i_d, int, 0x9d8);
END_NET_CLASS(CInfoOverlayAccessor);
DEFINE_NET_CLASS(CLightGlow, 0x6d, 0x00, netvar::class_base);
    /* HDRColorScale at 0 */
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0x0);
    /* m_clrRender at 70 */
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    /* m_angRotation at 12c */
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x12c);
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* moveparent at 148 */
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    /* m_nHorizontalSize at 9d8 */
    NET_CLASS_VAR_S(get_horizontal_size, int32_t, 0x9d8);
    /* m_nVerticalSize at 9dc */
    NET_CLASS_VAR_S(get_vertical_size, int32_t, 0x9dc);
    /* m_nMinDist at 9e0 */
    NET_CLASS_VAR_S(get_min_dist, int32_t, 0x9e0);
    /* m_nMaxDist at 9e4 */
    NET_CLASS_VAR_S(get_max_dist, int32_t, 0x9e4);
    /* m_nOuterMaxDist at 9e8 */
    NET_CLASS_VAR_S(get_outer_max_dist, int32_t, 0x9e8);
    /* m_spawnflags at 9ec */
    NET_CLASS_VAR_S(get_spawnflags, int, 0x9ec);
    /* m_flGlowProxySize at ac4 */
    NET_CLASS_VAR_S(get_glow_proxy_size, float, 0xac4);
END_NET_CLASS(CLightGlow);
DEFINE_NET_CLASS(CMapVetoPickController, 0x6e, 0x00, CBaseEntity);
    /* m_nDraftType at 9e8 */
    NET_CLASS_VAR_S(get_draft_type, int32_t, 0x9e8);
    /* m_nTeamWinningCoinToss at 9ec */
    NET_CLASS_VAR_S(get_team_winning_coin_toss, int32_t, 0x9ec);
    /* m_nTeamWithFirstChoice at 9f0 */
    NET_CLASS_VAR_A(get_team_with_first_choice, int32_t, 0x9f0, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nVoteMapIdsList at af0 */
    NET_CLASS_VAR_A(get_vote_map_ids_list, int32_t, 0xaf0, /* element count */ 0x7, /* element size */ 0x4);
    /* m_nAccountIDs at b0c */
    NET_CLASS_VAR_A(get_account_i_ds, int32_t, 0xb0c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nMapId0 at c0c */
    NET_CLASS_VAR_A(get_map_id0, int32_t, 0xc0c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nMapId1 at d0c */
    NET_CLASS_VAR_A(get_map_id1, int32_t, 0xd0c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nMapId2 at e0c */
    NET_CLASS_VAR_A(get_map_id2, int32_t, 0xe0c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nMapId3 at f0c */
    NET_CLASS_VAR_A(get_map_id3, int32_t, 0xf0c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nMapId4 at 100c */
    NET_CLASS_VAR_A(get_map_id4, int32_t, 0x100c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nMapId5 at 110c */
    NET_CLASS_VAR_A(get_map_id5, int32_t, 0x110c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nStartingSide0 at 120c */
    NET_CLASS_VAR_A(get_starting_side0, int32_t, 0x120c, /* element count */ 0x40, /* element size */ 0x4);
    /* m_nCurrentPhase at 130c */
    NET_CLASS_VAR_S(get_current_phase, int32_t, 0x130c);
    /* m_nPhaseStartTick at 1310 */
    NET_CLASS_VAR_S(get_phase_start_tick, int32_t, 0x1310);
    /* m_nPhaseDurationTicks at 1314 */
    NET_CLASS_VAR_S(get_phase_duration_ticks, int32_t, 0x1314);
END_NET_CLASS(CMapVetoPickController);
DEFINE_NET_CLASS(CMaterialModifyControl, 0x6f, 0x00, CBaseEntity);
    /* m_szMaterialName at 9d8 */
    NET_CLASS_VAR_C(get_material_name, 0x9d8, /* max length */ 0xff);
    /* m_szMaterialVar at ad7 */
    NET_CLASS_VAR_C(get_material_var, 0xad7, /* max length */ 0xff);
    /* m_szMaterialVarValue at bd6 */
    NET_CLASS_VAR_C(get_material_var_value, 0xbd6, /* max length */ 0xff);
    /* m_iFrameStart at ce0 */
    NET_CLASS_VAR_S(get_frame_start, int, 0xce0);
    /* m_iFrameEnd at ce4 */
    NET_CLASS_VAR_S(get_frame_end, int, 0xce4);
    /* m_bWrap at ce8 */
    NET_CLASS_VAR_S(is_wrap, bool, 0xce8);
    /* m_flFramerate at cec */
    NET_CLASS_VAR_S(get_framerate, float, 0xcec);
    /* m_bNewAnimCommandsSemaphore at cf0 */
    NET_CLASS_VAR_S(is_new_anim_commands_semaphore, bool, 0xcf0);
    /* m_flFloatLerpStartValue at cf4 */
    NET_CLASS_VAR_S(get_float_lerp_start_value, float, 0xcf4);
    /* m_flFloatLerpEndValue at cf8 */
    NET_CLASS_VAR_S(get_float_lerp_end_value, float, 0xcf8);
    /* m_flFloatLerpTransitionTime at cfc */
    NET_CLASS_VAR_S(get_float_lerp_transition_time, float, 0xcfc);
    /* m_bFloatLerpWrap at d00 */
    NET_CLASS_VAR_S(is_float_lerp_wrap, bool, 0xd00);
    /* m_nModifyMode at d08 */
    NET_CLASS_VAR_S(get_modify_mode, int32_t, 0xd08);
END_NET_CLASS(CMaterialModifyControl);
DEFINE_NET_CLASS(CMovieDisplay, 0x73, 0x00, CBaseEntity);
    /* m_bEnabled at 9d8 */
    NET_CLASS_VAR_S(is_enabled, bool, 0x9d8);
    /* m_bLooping at 9d9 */
    NET_CLASS_VAR_S(is_looping, bool, 0x9d9);
    /* m_szMovieFilename at 9da */
    NET_CLASS_VAR_C(get_movie_filename, 0x9da, /* max length */ 0x80);
    /* m_szGroupName at a5a */
    NET_CLASS_VAR_C(get_group_name, 0xa5a, /* max length */ 0x80);
    /* m_bStretchToFill at ada */
    NET_CLASS_VAR_S(is_stretch_to_fill, bool, 0xada);
    /* m_bForcedSlave at adb */
    NET_CLASS_VAR_S(is_forced_slave, bool, 0xadb);
    /* m_bUseCustomUVs at adc */
    NET_CLASS_VAR_S(is_use_custom_u_vs, bool, 0xadc);
    /* m_flUMin at ae0 */
    NET_CLASS_VAR_S(get_u_min, float, 0xae0);
    /* m_flUMax at ae4 */
    NET_CLASS_VAR_S(get_u_max, float, 0xae4);
    /* m_flVMin at ae8 */
    NET_CLASS_VAR_S(get_v_min, float, 0xae8);
    /* m_flVMax at aec */
    NET_CLASS_VAR_S(get_v_max, float, 0xaec);
END_NET_CLASS(CMovieDisplay);
DEFINE_NET_CLASS(CParticleFire, 0x75, 0x00, netvar::class_base);
    /* m_vOrigin at acc */
    NET_CLASS_VAR_S(get_v_origin, Vector3f, 0xacc);
    /* m_vDirection at ad8 */
    NET_CLASS_VAR_S(get_v_direction, Vector3f, 0xad8);
END_NET_CLASS(CParticleFire);
DEFINE_NET_CLASS(CParticlePerformanceMonitor, 0x76, 0x00, CBaseEntity);
    /* m_bDisplayPerf at 9d8 */
    NET_CLASS_VAR_S(is_display_perf, bool, 0x9d8);
    /* m_bMeasurePerf at 9d9 */
    NET_CLASS_VAR_S(is_measure_perf, bool, 0x9d9);
END_NET_CLASS(CParticlePerformanceMonitor);
DEFINE_NET_CLASS(CParticleSystem, 0x77, 0x00, netvar::class_base);
    /* m_fEffects at f0 */
    NET_CLASS_VAR_S(get_effects, float, 0xf0);
    /* m_angRotation at 12c */
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x12c);
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* moveparent at 148 */
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    /* m_hOwnerEntity at 14c */
    NET_CLASS_VAR_S(get_owner_entity, EntityHandle, 0x14c);
    /* m_iParentAttachment at 2ec */
    NET_CLASS_VAR_S(get_parent_attachment, int, 0x2ec);
    /* m_iEffectIndex at 9d8 */
    NET_CLASS_VAR_S(get_effect_index, int, 0x9d8);
    /* m_nStopType at 9dc */
    NET_CLASS_VAR_S(get_stop_type, int32_t, 0x9dc);
    /* m_bActive at 9e0 */
    NET_CLASS_VAR_S(is_active, bool, 0x9e0);
    /* m_flStartTime at 9e4 */
    NET_CLASS_VAR_S(get_start_time, float, 0x9e4);
    /* m_szSnapshotFileName at 9e8 */
    NET_CLASS_VAR_C(get_snapshot_file_name, 0x9e8, /* max length */ 0x104);
    /* m_vServerControlPoints at aec */
    NET_CLASS_VAR_A(get_v_server_control_points, int, 0xaec, /* element count */ 0x4, /* element size */ 0xc);
    /* m_iServerControlPointAssignments at b1c */
    NET_CLASS_VAR_A(get_server_control_point_assignments, int, 0xb1c, /* element count */ 0x4, /* element size */ 0x1);
    /* m_hControlPointEnts at b30 */
    NET_CLASS_VAR_A(get_control_point_ents, EntityHandle, 0xb30, /* element count */ 0x3f, /* element size */ 0x4);
    /* m_iControlPointParents at c2c */
    NET_CLASS_VAR_A(get_control_point_parents, int, 0xc2c, /* element count */ 0x3f, /* element size */ 0x1);
END_NET_CLASS(CParticleSystem);
DEFINE_NET_CLASS(CPhysBox, 0x78, 0x00, CBaseEntity);
    /* m_mass at 9d8 */
    NET_CLASS_VAR_S(get_mass, float, 0x9d8);
END_NET_CLASS(CPhysBox);
DEFINE_NET_CLASS(CPhysBoxMultiplayer, 0x79, 0x00, CPhysBox);
    /* m_iPhysicsMode at 9e4 */
    NET_CLASS_VAR_S(get_physics_mode, int, 0x9e4);
    /* m_fMass at 9e8 */
    NET_CLASS_VAR_S(get_mass, float, 0x9e8);
END_NET_CLASS(CPhysBoxMultiplayer);
DEFINE_NET_CLASS(CPlasma, 0x82, 0x00, CBaseEntity);
    /* m_flStartScale at 9d8 */
    NET_CLASS_VAR_S(get_start_scale, float, 0x9d8);
    /* m_flScale at 9dc */
    NET_CLASS_VAR_S(get_scale, float, 0x9dc);
    /* m_flScaleTime at 9e0 */
    NET_CLASS_VAR_S(get_scale_time, float, 0x9e0);
    /* m_nFlags at 9e4 */
    NET_CLASS_VAR_S(get_flags, int32_t, 0x9e4);
    /* m_nPlasmaModelIndex at 9e8 */
    NET_CLASS_VAR_S(get_plasma_model_index, int32_t, 0x9e8);
    /* m_nPlasmaModelIndex2 at 9ec */
    NET_CLASS_VAR_S(get_plasma_model_index2, int32_t, 0x9ec);
    /* m_nGlowModelIndex at 9f0 */
    NET_CLASS_VAR_S(get_glow_model_index, int32_t, 0x9f0);
END_NET_CLASS(CPlasma);
DEFINE_NET_CLASS(CPlayerPing, 0x83, 0x00, CBaseEntity);
    /* m_hPlayer at 9e4 */
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x9e4);
    /* m_hPingedEntity at 9e8 */
    NET_CLASS_VAR_S(get_pinged_entity, EntityHandle, 0x9e8);
    /* m_iType at 9ec */
    NET_CLASS_VAR_S(get_type, int, 0x9ec);
    /* m_bUrgent at 9f4 */
    NET_CLASS_VAR_S(is_urgent, bool, 0x9f4);
    /* m_szPlaceName at 9f5 */
    NET_CLASS_VAR_C(get_place_name, 0x9f5, /* max length */ 0x12);
END_NET_CLASS(CPlayerPing);
DEFINE_NET_CLASS(CPlayerResource, 0x84, 0x00, netvar::class_base);
    /* m_bConnected at ae4 */
    NET_CLASS_VAR_A(is_connected, bool, 0xae4, /* element count */ 0x41, /* element size */ 0x1);
    /* m_iPing at b28 */
    NET_CLASS_VAR_A(get_ping, int, 0xb28, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iKills at c2c */
    NET_CLASS_VAR_A(get_kills, int, 0xc2c, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iAssists at d30 */
    NET_CLASS_VAR_A(get_assists, int, 0xd30, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iDeaths at e34 */
    NET_CLASS_VAR_A(get_deaths, int, 0xe34, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iTeam at f38 */
    NET_CLASS_VAR_A(get_team, int, 0xf38, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iPendingTeam at 103c */
    NET_CLASS_VAR_A(get_pending_team, int, 0x103c, /* element count */ 0x41, /* element size */ 0x4);
    /* m_bAlive at 1140 */
    NET_CLASS_VAR_A(is_alive, bool, 0x1140, /* element count */ 0x41, /* element size */ 0x1);
    /* m_iHealth at 1184 */
    NET_CLASS_VAR_A(get_health, int, 0x1184, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iCoachingTeam at 1288 */
    NET_CLASS_VAR_A(get_coaching_team, int, 0x1288, /* element count */ 0x41, /* element size */ 0x4);
END_NET_CLASS(CPlayerResource);
DEFINE_NET_CLASS(CPointCamera, 0x85, 0x00, CBaseEntity);
    /* m_FOV at 9d8 */
    NET_CLASS_VAR_S(get_fo_v, float, 0x9d8);
    /* m_Resolution at 9dc */
    NET_CLASS_VAR_S(get_resolution, float, 0x9dc);
    /* m_bFogEnable at 9e0 */
    NET_CLASS_VAR_S(is_fog_enable, bool, 0x9e0);
    /* m_FogColor at 9e1 */
    NET_CLASS_VAR_S(get_fog_color, int, 0x9e1);
    /* m_flFogStart at 9e8 */
    NET_CLASS_VAR_S(get_fog_start, float, 0x9e8);
    /* m_flFogEnd at 9ec */
    NET_CLASS_VAR_S(get_fog_end, float, 0x9ec);
    /* m_flFogMaxDensity at 9f0 */
    NET_CLASS_VAR_S(get_fog_max_density, float, 0x9f0);
    /* m_bActive at 9f4 */
    NET_CLASS_VAR_S(is_active, bool, 0x9f4);
    /* m_bUseScreenAspectRatio at 9f5 */
    NET_CLASS_VAR_S(is_use_screen_aspect_ratio, bool, 0x9f5);
END_NET_CLASS(CPointCamera);
DEFINE_NET_CLASS(CPointWorldText, 0x87, 0x00, CBaseEntity);
    /* m_szText at a08 */
    NET_CLASS_VAR_C(get_text, 0xa08, /* max length */ 0x104);
    /* m_flTextSize at b0c */
    NET_CLASS_VAR_S(get_text_size, float, 0xb0c);
    /* m_textColor at b10 */
    NET_CLASS_VAR_S(get_text_color, int, 0xb10);
END_NET_CLASS(CPointWorldText);
DEFINE_NET_CLASS(CPoseController, 0x88, 0x00, CBaseEntity);
    /* m_hProps at 9d8 */
    NET_CLASS_VAR_A(get_props, EntityHandle, 0x9d8, /* element count */ 0x4, /* element size */ 0x4);
    /* m_chPoseIndex at 9e8 */
    NET_CLASS_VAR_A(get_ch_pose_index, int, 0x9e8, /* element count */ 0x4, /* element size */ 0x1);
    /* m_bPoseValueParity at 9ec */
    NET_CLASS_VAR_S(is_pose_value_parity, bool, 0x9ec);
    /* m_fPoseValue at 9f0 */
    NET_CLASS_VAR_S(get_pose_value, float, 0x9f0);
    /* m_fInterpolationTime at 9f4 */
    NET_CLASS_VAR_S(get_interpolation_time, float, 0x9f4);
    /* m_bInterpolationWrap at 9f8 */
    NET_CLASS_VAR_S(is_interpolation_wrap, bool, 0x9f8);
    /* m_fCycleFrequency at 9fc */
    NET_CLASS_VAR_S(get_cycle_frequency, float, 0x9fc);
    /* m_nFModType at a00 */
    NET_CLASS_VAR_S(get_f_mod_type, int32_t, 0xa00);
    /* m_fFModTimeOffset at a04 */
    NET_CLASS_VAR_S(get_f_mod_time_offset, float, 0xa04);
    /* m_fFModRate at a08 */
    NET_CLASS_VAR_S(get_f_mod_rate, float, 0xa08);
    /* m_fFModAmplitude at a0c */
    NET_CLASS_VAR_S(get_f_mod_amplitude, float, 0xa0c);
END_NET_CLASS(CPoseController);
DEFINE_NET_CLASS(CPostProcessController, 0x89, 0x00, CBaseEntity);
    /* m_flPostProcessParameters at 9d8 */
    NET_CLASS_VAR_A(get_post_process_parameters, float, 0x9d8, /* element count */ 0xb, /* element size */ 0x4);
    /* m_bMaster at a04 */
    NET_CLASS_VAR_S(is_master, bool, 0xa04);
END_NET_CLASS(CPostProcessController);
DEFINE_NET_CLASS(CPrecipitation, 0x8a, 0x00, CBaseEntity);
    /* m_nPrecipType at a00 */
    NET_CLASS_VAR_S(get_precip_type, int32_t, 0xa00);
END_NET_CLASS(CPrecipitation);
DEFINE_NET_CLASS(CPrecipitationBlocker, 0x8b, 0x00, CBaseEntity);
END_NET_CLASS(CPrecipitationBlocker);
DEFINE_NET_CLASS(CPredictedViewModel, 0x8c, 0x00, CBaseViewModel);
END_NET_CLASS(CPredictedViewModel);
DEFINE_NET_CLASS(CRagdollManager, 0x92, 0x00, netvar::class_base);
    /* m_iCurrentMaxRagdollCount at 9d8 */
    NET_CLASS_VAR_S(get_current_max_ragdoll_count, int, 0x9d8);
END_NET_CLASS(CRagdollManager);
DEFINE_NET_CLASS(CRopeKeyframe, 0x95, 0x00, netvar::class_base);
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* moveparent at 148 */
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    /* m_iParentAttachment at 2ec */
    NET_CLASS_VAR_S(get_parent_attachment, int, 0x2ec);
    /* m_nMinCPULevel at 988 */
    NET_CLASS_VAR_S(get_min_cpu_level, int32_t, 0x988);
    /* m_nMaxCPULevel at 989 */
    NET_CLASS_VAR_S(get_max_cpu_level, int32_t, 0x989);
    /* m_nMinGPULevel at 98a */
    NET_CLASS_VAR_S(get_min_gpu_level, int32_t, 0x98a);
    /* m_nMaxGPULevel at 98b */
    NET_CLASS_VAR_S(get_max_gpu_level, int32_t, 0x98b);
    /* m_flScrollSpeed at a0c */
    NET_CLASS_VAR_S(get_scroll_speed, float, 0xa0c);
    /* m_RopeFlags at a10 */
    NET_CLASS_VAR_S(get_rope_flags, int, 0xa10);
    /* m_iRopeMaterialModelIndex at a14 */
    NET_CLASS_VAR_S(get_rope_material_model_index, int, 0xa14);
    /* m_iDefaultRopeMaterialModelIndex at a18 */
    NET_CLASS_VAR_S(get_default_rope_material_model_index, int, 0xa18);
    /* m_nSegments at ca8 */
    NET_CLASS_VAR_S(get_segments, int32_t, 0xca8);
    /* m_hStartPoint at cac */
    NET_CLASS_VAR_S(get_start_point, EntityHandle, 0xcac);
    /* m_hEndPoint at cb0 */
    NET_CLASS_VAR_S(get_end_point, EntityHandle, 0xcb0);
    /* m_iStartAttachment at cb4 */
    NET_CLASS_VAR_S(get_start_attachment, int, 0xcb4);
    /* m_iEndAttachment at cb6 */
    NET_CLASS_VAR_S(get_end_attachment, int, 0xcb6);
    /* m_Subdiv at cb8 */
    NET_CLASS_VAR_S(get_subdiv, int, 0xcb8);
    /* m_RopeLength at cbc */
    NET_CLASS_VAR_S(get_rope_length, int, 0xcbc);
    /* m_Slack at cc0 */
    NET_CLASS_VAR_S(get_slack, int, 0xcc0);
    /* m_TextureScale at cc4 */
    NET_CLASS_VAR_S(get_texture_scale, float, 0xcc4);
    /* m_fLockedPoints at cc8 */
    NET_CLASS_VAR_S(get_locked_points, float, 0xcc8);
    /* m_nChangeCount at ccc */
    NET_CLASS_VAR_S(get_change_count, int32_t, 0xccc);
    /* m_Width at cd0 */
    NET_CLASS_VAR_S(get_width, float, 0xcd0);
    /* m_bConstrainBetweenEndpoints at d50 */
    NET_CLASS_VAR_S(is_constrain_between_endpoints, bool, 0xd50);
END_NET_CLASS(CRopeKeyframe);
DEFINE_NET_CLASS(CShadowControl, 0x9a, 0x00, CBaseEntity);
    /* m_shadowDirection at 9d8 */
    NET_CLASS_VAR_S(get_shadow_direction, Vector3f, 0x9d8);
    /* m_shadowColor at 9e4 */
    NET_CLASS_VAR_S(get_shadow_color, int, 0x9e4);
    /* m_flShadowMaxDist at 9e8 */
    NET_CLASS_VAR_S(get_shadow_max_dist, float, 0x9e8);
    /* m_bDisableShadows at 9ec */
    NET_CLASS_VAR_S(is_disable_shadows, bool, 0x9ec);
    /* m_bEnableLocalLightShadows at 9ed */
    NET_CLASS_VAR_S(is_enable_local_light_shadows, bool, 0x9ed);
END_NET_CLASS(CShadowControl);
DEFINE_NET_CLASS(CSlideshowDisplay, 0x9b, 0x00, CBaseEntity);
    /* m_bEnabled at 9d8 */
    NET_CLASS_VAR_S(is_enabled, bool, 0x9d8);
    /* m_szDisplayText at 9d9 */
    NET_CLASS_VAR_C(get_display_text, 0x9d9, /* max length */ 0x80);
    /* m_szSlideshowDirectory at a59 */
    NET_CLASS_VAR_C(get_slideshow_directory, 0xa59, /* max length */ 0x80);
    /* m_chCurrentSlideLists at af0 */
    NET_CLASS_VAR_A(get_ch_current_slide_lists, int, 0xaf0, /* element count */ 0x10, /* element size */ 0x1);
    /* m_fMinSlideTime at b08 */
    NET_CLASS_VAR_S(get_min_slide_time, float, 0xb08);
    /* m_fMaxSlideTime at b0c */
    NET_CLASS_VAR_S(get_max_slide_time, float, 0xb0c);
    /* m_iCycleType at b14 */
    NET_CLASS_VAR_S(get_cycle_type, int, 0xb14);
    /* m_bNoListRepeats at b18 */
    NET_CLASS_VAR_S(is_no_list_repeats, bool, 0xb18);
END_NET_CLASS(CSlideshowDisplay);
DEFINE_NET_CLASS(CSmokeStack, 0x9e, 0x00, CBaseParticleEntity);
    /* m_SpreadSpeed at b14 */
    NET_CLASS_VAR_S(get_spread_speed, float, 0xb14);
    /* m_Speed at b18 */
    NET_CLASS_VAR_S(get_speed, float, 0xb18);
    /* m_StartSize at b1c */
    NET_CLASS_VAR_S(get_start_size, float, 0xb1c);
    /* m_EndSize at b20 */
    NET_CLASS_VAR_S(get_end_size, float, 0xb20);
    /* m_Rate at b24 */
    NET_CLASS_VAR_S(get_rate, float, 0xb24);
    /* m_JetLength at b28 */
    NET_CLASS_VAR_S(get_jet_length, float, 0xb28);
    /* m_bEmit at b2c */
    NET_CLASS_VAR_S(is_emit, bool, 0xb2c);
    /* m_flBaseSpread at b30 */
    NET_CLASS_VAR_S(get_base_spread, float, 0xb30);
    /* m_AmbientLight.m_vPos at b34 */
    /* TODO: fix name for m_AmbientLight.m_vPos of type 2 */
    /* m_AmbientLight.m_vColor at b40 */
    /* TODO: fix name for m_AmbientLight.m_vColor of type 2 */
    /* m_AmbientLight.m_flIntensity at b4c */
    /* TODO: fix name for m_AmbientLight.m_flIntensity of type 1 */
    /* m_DirLight.m_vPos at b50 */
    /* TODO: fix name for m_DirLight.m_vPos of type 2 */
    /* m_DirLight.m_vColor at b5c */
    /* TODO: fix name for m_DirLight.m_vColor of type 2 */
    /* m_DirLight.m_flIntensity at b68 */
    /* TODO: fix name for m_DirLight.m_flIntensity of type 1 */
    /* m_vWind at b78 */
    NET_CLASS_VAR_S(get_v_wind, Vector3f, 0xb78);
    /* m_flTwist at b84 */
    NET_CLASS_VAR_S(get_twist, float, 0xb84);
    /* m_iMaterialModel at b88 */
    NET_CLASS_VAR_S(get_material_model, int, 0xb88);
    /* m_flRollSpeed at bc0 */
    NET_CLASS_VAR_S(get_roll_speed, float, 0xbc0);
END_NET_CLASS(CSmokeStack);
DEFINE_NET_CLASS(CSpatialEntity, 0xa2, 0x00, CBaseEntity);
    /* m_vecOrigin at 9d8 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x9d8);
    /* m_minFalloff at 9e4 */
    NET_CLASS_VAR_S(get_min_falloff, float, 0x9e4);
    /* m_maxFalloff at 9e8 */
    NET_CLASS_VAR_S(get_max_falloff, float, 0x9e8);
    /* m_flCurWeight at 9ec */
    NET_CLASS_VAR_S(get_cur_weight, float, 0x9ec);
    /* m_bEnabled at af4 */
    NET_CLASS_VAR_S(is_enabled, bool, 0xaf4);
END_NET_CLASS(CSpatialEntity);
DEFINE_NET_CLASS(CSpotlightEnd, 0xa3, 0x00, CBaseEntity);
    /* m_flLightScale at 9d8 */
    NET_CLASS_VAR_S(get_light_scale, float, 0x9d8);
    /* m_Radius at 9dc */
    NET_CLASS_VAR_S(get_radius, float, 0x9dc);
END_NET_CLASS(CSpotlightEnd);
DEFINE_NET_CLASS(CSprite, 0xa4, 0x00, CBaseEntity);
    /* m_hAttachedToEntity at 9e8 */
    NET_CLASS_VAR_S(get_attached_to_entity, EntityHandle, 0x9e8);
    /* m_nAttachment at 9ec */
    NET_CLASS_VAR_S(get_attachment, int32_t, 0x9ec);
    /* m_flSpriteFramerate at 9f0 */
    NET_CLASS_VAR_S(get_sprite_framerate, float, 0x9f0);
    /* m_flFrame at 9f4 */
    NET_CLASS_VAR_S(get_frame, float, 0x9f4);
    /* m_nBrightness at 9fc */
    NET_CLASS_VAR_S(get_brightness, int32_t, 0x9fc);
    /* m_flBrightnessTime at a00 */
    NET_CLASS_VAR_S(get_brightness_time, float, 0xa00);
    /* m_flSpriteScale at a04 */
    NET_CLASS_VAR_S(get_sprite_scale, float, 0xa04);
    /* m_flScaleTime at a08 */
    NET_CLASS_VAR_S(get_scale_time, float, 0xa08);
    /* m_bWorldSpaceScale at a0c */
    NET_CLASS_VAR_S(is_world_space_scale, bool, 0xa0c);
    /* m_flGlowProxySize at a10 */
    NET_CLASS_VAR_S(get_glow_proxy_size, float, 0xa10);
    /* m_flHDRColorScale at a14 */
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0xa14);
END_NET_CLASS(CSprite);
DEFINE_NET_CLASS(CSpriteOriented, 0xa5, 0x00, CSprite);
END_NET_CLASS(CSpriteOriented);
DEFINE_NET_CLASS(CSpriteTrail, 0xa6, 0x00, CSprite);
    /* m_flLifeTime at 1074 */
    NET_CLASS_VAR_S(get_life_time, float, 0x1074);
    /* m_flStartWidth at 1078 */
    NET_CLASS_VAR_S(get_start_width, float, 0x1078);
    /* m_flEndWidth at 107c */
    NET_CLASS_VAR_S(get_end_width, float, 0x107c);
    /* m_flStartWidthVariance at 1080 */
    NET_CLASS_VAR_S(get_start_width_variance, float, 0x1080);
    /* m_flTextureRes at 1084 */
    NET_CLASS_VAR_S(get_texture_res, float, 0x1084);
    /* m_flMinFadeLength at 1088 */
    NET_CLASS_VAR_S(get_min_fade_length, float, 0x1088);
    /* m_vecSkyboxOrigin at 108c */
    NET_CLASS_VAR_S(get_skybox_origin, Vector3f, 0x108c);
    /* m_flSkyboxScale at 1098 */
    NET_CLASS_VAR_S(get_skybox_scale, float, 0x1098);
END_NET_CLASS(CSpriteTrail);
DEFINE_NET_CLASS(CSteamJet, 0xa8, 0x00, CBaseParticleEntity);
    /* m_SpreadSpeed at ac4 */
    NET_CLASS_VAR_S(get_spread_speed, float, 0xac4);
    /* m_Speed at ac8 */
    NET_CLASS_VAR_S(get_speed, float, 0xac8);
    /* m_StartSize at acc */
    NET_CLASS_VAR_S(get_start_size, float, 0xacc);
    /* m_EndSize at ad0 */
    NET_CLASS_VAR_S(get_end_size, float, 0xad0);
    /* m_Rate at ad4 */
    NET_CLASS_VAR_S(get_rate, float, 0xad4);
    /* m_JetLength at ad8 */
    NET_CLASS_VAR_S(get_jet_length, float, 0xad8);
    /* m_bEmit at adc */
    NET_CLASS_VAR_S(is_emit, bool, 0xadc);
    /* m_nType at ae0 */
    NET_CLASS_VAR_S(get_type, int32_t, 0xae0);
    /* m_bFaceLeft at ae4 */
    NET_CLASS_VAR_S(is_face_left, bool, 0xae4);
    /* m_spawnflags at ae8 */
    NET_CLASS_VAR_S(get_spawnflags, int, 0xae8);
    /* m_flRollSpeed at aec */
    NET_CLASS_VAR_S(get_roll_speed, float, 0xaec);
END_NET_CLASS(CSteamJet);
DEFINE_NET_CLASS(CSun, 0xa9, 0x00, netvar::class_base);
    /* HDRColorScale at 0 */
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0x0);
    /* glowDistanceScale at 0 */
    NET_CLASS_VAR_S(get_glow_distance_scale, float, 0x0);
    /* m_clrRender at 70 */
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    /* m_clrOverlay at b38 */
    NET_CLASS_VAR_S(get_clr_overlay, int, 0xb38);
    /* m_nSize at b3c */
    NET_CLASS_VAR_S(get_size, int32_t, 0xb3c);
    /* m_nOverlaySize at b40 */
    NET_CLASS_VAR_S(get_overlay_size, int32_t, 0xb40);
    /* m_vDirection at b44 */
    NET_CLASS_VAR_S(get_v_direction, Vector3f, 0xb44);
    /* m_bOn at b50 */
    NET_CLASS_VAR_S(is_on, bool, 0xb50);
    /* m_nMaterial at b54 */
    NET_CLASS_VAR_S(get_material, int32_t, 0xb54);
    /* m_nOverlayMaterial at b58 */
    NET_CLASS_VAR_S(get_overlay_material, int32_t, 0xb58);
END_NET_CLASS(CSun);
DEFINE_NET_CLASS(CSunlightShadowControl, 0xaa, 0x00, CBaseEntity);
    /* m_shadowDirection at 9d8 */
    NET_CLASS_VAR_S(get_shadow_direction, Vector3f, 0x9d8);
    /* m_bEnabled at 9e4 */
    NET_CLASS_VAR_S(is_enabled, bool, 0x9e4);
    /* m_TextureName at 9e5 */
    NET_CLASS_VAR_C(get_texture_name, 0x9e5, /* max length */ 0x104);
    /* m_LightColor at af0 */
    NET_CLASS_VAR_S(get_light_color, int, 0xaf0);
    /* m_flColorTransitionTime at b04 */
    NET_CLASS_VAR_S(get_color_transition_time, float, 0xb04);
    /* m_flSunDistance at b08 */
    NET_CLASS_VAR_S(get_sun_distance, float, 0xb08);
    /* m_flFOV at b0c */
    NET_CLASS_VAR_S(get_fo_v, float, 0xb0c);
    /* m_flNearZ at b10 */
    NET_CLASS_VAR_S(get_near_z, float, 0xb10);
    /* m_flNorthOffset at b14 */
    NET_CLASS_VAR_S(get_north_offset, float, 0xb14);
    /* m_bEnableShadows at b18 */
    NET_CLASS_VAR_S(is_enable_shadows, bool, 0xb18);
END_NET_CLASS(CSunlightShadowControl);
DEFINE_NET_CLASS(CTeam, 0xad, 0x00, netvar::class_base);
    /* player_array_element at 0 */
    NET_CLASS_VAR_S(get_player_array_element, int, 0x0);
    /* m_szTeamname at 9ec */
    NET_CLASS_VAR_C(get_teamname, 0x9ec, /* max length */ 0x20);
    /* m_szClanTeamname at a0c */
    NET_CLASS_VAR_C(get_clan_teamname, 0xa0c, /* max length */ 0x20);
    /* m_szTeamFlagImage at a2c */
    NET_CLASS_VAR_C(get_team_flag_image, 0xa2c, /* max length */ 0x8);
    /* m_szTeamLogoImage at a34 */
    NET_CLASS_VAR_C(get_team_logo_image, 0xa34, /* max length */ 0x8);
    /* m_szTeamMatchStat at a3c */
    NET_CLASS_VAR_C(get_team_match_stat, 0xa3c, /* max length */ 0x104);
    /* m_scoreTotal at b40 */
    NET_CLASS_VAR_S(get_score_total, int, 0xb40);
    /* m_scoreFirstHalf at b44 */
    NET_CLASS_VAR_S(get_score_first_half, int, 0xb44);
    /* m_scoreSecondHalf at b48 */
    NET_CLASS_VAR_S(get_score_second_half, int, 0xb48);
    /* m_scoreOvertime at b4c */
    NET_CLASS_VAR_S(get_score_overtime, int, 0xb4c);
    /* m_nGGLeaderEntIndex_CT at b50 */
    NET_CLASS_VAR_S(get_gg_leader_ent_index_c_t, int32_t, 0xb50);
    /* m_nGGLeaderEntIndex_T at b54 */
    NET_CLASS_VAR_S(get_gg_leader_ent_index_t, int32_t, 0xb54);
    /* m_iClanID at b58 */
    NET_CLASS_VAR_S(get_clan_i_d, int, 0xb58);
    /* m_iTeamNum at b68 */
    NET_CLASS_VAR_S(get_team_num, int, 0xb68);
    /* m_bSurrendered at b6c */
    NET_CLASS_VAR_S(is_surrendered, bool, 0xb6c);
    /* m_numMapVictories at b70 */
    NET_CLASS_VAR_S(get_num_map_victories, int, 0xb70);
END_NET_CLASS(CTeam);
DEFINE_NET_CLASS(CTeamplayRoundBasedRulesProxy, 0xae, 0x00, CGameRulesProxy);
    /* teamplayroundbased_gamerules_data at 0 */
    /* data table reference for DT_TeamplayRoundBasedRules */
END_NET_CLASS(CTeamplayRoundBasedRulesProxy);
DEFINE_NET_CLASS(CTEBaseBeam, 0xb0, 0x00, netvar::class_base);
    /* m_nModelIndex at 10 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x10);
    /* m_nHaloIndex at 14 */
    NET_CLASS_VAR_S(get_halo_index, int32_t, 0x14);
    /* m_nStartFrame at 18 */
    NET_CLASS_VAR_S(get_start_frame, int32_t, 0x18);
    /* m_nFrameRate at 1c */
    NET_CLASS_VAR_S(get_frame_rate, int32_t, 0x1c);
    /* m_fLife at 20 */
    NET_CLASS_VAR_S(get_life, float, 0x20);
    /* m_fWidth at 24 */
    NET_CLASS_VAR_S(get_width, float, 0x24);
    /* m_fEndWidth at 28 */
    NET_CLASS_VAR_S(get_end_width, float, 0x28);
    /* m_nFadeLength at 2c */
    NET_CLASS_VAR_S(get_fade_length, int32_t, 0x2c);
    /* m_fAmplitude at 30 */
    NET_CLASS_VAR_S(get_amplitude, float, 0x30);
    /* r at 34 */
    NET_CLASS_VAR_S(get_r, int, 0x34);
    /* g at 38 */
    NET_CLASS_VAR_S(get_g, int, 0x38);
    /* b at 3c */
    NET_CLASS_VAR_S(get_b, int, 0x3c);
    /* a at 40 */
    NET_CLASS_VAR_S(get_a, int, 0x40);
    /* m_nSpeed at 44 */
    NET_CLASS_VAR_S(get_speed, int32_t, 0x44);
    /* m_nFlags at 48 */
    NET_CLASS_VAR_S(get_flags, int32_t, 0x48);
END_NET_CLASS(CTEBaseBeam);
DEFINE_NET_CLASS(CTEBeamEntPoint, 0xb1, 0x00, CTEBaseBeam);
    /* m_nStartEntity at 4c */
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    /* m_nEndEntity at 50 */
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
    /* m_vecStartPoint at 54 */
    NET_CLASS_VAR_S(get_start_point, Vector3f, 0x54);
    /* m_vecEndPoint at 60 */
    NET_CLASS_VAR_S(get_end_point, Vector3f, 0x60);
END_NET_CLASS(CTEBeamEntPoint);
DEFINE_NET_CLASS(CTEBeamEnts, 0xb2, 0x00, CTEBaseBeam);
    /* m_nStartEntity at 4c */
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    /* m_nEndEntity at 50 */
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
END_NET_CLASS(CTEBeamEnts);
DEFINE_NET_CLASS(CTEBeamFollow, 0xb3, 0x00, CTEBaseBeam);
    /* m_iEntIndex at 4c */
    NET_CLASS_VAR_S(get_ent_index, int, 0x4c);
END_NET_CLASS(CTEBeamFollow);
DEFINE_NET_CLASS(CTEBeamLaser, 0xb4, 0x00, CTEBaseBeam);
    /* m_nStartEntity at 4c */
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    /* m_nEndEntity at 50 */
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
END_NET_CLASS(CTEBeamLaser);
DEFINE_NET_CLASS(CTEBeamPoints, 0xb5, 0x00, CTEBaseBeam);
    /* m_vecStartPoint at 4c */
    NET_CLASS_VAR_S(get_start_point, Vector3f, 0x4c);
    /* m_vecEndPoint at 58 */
    NET_CLASS_VAR_S(get_end_point, Vector3f, 0x58);
END_NET_CLASS(CTEBeamPoints);
DEFINE_NET_CLASS(CTEBeamRing, 0xb6, 0x00, CTEBaseBeam);
    /* m_nStartEntity at 4c */
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    /* m_nEndEntity at 50 */
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
END_NET_CLASS(CTEBeamRing);
DEFINE_NET_CLASS(CTEBeamRingPoint, 0xb7, 0x00, CTEBaseBeam);
    /* m_vecCenter at 4c */
    NET_CLASS_VAR_S(get_center, Vector3f, 0x4c);
    /* m_flStartRadius at 58 */
    NET_CLASS_VAR_S(get_start_radius, float, 0x58);
    /* m_flEndRadius at 5c */
    NET_CLASS_VAR_S(get_end_radius, float, 0x5c);
END_NET_CLASS(CTEBeamRingPoint);
DEFINE_NET_CLASS(CTEBeamSpline, 0xb8, 0x00, netvar::class_base);
    /* m_vecPoints[0] at 10 */
    /* TODO: fix name for m_vecPoints[0] of type 2 */
    /* m_nPoints at d0 */
    NET_CLASS_VAR_S(get_points, int32_t, 0xd0);
END_NET_CLASS(CTEBeamSpline);
DEFINE_NET_CLASS(CTEBloodSprite, 0xb9, 0x00, netvar::class_base);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecDirection at 1c */
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    /* r at 28 */
    NET_CLASS_VAR_S(get_r, int, 0x28);
    /* g at 2c */
    NET_CLASS_VAR_S(get_g, int, 0x2c);
    /* b at 30 */
    NET_CLASS_VAR_S(get_b, int, 0x30);
    /* a at 34 */
    NET_CLASS_VAR_S(get_a, int, 0x34);
    /* m_nDropModel at 38 */
    NET_CLASS_VAR_S(get_drop_model, int32_t, 0x38);
    /* m_nSprayModel at 3c */
    NET_CLASS_VAR_S(get_spray_model, int32_t, 0x3c);
    /* m_nSize at 40 */
    NET_CLASS_VAR_S(get_size, int32_t, 0x40);
END_NET_CLASS(CTEBloodSprite);
DEFINE_NET_CLASS(CTEBreakModel, 0xbb, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_angRotation[0] at 1c */
    /* TODO: fix name for m_angRotation[0] of type 1 */
    /* m_angRotation[1] at 20 */
    /* TODO: fix name for m_angRotation[1] of type 1 */
    /* m_angRotation[2] at 24 */
    /* TODO: fix name for m_angRotation[2] of type 1 */
    /* m_vecSize at 28 */
    NET_CLASS_VAR_S(get_size, Vector3f, 0x28);
    /* m_vecVelocity at 34 */
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x34);
    /* m_nRandomization at 40 */
    NET_CLASS_VAR_S(get_randomization, int32_t, 0x40);
    /* m_nModelIndex at 44 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x44);
    /* m_nCount at 48 */
    NET_CLASS_VAR_S(get_count, int32_t, 0x48);
    /* m_fTime at 4c */
    NET_CLASS_VAR_S(get_time, float, 0x4c);
    /* m_nFlags at 50 */
    NET_CLASS_VAR_S(get_flags, int32_t, 0x50);
END_NET_CLASS(CTEBreakModel);
DEFINE_NET_CLASS(CTEBSPDecal, 0xbc, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_nEntity at 1c */
    NET_CLASS_VAR_S(get_entity, int32_t, 0x1c);
    /* m_nIndex at 20 */
    NET_CLASS_VAR_S(get_index, int32_t, 0x20);
END_NET_CLASS(CTEBSPDecal);
DEFINE_NET_CLASS(CTEBubbles, 0xbd, 0x00, CBaseTempEntity);
    /* m_vecMins at 10 */
    NET_CLASS_VAR_S(get_mins, Vector3f, 0x10);
    /* m_vecMaxs at 1c */
    NET_CLASS_VAR_S(get_maxs, Vector3f, 0x1c);
    /* m_fHeight at 28 */
    NET_CLASS_VAR_S(get_height, float, 0x28);
    /* m_nModelIndex at 2c */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x2c);
    /* m_nCount at 30 */
    NET_CLASS_VAR_S(get_count, int32_t, 0x30);
    /* m_fSpeed at 34 */
    NET_CLASS_VAR_S(get_speed, float, 0x34);
END_NET_CLASS(CTEBubbles);
DEFINE_NET_CLASS(CTEBubbleTrail, 0xbe, 0x00, CBaseTempEntity);
    /* m_vecMins at 10 */
    NET_CLASS_VAR_S(get_mins, Vector3f, 0x10);
    /* m_vecMaxs at 1c */
    NET_CLASS_VAR_S(get_maxs, Vector3f, 0x1c);
    /* m_flWaterZ at 28 */
    NET_CLASS_VAR_S(get_water_z, float, 0x28);
    /* m_nModelIndex at 2c */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x2c);
    /* m_nCount at 30 */
    NET_CLASS_VAR_S(get_count, int32_t, 0x30);
    /* m_fSpeed at 34 */
    NET_CLASS_VAR_S(get_speed, float, 0x34);
END_NET_CLASS(CTEBubbleTrail);
DEFINE_NET_CLASS(CTEClientProjectile, 0xbf, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecVelocity at 1c */
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x1c);
    /* m_nModelIndex at 28 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x28);
    /* m_nLifeTime at 2c */
    NET_CLASS_VAR_S(get_life_time, int32_t, 0x2c);
    /* m_hOwner at 30 */
    NET_CLASS_VAR_S(get_owner, EntityHandle, 0x30);
END_NET_CLASS(CTEClientProjectile);
DEFINE_NET_CLASS(CTEDecal, 0xc0, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecStart at 1c */
    NET_CLASS_VAR_S(get_start, Vector3f, 0x1c);
    /* m_nEntity at 28 */
    NET_CLASS_VAR_S(get_entity, int32_t, 0x28);
    /* m_nHitbox at 2c */
    NET_CLASS_VAR_S(get_hitbox, int32_t, 0x2c);
    /* m_nIndex at 30 */
    NET_CLASS_VAR_S(get_index, int32_t, 0x30);
END_NET_CLASS(CTEDecal);
DEFINE_NET_CLASS(CTEDynamicLight, 0xc2, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_fRadius at 1c */
    NET_CLASS_VAR_S(get_radius, float, 0x1c);
    /* r at 20 */
    NET_CLASS_VAR_S(get_r, int, 0x20);
    /* g at 24 */
    NET_CLASS_VAR_S(get_g, int, 0x24);
    /* b at 28 */
    NET_CLASS_VAR_S(get_b, int, 0x28);
    /* exponent at 2c */
    NET_CLASS_VAR_S(get_exponent, int, 0x2c);
    /* m_fTime at 30 */
    NET_CLASS_VAR_S(get_time, float, 0x30);
    /* m_fDecay at 34 */
    NET_CLASS_VAR_S(get_decay, float, 0x34);
END_NET_CLASS(CTEDynamicLight);
DEFINE_NET_CLASS(CTEEffectDispatch, 0xc3, 0x00, CBaseTempEntity);
    /* m_EffectData at 0 */
    /* data table reference for DT_EffectData */
END_NET_CLASS(CTEEffectDispatch);
DEFINE_NET_CLASS(CTEEnergySplash, 0xc4, 0x00, netvar::class_base);
    /* m_vecPos at 10 */
    NET_CLASS_VAR_S(get_pos, Vector3f, 0x10);
    /* m_vecDir at 1c */
    NET_CLASS_VAR_S(get_dir, Vector3f, 0x1c);
    /* m_bExplosive at 28 */
    NET_CLASS_VAR_S(is_explosive, bool, 0x28);
END_NET_CLASS(CTEEnergySplash);
DEFINE_NET_CLASS(CTEFireBullets, 0xc6, 0x00, netvar::class_base);
    /* m_iPlayer at 10 */
    NET_CLASS_VAR_S(get_player, int, 0x10);
    /* m_nItemDefIndex at 14 */
    NET_CLASS_VAR_S(get_item_def_index, int32_t, 0x14);
    /* m_vecOrigin at 18 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x18);
    /* m_vecAngles[0] at 24 */
    /* TODO: fix name for m_vecAngles[0] of type 1 */
    /* m_vecAngles[1] at 28 */
    /* TODO: fix name for m_vecAngles[1] of type 1 */
    /* m_weapon at 30 */
    NET_CLASS_VAR_S(get_weapon, int, 0x30);
    /* m_iWeaponID at 34 */
    NET_CLASS_VAR_S(get_weapon_i_d, int, 0x34);
    /* m_iMode at 38 */
    NET_CLASS_VAR_S(get_mode, int, 0x38);
    /* m_iSeed at 3c */
    NET_CLASS_VAR_S(get_seed, int, 0x3c);
    /* m_fInaccuracy at 40 */
    NET_CLASS_VAR_S(get_inaccuracy, float, 0x40);
    /* m_flRecoilIndex at 44 */
    NET_CLASS_VAR_S(get_recoil_index_f, float, 0x44);
    /* m_fSpread at 48 */
    NET_CLASS_VAR_S(get_spread, float, 0x48);
    /* m_iSoundType at 4c */
    NET_CLASS_VAR_S(get_sound_type, int, 0x4c);
END_NET_CLASS(CTEFireBullets);
DEFINE_NET_CLASS(CTEFizz, 0xc7, 0x00, CBaseTempEntity);
    /* m_nEntity at 10 */
    NET_CLASS_VAR_S(get_entity, int32_t, 0x10);
    /* m_nModelIndex at 14 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x14);
    /* m_nDensity at 18 */
    NET_CLASS_VAR_S(get_density, int32_t, 0x18);
    /* m_nCurrent at 1c */
    NET_CLASS_VAR_S(get_current, int32_t, 0x1c);
END_NET_CLASS(CTEFizz);
DEFINE_NET_CLASS(CTEFootprintDecal, 0xc8, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecDirection at 1c */
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    /* m_nEntity at 34 */
    NET_CLASS_VAR_S(get_entity, int32_t, 0x34);
    /* m_nIndex at 38 */
    NET_CLASS_VAR_S(get_index, int32_t, 0x38);
    /* m_chMaterialType at 3c */
    NET_CLASS_VAR_S(get_ch_material_type, int, 0x3c);
END_NET_CLASS(CTEFootprintDecal);
DEFINE_NET_CLASS(CTEFoundryHelpers, 0xc9, 0x00, CBaseTempEntity);
    /* m_iEntity at 10 */
    NET_CLASS_VAR_S(get_entity, int, 0x10);
END_NET_CLASS(CTEFoundryHelpers);
DEFINE_NET_CLASS(CTEGlowSprite, 0xcb, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_nModelIndex at 1c */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    /* m_fScale at 20 */
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    /* m_fLife at 24 */
    NET_CLASS_VAR_S(get_life, float, 0x24);
    /* m_nBrightness at 28 */
    NET_CLASS_VAR_S(get_brightness, int32_t, 0x28);
END_NET_CLASS(CTEGlowSprite);
DEFINE_NET_CLASS(CTEImpact, 0xcc, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecNormal at 1c */
    NET_CLASS_VAR_S(get_normal, Vector3f, 0x1c);
    /* m_iType at 28 */
    NET_CLASS_VAR_S(get_type, int, 0x28);
    /* m_ucFlags at 2c */
    NET_CLASS_VAR_S(get_uc_flags, int, 0x2c);
END_NET_CLASS(CTEImpact);
DEFINE_NET_CLASS(CTEKillPlayerAttachments, 0xcd, 0x00, CBaseTempEntity);
    /* m_nPlayer at 10 */
    NET_CLASS_VAR_S(get_player, int32_t, 0x10);
END_NET_CLASS(CTEKillPlayerAttachments);
DEFINE_NET_CLASS(CTEMetalSparks, 0xcf, 0x00, netvar::class_base);
    /* m_vecPos at 10 */
    NET_CLASS_VAR_S(get_pos, Vector3f, 0x10);
    /* m_vecDir at 1c */
    NET_CLASS_VAR_S(get_dir, Vector3f, 0x1c);
END_NET_CLASS(CTEMetalSparks);
DEFINE_NET_CLASS(CTEMuzzleFlash, 0xd0, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecAngles at 1c */
    NET_CLASS_VAR_S(get_angles, Vector3f, 0x1c);
    /* m_flScale at 28 */
    NET_CLASS_VAR_S(get_scale, float, 0x28);
    /* m_nType at 2c */
    NET_CLASS_VAR_S(get_type, int32_t, 0x2c);
END_NET_CLASS(CTEMuzzleFlash);
DEFINE_NET_CLASS(CTEParticleSystem, 0xd1, 0x00, CBaseTempEntity);
    /* m_vecOrigin[0] at 10 */
    /* TODO: fix name for m_vecOrigin[0] of type 1 */
    /* m_vecOrigin[1] at 14 */
    /* TODO: fix name for m_vecOrigin[1] of type 1 */
    /* m_vecOrigin[2] at 18 */
    /* TODO: fix name for m_vecOrigin[2] of type 1 */
END_NET_CLASS(CTEParticleSystem);
DEFINE_NET_CLASS(CTEPhysicsProp, 0xd2, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_angRotation[0] at 1c */
    /* TODO: fix name for m_angRotation[0] of type 1 */
    /* m_angRotation[1] at 20 */
    /* TODO: fix name for m_angRotation[1] of type 1 */
    /* m_angRotation[2] at 24 */
    /* TODO: fix name for m_angRotation[2] of type 1 */
    /* m_vecVelocity at 28 */
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x28);
    /* m_nModelIndex at 34 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x34);
    /* m_nSkin at 38 */
    NET_CLASS_VAR_S(get_skin, int32_t, 0x38);
    /* m_nFlags at 3c */
    NET_CLASS_VAR_S(get_flags, int32_t, 0x3c);
    /* m_nEffects at 40 */
    NET_CLASS_VAR_S(get_effects, int32_t, 0x40);
    /* m_clrRender at 44 */
    NET_CLASS_VAR_S(get_clr_render, int, 0x44);
END_NET_CLASS(CTEPhysicsProp);
DEFINE_NET_CLASS(CTEPlantBomb, 0xd3, 0x00, netvar::class_base);
    /* m_iPlayer at 10 */
    NET_CLASS_VAR_S(get_player, int, 0x10);
    /* m_vecOrigin at 14 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x14);
    /* m_option at 20 */
    NET_CLASS_VAR_S(get_option, int, 0x20);
END_NET_CLASS(CTEPlantBomb);
DEFINE_NET_CLASS(CTEPlayerAnimEvent, 0xd4, 0x00, netvar::class_base);
    /* m_hPlayer at 10 */
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x10);
    /* m_iEvent at 14 */
    NET_CLASS_VAR_S(get_event, int, 0x14);
    /* m_nData at 18 */
    NET_CLASS_VAR_S(get_data, int32_t, 0x18);
END_NET_CLASS(CTEPlayerAnimEvent);
DEFINE_NET_CLASS(CTEPlayerDecal, 0xd5, 0x00, CBaseTempEntity);
    /* m_nPlayer at 10 */
    NET_CLASS_VAR_S(get_player, int32_t, 0x10);
    /* m_vecOrigin at 14 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x14);
    /* m_vecStart at 20 */
    NET_CLASS_VAR_S(get_start, Vector3f, 0x20);
    /* m_vecRight at 2c */
    NET_CLASS_VAR_S(get_right, Vector3f, 0x2c);
    /* m_nEntity at 38 */
    NET_CLASS_VAR_S(get_entity, int32_t, 0x38);
    /* m_nHitbox at 3c */
    NET_CLASS_VAR_S(get_hitbox, int32_t, 0x3c);
END_NET_CLASS(CTEPlayerDecal);
DEFINE_NET_CLASS(CTEProjectedDecal, 0xd6, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_angRotation at 1c */
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x1c);
    /* m_flDistance at 28 */
    NET_CLASS_VAR_S(get_distance, float, 0x28);
    /* m_nIndex at 2c */
    NET_CLASS_VAR_S(get_index, int32_t, 0x2c);
END_NET_CLASS(CTEProjectedDecal);
DEFINE_NET_CLASS(CTERadioIcon, 0xd7, 0x00, CBaseTempEntity);
    /* m_iAttachToClient at 10 */
    NET_CLASS_VAR_S(get_attach_to_client, int, 0x10);
END_NET_CLASS(CTERadioIcon);
DEFINE_NET_CLASS(CTEShatterSurface, 0xd8, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecAngles at 1c */
    NET_CLASS_VAR_S(get_angles, Vector3f, 0x1c);
    /* m_vecForce at 28 */
    NET_CLASS_VAR_S(get_force, Vector3f, 0x28);
    /* m_vecForcePos at 34 */
    NET_CLASS_VAR_S(get_force_pos, Vector3f, 0x34);
    /* m_flWidth at 40 */
    NET_CLASS_VAR_S(get_width, float, 0x40);
    /* m_flHeight at 44 */
    NET_CLASS_VAR_S(get_height, float, 0x44);
    /* m_flShardSize at 48 */
    NET_CLASS_VAR_S(get_shard_size, float, 0x48);
    /* m_nSurfaceType at 50 */
    NET_CLASS_VAR_S(get_surface_type, int32_t, 0x50);
    /* m_uchFrontColor[0] at 54 */
    /* TODO: fix name for m_uchFrontColor[0] of type 0 */
    /* m_uchFrontColor[1] at 55 */
    /* TODO: fix name for m_uchFrontColor[1] of type 0 */
    /* m_uchFrontColor[2] at 56 */
    /* TODO: fix name for m_uchFrontColor[2] of type 0 */
    /* m_uchBackColor[0] at 57 */
    /* TODO: fix name for m_uchBackColor[0] of type 0 */
    /* m_uchBackColor[1] at 58 */
    /* TODO: fix name for m_uchBackColor[1] of type 0 */
    /* m_uchBackColor[2] at 59 */
    /* TODO: fix name for m_uchBackColor[2] of type 0 */
END_NET_CLASS(CTEShatterSurface);
DEFINE_NET_CLASS(CTEShowLine, 0xd9, 0x00, CTEParticleSystem);
    /* m_vecEnd at 1c */
    NET_CLASS_VAR_S(get_end, Vector3f, 0x1c);
END_NET_CLASS(CTEShowLine);
DEFINE_NET_CLASS(CTesla, 0xda, 0x00, CBaseEntity);
    /* m_SoundName at a00 */
    NET_CLASS_VAR_C(get_sound_name, 0xa00, /* max length */ 0x40);
    /* m_iszSpriteName at a40 */
    NET_CLASS_VAR_C(get_isz_sprite_name, 0xa40, /* max length */ 0x100);
END_NET_CLASS(CTesla);
DEFINE_NET_CLASS(CTESmoke, 0xdb, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_nModelIndex at 1c */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    /* m_fScale at 20 */
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    /* m_nFrameRate at 24 */
    NET_CLASS_VAR_S(get_frame_rate, int32_t, 0x24);
END_NET_CLASS(CTESmoke);
DEFINE_NET_CLASS(CTESparks, 0xdc, 0x00, CTEParticleSystem);
    /* m_nMagnitude at 1c */
    NET_CLASS_VAR_S(get_magnitude, int32_t, 0x1c);
    /* m_nTrailLength at 20 */
    NET_CLASS_VAR_S(get_trail_length, int32_t, 0x20);
    /* m_vecDir at 24 */
    NET_CLASS_VAR_S(get_dir, Vector3f, 0x24);
END_NET_CLASS(CTESparks);
DEFINE_NET_CLASS(CTESprite, 0xdd, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_nModelIndex at 1c */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    /* m_fScale at 20 */
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    /* m_nBrightness at 24 */
    NET_CLASS_VAR_S(get_brightness, int32_t, 0x24);
END_NET_CLASS(CTESprite);
DEFINE_NET_CLASS(CTESpriteSpray, 0xde, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_vecDirection at 1c */
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    /* m_nModelIndex at 28 */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x28);
    /* m_nSpeed at 2c */
    NET_CLASS_VAR_S(get_speed, int32_t, 0x2c);
    /* m_fNoise at 30 */
    NET_CLASS_VAR_S(get_noise, float, 0x30);
    /* m_nCount at 34 */
    NET_CLASS_VAR_S(get_count, int32_t, 0x34);
END_NET_CLASS(CTESpriteSpray);
DEFINE_NET_CLASS(CTest_ProxyToggle_Networkable, 0xdf, 0x00, CBaseEntity);
    /* blah at 0 */
    /* data table reference for DT_ProxyToggle_ProxiedData */
END_NET_CLASS(CTest_ProxyToggle_Networkable);
DEFINE_NET_CLASS(CTestTraceline, 0xe0, 0x00, netvar::class_base);
    /* m_clrRender at 70 */
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    /* m_angRotation[0] at 12c */
    /* TODO: fix name for m_angRotation[0] of type 1 */
    /* m_angRotation[1] at 130 */
    /* TODO: fix name for m_angRotation[1] of type 1 */
    /* m_angRotation[2] at 134 */
    /* TODO: fix name for m_angRotation[2] of type 1 */
    /* m_vecOrigin at 138 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    /* moveparent at 148 */
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
END_NET_CLASS(CTestTraceline);
DEFINE_NET_CLASS(CTEWorldDecal, 0xe1, 0x00, CBaseTempEntity);
    /* m_vecOrigin at 10 */
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* m_nIndex at 1c */
    NET_CLASS_VAR_S(get_index, int32_t, 0x1c);
END_NET_CLASS(CTEWorldDecal);
DEFINE_NET_CLASS(CTriggerPlayerMovement, 0xe2, 0x00, CBaseTrigger);
END_NET_CLASS(CTriggerPlayerMovement);
DEFINE_NET_CLASS(CTriggerSoundOperator, 0xe3, 0x00, CBaseTrigger);
    /* m_nSoundOperator at a10 */
    NET_CLASS_VAR_S(get_sound_operator, int32_t, 0xa10);
END_NET_CLASS(CTriggerSoundOperator);
DEFINE_NET_CLASS(CVGuiScreen, 0xe4, 0x00, CBaseEntity);
    /* m_flWidth at 9e0 */
    NET_CLASS_VAR_S(get_width, float, 0x9e0);
    /* m_flHeight at 9e4 */
    NET_CLASS_VAR_S(get_height, float, 0x9e4);
    /* m_nPanelName at 9e8 */
    NET_CLASS_VAR_S(get_panel_name, int32_t, 0x9e8);
    /* m_nAttachmentIndex at a04 */
    NET_CLASS_VAR_S(get_attachment_index, int32_t, 0xa04);
    /* m_nOverlayMaterial at a08 */
    NET_CLASS_VAR_S(get_overlay_material, int32_t, 0xa08);
    /* m_fScreenFlags at a0c */
    NET_CLASS_VAR_S(get_screen_flags, float, 0xa0c);
    /* m_hPlayerOwner at a68 */
    NET_CLASS_VAR_S(get_player_owner, EntityHandle, 0xa68);
END_NET_CLASS(CVGuiScreen);
DEFINE_NET_CLASS(CVoteController, 0xe5, 0x00, CBaseEntity);
    /* m_iActiveIssueIndex at 9e4 */
    NET_CLASS_VAR_S(get_active_issue_index, int, 0x9e4);
    /* m_iOnlyTeamToVote at 9e8 */
    NET_CLASS_VAR_S(get_only_team_to_vote, int, 0x9e8);
    /* m_nVoteOptionCount at 9ec */
    NET_CLASS_VAR_A(get_vote_option_count, int32_t, 0x9ec, /* element count */ 0x5, /* element size */ 0x4);
    /* m_nPotentialVotes at a04 */
    NET_CLASS_VAR_S(get_potential_votes, int32_t, 0xa04);
    /* m_bIsYesNoVote at a0a */
    NET_CLASS_VAR_S(is_yes_no_vote, bool, 0xa0a);
END_NET_CLASS(CVoteController);
DEFINE_NET_CLASS(CWaterLODControl, 0xe7, 0x00, CBaseEntity);
    /* m_flCheapWaterStartDistance at 9d8 */
    NET_CLASS_VAR_S(get_cheap_water_start_distance, float, 0x9d8);
    /* m_flCheapWaterEndDistance at 9dc */
    NET_CLASS_VAR_S(get_cheap_water_end_distance, float, 0x9dc);
END_NET_CLASS(CWaterLODControl);
DEFINE_NET_CLASS(CWorld, 0x113, 0x00, CBaseEntity);
    /* m_flWaveHeight at 9d8 */
    NET_CLASS_VAR_S(get_wave_height, float, 0x9d8);
    /* m_WorldMins at 9dc */
    NET_CLASS_VAR_S(get_world_mins, Vector3f, 0x9dc);
    /* m_WorldMaxs at 9e8 */
    NET_CLASS_VAR_S(get_world_maxs, Vector3f, 0x9e8);
    /* m_bStartDark at 9f4 */
    NET_CLASS_VAR_S(is_start_dark, bool, 0x9f4);
    /* m_flMaxOccludeeArea at 9f8 */
    NET_CLASS_VAR_S(get_max_occludee_area, float, 0x9f8);
    /* m_flMinOccluderArea at 9fc */
    NET_CLASS_VAR_S(get_min_occluder_area, float, 0x9fc);
    /* m_flMinPropScreenSpaceWidth at a00 */
    NET_CLASS_VAR_S(get_min_prop_screen_space_width, float, 0xa00);
    /* m_flMaxPropScreenSpaceWidth at a04 */
    NET_CLASS_VAR_S(get_max_prop_screen_space_width, float, 0xa04);
    /* m_bColdWorld at a08 */
    NET_CLASS_VAR_S(is_cold_world, bool, 0xa08);
    /* m_iTimeOfDay at a0c */
    NET_CLASS_VAR_S(get_time_of_day, int, 0xa0c);
    /* m_iszDetailSpriteMaterial at a10 */
    NET_CLASS_VAR_C(get_isz_detail_sprite_material, 0xa10, /* max length */ 0x100);
END_NET_CLASS(CWorld);
DEFINE_NET_CLASS(CWorldVguiText, 0x114, 0x00, CBaseEntity);
    /* m_bEnabled at 9d8 */
    NET_CLASS_VAR_S(is_enabled, bool, 0x9d8);
    /* m_szDisplayText at 9d9 */
    NET_CLASS_VAR_C(get_display_text, 0x9d9, /* max length */ 0x200);
    /* m_szDisplayTextOption at bd9 */
    NET_CLASS_VAR_C(get_display_text_option, 0xbd9, /* max length */ 0x100);
    /* m_szFont at cd9 */
    NET_CLASS_VAR_C(get_font, 0xcd9, /* max length */ 0x40);
    /* m_clrText at d19 */
    NET_CLASS_VAR_S(get_clr_text, int, 0xd19);
    /* m_iTextPanelWidth at d20 */
    NET_CLASS_VAR_S(get_text_panel_width, int, 0xd20);
END_NET_CLASS(CWorldVguiText);
DEFINE_NET_CLASS(DustTrail, 0x115, 0x00, CBaseParticleEntity);
    /* m_SpawnRate at ac4 */
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    /* m_Color at ac8 */
    NET_CLASS_VAR_S(get_color, Vector3f, 0xac8);
    /* m_Opacity at ad4 */
    NET_CLASS_VAR_S(get_opacity, float, 0xad4);
    /* m_ParticleLifetime at ad8 */
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xad8);
    /* m_StopEmitTime at ae0 */
    NET_CLASS_VAR_S(get_stop_emit_time, float, 0xae0);
    /* m_MinSpeed at ae4 */
    NET_CLASS_VAR_S(get_min_speed, float, 0xae4);
    /* m_MaxSpeed at ae8 */
    NET_CLASS_VAR_S(get_max_speed, float, 0xae8);
    /* m_MinDirectedSpeed at aec */
    NET_CLASS_VAR_S(get_min_directed_speed, float, 0xaec);
    /* m_MaxDirectedSpeed at af0 */
    NET_CLASS_VAR_S(get_max_directed_speed, float, 0xaf0);
    /* m_StartSize at af4 */
    NET_CLASS_VAR_S(get_start_size, float, 0xaf4);
    /* m_EndSize at af8 */
    NET_CLASS_VAR_S(get_end_size, float, 0xaf8);
    /* m_SpawnRadius at afc */
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xafc);
    /* m_bEmit at b0c */
    NET_CLASS_VAR_S(is_emit, bool, 0xb0c);
END_NET_CLASS(DustTrail);
DEFINE_NET_CLASS(MovieExplosion, 0x116, 0x00, CBaseParticleEntity);
END_NET_CLASS(MovieExplosion);
DEFINE_NET_CLASS(ParticleSmokeGrenade, 0x117, 0x00, CBaseParticleEntity);
    /* m_CurrentStage at ac4 */
    NET_CLASS_VAR_S(get_current_stage, int, 0xac4);
    /* m_flSpawnTime at ad4 */
    NET_CLASS_VAR_S(get_spawn_time, float, 0xad4);
    /* m_FadeStartTime at ad8 */
    NET_CLASS_VAR_S(get_fade_start_time, float, 0xad8);
    /* m_FadeEndTime at adc */
    NET_CLASS_VAR_S(get_fade_end_time, float, 0xadc);
    /* m_MinColor at ae4 */
    NET_CLASS_VAR_S(get_min_color, Vector3f, 0xae4);
    /* m_MaxColor at af0 */
    NET_CLASS_VAR_S(get_max_color, Vector3f, 0xaf0);
END_NET_CLASS(ParticleSmokeGrenade);
DEFINE_NET_CLASS(RocketTrail, 0x118, 0x00, CBaseParticleEntity);
    /* m_SpawnRate at ac4 */
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    /* m_StartColor at ac8 */
    NET_CLASS_VAR_S(get_start_color, Vector3f, 0xac8);
    /* m_EndColor at ad4 */
    NET_CLASS_VAR_S(get_end_color, Vector3f, 0xad4);
    /* m_Opacity at ae0 */
    NET_CLASS_VAR_S(get_opacity, float, 0xae0);
    /* m_ParticleLifetime at ae4 */
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xae4);
    /* m_StopEmitTime at ae8 */
    NET_CLASS_VAR_S(get_stop_emit_time, float, 0xae8);
    /* m_MinSpeed at aec */
    NET_CLASS_VAR_S(get_min_speed, float, 0xaec);
    /* m_MaxSpeed at af0 */
    NET_CLASS_VAR_S(get_max_speed, float, 0xaf0);
    /* m_StartSize at af4 */
    NET_CLASS_VAR_S(get_start_size, float, 0xaf4);
    /* m_EndSize at af8 */
    NET_CLASS_VAR_S(get_end_size, float, 0xaf8);
    /* m_SpawnRadius at afc */
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xafc);
    /* m_bEmit at b0c */
    NET_CLASS_VAR_S(is_emit, bool, 0xb0c);
    /* m_bDamaged at b0d */
    NET_CLASS_VAR_S(is_damaged, bool, 0xb0d);
    /* m_nAttachment at b10 */
    NET_CLASS_VAR_S(get_attachment, int32_t, 0xb10);
    /* m_flFlareScale at b20 */
    NET_CLASS_VAR_S(get_flare_scale, float, 0xb20);
END_NET_CLASS(RocketTrail);
DEFINE_NET_CLASS(SmokeTrail, 0x119, 0x00, CBaseParticleEntity);
    /* m_SpawnRate at ac4 */
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    /* m_StartColor at ac8 */
    NET_CLASS_VAR_S(get_start_color, Vector3f, 0xac8);
    /* m_EndColor at ad4 */
    NET_CLASS_VAR_S(get_end_color, Vector3f, 0xad4);
    /* m_Opacity at ae0 */
    NET_CLASS_VAR_S(get_opacity, float, 0xae0);
    /* m_ParticleLifetime at ae4 */
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xae4);
    /* m_StopEmitTime at ae8 */
    NET_CLASS_VAR_S(get_stop_emit_time, float, 0xae8);
    /* m_MinSpeed at aec */
    NET_CLASS_VAR_S(get_min_speed, float, 0xaec);
    /* m_MaxSpeed at af0 */
    NET_CLASS_VAR_S(get_max_speed, float, 0xaf0);
    /* m_MinDirectedSpeed at af4 */
    NET_CLASS_VAR_S(get_min_directed_speed, float, 0xaf4);
    /* m_MaxDirectedSpeed at af8 */
    NET_CLASS_VAR_S(get_max_directed_speed, float, 0xaf8);
    /* m_StartSize at afc */
    NET_CLASS_VAR_S(get_start_size, float, 0xafc);
    /* m_EndSize at b00 */
    NET_CLASS_VAR_S(get_end_size, float, 0xb00);
    /* m_SpawnRadius at b04 */
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xb04);
    /* m_bEmit at b14 */
    NET_CLASS_VAR_S(is_emit, bool, 0xb14);
    /* m_nAttachment at b18 */
    NET_CLASS_VAR_S(get_attachment, int32_t, 0xb18);
END_NET_CLASS(SmokeTrail);
DEFINE_NET_CLASS(SporeExplosion, 0x11a, 0x00, CBaseParticleEntity);
    /* m_flSpawnRate at ac4 */
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    /* m_flParticleLifetime at ac8 */
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xac8);
    /* m_flStartSize at acc */
    NET_CLASS_VAR_S(get_start_size, float, 0xacc);
    /* m_flEndSize at ad0 */
    NET_CLASS_VAR_S(get_end_size, float, 0xad0);
    /* m_flSpawnRadius at ad4 */
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xad4);
    /* m_bEmit at adc */
    NET_CLASS_VAR_S(is_emit, bool, 0xadc);
    /* m_bDontRemove at add */
    NET_CLASS_VAR_S(is_dont_remove, bool, 0xadd);
END_NET_CLASS(SporeExplosion);
DEFINE_NET_CLASS(SporeTrail, 0x11b, 0x00, CBaseParticleEntity);
    /* m_vecEndColor at ac0 */
    NET_CLASS_VAR_S(get_end_color, Vector3f, 0xac0);
    /* m_flSpawnRate at acc */
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xacc);
    /* m_flParticleLifetime at ad0 */
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xad0);
    /* m_flStartSize at ad4 */
    NET_CLASS_VAR_S(get_start_size, float, 0xad4);
    /* m_flEndSize at ad8 */
    NET_CLASS_VAR_S(get_end_size, float, 0xad8);
    /* m_flSpawnRadius at adc */
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xadc);
    /* m_bEmit at aec */
    NET_CLASS_VAR_S(is_emit, bool, 0xaec);
END_NET_CLASS(SporeTrail);
DEFINE_NET_CLASS(DT_CSGameRules, 0x0, 0x00, netvar::class_base);
    /* m_SurvivalRules at 0 */
    /* data table reference for DT_SurvivalGameRules */
    /* m_RetakeRules at 0 */
    /* data table reference for DT_RetakeGameRules */
    /* m_bFreezePeriod at 20 */
    NET_CLASS_VAR_S(is_freeze_period, bool, 0x20);
    /* m_bWarmupPeriod at 21 */
    NET_CLASS_VAR_S(is_warmup_period, bool, 0x21);
    /* m_fWarmupPeriodEnd at 24 */
    NET_CLASS_VAR_S(get_warmup_period_end, float, 0x24);
    /* m_fWarmupPeriodStart at 28 */
    NET_CLASS_VAR_S(get_warmup_period_start, float, 0x28);
    /* m_bTerroristTimeOutActive at 2c */
    NET_CLASS_VAR_S(is_terrorist_time_out_active, bool, 0x2c);
    /* m_bCTTimeOutActive at 2d */
    NET_CLASS_VAR_S(is_ct_time_out_active, bool, 0x2d);
    /* m_flTerroristTimeOutRemaining at 30 */
    NET_CLASS_VAR_S(get_terrorist_time_out_remaining, float, 0x30);
    /* m_flCTTimeOutRemaining at 34 */
    NET_CLASS_VAR_S(get_ct_time_out_remaining, float, 0x34);
    /* m_nTerroristTimeOuts at 38 */
    NET_CLASS_VAR_S(get_terrorist_time_outs, int32_t, 0x38);
    /* m_nCTTimeOuts at 3c */
    NET_CLASS_VAR_S(get_ct_time_outs, int32_t, 0x3c);
    /* m_bTechnicalTimeOut at 40 */
    NET_CLASS_VAR_S(is_technical_time_out, bool, 0x40);
    /* m_bMatchWaitingForResume at 41 */
    NET_CLASS_VAR_S(is_match_waiting_for_resume, bool, 0x41);
    /* m_iRoundTime at 44 */
    NET_CLASS_VAR_S(get_round_time, int, 0x44);
    /* m_fMatchStartTime at 48 */
    NET_CLASS_VAR_S(get_match_start_time, float, 0x48);
    /* m_fRoundStartTime at 4c */
    NET_CLASS_VAR_S(get_round_start_time, float, 0x4c);
    /* m_flRestartRoundTime at 50 */
    NET_CLASS_VAR_S(get_restart_round_time, float, 0x50);
    /* m_bGameRestart at 54 */
    NET_CLASS_VAR_S(is_game_restart, bool, 0x54);
    /* m_flGameStartTime at 58 */
    NET_CLASS_VAR_S(get_game_start_time, float, 0x58);
    /* m_timeUntilNextPhaseStarts at 5c */
    NET_CLASS_VAR_S(get_time_until_next_phase_starts, float, 0x5c);
    /* m_gamePhase at 60 */
    NET_CLASS_VAR_S(get_game_phase, int, 0x60);
    /* m_totalRoundsPlayed at 64 */
    NET_CLASS_VAR_S(get_total_rounds_played, int, 0x64);
    /* m_nOvertimePlaying at 68 */
    NET_CLASS_VAR_S(get_overtime_playing, int32_t, 0x68);
    /* m_iHostagesRemaining at 6c */
    NET_CLASS_VAR_S(get_hostages_remaining, int, 0x6c);
    /* m_bAnyHostageReached at 70 */
    NET_CLASS_VAR_S(is_any_hostage_reached, bool, 0x70);
    /* m_bMapHasBombTarget at 71 */
    NET_CLASS_VAR_S(is_map_has_bomb_target, bool, 0x71);
    /* m_bMapHasRescueZone at 72 */
    NET_CLASS_VAR_S(is_map_has_rescue_zone, bool, 0x72);
    /* m_bMapHasBuyZone at 73 */
    NET_CLASS_VAR_S(is_map_has_buy_zone, bool, 0x73);
    /* m_bIsQueuedMatchmaking at 74 */
    NET_CLASS_VAR_S(is_queued_matchmaking, bool, 0x74);
    /* m_nQueuedMatchmakingMode at 78 */
    NET_CLASS_VAR_S(get_queued_matchmaking_mode, int32_t, 0x78);
    /* m_bIsValveDS at 7c */
    NET_CLASS_VAR_S(is_valve_d_s, bool, 0x7c);
    /* m_bLogoMap at 7d */
    NET_CLASS_VAR_S(is_logo_map, bool, 0x7d);
    /* m_bPlayAllStepSoundsOnServer at 7e */
    NET_CLASS_VAR_S(is_play_all_step_sounds_on_server, bool, 0x7e);
    /* m_iNumGunGameProgressiveWeaponsCT at 80 */
    NET_CLASS_VAR_S(get_num_gun_game_progressive_weapons_c_t, int, 0x80);
    /* m_iNumGunGameProgressiveWeaponsT at 84 */
    NET_CLASS_VAR_S(get_num_gun_game_progressive_weapons_t, int, 0x84);
    /* m_iSpectatorSlotCount at 88 */
    NET_CLASS_VAR_S(get_spectator_slot_count, int, 0x88);
    /* m_GGProgressiveWeaponOrderCT at 8c */
    NET_CLASS_VAR_A(get_gg_progressive_weapon_order_c_t, int, 0x8c, /* element count */ 0x3c, /* element size */ 0x4);
    /* m_GGProgressiveWeaponOrderT at 17c */
    NET_CLASS_VAR_A(get_gg_progressive_weapon_order_t, int, 0x17c, /* element count */ 0x3c, /* element size */ 0x4);
    /* m_GGProgressiveWeaponKillUpgradeOrderCT at 26c */
    NET_CLASS_VAR_A(get_gg_progressive_weapon_kill_upgrade_order_c_t, int, 0x26c, /* element count */ 0x3c, /* element size */ 0x4);
    /* m_GGProgressiveWeaponKillUpgradeOrderT at 35c */
    NET_CLASS_VAR_A(get_gg_progressive_weapon_kill_upgrade_order_t, int, 0x35c, /* element count */ 0x3c, /* element size */ 0x4);
    /* m_MatchDevice at 44c */
    NET_CLASS_VAR_S(get_match_device, int, 0x44c);
    /* m_bHasMatchStarted at 450 */
    NET_CLASS_VAR_S(has_match_started, bool, 0x450);
    /* m_flDMBonusStartTime at 454 */
    NET_CLASS_VAR_S(get_dm_bonus_start_time, float, 0x454);
    /* m_flDMBonusTimeLength at 458 */
    NET_CLASS_VAR_S(get_dm_bonus_time_length, float, 0x458);
    /* m_unDMBonusWeaponLoadoutSlot at 45c */
    NET_CLASS_VAR_S(get_dm_bonus_weapon_loadout_slot, uint32_t, 0x45c);
    /* m_bDMBonusActive at 45e */
    NET_CLASS_VAR_S(is_dm_bonus_active, bool, 0x45e);
    /* m_nNextMapInMapgroup at 460 */
    NET_CLASS_VAR_S(get_next_map_in_mapgroup, int32_t, 0x460);
    /* m_szTournamentEventName at 464 */
    NET_CLASS_VAR_C(get_tournament_event_name, 0x464, /* max length */ 0x104);
    /* m_szTournamentEventStage at 568 */
    NET_CLASS_VAR_C(get_tournament_event_stage, 0x568, /* max length */ 0x104);
    /* m_szMatchStatTxt at 66c */
    NET_CLASS_VAR_C(get_match_stat_txt, 0x66c, /* max length */ 0x104);
    /* m_szTournamentPredictionsTxt at 770 */
    NET_CLASS_VAR_C(get_tournament_predictions_txt, 0x770, /* max length */ 0x104);
    /* m_nTournamentPredictionsPct at 874 */
    NET_CLASS_VAR_S(get_tournament_predictions_pct, int32_t, 0x874);
    /* m_flCMMItemDropRevealStartTime at 878 */
    NET_CLASS_VAR_S(get_cmm_item_drop_reveal_start_time, float, 0x878);
    /* m_flCMMItemDropRevealEndTime at 87c */
    NET_CLASS_VAR_S(get_cmm_item_drop_reveal_end_time, float, 0x87c);
    /* m_bIsDroppingItems at 880 */
    NET_CLASS_VAR_S(is_dropping_items, bool, 0x880);
    /* m_bIsQuestEligible at 881 */
    NET_CLASS_VAR_S(is_quest_eligible, bool, 0x881);
    /* m_nGuardianModeWaveNumber at 884 */
    NET_CLASS_VAR_S(get_guardian_mode_wave_number, int32_t, 0x884);
    /* m_nGuardianModeSpecialKillsRemaining at 888 */
    NET_CLASS_VAR_S(get_guardian_mode_special_kills_remaining, int32_t, 0x888);
    /* m_nGuardianModeSpecialWeaponNeeded at 88c */
    NET_CLASS_VAR_S(get_guardian_mode_special_weapon_needed, int32_t, 0x88c);
    /* m_numGlobalGiftsGiven at 898 */
    NET_CLASS_VAR_S(get_num_global_gifts_given, int, 0x898);
    /* m_numGlobalGifters at 89c */
    NET_CLASS_VAR_S(get_num_global_gifters, int, 0x89c);
    /* m_numGlobalGiftsPeriodSeconds at 8a0 */
    NET_CLASS_VAR_S(get_num_global_gifts_period_seconds, int, 0x8a0);
    /* m_arrFeaturedGiftersAccounts at 8a4 */
    NET_CLASS_VAR_A(get_arr_featured_gifters_accounts, int, 0x8a4, /* element count */ 0x4, /* element size */ 0x4);
    /* m_arrFeaturedGiftersGifts at 8b4 */
    NET_CLASS_VAR_A(get_arr_featured_gifters_gifts, int, 0x8b4, /* element count */ 0x4, /* element size */ 0x4);
    /* m_arrProhibitedItemIndices at 8c4 */
    NET_CLASS_VAR_A(get_arr_prohibited_item_indices, int, 0x8c4, /* element count */ 0x64, /* element size */ 0x2);
    /* m_arrTournamentActiveCasterAccounts at 98c */
    NET_CLASS_VAR_A(get_arr_tournament_active_caster_accounts, int, 0x98c, /* element count */ 0x4, /* element size */ 0x4);
    /* m_numBestOfMaps at 99c */
    NET_CLASS_VAR_S(get_num_best_of_maps, int, 0x99c);
    /* m_nHalloweenMaskListSeed at 9a0 */
    NET_CLASS_VAR_S(get_halloween_mask_list_seed, int32_t, 0x9a0);
    /* m_bBombDropped at 9a4 */
    NET_CLASS_VAR_S(is_bomb_dropped, bool, 0x9a4);
    /* m_bBombPlanted at 9a5 */
    NET_CLASS_VAR_S(is_bomb_planted, bool, 0x9a5);
    /* m_iRoundWinStatus at 9a8 */
    NET_CLASS_VAR_S(get_round_win_status, int, 0x9a8);
    /* m_eRoundWinReason at 9ac */
    NET_CLASS_VAR_S(get_e_round_win_reason, int, 0x9ac);
    /* m_bTCantBuy at 9b0 */
    NET_CLASS_VAR_S(is_t_cant_buy, bool, 0x9b0);
    /* m_bCTCantBuy at 9b1 */
    NET_CLASS_VAR_S(is_ct_cant_buy, bool, 0x9b1);
    /* m_flGuardianBuyUntilTime at 9b4 */
    NET_CLASS_VAR_S(get_guardian_buy_until_time, float, 0x9b4);
    /* m_iMatchStats_RoundResults at 9b8 */
    NET_CLASS_VAR_A(get_match_stats_round_results, int, 0x9b8, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_PlayersAlive_CT at a30 */
    NET_CLASS_VAR_A(get_match_stats_players_alive_c_t, int, 0xa30, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_PlayersAlive_T at aa8 */
    NET_CLASS_VAR_A(get_match_stats_players_alive_t, int, 0xaa8, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_TeamRespawnWaveTimes at b20 */
    NET_CLASS_VAR_A(get_team_respawn_wave_times, int, 0xb20, /* element count */ 0x20, /* element size */ 0x4);
    /* m_flNextRespawnWave at ba0 */
    NET_CLASS_VAR_A(get_next_respawn_wave, float, 0xba0, /* element count */ 0x20, /* element size */ 0x4);
    /* m_iActiveAssassinationTargetMissionID at c20 */
    NET_CLASS_VAR_S(get_active_assassination_target_mission_i_d, int, 0xc20);
    /* m_nEndMatchMapGroupVoteTypes at c28 */
    NET_CLASS_VAR_A(get_end_match_map_group_vote_types, int32_t, 0xc28, /* element count */ 0xa, /* element size */ 0x4);
    /* m_nEndMatchMapGroupVoteOptions at c50 */
    NET_CLASS_VAR_A(get_end_match_map_group_vote_options, int32_t, 0xc50, /* element count */ 0xa, /* element size */ 0x4);
    /* m_nEndMatchMapVoteWinner at c78 */
    NET_CLASS_VAR_S(get_end_match_map_vote_winner, int32_t, 0xc78);
    /* m_iNumConsecutiveCTLoses at c7c */
    NET_CLASS_VAR_S(get_num_consecutive_ct_loses, int, 0xc7c);
    /* m_iNumConsecutiveTerroristLoses at c80 */
    NET_CLASS_VAR_S(get_num_consecutive_terrorist_loses, int, 0xc80);
END_NET_CLASS(DT_CSGameRules);
DEFINE_NET_CLASS(_ST_m_hActorList_16, 0x0, 0x00, netvar::class_base);
    /* lengthproxy at 0 */
    /* data table reference for _LPT_m_hActorList_16 */
    /* 000 at 0 */
    NET_CLASS_VAR_S(get_000, int, 0x0);
    /* 001 at 0 */
    NET_CLASS_VAR_S(get_001, int, 0x0);
    /* 002 at 0 */
    NET_CLASS_VAR_S(get_002, int, 0x0);
    /* 003 at 0 */
    NET_CLASS_VAR_S(get_003, int, 0x0);
    /* 004 at 0 */
    NET_CLASS_VAR_S(get_004, int, 0x0);
    /* 005 at 0 */
    NET_CLASS_VAR_S(get_005, int, 0x0);
    /* 006 at 0 */
    NET_CLASS_VAR_S(get_006, int, 0x0);
    /* 007 at 0 */
    NET_CLASS_VAR_S(get_007, int, 0x0);
    /* 008 at 0 */
    NET_CLASS_VAR_S(get_008, int, 0x0);
    /* 009 at 0 */
    NET_CLASS_VAR_S(get_009, int, 0x0);
    /* 010 at 0 */
    NET_CLASS_VAR_S(get_010, int, 0x0);
    /* 011 at 0 */
    NET_CLASS_VAR_S(get_011, int, 0x0);
    /* 012 at 0 */
    NET_CLASS_VAR_S(get_012, int, 0x0);
    /* 013 at 0 */
    NET_CLASS_VAR_S(get_013, int, 0x0);
    /* 014 at 0 */
    NET_CLASS_VAR_S(get_014, int, 0x0);
    /* 015 at 0 */
    NET_CLASS_VAR_S(get_015, int, 0x0);
END_NET_CLASS(_ST_m_hActorList_16);
DEFINE_NET_CLASS(DT_LocalPlayerExclusive, 0x0, 0x00, netvar::class_base);
    /* m_Local at 0 */
    /* data table reference for DT_Local */
    /* m_nNextThinkTick at fc */
    NET_CLASS_VAR_S(get_next_think_tick, int32_t, 0xfc);
    /* m_vecViewOffset[0] at 108 */
    /* TODO: fix name for m_vecViewOffset[0] of type 1 */
    /* m_vecViewOffset[1] at 10c */
    /* TODO: fix name for m_vecViewOffset[1] of type 1 */
    /* m_vecViewOffset[2] at 110 */
    /* TODO: fix name for m_vecViewOffset[2] of type 1 */
    /* m_vecVelocity[0] at 114 */
    /* TODO: fix name for m_vecVelocity[0] of type 1 */
    /* m_vecVelocity[1] at 118 */
    /* TODO: fix name for m_vecVelocity[1] of type 1 */
    /* m_vecVelocity[2] at 11c */
    /* TODO: fix name for m_vecVelocity[2] of type 1 */
    /* m_vecBaseVelocity at 120 */
    NET_CLASS_VAR_S(get_base_velocity, Vector3f, 0x120);
    /* m_flFriction at 144 */
    NET_CLASS_VAR_S(get_friction, float, 0x144);
    /* m_hTonemapController at 31dc */
    NET_CLASS_VAR_S(get_tonemap_controller, EntityHandle, 0x31dc);
    /* m_hLastWeapon at 3304 */
    NET_CLASS_VAR_S(get_last_weapon, EntityHandle, 0x3304);
    /* m_fOnTarget at 3334 */
    NET_CLASS_VAR_S(get_on_target, float, 0x3334);
    /* m_hConstraintEntity at 3354 */
    NET_CLASS_VAR_S(get_constraint_entity, EntityHandle, 0x3354);
    /* m_vecConstraintCenter at 3358 */
    NET_CLASS_VAR_S(get_constraint_center, Vector3f, 0x3358);
    /* m_flConstraintRadius at 3364 */
    NET_CLASS_VAR_S(get_constraint_radius, float, 0x3364);
    /* m_flConstraintWidth at 3368 */
    NET_CLASS_VAR_S(get_constraint_width, float, 0x3368);
    /* m_flConstraintSpeedFactor at 336c */
    NET_CLASS_VAR_S(get_constraint_speed_factor, float, 0x336c);
    /* m_bConstraintPastRadius at 3370 */
    NET_CLASS_VAR_S(is_constraint_past_radius, bool, 0x3370);
    /* m_flDeathTime at 33d4 */
    NET_CLASS_VAR_S(get_death_time, float, 0x33d4);
    /* m_flNextDecalTime at 33d8 */
    NET_CLASS_VAR_S(get_next_decal_time, float, 0x33d8);
    /* m_fForceTeam at 33dc */
    NET_CLASS_VAR_S(get_force_team, float, 0x33dc);
    /* m_nTickBase at 3440 */
    NET_CLASS_VAR_S(get_tick_base, int32_t, 0x3440);
    /* m_flLaggedMovementValue at 35a4 */
    NET_CLASS_VAR_S(get_lagged_movement_value, float, 0x35a4);
END_NET_CLASS(DT_LocalPlayerExclusive);
DEFINE_NET_CLASS(_ST_m_AnimOverlay_15, 0x0, 0x00, netvar::class_base);
    /* lengthproxy at 0 */
    /* data table reference for _LPT_m_AnimOverlay_15 */
    /* 000 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 001 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 002 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 003 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 004 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 005 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 006 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 007 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 008 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 009 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 010 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 011 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 012 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 013 at 0 */
    /* data table reference for DT_Animationlayer */
    /* 014 at 0 */
    /* data table reference for DT_Animationlayer */
END_NET_CLASS(_ST_m_AnimOverlay_15);
DEFINE_NET_CLASS(_ST_m_Attributes_32, 0x0, 0x00, netvar::class_base);
    /* lengthproxy at 0 */
    /* data table reference for _LPT_m_Attributes_32 */
    /* 000 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 001 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 002 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 003 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 004 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 005 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 006 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 007 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 008 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 009 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 010 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 011 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 012 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 013 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 014 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 015 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 016 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 017 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 018 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 019 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 020 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 021 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 022 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 023 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 024 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 025 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 026 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 027 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 028 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 029 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 030 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
    /* 031 at 0 */
    /* data table reference for DT_ScriptCreatedAttribute */
END_NET_CLASS(_ST_m_Attributes_32);
DEFINE_NET_CLASS(CBaseAnimating, 0x2, 0x00, CBaseEntity);
    /* serveranimdata at 0 */
    /* data table reference for DT_ServerAnimationData */
    /* m_bClientSideRagdoll at 279 */
    NET_CLASS_VAR_S(is_client_side_ragdoll, bool, 0x279);
    /* m_nHitboxSet at 9fc */
    NET_CLASS_VAR_S(get_hitbox_set, int32_t, 0x9fc);
    /* m_flPlaybackRate at a18 */
    NET_CLASS_VAR_S(get_playback_rate, float, 0xa18);
    /* m_nSkin at a1c */
    NET_CLASS_VAR_S(get_skin, int32_t, 0xa1c);
    /* m_nBody at a20 */
    NET_CLASS_VAR_S(get_body, int32_t, 0xa20);
    /* m_nHighlightColorR at a38 */
    NET_CLASS_VAR_S(get_highlight_color_r, int32_t, 0xa38);
    /* m_nHighlightColorG at a3c */
    NET_CLASS_VAR_S(get_highlight_color_g, int32_t, 0xa3c);
    /* m_nHighlightColorB at a40 */
    NET_CLASS_VAR_S(get_highlight_color_b, int32_t, 0xa40);
    /* m_nNewSequenceParity at a44 */
    NET_CLASS_VAR_S(get_new_sequence_parity, int32_t, 0xa44);
    /* m_nResetEventsParity at a48 */
    NET_CLASS_VAR_S(get_reset_events_parity, int32_t, 0xa48);
    /* m_flEncodedController at a54 */
    NET_CLASS_VAR_A(get_encoded_controller, float, 0xa54, /* element count */ 0x4, /* element size */ 0x4);
    /* m_nMuzzleFlashParity at a64 */
    NET_CLASS_VAR_S(get_muzzle_flash_parity, int32_t, 0xa64);
    /* m_vecForce at 2680 */
    NET_CLASS_VAR_S(get_force, Vector3f, 0x2680);
    /* m_nForceBone at 268c */
    NET_CLASS_VAR_S(get_force_bone, int32_t, 0x268c);
    /* m_bClientSideFrameReset at 26c4 */
    NET_CLASS_VAR_S(is_client_side_frame_reset, bool, 0x26c4);
    /* m_flFrozen at 26fc */
    NET_CLASS_VAR_S(get_frozen, float, 0x26fc);
    /* m_flModelScale at 274c */
    NET_CLASS_VAR_S(get_model_scale, float, 0x274c);
    /* m_ScaleType at 2750 */
    NET_CLASS_VAR_S(get_scale_type, int, 0x2750);
    /* m_flPoseParameter at 2778 */
    NET_CLASS_VAR_A(get_pose_parameter, float, 0x2778, /* element count */ 0x18, /* element size */ 0x4);
    /* m_bClientSideAnimation at 28a0 */
    NET_CLASS_VAR_S(is_client_side_animation, bool, 0x28a0);
    /* m_nSequence at 28c0 */
    NET_CLASS_VAR_S(get_sequence, int32_t, 0x28c0);
    /* m_hLightingOrigin at 2948 */
    NET_CLASS_VAR_S(get_lighting_origin, EntityHandle, 0x2948);
    /* m_bSuppressAnimSounds at 294e */
    NET_CLASS_VAR_S(is_suppress_anim_sounds, bool, 0x294e);
END_NET_CLASS(CBaseAnimating);
DEFINE_NET_CLASS(CBaseButton, 0x5, 0x00, CBaseToggle);
    /* m_usable at a08 */
    NET_CLASS_VAR_S(get_usable, int, 0xa08);
END_NET_CLASS(CBaseButton);
DEFINE_NET_CLASS(CBaseDoor, 0xa, 0x00, CBaseToggle);
    /* m_flWaveHeight at a08 */
    NET_CLASS_VAR_S(get_wave_height, float, 0xa08);
END_NET_CLASS(CBaseDoor);
DEFINE_NET_CLASS(CBaseGrenade, 0xd, 0x00, CBaseAnimating);
    /* m_fFlags at 104 */
    NET_CLASS_VAR_S(get_flags, float, 0x104);
    /* m_vecVelocity at 114 */
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x114);
    /* m_bIsLive at 2991 */
    NET_CLASS_VAR_S(is_live, bool, 0x2991);
    /* m_DmgRadius at 2994 */
    NET_CLASS_VAR_S(get_dmg_radius, float, 0x2994);
    /* m_flDamage at 29a8 */
    NET_CLASS_VAR_S(get_damage, float, 0x29a8);
    /* m_hThrower at 29b0 */
    NET_CLASS_VAR_S(get_thrower, EntityHandle, 0x29b0);
END_NET_CLASS(CBaseGrenade);
DEFINE_NET_CLASS(CBRC4Target, 0x1b, 0x00, CBaseAnimating);
    /* m_bBrokenOpen at 2994 */
    NET_CLASS_VAR_S(is_broken_open, bool, 0x2994);
    /* m_flRadius at 2998 */
    NET_CLASS_VAR_S(get_radius, float, 0x2998);
END_NET_CLASS(CBRC4Target);
DEFINE_NET_CLASS(CBreachChargeProjectile, 0x1d, 0x00, CBaseGrenade);
    /* m_bShouldExplode at 29e0 */
    NET_CLASS_VAR_S(is_should_explode, bool, 0x29e0);
    /* m_weaponThatThrewMe at 29e4 */
    NET_CLASS_VAR_S(get_weapon_that_threw_me, int, 0x29e4);
    /* m_nParentBoneIndex at 29e8 */
    NET_CLASS_VAR_S(get_parent_bone_index, int32_t, 0x29e8);
    /* m_vecParentBonePos at 29ec */
    NET_CLASS_VAR_S(get_parent_bone_pos, Vector3f, 0x29ec);
END_NET_CLASS(CBreachChargeProjectile);
DEFINE_NET_CLASS(CBreakableProp, 0x1e, 0x00, CBaseAnimating);
    /* m_qPreferredPlayerCarryAngles at 2994 */
    NET_CLASS_VAR_S(get_q_preferred_player_carry_angles, Vector3f, 0x2994);
    /* m_bClientPhysics at 29a0 */
    NET_CLASS_VAR_S(is_client_physics, bool, 0x29a0);
END_NET_CLASS(CBreakableProp);
DEFINE_NET_CLASS(CBumpMineProjectile, 0x21, 0x00, CBaseGrenade);
    /* m_nParentBoneIndex at 29e4 */
    NET_CLASS_VAR_S(get_parent_bone_index, int32_t, 0x29e4);
    /* m_vecParentBonePos at 29e8 */
    NET_CLASS_VAR_S(get_parent_bone_pos, Vector3f, 0x29e8);
    /* m_bArmed at 29f4 */
    NET_CLASS_VAR_S(is_armed, bool, 0x29f4);
END_NET_CLASS(CBumpMineProjectile);
DEFINE_NET_CLASS(CCSGameRulesProxy, 0x27, 0x00, CGameRulesProxy);
    /* cs_gamerules_data at 0 */
    /* data table reference for DT_CSGameRules */
END_NET_CLASS(CCSGameRulesProxy);
DEFINE_NET_CLASS(CCSPlayerResource, 0x29, 0x00, CPlayerResource);
    /* m_iPlayerC4 at 165c */
    NET_CLASS_VAR_S(get_player_c4, int, 0x165c);
    /* m_iPlayerVIP at 1660 */
    NET_CLASS_VAR_S(get_player_vi_p, int, 0x1660);
    /* m_bombsiteCenterA at 1664 */
    NET_CLASS_VAR_S(is_ombsite_center_a, Vector3f, 0x1664);
    /* m_bombsiteCenterB at 1670 */
    NET_CLASS_VAR_S(is_ombsite_center_b, Vector3f, 0x1670);
    /* m_bHostageAlive at 167c */
    NET_CLASS_VAR_A(is_hostage_alive, bool, 0x167c, /* element count */ 0xc, /* element size */ 0x1);
    /* m_isHostageFollowingSomeone at 1688 */
    NET_CLASS_VAR_A(get_is_hostage_following_someone, int, 0x1688, /* element count */ 0xc, /* element size */ 0x1);
    /* m_iHostageEntityIDs at 1694 */
    NET_CLASS_VAR_A(get_hostage_entity_i_ds, int, 0x1694, /* element count */ 0xc, /* element size */ 0x4);
    /* m_hostageRescueX at 16c4 */
    NET_CLASS_VAR_A(get_hostage_rescue_x, int, 0x16c4, /* element count */ 0x4, /* element size */ 0x4);
    /* m_hostageRescueY at 16d4 */
    NET_CLASS_VAR_A(get_hostage_rescue_y, int, 0x16d4, /* element count */ 0x4, /* element size */ 0x4);
    /* m_hostageRescueZ at 16e4 */
    NET_CLASS_VAR_A(get_hostage_rescue_z, int, 0x16e4, /* element count */ 0x4, /* element size */ 0x4);
    /* m_iMVPs at 16f4 */
    NET_CLASS_VAR_A(get_mv_ps, int, 0x16f4, /* element count */ 0x41, /* element size */ 0x4);
    /* m_bHasDefuser at 17f8 */
    NET_CLASS_VAR_A(has_defuser, bool, 0x17f8, /* element count */ 0x41, /* element size */ 0x1);
    /* m_bHasHelmet at 1839 */
    NET_CLASS_VAR_A(has_helmet, bool, 0x1839, /* element count */ 0x41, /* element size */ 0x1);
    /* m_iArmor at 187c */
    NET_CLASS_VAR_A(get_armor, int, 0x187c, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iScore at 1980 */
    NET_CLASS_VAR_A(get_score, int, 0x1980, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iCompetitiveRanking at 1a84 */
    NET_CLASS_VAR_A(get_competitive_ranking, int, 0x1a84, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iCompetitiveWins at 1b88 */
    NET_CLASS_VAR_A(get_competitive_wins, int, 0x1b88, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iCompetitiveRankType at 1c8c */
    NET_CLASS_VAR_A(get_competitive_rank_type, int, 0x1c8c, /* element count */ 0x41, /* element size */ 0x1);
    /* m_iCompTeammateColor at 1cd0 */
    NET_CLASS_VAR_A(get_comp_teammate_color, int, 0x1cd0, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iLifetimeStart at 1dd4 */
    NET_CLASS_VAR_A(get_lifetime_start, int, 0x1dd4, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iLifetimeEnd at 1ed8 */
    NET_CLASS_VAR_A(get_lifetime_end, int, 0x1ed8, /* element count */ 0x41, /* element size */ 0x4);
    /* m_bControllingBot at 1fdc */
    NET_CLASS_VAR_A(is_controlling_bot, bool, 0x1fdc, /* element count */ 0x41, /* element size */ 0x1);
    /* m_iControlledPlayer at 2020 */
    NET_CLASS_VAR_A(get_controlled_player, int, 0x2020, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iControlledByPlayer at 2124 */
    NET_CLASS_VAR_A(get_controlled_by_player, int, 0x2124, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iBotDifficulty at 42a8 */
    NET_CLASS_VAR_A(get_bot_difficulty, int, 0x42a8, /* element count */ 0x41, /* element size */ 0x4);
    /* m_szClan at 43ac */
    NET_CLASS_VAR_A(get_sz_clan, int, 0x43ac, /* element count */ 0x41, /* element size */ 0x10);
    /* m_nCharacterDefIndex at 47bc */
    NET_CLASS_VAR_A(get_character_def_index, int32_t, 0x47bc, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iTotalCashSpent at 48c0 */
    NET_CLASS_VAR_A(get_total_cash_spent, int, 0x48c0, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iGunGameLevel at 49c4 */
    NET_CLASS_VAR_A(get_gun_game_level, int, 0x49c4, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iCashSpentThisRound at 4ac8 */
    NET_CLASS_VAR_A(get_cash_spent_this_round, int, 0x4ac8, /* element count */ 0x41, /* element size */ 0x4);
    /* m_nActiveCoinRank at 4bcc */
    NET_CLASS_VAR_A(get_active_coin_rank, int32_t, 0x4bcc, /* element count */ 0x41, /* element size */ 0x4);
    /* m_nMusicID at 4cd0 */
    NET_CLASS_VAR_A(get_music_i_d, int32_t, 0x4cd0, /* element count */ 0x41, /* element size */ 0x4);
    /* m_nPersonaDataPublicLevel at 4dd4 */
    NET_CLASS_VAR_A(get_persona_data_public_level, int32_t, 0x4dd4, /* element count */ 0x41, /* element size */ 0x4);
    /* m_nPersonaDataPublicCommendsLeader at 4ed8 */
    NET_CLASS_VAR_A(get_persona_data_public_commends_leader, int32_t, 0x4ed8, /* element count */ 0x41, /* element size */ 0x4);
    /* m_nPersonaDataPublicCommendsTeacher at 4fdc */
    NET_CLASS_VAR_A(get_persona_data_public_commends_teacher, int32_t, 0x4fdc, /* element count */ 0x41, /* element size */ 0x4);
    /* m_nPersonaDataPublicCommendsFriendly at 50e0 */
    NET_CLASS_VAR_A(get_persona_data_public_commends_friendly, int32_t, 0x50e0, /* element count */ 0x41, /* element size */ 0x4);
    /* m_bHasCommunicationAbuseMute at 51e4 */
    NET_CLASS_VAR_A(has_communication_abuse_mute, bool, 0x51e4, /* element count */ 0x41, /* element size */ 0x1);
    /* m_szCrosshairCodes at 5225 */
    NET_CLASS_VAR_A(get_sz_crosshair_codes, int, 0x5225, /* element count */ 0x41, /* element size */ 0x23);
    /* m_iMatchStats_Kills_Total at 5b08 */
    NET_CLASS_VAR_A(get_match_stats_kills_total, int, 0x5b08, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_Assists_Total at 5c0c */
    NET_CLASS_VAR_A(get_match_stats_assists_total, int, 0x5c0c, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_Deaths_Total at 5d10 */
    NET_CLASS_VAR_A(get_match_stats_deaths_total, int, 0x5d10, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_3k_Total at 5e14 */
    NET_CLASS_VAR_A(get_match_stats_3k_total, int, 0x5e14, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_4k_Total at 5f18 */
    NET_CLASS_VAR_A(get_match_stats_4k_total, int, 0x5f18, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_5k_Total at 601c */
    NET_CLASS_VAR_A(get_match_stats_5k_total, int, 0x601c, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_Damage_Total at 6120 */
    NET_CLASS_VAR_A(get_match_stats_damage_total, int, 0x6120, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_EquipmentValue_Total at 6224 */
    NET_CLASS_VAR_A(get_match_stats_equipment_value_total, int, 0x6224, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_KillReward_Total at 6328 */
    NET_CLASS_VAR_A(get_match_stats_kill_reward_total, int, 0x6328, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_LiveTime_Total at 642c */
    NET_CLASS_VAR_A(get_match_stats_live_time_total, int, 0x642c, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_HeadShotKills_Total at 6530 */
    NET_CLASS_VAR_A(get_match_stats_head_shot_kills_total, int, 0x6530, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_Objective_Total at 6634 */
    NET_CLASS_VAR_A(get_match_stats_objective_total, int, 0x6634, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_CashEarned_Total at 6738 */
    NET_CLASS_VAR_A(get_match_stats_cash_earned_total, int, 0x6738, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_UtilityDamage_Total at 683c */
    NET_CLASS_VAR_A(get_match_stats_utility_damage_total, int, 0x683c, /* element count */ 0x41, /* element size */ 0x4);
    /* m_iMatchStats_EnemiesFlashed_Total at 6940 */
    NET_CLASS_VAR_A(get_match_stats_enemies_flashed_total, int, 0x6940, /* element count */ 0x41, /* element size */ 0x4);
    /* m_nEndMatchNextMapVotes at 6a88 */
    NET_CLASS_VAR_A(get_end_match_next_map_votes, int32_t, 0x6a88, /* element count */ 0x41, /* element size */ 0x4);
    /* m_bEndMatchNextMapAllVoted at 6b8c */
    NET_CLASS_VAR_S(is_end_match_next_map_all_voted, bool, 0x6b8c);
END_NET_CLASS(CCSPlayerResource);
DEFINE_NET_CLASS(CCSTeam, 0x2b, 0x00, CTeam);
END_NET_CLASS(CCSTeam);
DEFINE_NET_CLASS(CDronegun, 0x32, 0x00, CBaseAnimating);
    /* m_iHealth at 100 */
    NET_CLASS_VAR_S(get_health, int, 0x100);
    /* m_vecAttentionTarget at 2990 */
    NET_CLASS_VAR_S(get_attention_target, Vector3f, 0x2990);
    /* m_vecTargetOffset at 299c */
    NET_CLASS_VAR_S(get_target_offset, Vector3f, 0x299c);
    /* m_bHasTarget at 29a8 */
    NET_CLASS_VAR_S(has_target, bool, 0x29a8);
END_NET_CLASS(CDronegun);
DEFINE_NET_CLASS(CDynamicProp, 0x34, 0x00, CBreakableProp);
    /* m_bUseHitboxesForRenderBox at 29b4 */
    NET_CLASS_VAR_S(is_use_hitboxes_for_render_box, bool, 0x29b4);
    /* m_flGlowMaxDist at 29d4 */
    NET_CLASS_VAR_S(get_glow_max_dist, float, 0x29d4);
    /* m_bShouldGlow at 29d8 */
    NET_CLASS_VAR_S(is_should_glow, bool, 0x29d8);
    /* m_clrGlow at 29d9 */
    NET_CLASS_VAR_S(get_clr_glow, int, 0x29d9);
    /* m_nGlowStyle at 29e0 */
    NET_CLASS_VAR_S(get_glow_style, int32_t, 0x29e0);
END_NET_CLASS(CDynamicProp);
DEFINE_NET_CLASS(CEnvAmbientLight, 0x3c, 0x00, CSpatialEntity);
    /* m_vecColor at b00 */
    NET_CLASS_VAR_S(get_color, Vector3f, 0xb00);
END_NET_CLASS(CEnvAmbientLight);
DEFINE_NET_CLASS(CEnvGasCanister, 0x3f, 0x00, CBaseAnimating);
    /* m_vecOrigin at 138 */
    /* TODO: get_origin as PROP_TYPE_VECTOR_XY */
    /* m_vecOrigin[2] at 140 */
    /* TODO: fix name for m_vecOrigin[2] of type 1 */
    /* m_bLanded at 2990 */
    NET_CLASS_VAR_S(is_landed, bool, 0x2990);
    /* m_hSkyboxCopy at 29b8 */
    NET_CLASS_VAR_S(get_skybox_copy, EntityHandle, 0x29b8);
    /* m_vecImpactPosition at 29c4 */
    NET_CLASS_VAR_S(get_impact_position, Vector3f, 0x29c4);
    /* m_vecStartPosition at 29d0 */
    NET_CLASS_VAR_S(get_start_position, Vector3f, 0x29d0);
    /* m_vecEnterWorldPosition at 29dc */
    NET_CLASS_VAR_S(get_enter_world_position, Vector3f, 0x29dc);
    /* m_vecDirection at 29e8 */
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x29e8);
    /* m_vecStartAngles at 29f4 */
    NET_CLASS_VAR_S(get_start_angles, Vector3f, 0x29f4);
    /* m_flFlightTime at 2a00 */
    NET_CLASS_VAR_S(get_flight_time, float, 0x2a00);
    /* m_flFlightSpeed at 2a04 */
    NET_CLASS_VAR_S(get_flight_speed, float, 0x2a04);
    /* m_flLaunchTime at 2a08 */
    NET_CLASS_VAR_S(get_launch_time, float, 0x2a08);
    /* m_flInitialZSpeed at 2a0c */
    NET_CLASS_VAR_S(get_initial_z_speed, float, 0x2a0c);
    /* m_flZAcceleration at 2a10 */
    NET_CLASS_VAR_S(get_z_acceleration, float, 0x2a10);
    /* m_flHorizSpeed at 2a14 */
    NET_CLASS_VAR_S(get_horiz_speed, float, 0x2a14);
    /* m_bLaunchedFromWithinWorld at 2a18 */
    NET_CLASS_VAR_S(is_launched_from_within_world, bool, 0x2a18);
    /* m_vecParabolaDirection at 2a1c */
    NET_CLASS_VAR_S(get_parabola_direction, Vector3f, 0x2a1c);
    /* m_flWorldEnterTime at 2a28 */
    NET_CLASS_VAR_S(get_world_enter_time, float, 0x2a28);
    /* m_vecSkyboxOrigin at 2a2c */
    NET_CLASS_VAR_S(get_skybox_origin, Vector3f, 0x2a2c);
    /* m_flSkyboxScale at 2a38 */
    NET_CLASS_VAR_S(get_skybox_scale, float, 0x2a38);
    /* m_bInSkybox at 2a3c */
    NET_CLASS_VAR_S(is_in_skybox, bool, 0x2a3c);
    /* m_bDoImpactEffects at 2a3d */
    NET_CLASS_VAR_S(is_do_impact_effects, bool, 0x2a3d);
    /* m_nMyZoneIndex at 2a40 */
    NET_CLASS_VAR_S(get_my_zone_index, int32_t, 0x2a40);
END_NET_CLASS(CEnvGasCanister);
DEFINE_NET_CLASS(CEnvParticleScript, 0x40, 0x00, CBaseAnimating);
    /* m_flSequenceScale at 2a74 */
    NET_CLASS_VAR_S(get_sequence_scale, float, 0x2a74);
END_NET_CLASS(CEnvParticleScript);
DEFINE_NET_CLASS(CFireCrackerBlast, 0x48, 0x00, CInferno);
END_NET_CLASS(CFireCrackerBlast);
DEFINE_NET_CLASS(CHostageCarriableProp, 0x62, 0x00, CBaseAnimating);
END_NET_CLASS(CHostageCarriableProp);
DEFINE_NET_CLASS(CParadropChopper, 0x74, 0x00, CBaseAnimating);
    /* m_vecOrigin at 138 */
    /* TODO: get_origin as PROP_TYPE_VECTOR_XY */
    /* m_vecOrigin[2] at 140 */
    /* TODO: fix name for m_vecOrigin[2] of type 1 */
    /* m_hCallingPlayer at 29a0 */
    NET_CLASS_VAR_S(get_calling_player, EntityHandle, 0x29a0);
END_NET_CLASS(CParadropChopper);
DEFINE_NET_CLASS(CPhysicsProp, 0x7a, 0x00, CBreakableProp);
    /* m_spawnflags at 2c8 */
    NET_CLASS_VAR_S(get_spawnflags, int, 0x2c8);
    /* m_bAwake at 29b0 */
    NET_CLASS_VAR_S(is_awake, bool, 0x29b0);
END_NET_CLASS(CPhysicsProp);
DEFINE_NET_CLASS(CPhysicsPropMultiplayer, 0x7b, 0x00, CPhysicsProp);
    /* m_iPhysicsMode at 29d4 */
    NET_CLASS_VAR_S(get_physics_mode, int, 0x29d4);
    /* m_fMass at 29d8 */
    NET_CLASS_VAR_S(get_mass, float, 0x29d8);
    /* m_collisionMins at 29dc */
    NET_CLASS_VAR_S(get_collision_mins, Vector3f, 0x29dc);
    /* m_collisionMaxs at 29e8 */
    NET_CLASS_VAR_S(get_collision_maxs, Vector3f, 0x29e8);
END_NET_CLASS(CPhysicsPropMultiplayer);
DEFINE_NET_CLASS(CPhysMagnet, 0x7c, 0x00, CBaseAnimating);
END_NET_CLASS(CPhysMagnet);
DEFINE_NET_CLASS(CPhysPropAmmoBox, 0x7d, 0x00, CPhysicsPropMultiplayer);
END_NET_CLASS(CPhysPropAmmoBox);
DEFINE_NET_CLASS(CPhysPropLootCrate, 0x7e, 0x00, CPhysicsPropMultiplayer);
    /* m_iHealth at 100 */
    NET_CLASS_VAR_S(get_health, int, 0x100);
    /* m_bRenderInPSPM at 2a04 */
    NET_CLASS_VAR_S(is_render_in_psp_m, bool, 0x2a04);
    /* m_bRenderInTablet at 2a05 */
    NET_CLASS_VAR_S(is_render_in_tablet, bool, 0x2a05);
    /* m_iMaxHealth at 2a08 */
    NET_CLASS_VAR_S(get_max_health, int, 0x2a08);
END_NET_CLASS(CPhysPropLootCrate);
DEFINE_NET_CLASS(CPhysPropRadarJammer, 0x7f, 0x00, CPhysicsPropMultiplayer);
END_NET_CLASS(CPhysPropRadarJammer);
DEFINE_NET_CLASS(CPhysPropWeaponUpgrade, 0x80, 0x00, CPhysicsPropMultiplayer);
END_NET_CLASS(CPhysPropWeaponUpgrade);
DEFINE_NET_CLASS(CPlantedC4, 0x81, 0x00, CBaseAnimating);
    /* m_bBombTicking at 2990 */
    NET_CLASS_VAR_S(is_bomb_ticking, bool, 0x2990);
    /* m_nBombSite at 2994 */
    NET_CLASS_VAR_S(get_bomb_site, int32_t, 0x2994);
    /* m_flC4Blow at 29a0 */
    NET_CLASS_VAR_S(get_c4_blow, float, 0x29a0);
    /* m_flTimerLength at 29a4 */
    NET_CLASS_VAR_S(get_timer_length, float, 0x29a4);
    /* m_flDefuseLength at 29b8 */
    NET_CLASS_VAR_S(get_defuse_length, float, 0x29b8);
    /* m_flDefuseCountDown at 29bc */
    NET_CLASS_VAR_S(get_defuse_count_down, float, 0x29bc);
    /* m_bBombDefused at 29c0 */
    NET_CLASS_VAR_S(is_bomb_defused, bool, 0x29c0);
    /* m_hBombDefuser at 29c4 */
    NET_CLASS_VAR_S(get_bomb_defuser, EntityHandle, 0x29c4);
END_NET_CLASS(CPlantedC4);
DEFINE_NET_CLASS(CPointCommentaryNode, 0x86, 0x00, CBaseAnimating);
    /* m_bActive at 2990 */
    NET_CLASS_VAR_S(is_active, bool, 0x2990);
    /* m_flStartTime at 2994 */
    NET_CLASS_VAR_S(get_start_time, float, 0x2994);
    /* m_iszCommentaryFile at 2998 */
    NET_CLASS_VAR_C(get_isz_commentary_file, 0x2998, /* max length */ 0x104);
    /* m_iszCommentaryFileNoHDR at 2a9c */
    NET_CLASS_VAR_C(get_isz_commentary_file_no_hd_r, 0x2a9c, /* max length */ 0x104);
    /* m_iszSpeakers at 2ba0 */
    NET_CLASS_VAR_C(get_isz_speakers, 0x2ba0, /* max length */ 0x100);
    /* m_iNodeNumber at 2ca0 */
    NET_CLASS_VAR_S(get_node_number, int, 0x2ca0);
    /* m_iNodeNumberMax at 2ca4 */
    NET_CLASS_VAR_S(get_node_number_max, int, 0x2ca4);
    /* m_hViewPosition at 2cac */
    NET_CLASS_VAR_S(get_view_position, EntityHandle, 0x2cac);
END_NET_CLASS(CPointCommentaryNode);
DEFINE_NET_CLASS(CProp_Hallucination, 0x8d, 0x00, CBaseAnimating);
    /* m_bEnabled at 29a9 */
    NET_CLASS_VAR_S(is_enabled, bool, 0x29a9);
    /* m_fVisibleTime at 29ac */
    NET_CLASS_VAR_S(get_visible_time, float, 0x29ac);
    /* m_fRechargeTime at 29b0 */
    NET_CLASS_VAR_S(get_recharge_time, float, 0x29b0);
END_NET_CLASS(CProp_Hallucination);
DEFINE_NET_CLASS(CPropCounter, 0x8e, 0x00, CBaseAnimating);
    /* m_flDisplayValue at 2990 */
    NET_CLASS_VAR_S(get_display_value, float, 0x2990);
END_NET_CLASS(CPropCounter);
DEFINE_NET_CLASS(CPropVehicleDriveable, 0x91, 0x00, CBaseAnimating);
    /* m_hPlayer at 2994 */
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x2994);
    /* m_nSpeed at 2998 */
    NET_CLASS_VAR_S(get_speed, int32_t, 0x2998);
    /* m_nRPM at 299c */
    NET_CLASS_VAR_S(get_rp_m, int32_t, 0x299c);
    /* m_flThrottle at 29a0 */
    NET_CLASS_VAR_S(get_throttle, float, 0x29a0);
    /* m_nBoostTimeLeft at 29a4 */
    NET_CLASS_VAR_S(get_boost_time_left, int32_t, 0x29a4);
    /* m_nHasBoost at 29a8 */
    NET_CLASS_VAR_S(get_has_boost, int32_t, 0x29a8);
    /* m_nScannerDisabledWeapons at 29ac */
    NET_CLASS_VAR_S(get_scanner_disabled_weapons, int32_t, 0x29ac);
    /* m_nScannerDisabledVehicle at 29b0 */
    NET_CLASS_VAR_S(get_scanner_disabled_vehicle, int32_t, 0x29b0);
    /* m_bEnterAnimOn at 29d0 */
    NET_CLASS_VAR_S(is_enter_anim_on, bool, 0x29d0);
    /* m_bExitAnimOn at 29d1 */
    NET_CLASS_VAR_S(is_exit_anim_on, bool, 0x29d1);
    /* m_vecGunCrosshair at 29d8 */
    NET_CLASS_VAR_S(get_gun_crosshair, Vector3f, 0x29d8);
    /* m_vecEyeExitEndpoint at 2a10 */
    NET_CLASS_VAR_S(get_eye_exit_endpoint, Vector3f, 0x2a10);
    /* m_bHasGun at 2a1c */
    NET_CLASS_VAR_S(has_gun, bool, 0x2a1c);
    /* m_bUnableToFire at 2a1d */
    NET_CLASS_VAR_S(is_unable_to_fire, bool, 0x2a1d);
END_NET_CLASS(CPropVehicleDriveable);
DEFINE_NET_CLASS(CRagdollProp, 0x93, 0x00, CBaseAnimating);
    /* m_ragPos[0] at 2990 */
    /* TODO: fix name for m_ragPos[0] of type 2 */
    /* m_ragAngles[0] at 2ab0 */
    /* TODO: fix name for m_ragAngles[0] of type 2 */
    /* m_hUnragdoll at 2c8c */
    NET_CLASS_VAR_S(get_unragdoll, EntityHandle, 0x2c8c);
    /* m_flBlendWeight at 2c90 */
    NET_CLASS_VAR_S(get_blend_weight, float, 0x2c90);
    /* m_nOverlaySequence at 2c98 */
    NET_CLASS_VAR_S(get_overlay_sequence, int32_t, 0x2c98);
END_NET_CLASS(CRagdollProp);
DEFINE_NET_CLASS(CRagdollPropAttached, 0x94, 0x00, CRagdollProp);
    /* m_attachmentPointBoneSpace at 2ca0 */
    NET_CLASS_VAR_S(get_attachment_point_bone_space, Vector3f, 0x2ca0);
    /* m_attachmentPointRagdollSpace at 2cb8 */
    NET_CLASS_VAR_S(get_attachment_point_ragdoll_space, Vector3f, 0x2cb8);
    /* m_ragdollAttachedObjectIndex at 2cc4 */
    NET_CLASS_VAR_S(get_ragdoll_attached_object_index, int, 0x2cc4);
    /* m_boneIndexAttached at 2cc8 */
    NET_CLASS_VAR_S(is_one_index_attached, bool, 0x2cc8);
END_NET_CLASS(CRagdollPropAttached);
DEFINE_NET_CLASS(CSceneEntity, 0x97, 0x00, CBaseEntity);
    /* m_hActorList at 0 */
    /* data table reference for _ST_m_hActorList_16 */
    /* m_bIsPlayingBack at 9dc */
    NET_CLASS_VAR_S(is_playing_back, bool, 0x9dc);
    /* m_bPaused at 9dd */
    NET_CLASS_VAR_S(is_paused, bool, 0x9dd);
    /* m_bMultiplayer at 9de */
    NET_CLASS_VAR_S(is_multiplayer, bool, 0x9de);
    /* m_flForceClientTime at 9e4 */
    NET_CLASS_VAR_S(get_force_client_time, float, 0x9e4);
    /* m_nSceneStringIndex at 9e8 */
    NET_CLASS_VAR_S(get_scene_string_index, int32_t, 0x9e8);
END_NET_CLASS(CSceneEntity);
DEFINE_NET_CLASS(CSnowballPile, 0xa0, 0x00, CBaseAnimating);
END_NET_CLASS(CSnowballPile);
DEFINE_NET_CLASS(CStatueProp, 0xa7, 0x00, CPhysicsProp);
    /* m_hInitBaseAnimating at 29d0 */
    NET_CLASS_VAR_S(get_init_base_animating, EntityHandle, 0x29d0);
    /* m_bShatter at 29d4 */
    NET_CLASS_VAR_S(is_shatter, bool, 0x29d4);
    /* m_nShatterFlags at 29d8 */
    NET_CLASS_VAR_S(get_shatter_flags, int32_t, 0x29d8);
    /* m_vShatterPosition at 29dc */
    NET_CLASS_VAR_S(get_v_shatter_position, Vector3f, 0x29dc);
    /* m_vShatterForce at 29e8 */
    NET_CLASS_VAR_S(get_v_shatter_force, Vector3f, 0x29e8);
END_NET_CLASS(CStatueProp);
DEFINE_NET_CLASS(CSurvivalSpawnChopper, 0xab, 0x00, CBaseAnimating);
    /* m_vecOrigin at 138 */
    /* TODO: get_origin as PROP_TYPE_VECTOR_XY */
    /* m_vecOrigin[2] at 140 */
    /* TODO: fix name for m_vecOrigin[2] of type 1 */
END_NET_CLASS(CSurvivalSpawnChopper);
DEFINE_NET_CLASS(CTEArmorRicochet, 0xaf, 0x00, CTEMetalSparks);
END_NET_CLASS(CTEArmorRicochet);
DEFINE_NET_CLASS(CTEBloodStream, 0xba, 0x00, CTEParticleSystem);
    /* m_vecDirection at 1c */
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    /* r at 28 */
    NET_CLASS_VAR_S(get_r, int, 0x28);
    /* g at 2c */
    NET_CLASS_VAR_S(get_g, int, 0x2c);
    /* b at 30 */
    NET_CLASS_VAR_S(get_b, int, 0x30);
    /* a at 34 */
    NET_CLASS_VAR_S(get_a, int, 0x34);
    /* m_nAmount at 38 */
    NET_CLASS_VAR_S(get_amount, int32_t, 0x38);
END_NET_CLASS(CTEBloodStream);
DEFINE_NET_CLASS(CTEDust, 0xc1, 0x00, CTEParticleSystem);
    /* m_flSize at 1c */
    NET_CLASS_VAR_S(get_size, float, 0x1c);
    /* m_flSpeed at 20 */
    NET_CLASS_VAR_S(get_speed, float, 0x20);
    /* m_vecDirection at 24 */
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x24);
END_NET_CLASS(CTEDust);
DEFINE_NET_CLASS(CTEExplosion, 0xc5, 0x00, CTEParticleSystem);
    /* m_nModelIndex at 1c */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    /* m_fScale at 20 */
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    /* m_nFrameRate at 24 */
    NET_CLASS_VAR_S(get_frame_rate, int32_t, 0x24);
    /* m_nFlags at 28 */
    NET_CLASS_VAR_S(get_flags, int32_t, 0x28);
    /* m_vecNormal at 2c */
    NET_CLASS_VAR_S(get_normal, Vector3f, 0x2c);
    /* m_chMaterialType at 38 */
    NET_CLASS_VAR_S(get_ch_material_type, int, 0x38);
    /* m_nRadius at 3c */
    NET_CLASS_VAR_S(get_radius, int32_t, 0x3c);
    /* m_nMagnitude at 40 */
    NET_CLASS_VAR_S(get_magnitude, int32_t, 0x40);
END_NET_CLASS(CTEExplosion);
DEFINE_NET_CLASS(CTEGaussExplosion, 0xca, 0x00, CTEParticleSystem);
    /* m_nType at 1c */
    NET_CLASS_VAR_S(get_type, int32_t, 0x1c);
    /* m_vecDirection at 20 */
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x20);
END_NET_CLASS(CTEGaussExplosion);
DEFINE_NET_CLASS(CTELargeFunnel, 0xce, 0x00, CTEParticleSystem);
    /* m_nModelIndex at 1c */
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    /* m_nReversed at 20 */
    NET_CLASS_VAR_S(get_reversed, int32_t, 0x20);
END_NET_CLASS(CTELargeFunnel);
DEFINE_NET_CLASS(CWaterBullet, 0xe6, 0x00, CBaseAnimating);
END_NET_CLASS(CWaterBullet);
DEFINE_NET_CLASS(CPropVehicleChoreoGeneric, 0x0, 0x00, CDynamicProp);
    /* m_hPlayer at 2a04 */
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x2a04);
    /* m_bEnterAnimOn at 2a0c */
    NET_CLASS_VAR_S(is_enter_anim_on, bool, 0x2a0c);
    /* m_bExitAnimOn at 2a0d */
    NET_CLASS_VAR_S(is_exit_anim_on, bool, 0x2a0d);
    /* m_vecEyeExitEndpoint at 2a10 */
    NET_CLASS_VAR_S(get_eye_exit_endpoint, Vector3f, 0x2a10);
    /* m_bForceEyesToAttachment at 2a1c */
    NET_CLASS_VAR_S(is_force_eyes_to_attachment, bool, 0x2a1c);
    /* m_vehicleView.bClampEyeAngles at 2aa0 */
    /* TODO: fix name for m_vehicleView.bClampEyeAngles of type 0 */
    /* m_vehicleView.flPitchCurveZero at 2aa4 */
    /* TODO: fix name for m_vehicleView.flPitchCurveZero of type 1 */
    /* m_vehicleView.flPitchCurveLinear at 2aa8 */
    /* TODO: fix name for m_vehicleView.flPitchCurveLinear of type 1 */
    /* m_vehicleView.flRollCurveZero at 2aac */
    /* TODO: fix name for m_vehicleView.flRollCurveZero of type 1 */
    /* m_vehicleView.flRollCurveLinear at 2ab0 */
    /* TODO: fix name for m_vehicleView.flRollCurveLinear of type 1 */
    /* m_vehicleView.flFOV at 2ab4 */
    /* TODO: fix name for m_vehicleView.flFOV of type 1 */
    /* m_vehicleView.flYawMin at 2ab8 */
    /* TODO: fix name for m_vehicleView.flYawMin of type 1 */
    /* m_vehicleView.flYawMax at 2abc */
    /* TODO: fix name for m_vehicleView.flYawMax of type 1 */
    /* m_vehicleView.flPitchMin at 2ac0 */
    /* TODO: fix name for m_vehicleView.flPitchMin of type 1 */
    /* m_vehicleView.flPitchMax at 2ac4 */
    /* TODO: fix name for m_vehicleView.flPitchMax of type 1 */
END_NET_CLASS(CPropVehicleChoreoGeneric);
DEFINE_NET_CLASS(DT_OverlayVars, 0x0, 0x00, netvar::class_base);
    /* m_AnimOverlay at 0 */
    /* data table reference for _ST_m_AnimOverlay_15 */
END_NET_CLASS(DT_OverlayVars);
DEFINE_NET_CLASS(DT_AttributeList, 0x0, 0x00, netvar::class_base);
    /* m_Attributes at 0 */
    /* data table reference for _ST_m_Attributes_32 */
END_NET_CLASS(DT_AttributeList);
DEFINE_NET_CLASS(CBaseAnimatingOverlay, 0x3, 0x00, CBaseAnimating);
    /* overlay_vars at 0 */
    /* data table reference for DT_OverlayVars */
END_NET_CLASS(CBaseAnimatingOverlay);
DEFINE_NET_CLASS(CBaseCSGrenadeProjectile, 0x9, 0x00, CBaseGrenade);
    /* m_vInitialVelocity at 29e0 */
    NET_CLASS_VAR_S(get_v_initial_velocity, Vector3f, 0x29e0);
    /* m_nBounces at 29ec */
    NET_CLASS_VAR_S(get_bounces, int32_t, 0x29ec);
    /* m_nExplodeEffectIndex at 29f0 */
    NET_CLASS_VAR_S(get_explode_effect_index, int32_t, 0x29f0);
    /* m_nExplodeEffectTickBegin at 29f4 */
    NET_CLASS_VAR_S(get_explode_effect_tick_begin, int32_t, 0x29f4);
    /* m_vecExplodeEffectOrigin at 29f8 */
    NET_CLASS_VAR_S(get_explode_effect_origin, Vector3f, 0x29f8);
END_NET_CLASS(CBaseCSGrenadeProjectile);
DEFINE_NET_CLASS(CBaseFlex, 0xc, 0x00, CBaseAnimatingOverlay);
    /* m_viewtarget at 2a00 */
    NET_CLASS_VAR_S(get_viewtarget, Vector3f, 0x2a00);
    /* m_flexWeight at 2a38 */
    NET_CLASS_VAR_A(get_flex_weight, int, 0x2a38, /* element count */ 0x60, /* element size */ 0x4);
    /* m_blinktoggle at 2be4 */
    NET_CLASS_VAR_S(is_linktoggle, bool, 0x2be4);
END_NET_CLASS(CBaseFlex);
DEFINE_NET_CLASS(CBasePropDoor, 0x10, 0x00, CDynamicProp);
END_NET_CLASS(CBasePropDoor);
DEFINE_NET_CLASS(CChicken, 0x24, 0x00, CDynamicProp);
    /* m_jumpedThisFrame at 29f8 */
    NET_CLASS_VAR_S(get_jumped_this_frame, int, 0x29f8);
    /* m_leader at 29fc */
    NET_CLASS_VAR_S(get_leader, int, 0x29fc);
END_NET_CLASS(CChicken);
DEFINE_NET_CLASS(CDecoyProjectile, 0x30, 0x00, CBaseCSGrenadeProjectile);
END_NET_CLASS(CDecoyProjectile);
DEFINE_NET_CLASS(CDrone, 0x31, 0x00, CPhysicsProp);
    /* m_hMoveToThisEntity at 29e8 */
    NET_CLASS_VAR_S(get_move_to_this_entity, EntityHandle, 0x29e8);
    /* m_hDeliveryCargo at 29ec */
    NET_CLASS_VAR_S(get_delivery_cargo, EntityHandle, 0x29ec);
    /* m_bPilotTakeoverAllowed at 29f0 */
    NET_CLASS_VAR_S(is_pilot_takeover_allowed, bool, 0x29f0);
    /* m_hPotentialCargo at 29f4 */
    NET_CLASS_VAR_S(get_potential_cargo, EntityHandle, 0x29f4);
    /* m_hCurrentPilot at 29f8 */
    NET_CLASS_VAR_S(get_current_pilot, EntityHandle, 0x29f8);
    /* m_vecTagPositions[0] at 29fc */
    /* TODO: fix name for m_vecTagPositions[0] of type 2 */
    /* m_vecTagIncrements[0] at 2b1c */
    /* TODO: fix name for m_vecTagIncrements[0] of type 0 */
END_NET_CLASS(CDrone);
DEFINE_NET_CLASS(CMolotovProjectile, 0x72, 0x00, CBaseCSGrenadeProjectile);
    /* m_bIsIncGrenade at 2a20 */
    NET_CLASS_VAR_S(is_inc_grenade, bool, 0x2a20);
END_NET_CLASS(CMolotovProjectile);
DEFINE_NET_CLASS(CPropDoorRotating, 0x8f, 0x00, CBasePropDoor);
END_NET_CLASS(CPropDoorRotating);
DEFINE_NET_CLASS(CPropJeep, 0x90, 0x00, CPropVehicleDriveable);
    /* m_bHeadlightIsOn at 2adc */
    NET_CLASS_VAR_S(is_headlight_is_on, bool, 0x2adc);
END_NET_CLASS(CPropJeep);
DEFINE_NET_CLASS(CSensorGrenadeProjectile, 0x99, 0x00, CBaseCSGrenadeProjectile);
END_NET_CLASS(CSensorGrenadeProjectile);
DEFINE_NET_CLASS(CSmokeGrenadeProjectile, 0x9d, 0x00, CBaseCSGrenadeProjectile);
    /* m_nSmokeEffectTickBegin at 2a20 */
    NET_CLASS_VAR_S(get_smoke_effect_tick_begin, int32_t, 0x2a20);
    /* m_bDidSmokeEffect at 2a24 */
    NET_CLASS_VAR_S(is_did_smoke_effect, bool, 0x2a24);
END_NET_CLASS(CSmokeGrenadeProjectile);
DEFINE_NET_CLASS(CSnowballProjectile, 0xa1, 0x00, CBaseCSGrenadeProjectile);
END_NET_CLASS(CSnowballProjectile);
DEFINE_NET_CLASS(DT_ScriptCreatedItem, 0x0, 0x00, netvar::class_base);
    /* m_NetworkedDynamicAttributesForDemos at 0 */
    /* data table reference for DT_AttributeList */
    /* m_iItemDefinitionIndex at 1ea */
    NET_CLASS_VAR_S(get_item_definition_index, int, 0x1ea);
    /* m_iEntityQuality at 1ec */
    NET_CLASS_VAR_S(get_entity_quality, int, 0x1ec);
    /* m_iEntityLevel at 1f0 */
    NET_CLASS_VAR_S(get_entity_level, int, 0x1f0);
    /* m_iItemIDHigh at 200 */
    NET_CLASS_VAR_S(get_item_id_high, int, 0x200);
    /* m_iItemIDLow at 204 */
    NET_CLASS_VAR_S(get_item_id_low, int, 0x204);
    /* m_iAccountID at 208 */
    NET_CLASS_VAR_S(get_account_i_d, int, 0x208);
    /* m_bInitialized at 214 */
    NET_CLASS_VAR_S(is_initialized, bool, 0x214);
    /* m_szCustomName at 27c */
    NET_CLASS_VAR_C(get_custom_name, 0x27c, /* max length */ 0xa1);
END_NET_CLASS(DT_ScriptCreatedItem);
DEFINE_NET_CLASS(CBaseCombatCharacter, 0x6, 0x00, CBaseFlex);
    /* bcc_localdata at 0 */
    /* data table reference for DT_BCCLocalPlayerExclusive */
    /* bcc_nonlocaldata at 0 */
    /* data table reference for DT_BCCNonLocalPlayerExclusive */
    /* m_LastHitGroup at 2d84 */
    NET_CLASS_VAR_S(get_last_hit_group, int, 0x2d84);
    /* m_hMyWeapons at 2e08 */
    NET_CLASS_VAR_A(get_my_weapons, EntityHandle, 0x2e08, /* element count */ 0x40, /* element size */ 0x4);
    /* m_hActiveWeapon at 2f08 */
    NET_CLASS_VAR_S(get_active_weapon, EntityHandle, 0x2f08);
    /* m_flTimeOfLastInjury at 2f0c */
    NET_CLASS_VAR_S(get_time_of_last_injury, float, 0x2f0c);
    /* m_nRelativeDirectionOfLastInjury at 2f10 */
    NET_CLASS_VAR_S(get_relative_direction_of_last_injury, int32_t, 0x2f10);
    /* m_hMyWearables at 2f14 */
    NET_CLASS_VAR_A(get_my_wearables, EntityHandle, 0x2f14, /* element count */ 0x1, /* element size */ 0x0);
END_NET_CLASS(CBaseCombatCharacter);
DEFINE_NET_CLASS(CBasePlayer, 0xf, 0x00, CBaseCombatCharacter);
    /* localdata at 0 */
    /* data table reference for DT_LocalPlayerExclusive */
    /* pl at 0 */
    /* data table reference for DT_PlayerState */
    /* m_iHealth at 100 */
    NET_CLASS_VAR_S(get_health, int, 0x100);
    /* m_fFlags at 104 */
    NET_CLASS_VAR_S(get_flags, float, 0x104);
    /* m_hGroundEntity at 150 */
    NET_CLASS_VAR_S(get_ground_entity, EntityHandle, 0x150);
    /* m_nWaterLevel at 25e */
    NET_CLASS_VAR_S(get_water_level, int32_t, 0x25e);
    /* m_lifeState at 25f */
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    /* m_iAmmo at 2d88 */
    NET_CLASS_VAR_A(get_ammo, int, 0x2d88, /* element count */ 0x20, /* element size */ 0x4);
    /* m_iCoachingTeam at 2f60 */
    NET_CLASS_VAR_S(get_coaching_team, int, 0x2f60);
    /* m_flDuckAmount at 2fbc */
    NET_CLASS_VAR_S(get_duck_amount, float, 0x2fbc);
    /* m_flDuckSpeed at 2fc0 */
    NET_CLASS_VAR_S(get_duck_speed, float, 0x2fc0);
    /* m_iFOV at 31f4 */
    NET_CLASS_VAR_S(get_fo_v, int, 0x31f4);
    /* m_iFOVStart at 31f8 */
    NET_CLASS_VAR_S(get_fov_start, int, 0x31f8);
    /* m_ladderSurfaceProps at 3210 */
    NET_CLASS_VAR_S(get_ladder_surface_props, int, 0x3210);
    /* m_flFOVTime at 3218 */
    NET_CLASS_VAR_S(get_fov_time, float, 0x3218);
    /* m_vecLadderNormal at 3240 */
    NET_CLASS_VAR_S(get_ladder_normal, Vector3f, 0x3240);
    /* m_iBonusProgress at 3250 */
    NET_CLASS_VAR_S(get_bonus_progress, int, 0x3250);
    /* m_iBonusChallenge at 3254 */
    NET_CLASS_VAR_S(get_bonus_challenge, int, 0x3254);
    /* m_flMaxspeed at 3258 */
    NET_CLASS_VAR_S(get_maxspeed, float, 0x3258);
    /* m_hZoomOwner at 325c */
    NET_CLASS_VAR_S(get_zoom_owner, EntityHandle, 0x325c);
    /* m_vphysicsCollisionState at 326c */
    NET_CLASS_VAR_S(get_vphysics_collision_state, int, 0x326c);
    /* m_afPhysicsFlags at 32fc */
    NET_CLASS_VAR_S(get_af_physics_flags, int, 0x32fc);
    /* m_hVehicle at 3300 */
    NET_CLASS_VAR_S(get_vehicle, EntityHandle, 0x3300);
    /* m_hViewModel[0] at 3308 */
    /* TODO: fix name for m_hViewModel[0] of type 0 */
    /* m_hUseEntity at 3338 */
    NET_CLASS_VAR_S(get_use_entity, EntityHandle, 0x3338);
    /* m_iDefaultFOV at 333c */
    NET_CLASS_VAR_S(get_default_fo_v, int, 0x333c);
    /* m_hViewEntity at 334c */
    NET_CLASS_VAR_S(get_view_entity, EntityHandle, 0x334c);
    /* m_bShouldDrawPlayerWhileUsingViewEntity at 3350 */
    NET_CLASS_VAR_S(is_should_draw_player_while_using_view_entity, bool, 0x3350);
    /* m_iDeathPostEffect at 3384 */
    NET_CLASS_VAR_S(get_death_post_effect, int, 0x3384);
    /* m_iObserverMode at 3388 */
    NET_CLASS_VAR_S(get_observer_mode, int, 0x3388);
    /* m_bActiveCameraMan at 338c */
    NET_CLASS_VAR_S(is_active_camera_man, bool, 0x338c);
    /* m_bCameraManXRay at 338d */
    NET_CLASS_VAR_S(is_camera_man_x_ray, bool, 0x338d);
    /* m_bCameraManOverview at 338e */
    NET_CLASS_VAR_S(is_camera_man_overview, bool, 0x338e);
    /* m_bCameraManScoreBoard at 338f */
    NET_CLASS_VAR_S(is_camera_man_score_board, bool, 0x338f);
    /* m_uCameraManGraphs at 3390 */
    NET_CLASS_VAR_S(get_u_camera_man_graphs, int, 0x3390);
    /* m_hObserverTarget at 339c */
    NET_CLASS_VAR_S(get_observer_target, EntityHandle, 0x339c);
    /* m_szLastPlaceName at 35c4 */
    NET_CLASS_VAR_C(get_last_place_name, 0x35c4, /* max length */ 0x12);
    /* m_ubEFNoInterpParity at 35e8 */
    NET_CLASS_VAR_S(get_ub_ef_no_interp_parity, int, 0x35e8);
    /* m_hPostProcessCtrl at 37b8 */
    NET_CLASS_VAR_S(get_post_process_ctrl, EntityHandle, 0x37b8);
    /* m_hColorCorrectionCtrl at 37bc */
    NET_CLASS_VAR_S(get_color_correction_ctrl, EntityHandle, 0x37bc);
    /* m_PlayerFog.m_hCtrl at 37c4 */
    /* TODO: fix name for m_PlayerFog.m_hCtrl of type 0 */
END_NET_CLASS(CBasePlayer);
DEFINE_NET_CLASS(CCSPlayer, 0x28, 0x00, CBasePlayer);
    /* cslocaldata at 0 */
    /* data table reference for DT_CSLocalPlayerExclusive */
    /* csnonlocaldata at 0 */
    /* data table reference for DT_CSNonLocalPlayerExclusive */
    /* csteamdata at 0 */
    /* data table reference for DT_CSTeamExclusive */
    /* m_bIsScoped at 9974 */
    NET_CLASS_VAR_S(is_scoped, bool, 0x9974);
    /* m_bIsWalking at 9975 */
    NET_CLASS_VAR_S(is_walking, bool, 0x9975);
    /* m_bResumeZoom at 9976 */
    NET_CLASS_VAR_S(is_resume_zoom, bool, 0x9976);
    /* m_iPlayerState at 9978 */
    NET_CLASS_VAR_S(get_player_state, int, 0x9978);
    /* m_bIsDefusing at 997c */
    NET_CLASS_VAR_S(is_defusing, bool, 0x997c);
    /* m_bIsGrabbingHostage at 997d */
    NET_CLASS_VAR_S(is_grabbing_hostage, bool, 0x997d);
    /* m_iBlockingUseActionInProgress at 9980 */
    NET_CLASS_VAR_S(get_blocking_use_action_in_progress, int, 0x9980);
    /* m_bIsRescuing at 9984 */
    NET_CLASS_VAR_S(is_rescuing, bool, 0x9984);
    /* m_fImmuneToGunGameDamageTime at 9988 */
    NET_CLASS_VAR_S(get_immune_to_gun_game_damage_time, float, 0x9988);
    /* m_bGunGameImmunity at 9990 */
    NET_CLASS_VAR_S(is_gun_game_immunity, bool, 0x9990);
    /* m_bHasMovedSinceSpawn at 9991 */
    NET_CLASS_VAR_S(has_moved_since_spawn, bool, 0x9991);
    /* m_bMadeFinalGunGameProgressiveKill at 9992 */
    NET_CLASS_VAR_S(is_made_final_gun_game_progressive_kill, bool, 0x9992);
    /* m_iGunGameProgressiveWeaponIndex at 9994 */
    NET_CLASS_VAR_S(get_gun_game_progressive_weapon_index, int, 0x9994);
    /* m_iNumGunGameTRKillPoints at 9998 */
    NET_CLASS_VAR_S(get_num_gun_game_tr_kill_points, int, 0x9998);
    /* m_iNumGunGameKillsWithCurrentWeapon at 999c */
    NET_CLASS_VAR_S(get_num_gun_game_kills_with_current_weapon, int, 0x999c);
    /* m_iNumRoundKills at 99a0 */
    NET_CLASS_VAR_S(get_num_round_kills, int, 0x99a0);
    /* m_iNumRoundKillsHeadshots at 99a4 */
    NET_CLASS_VAR_S(get_num_round_kills_headshots, int, 0x99a4);
    /* m_unTotalRoundDamageDealt at 99a8 */
    NET_CLASS_VAR_S(get_total_round_damage_dealt, uint32_t, 0x99a8);
    /* m_fMolotovUseTime at 99ac */
    NET_CLASS_VAR_S(get_molotov_use_time, float, 0x99ac);
    /* m_fMolotovDamageTime at 99b0 */
    NET_CLASS_VAR_S(get_molotov_damage_time, float, 0x99b0);
    /* m_bInBombZone at 99b4 */
    NET_CLASS_VAR_S(is_in_bomb_zone, bool, 0x99b4);
    /* m_bInBuyZone at 99b5 */
    NET_CLASS_VAR_S(is_in_buy_zone, bool, 0x99b5);
    /* m_bInNoDefuseArea at 99b6 */
    NET_CLASS_VAR_S(is_in_no_defuse_area, bool, 0x99b6);
    /* m_iThrowGrenadeCounter at 99b8 */
    NET_CLASS_VAR_S(get_throw_grenade_counter, int, 0x99b8);
    /* m_bWaitForNoAttack at 99bc */
    NET_CLASS_VAR_S(is_wait_for_no_attack, bool, 0x99bc);
    /* m_bIsRespawningForDMBonus at 99bd */
    NET_CLASS_VAR_S(is_respawning_for_dm_bonus, bool, 0x99bd);
    /* m_flGuardianTooFarDistFrac at 99c0 */
    NET_CLASS_VAR_S(get_guardian_too_far_dist_frac, float, 0x99c0);
    /* m_flDetectedByEnemySensorTime at 99c4 */
    NET_CLASS_VAR_S(get_detected_by_enemy_sensor_time, float, 0x99c4);
    /* m_bKilledByTaser at 99cd */
    NET_CLASS_VAR_S(is_killed_by_taser, bool, 0x99cd);
    /* m_iMoveState at 99d0 */
    NET_CLASS_VAR_S(get_move_state, int, 0x99d0);
    /* m_bCanMoveDuringFreezePeriod at 99d4 */
    NET_CLASS_VAR_S(is_can_move_during_freeze_period, bool, 0x99d4);
    /* m_isCurrentGunGameLeader at 99d5 */
    NET_CLASS_VAR_S(get_is_current_gun_game_leader, int, 0x99d5);
    /* m_isCurrentGunGameTeamLeader at 99d6 */
    NET_CLASS_VAR_S(get_is_current_gun_game_team_leader, int, 0x99d6);
    /* m_szArmsModel at 99d7 */
    NET_CLASS_VAR_C(get_arms_model, 0x99d7, /* max length */ 0x100);
    /* m_flLowerBodyYawTarget at 9adc */
    NET_CLASS_VAR_S(get_lower_body_yaw_target, float, 0x9adc);
    /* m_bStrafing at 9ae0 */
    NET_CLASS_VAR_S(is_strafing, bool, 0x9ae0);
    /* m_bIsPlayerGhost at 9ae1 */
    NET_CLASS_VAR_S(is_player_ghost, bool, 0x9ae1);
    /* m_nIsAutoMounting at 9ae4 */
    NET_CLASS_VAR_S(get_is_auto_mounting, int32_t, 0x9ae4);
    /* m_vecAutomoveTargetEnd at 9af4 */
    NET_CLASS_VAR_S(get_automove_target_end, Vector3f, 0x9af4);
    /* m_flAutoMoveStartTime at 9b04 */
    NET_CLASS_VAR_S(get_auto_move_start_time, float, 0x9b04);
    /* m_flAutoMoveTargetTime at 9b08 */
    NET_CLASS_VAR_S(get_auto_move_target_time, float, 0x9b08);
    /* m_flLastExoJumpTime at 9b0c */
    NET_CLASS_VAR_S(get_last_exo_jump_time, float, 0x9b0c);
    /* m_iAddonBits at 103c4 */
    NET_CLASS_VAR_S(get_addon_bits, int, 0x103c4);
    /* m_iPrimaryAddon at 103c8 */
    NET_CLASS_VAR_S(get_primary_addon, int, 0x103c8);
    /* m_iSecondaryAddon at 103cc */
    NET_CLASS_VAR_S(get_secondary_addon, int, 0x103cc);
    /* m_iProgressBarDuration at 103d0 */
    NET_CLASS_VAR_S(get_progress_bar_duration, int, 0x103d0);
    /* m_flProgressBarStartTime at 103d4 */
    NET_CLASS_VAR_S(get_progress_bar_start_time, float, 0x103d4);
    /* m_bNightVisionOn at 103e9 */
    NET_CLASS_VAR_S(is_night_vision_on, bool, 0x103e9);
    /* m_bHasNightVision at 103ea */
    NET_CLASS_VAR_S(has_night_vision, bool, 0x103ea);
    /* m_flGroundAccelLinearFracLastTime at 103f0 */
    NET_CLASS_VAR_S(get_ground_accel_linear_frac_last_time, float, 0x103f0);
    /* m_iStartAccount at 103f4 */
    NET_CLASS_VAR_S(get_start_account, int, 0x103f4);
    /* m_totalHitsOnServer at 103f8 */
    NET_CLASS_VAR_S(get_total_hits_on_server, int, 0x103f8);
    /* m_bIsSpawnRappelling at 103fd */
    NET_CLASS_VAR_S(is_spawn_rappelling, bool, 0x103fd);
    /* m_vecSpawnRappellingRopeOrigin at 10400 */
    NET_CLASS_VAR_S(get_spawn_rappelling_rope_origin, Vector3f, 0x10400);
    /* m_nSurvivalTeam at 10410 */
    NET_CLASS_VAR_S(get_survival_team, int32_t, 0x10410);
    /* m_hSurvivalAssassinationTarget at 10414 */
    NET_CLASS_VAR_S(get_survival_assassination_target, EntityHandle, 0x10414);
    /* m_flHealthShotBoostExpirationTime at 10418 */
    NET_CLASS_VAR_S(get_health_shot_boost_expiration_time, float, 0x10418);
    /* m_hRagdoll at 1043c */
    NET_CLASS_VAR_S(get_ragdoll, EntityHandle, 0x1043c);
    /* m_hPlayerPing at 10440 */
    NET_CLASS_VAR_S(get_player_ping, EntityHandle, 0x10440);
    /* m_hCarriedHostage at 10448 */
    NET_CLASS_VAR_S(get_carried_hostage, EntityHandle, 0x10448);
    /* m_hCarriedHostageProp at 1044c */
    NET_CLASS_VAR_S(get_carried_hostage_prop, EntityHandle, 0x1044c);
    /* m_flFlashMaxAlpha at 1046c */
    NET_CLASS_VAR_S(get_flash_max_alpha, float, 0x1046c);
    /* m_flFlashDuration at 10470 */
    NET_CLASS_VAR_S(get_flash_duration, float, 0x10470);
    /* m_iMatchStats_Kills at 104b4 */
    NET_CLASS_VAR_A(get_match_stats_kills, int, 0x104b4, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_Damage at 1052c */
    NET_CLASS_VAR_A(get_match_stats_damage, int, 0x1052c, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_EquipmentValue at 105a4 */
    NET_CLASS_VAR_A(get_match_stats_equipment_value, int, 0x105a4, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_MoneySaved at 1061c */
    NET_CLASS_VAR_A(get_match_stats_money_saved, int, 0x1061c, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_KillReward at 10694 */
    NET_CLASS_VAR_A(get_match_stats_kill_reward, int, 0x10694, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_LiveTime at 1070c */
    NET_CLASS_VAR_A(get_match_stats_live_time, int, 0x1070c, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_Deaths at 10784 */
    NET_CLASS_VAR_A(get_match_stats_deaths, int, 0x10784, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_Assists at 107fc */
    NET_CLASS_VAR_A(get_match_stats_assists, int, 0x107fc, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_HeadShotKills at 10874 */
    NET_CLASS_VAR_A(get_match_stats_head_shot_kills, int, 0x10874, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_Objective at 108ec */
    NET_CLASS_VAR_A(get_match_stats_objective, int, 0x108ec, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_CashEarned at 10964 */
    NET_CLASS_VAR_A(get_match_stats_cash_earned, int, 0x10964, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_UtilityDamage at 109dc */
    NET_CLASS_VAR_A(get_match_stats_utility_damage, int, 0x109dc, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_iMatchStats_EnemiesFlashed at 10a54 */
    NET_CLASS_VAR_A(get_match_stats_enemies_flashed, int, 0x10a54, /* element count */ 0x1e, /* element size */ 0x4);
    /* m_unCurrentEquipmentValue at 11784 */
    NET_CLASS_VAR_S(get_current_equipment_value, uint32_t, 0x11784);
    /* m_unRoundStartEquipmentValue at 11786 */
    NET_CLASS_VAR_S(get_round_start_equipment_value, uint32_t, 0x11786);
    /* m_unFreezetimeEndEquipmentValue at 11788 */
    NET_CLASS_VAR_S(get_freezetime_end_equipment_value, uint32_t, 0x11788);
    /* m_rank at 1178c */
    NET_CLASS_VAR_A(get_rank, int, 0x1178c, /* element count */ 0x6, /* element size */ 0x4);
    /* m_passiveItems at 117a4 */
    NET_CLASS_VAR_A(get_passive_items, int, 0x117a4, /* element count */ 0x4, /* element size */ 0x1);
    /* m_bHasParachute at 117a4 */
    NET_CLASS_VAR_S(has_parachute, bool, 0x117a4);
    /* m_unMusicID at 117a8 */
    NET_CLASS_VAR_S(get_music_i_d, uint32_t, 0x117a8);
    /* m_iAccount at 117b8 */
    NET_CLASS_VAR_S(get_account, int, 0x117b8);
    /* m_bHasHelmet at 117c0 */
    NET_CLASS_VAR_S(has_helmet, bool, 0x117c0);
    /* m_bHasHeavyArmor at 117c1 */
    NET_CLASS_VAR_S(has_heavy_armor, bool, 0x117c1);
    /* m_nHeavyAssaultSuitCooldownRemaining at 117c4 */
    NET_CLASS_VAR_S(get_heavy_assault_suit_cooldown_remaining, int32_t, 0x117c4);
    /* m_iClass at 117c8 */
    NET_CLASS_VAR_S(get_class, int, 0x117c8);
    /* m_ArmorValue at 117cc */
    NET_CLASS_VAR_S(get_armor_value, int, 0x117cc);
    /* m_angEyeAngles[0] at 117d0 */
    /* TODO: fix name for m_angEyeAngles[0] of type 1 */
    /* m_angEyeAngles at 117d0 */
    NET_CLASS_VAR_S(get_ang_eye_angles, Vector3f, 0x117d0);
    /* m_angEyeAngles[1] at 117d4 */
    /* TODO: fix name for m_angEyeAngles[1] of type 1 */
    /* m_bHasDefuser at 117dc */
    NET_CLASS_VAR_S(has_defuser, bool, 0x117dc);
    /* m_bInHostageRescueZone at 117dd */
    NET_CLASS_VAR_S(is_in_hostage_rescue_zone, bool, 0x117dd);
    /* m_bHud_MiniScoreHidden at 117fe */
    NET_CLASS_VAR_S(is_hud_mini_score_hidden, bool, 0x117fe);
    /* m_bHud_RadarHidden at 117ff */
    NET_CLASS_VAR_S(is_hud_radar_hidden, bool, 0x117ff);
    /* m_nLastKillerIndex at 11800 */
    NET_CLASS_VAR_S(get_last_killer_index, int32_t, 0x11800);
    /* m_nLastConcurrentKilled at 11804 */
    NET_CLASS_VAR_S(get_last_concurrent_killed, int32_t, 0x11804);
    /* m_nDeathCamMusic at 11808 */
    NET_CLASS_VAR_S(get_death_cam_music, int32_t, 0x11808);
    /* m_cycleLatch at 118e0 */
    NET_CLASS_VAR_S(get_cycle_latch, int, 0x118e0);
    /* m_bIsLookingAtWeapon at 11974 */
    NET_CLASS_VAR_S(is_looking_at_weapon, bool, 0x11974);
    /* m_bIsHoldingLookAtWeapon at 11975 */
    NET_CLASS_VAR_S(is_holding_look_at_weapon, bool, 0x11975);
    /* m_vecPlayerPatchEconIndices at 119c4 */
    NET_CLASS_VAR_A(get_player_patch_econ_indices, Vector3f, 0x119c4, /* element count */ 0x5, /* element size */ 0x4);
    /* m_flThirdpersonRecoil at 119ec */
    NET_CLASS_VAR_S(get_thirdperson_recoil, float, 0x119ec);
    /* m_bHideTargetID at 119f0 */
    NET_CLASS_VAR_S(is_hide_target_i_d, bool, 0x119f0);
    /* m_bIsAssassinationTarget at 11a4c */
    NET_CLASS_VAR_S(is_assassination_target, bool, 0x11a4c);
    /* m_bIsControllingBot at 11a4d */
    NET_CLASS_VAR_S(is_controlling_bot, bool, 0x11a4d);
    /* m_bCanControlObservedBot at 11a4e */
    NET_CLASS_VAR_S(is_can_control_observed_bot, bool, 0x11a4e);
    /* m_iControlledBotEntIndex at 11a50 */
    NET_CLASS_VAR_S(get_controlled_bot_ent_index, int, 0x11a50);
    /* m_bHasControlledBotThisRound at 11a5c */
    NET_CLASS_VAR_S(has_controlled_bot_this_round, bool, 0x11a5c);
END_NET_CLASS(CCSPlayer);
DEFINE_NET_CLASS(CHostage, 0x61, 0x00, CBaseCombatCharacter);
    /* m_iHealth at 100 */
    NET_CLASS_VAR_S(get_health, int, 0x100);
    /* m_fFlags at 104 */
    NET_CLASS_VAR_S(get_flags, float, 0x104);
    /* m_lifeState at 25f */
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    /* m_iMaxHealth at 2f28 */
    NET_CLASS_VAR_S(get_max_health, int, 0x2f28);
    /* m_leader at 2f30 */
    NET_CLASS_VAR_S(get_leader, int, 0x2f30);
    /* m_vel at 2f34 */
    NET_CLASS_VAR_S(get_vel, Vector3f, 0x2f34);
    /* m_isRescued at 2f40 */
    NET_CLASS_VAR_S(get_is_rescued, int, 0x2f40);
    /* m_jumpedThisFrame at 2f41 */
    NET_CLASS_VAR_S(get_jumped_this_frame, int, 0x2f41);
    /* m_nHostageState at 2f44 */
    NET_CLASS_VAR_S(get_hostage_state, int32_t, 0x2f44);
    /* m_flRescueStartTime at 2f48 */
    NET_CLASS_VAR_S(get_rescue_start_time, float, 0x2f48);
    /* m_flGrabSuccessTime at 2f4c */
    NET_CLASS_VAR_S(get_grab_success_time, float, 0x2f4c);
    /* m_flDropStartTime at 2f50 */
    NET_CLASS_VAR_S(get_drop_start_time, float, 0x2f50);
END_NET_CLASS(CHostage);
DEFINE_NET_CLASS(NextBotCombatCharacter, 0x0, 0x00, CBaseCombatCharacter);
END_NET_CLASS(NextBotCombatCharacter);
DEFINE_NET_CLASS(CAI_BaseNPC, 0x0, 0x00, CBaseCombatCharacter);
    /* m_lifeState at 25f */
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    /* m_flTimePingEffect at 2f20 */
    NET_CLASS_VAR_S(get_time_ping_effect, float, 0x2f20);
    /* m_iDeathPose at 2f24 */
    NET_CLASS_VAR_S(get_death_pose, int, 0x2f24);
    /* m_iDeathFrame at 2f28 */
    NET_CLASS_VAR_S(get_death_frame, int, 0x2f28);
    /* m_iSpeedModRadius at 2f2c */
    NET_CLASS_VAR_S(get_speed_mod_radius, int, 0x2f2c);
    /* m_iSpeedModSpeed at 2f30 */
    NET_CLASS_VAR_S(get_speed_mod_speed, int, 0x2f30);
    /* m_bPerformAvoidance at 2f34 */
    NET_CLASS_VAR_S(is_perform_avoidance, bool, 0x2f34);
    /* m_bIsMoving at 2f35 */
    NET_CLASS_VAR_S(is_moving, bool, 0x2f35);
    /* m_bFadeCorpse at 2f36 */
    NET_CLASS_VAR_S(is_fade_corpse, bool, 0x2f36);
    /* m_bSpeedModActive at 2f37 */
    NET_CLASS_VAR_S(is_speed_mod_active, bool, 0x2f37);
    /* m_bImportanRagdoll at 2f38 */
    NET_CLASS_VAR_S(is_importan_ragdoll, bool, 0x2f38);
END_NET_CLASS(CAI_BaseNPC);
DEFINE_NET_CLASS(DT_AttributeContainer, 0x0, 0x00, netvar::class_base);
    /* m_Item at 0 */
    /* data table reference for DT_ScriptCreatedItem */
    /* m_iReapplyProvisionParity at 18 */
    NET_CLASS_VAR_S(get_reapply_provision_parity, int, 0x18);
    /* m_hOuter at 1c */
    NET_CLASS_VAR_S(get_outer, EntityHandle, 0x1c);
    /* m_ProviderType at 24 */
    NET_CLASS_VAR_S(get_provider_type, int, 0x24);
END_NET_CLASS(DT_AttributeContainer);
DEFINE_NET_CLASS(CBaseAttributableItem, 0x4, 0x00, CBaseAnimating);
    /* m_AttributeManager at 0 */
    /* data table reference for DT_AttributeContainer */
    /* m_OriginalOwnerXuidLow at 31d0 */
    NET_CLASS_VAR_S(get_original_owner_xuid_low, int, 0x31d0);
    /* m_OriginalOwnerXuidHigh at 31d4 */
    NET_CLASS_VAR_S(get_original_owner_xuid_high, int, 0x31d4);
    /* m_nFallbackPaintKit at 31d8 */
    NET_CLASS_VAR_S(get_fallback_paint_kit, int32_t, 0x31d8);
    /* m_nFallbackSeed at 31dc */
    NET_CLASS_VAR_S(get_fallback_seed, int32_t, 0x31dc);
    /* m_flFallbackWear at 31e0 */
    NET_CLASS_VAR_S(get_fallback_wear, float, 0x31e0);
    /* m_nFallbackStatTrak at 31e4 */
    NET_CLASS_VAR_S(get_fallback_stat_trak, int32_t, 0x31e4);
END_NET_CLASS(CBaseAttributableItem);
DEFINE_NET_CLASS(CEconEntity, 0x35, 0x00, CBaseFlex);
    /* m_AttributeManager at 0 */
    /* data table reference for DT_AttributeContainer */
    /* m_OriginalOwnerXuidLow at 31d0 */
    NET_CLASS_VAR_S(get_original_owner_xuid_low, int, 0x31d0);
    /* m_OriginalOwnerXuidHigh at 31d4 */
    NET_CLASS_VAR_S(get_original_owner_xuid_high, int, 0x31d4);
    /* m_nFallbackPaintKit at 31d8 */
    NET_CLASS_VAR_S(get_fallback_paint_kit, int32_t, 0x31d8);
    /* m_nFallbackSeed at 31dc */
    NET_CLASS_VAR_S(get_fallback_seed, int32_t, 0x31dc);
    /* m_flFallbackWear at 31e0 */
    NET_CLASS_VAR_S(get_fallback_wear, float, 0x31e0);
    /* m_nFallbackStatTrak at 31e4 */
    NET_CLASS_VAR_S(get_fallback_stat_trak, int32_t, 0x31e4);
END_NET_CLASS(CEconEntity);
DEFINE_NET_CLASS(CEconWearable, 0x36, 0x00, CEconEntity);
END_NET_CLASS(CEconWearable);
DEFINE_NET_CLASS(CItem, 0x0, 0x00, CEconEntity);
    /* m_bShouldGlow at 3240 */
    NET_CLASS_VAR_S(is_should_glow, bool, 0x3240);
END_NET_CLASS(CItem);
DEFINE_NET_CLASS(CBaseCombatWeapon, 0x7, 0x00, CEconEntity);
    /* LocalWeaponData at 0 */
    /* data table reference for DT_LocalWeaponData */
    /* LocalActiveWeaponData at 0 */
    /* data table reference for DT_LocalActiveWeaponData */
    /* m_hOwner at 3240 */
    NET_CLASS_VAR_S(get_owner, EntityHandle, 0x3240);
    /* m_iViewModelIndex at 3250 */
    NET_CLASS_VAR_S(get_view_model_index, int, 0x3250);
    /* m_iWorldModelIndex at 3254 */
    NET_CLASS_VAR_S(get_world_model_index, int, 0x3254);
    /* m_iWorldDroppedModelIndex at 3258 */
    NET_CLASS_VAR_S(get_world_dropped_model_index, int, 0x3258);
    /* m_iNumEmptyAttacks at 3260 */
    NET_CLASS_VAR_S(get_num_empty_attacks, int, 0x3260);
    /* m_hWeaponWorldModel at 3264 */
    NET_CLASS_VAR_S(get_weapon_world_model, EntityHandle, 0x3264);
    /* m_iState at 3268 */
    NET_CLASS_VAR_S(get_state, int, 0x3268);
    /* m_iClip1 at 3274 */
    NET_CLASS_VAR_S(get_clip1, int, 0x3274);
    /* m_iClip2 at 3278 */
    NET_CLASS_VAR_S(get_clip2, int, 0x3278);
    /* m_iPrimaryReserveAmmoCount at 327c */
    NET_CLASS_VAR_S(get_primary_reserve_ammo_count, int, 0x327c);
    /* m_iSecondaryReserveAmmoCount at 3280 */
    NET_CLASS_VAR_S(get_secondary_reserve_ammo_count, int, 0x3280);
END_NET_CLASS(CBaseCombatWeapon);
DEFINE_NET_CLASS(CItemCash, 0x69, 0x00, CItem);
END_NET_CLASS(CItemCash);
DEFINE_NET_CLASS(CItemDogtags, 0x6a, 0x00, CItem);
    /* m_OwningPlayer at 3450 */
    NET_CLASS_VAR_S(get_owning_player, int, 0x3450);
    /* m_KillingPlayer at 3454 */
    NET_CLASS_VAR_S(get_killing_player, int, 0x3454);
END_NET_CLASS(CItemDogtags);
DEFINE_NET_CLASS(CWeaponCSBase, 0xec, 0x00, CBaseCombatWeapon);
    /* m_weaponMode at 3328 */
    NET_CLASS_VAR_S(get_weapon_mode, int, 0x3328);
    /* m_fAccuracyPenalty at 3340 */
    NET_CLASS_VAR_S(get_accuracy_penalty, float, 0x3340);
    /* m_iRecoilIndex at 3350 */
    NET_CLASS_VAR_S(get_recoil_index_i, int, 0x3350);
    /* m_flRecoilIndex at 3354 */
    NET_CLASS_VAR_S(get_recoil_index_f, float, 0x3354);
    /* m_bBurstMode at 3358 */
    NET_CLASS_VAR_S(is_burst_mode, bool, 0x3358);
    /* m_flPostponeFireReadyTime at 335c */
    NET_CLASS_VAR_S(get_postpone_fire_ready_time, float, 0x335c);
    /* m_bReloadVisuallyComplete at 3360 */
    NET_CLASS_VAR_S(is_reload_visually_complete, bool, 0x3360);
    /* m_bSilencerOn at 3361 */
    NET_CLASS_VAR_S(is_silencer_on, bool, 0x3361);
    /* m_flDoneSwitchingSilencer at 3364 */
    NET_CLASS_VAR_S(get_done_switching_silencer, float, 0x3364);
    /* m_iOriginalTeamNumber at 336c */
    NET_CLASS_VAR_S(get_original_team_number, int, 0x336c);
    /* m_hPrevOwner at 3394 */
    NET_CLASS_VAR_S(get_prev_owner, EntityHandle, 0x3394);
    /* m_fLastShotTime at 33b8 */
    NET_CLASS_VAR_S(get_last_shot_time, float, 0x33b8);
    /* m_iIronSightMode at 33d4 */
    NET_CLASS_VAR_S(get_iron_sight_mode, int, 0x33d4);
END_NET_CLASS(CWeaponCSBase);
DEFINE_NET_CLASS(CWeaponCSBaseGun, 0xed, 0x00, CWeaponCSBase);
    /* m_zoomLevel at 33e0 */
    NET_CLASS_VAR_S(get_zoom_level, int, 0x33e0);
    /* m_iBurstShotsRemaining at 33e4 */
    NET_CLASS_VAR_S(get_burst_shots_remaining, int, 0x33e4);
END_NET_CLASS(CWeaponCSBaseGun);
DEFINE_NET_CLASS(CWeaponCycler, 0xee, 0x00, CBaseCombatWeapon);
END_NET_CLASS(CWeaponCycler);
DEFINE_NET_CLASS(CWeaponElite, 0xef, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponElite);
DEFINE_NET_CLASS(CWeaponFamas, 0xf0, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponFamas);
DEFINE_NET_CLASS(CWeaponFiveSeven, 0xf1, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponFiveSeven);
DEFINE_NET_CLASS(CWeaponG3SG1, 0xf2, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponG3SG1);
DEFINE_NET_CLASS(CWeaponGalil, 0xf3, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponGalil);
DEFINE_NET_CLASS(CWeaponGalilAR, 0xf4, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponGalilAR);
DEFINE_NET_CLASS(CWeaponGlock, 0xf5, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponGlock);
DEFINE_NET_CLASS(CWeaponHKP2000, 0xf6, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponHKP2000);
DEFINE_NET_CLASS(CWeaponM249, 0xf7, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponM249);
DEFINE_NET_CLASS(CWeaponM3, 0xf8, 0x00, CWeaponCSBase);
    /* m_reloadState at 33e4 */
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponM3);
DEFINE_NET_CLASS(CWeaponM4A1, 0xf9, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponM4A1);
DEFINE_NET_CLASS(CWeaponMAC10, 0xfa, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponMAC10);
DEFINE_NET_CLASS(CWeaponMag7, 0xfb, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponMag7);
DEFINE_NET_CLASS(CWeaponMP5Navy, 0xfc, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponMP5Navy);
DEFINE_NET_CLASS(CWeaponMP7, 0xfd, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponMP7);
DEFINE_NET_CLASS(CWeaponMP9, 0xfe, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponMP9);
DEFINE_NET_CLASS(CWeaponNegev, 0xff, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponNegev);
DEFINE_NET_CLASS(CWeaponNOVA, 0x100, 0x00, CWeaponCSBase);
    /* m_reloadState at 33e4 */
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponNOVA);
DEFINE_NET_CLASS(CWeaponP228, 0x101, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponP228);
DEFINE_NET_CLASS(CWeaponP250, 0x102, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponP250);
DEFINE_NET_CLASS(CWeaponP90, 0x103, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponP90);
DEFINE_NET_CLASS(CWeaponSawedoff, 0x104, 0x00, CWeaponCSBase);
    /* m_reloadState at 33e4 */
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponSawedoff);
DEFINE_NET_CLASS(CWeaponSCAR20, 0x105, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponSCAR20);
DEFINE_NET_CLASS(CWeaponScout, 0x106, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponScout);
DEFINE_NET_CLASS(CWeaponSG550, 0x107, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponSG550);
DEFINE_NET_CLASS(CWeaponSG552, 0x108, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponSG552);
DEFINE_NET_CLASS(CWeaponSG556, 0x109, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponSG556);
DEFINE_NET_CLASS(CWeaponShield, 0x10a, 0x00, CWeaponCSBaseGun);
    /* m_flDisplayHealth at 3400 */
    NET_CLASS_VAR_S(get_display_health, float, 0x3400);
END_NET_CLASS(CWeaponShield);
DEFINE_NET_CLASS(CWeaponSSG08, 0x10b, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponSSG08);
DEFINE_NET_CLASS(CWeaponTaser, 0x10c, 0x00, CWeaponCSBaseGun);
    /* m_fFireTime at 3400 */
    NET_CLASS_VAR_S(get_fire_time, float, 0x3400);
END_NET_CLASS(CWeaponTaser);
DEFINE_NET_CLASS(CWeaponTec9, 0x10d, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponTec9);
DEFINE_NET_CLASS(CWeaponTMP, 0x10e, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponTMP);
DEFINE_NET_CLASS(CWeaponUMP45, 0x10f, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponUMP45);
DEFINE_NET_CLASS(CWeaponUSP, 0x110, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponUSP);
DEFINE_NET_CLASS(CWeaponXM1014, 0x111, 0x00, CWeaponCSBase);
    /* m_reloadState at 33e4 */
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponXM1014);
DEFINE_NET_CLASS(CWeaponZoneRepulsor, 0x112, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponZoneRepulsor);
DEFINE_NET_CLASS(CWeaponCubemap, 0x0, 0x00, CBaseCombatWeapon);
END_NET_CLASS(CWeaponCubemap);
DEFINE_NET_CLASS(CItemAssaultSuitUseable, 0x0, 0x00, CItem);
    /* m_nArmorValue at 3450 */
    NET_CLASS_VAR_S(get_armor_value, int32_t, 0x3450);
    /* m_bIsHeavyAssaultSuit at 3454 */
    NET_CLASS_VAR_S(is_heavy_assault_suit, bool, 0x3454);
END_NET_CLASS(CItemAssaultSuitUseable);
DEFINE_NET_CLASS(CAK47, 0x1, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CAK47);
DEFINE_NET_CLASS(CBaseCSGrenade, 0x8, 0x00, CWeaponCSBase);
    /* m_bRedraw at 33e0 */
    NET_CLASS_VAR_S(is_redraw, bool, 0x33e0);
    /* m_bIsHeldByPlayer at 33e1 */
    NET_CLASS_VAR_S(is_held_by_player, bool, 0x33e1);
    /* m_bPinPulled at 33e2 */
    NET_CLASS_VAR_S(is_pin_pulled, bool, 0x33e2);
    /* m_fThrowTime at 33e4 */
    NET_CLASS_VAR_S(get_throw_time, float, 0x33e4);
    /* m_bLoopingSoundPlaying at 33e8 */
    NET_CLASS_VAR_S(is_looping_sound_playing, bool, 0x33e8);
    /* m_flThrowStrength at 33ec */
    NET_CLASS_VAR_S(get_throw_strength, float, 0x33ec);
    /* m_fDropTime at 33f0 */
    NET_CLASS_VAR_S(get_drop_time, float, 0x33f0);
END_NET_CLASS(CBaseCSGrenade);
DEFINE_NET_CLASS(CBreachCharge, 0x1c, 0x00, CWeaponCSBase);
END_NET_CLASS(CBreachCharge);
DEFINE_NET_CLASS(CBumpMine, 0x20, 0x00, CWeaponCSBase);
END_NET_CLASS(CBumpMine);
DEFINE_NET_CLASS(CC4, 0x22, 0x00, CWeaponCSBase);
    /* m_bStartedArming at 3400 */
    NET_CLASS_VAR_S(is_started_arming, bool, 0x3400);
    /* m_fArmedTime at 3404 */
    NET_CLASS_VAR_S(get_armed_time, float, 0x3404);
    /* m_bBombPlacedAnimation at 3408 */
    NET_CLASS_VAR_S(is_bomb_placed_animation, bool, 0x3408);
    /* m_bShowC4LED at 3409 */
    NET_CLASS_VAR_S(is_show_c4_le_d, bool, 0x3409);
    /* m_bIsPlantingViaUse at 340a */
    NET_CLASS_VAR_S(is_planting_via_use, bool, 0x340a);
END_NET_CLASS(CC4);
DEFINE_NET_CLASS(CDEagle, 0x2e, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CDEagle);
DEFINE_NET_CLASS(CDecoyGrenade, 0x2f, 0x00, CBaseCSGrenade);
END_NET_CLASS(CDecoyGrenade);
DEFINE_NET_CLASS(CFists, 0x4c, 0x00, CWeaponCSBase);
    /* m_bPlayingUninterruptableAct at 33e0 */
    NET_CLASS_VAR_S(is_playing_uninterruptable_act, bool, 0x33e0);
END_NET_CLASS(CFists);
DEFINE_NET_CLASS(CFlashbang, 0x4d, 0x00, CBaseCSGrenade);
END_NET_CLASS(CFlashbang);
DEFINE_NET_CLASS(CHEGrenade, 0x60, 0x00, CBaseCSGrenade);
END_NET_CLASS(CHEGrenade);
DEFINE_NET_CLASS(CKnife, 0x6b, 0x00, CWeaponCSBase);
END_NET_CLASS(CKnife);
DEFINE_NET_CLASS(CKnifeGG, 0x6c, 0x00, CKnife);
END_NET_CLASS(CKnifeGG);
DEFINE_NET_CLASS(CMelee, 0x70, 0x00, CWeaponCSBase);
    /* m_flThrowAt at 33e0 */
    NET_CLASS_VAR_S(get_throw_at, float, 0x33e0);
END_NET_CLASS(CMelee);
DEFINE_NET_CLASS(CMolotovGrenade, 0x71, 0x00, CBaseCSGrenade);
END_NET_CLASS(CMolotovGrenade);
DEFINE_NET_CLASS(CSCAR17, 0x96, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CSCAR17);
DEFINE_NET_CLASS(CSensorGrenade, 0x98, 0x00, CBaseCSGrenade);
END_NET_CLASS(CSensorGrenade);
DEFINE_NET_CLASS(CSmokeGrenade, 0x9c, 0x00, CBaseCSGrenade);
END_NET_CLASS(CSmokeGrenade);
DEFINE_NET_CLASS(CSnowball, 0x9f, 0x00, CBaseCSGrenade);
END_NET_CLASS(CSnowball);
DEFINE_NET_CLASS(CTablet, 0xac, 0x00, CWeaponCSBase);
    /* m_flUpgradeExpirationTime[0] at 33e8 */
    /* TODO: fix name for m_flUpgradeExpirationTime[0] of type 1 */
    /* m_vecLocalHexFlags[0] at 33f8 */
    /* TODO: fix name for m_vecLocalHexFlags[0] of type 0 */
    /* m_nContractKillGridIndex at 34a0 */
    NET_CLASS_VAR_S(get_contract_kill_grid_index, int32_t, 0x34a0);
    /* m_nContractKillGridHighResIndex at 34a4 */
    NET_CLASS_VAR_S(get_contract_kill_grid_high_res_index, int32_t, 0x34a4);
    /* m_bTabletReceptionIsBlocked at 34a8 */
    NET_CLASS_VAR_S(is_tablet_reception_is_blocked, bool, 0x34a8);
    /* m_flScanProgress at 34ac */
    NET_CLASS_VAR_S(get_scan_progress, float, 0x34ac);
    /* m_flBootTime at 34b0 */
    NET_CLASS_VAR_S(get_boot_time, float, 0x34b0);
    /* m_flShowMapTime at 34b4 */
    NET_CLASS_VAR_S(get_show_map_time, float, 0x34b4);
    /* m_vecNearestMetalCratePos at 34b8 */
    NET_CLASS_VAR_S(get_nearest_metal_crate_pos, Vector3f, 0x34b8);
    /* m_vecNotificationIds[0] at 34c4 */
    /* TODO: fix name for m_vecNotificationIds[0] of type 0 */
    /* m_vecNotificationTimestamps[0] at 34e4 */
    /* TODO: fix name for m_vecNotificationTimestamps[0] of type 1 */
    /* m_nLastPurchaseIndex at 3504 */
    NET_CLASS_VAR_S(get_last_purchase_index, int32_t, 0x3504);
    /* m_vecPlayerPositionHistory[0] at 3508 */
    /* TODO: fix name for m_vecPlayerPositionHistory[0] of type 2 */
END_NET_CLASS(CTablet);
DEFINE_NET_CLASS(CWeaponAug, 0xe8, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponAug);
DEFINE_NET_CLASS(CWeaponAWP, 0xe9, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponAWP);
DEFINE_NET_CLASS(CWeaponBaseItem, 0xea, 0x00, CWeaponCSBase);
    /* m_bRedraw at 33ec */
    NET_CLASS_VAR_S(is_redraw, bool, 0x33ec);
END_NET_CLASS(CWeaponBaseItem);
DEFINE_NET_CLASS(CWeaponBizon, 0xeb, 0x00, CWeaponCSBaseGun);
END_NET_CLASS(CWeaponBizon);
DEFINE_NET_CLASS(CIncendiaryGrenade, 0x63, 0x00, CMolotovGrenade);
END_NET_CLASS(CIncendiaryGrenade);
DEFINE_NET_CLASS(CItem_Healthshot, 0x68, 0x00, CWeaponBaseItem);
END_NET_CLASS(CItem_Healthshot);
