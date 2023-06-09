DEFINE_NET_CLASS(NextBotCombatCharacter, 0x0, 0x00, netvar::class_base);
END_NET_CLASS(NextBotCombatCharacter);
DEFINE_NET_CLASS(CWeaponCubemap, 0x0, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponCubemap);
DEFINE_NET_CLASS(CPropVehicleChoreoGeneric, 0x0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x2a04);
    NET_CLASS_VAR_S(is_enter_anim_on, bool, 0x2a0c);
    NET_CLASS_VAR_S(is_exit_anim_on, bool, 0x2a0d);
    NET_CLASS_VAR_S(get_eye_exit_endpoint, Vector3f, 0x2a10);
    NET_CLASS_VAR_S(is_force_eyes_to_attachment, bool, 0x2a1c);
    /* TODO: fix name for m_vehicleView.bClampEyeAngles of type 0*/
    /* TODO: fix name for m_vehicleView.flPitchCurveZero of type 1*/
    /* TODO: fix name for m_vehicleView.flPitchCurveLinear of type 1*/
    /* TODO: fix name for m_vehicleView.flRollCurveZero of type 1*/
    /* TODO: fix name for m_vehicleView.flRollCurveLinear of type 1*/
    /* TODO: fix name for m_vehicleView.flFOV of type 1*/
    /* TODO: fix name for m_vehicleView.flYawMin of type 1*/
    /* TODO: fix name for m_vehicleView.flYawMax of type 1*/
    /* TODO: fix name for m_vehicleView.flPitchMin of type 1*/
    /* TODO: fix name for m_vehicleView.flPitchMax of type 1*/
END_NET_CLASS(CPropVehicleChoreoGeneric);
DEFINE_NET_CLASS(CItemAssaultSuitUseable, 0x0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_armor_value, int32_t, 0x3450);
    NET_CLASS_VAR_S(is_heavy_assault_suit, bool, 0x3454);
END_NET_CLASS(CItemAssaultSuitUseable);
DEFINE_NET_CLASS(CItem, 0x0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_should_glow, bool, 0x3240);
END_NET_CLASS(CItem);
DEFINE_NET_CLASS(CAI_BaseNPC, 0x0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    NET_CLASS_VAR_S(get_time_ping_effect, float, 0x2f20);
    NET_CLASS_VAR_S(get_death_pose, int, 0x2f24);
    NET_CLASS_VAR_S(get_death_frame, int, 0x2f28);
    NET_CLASS_VAR_S(get_speed_mod_radius, int, 0x2f2c);
    NET_CLASS_VAR_S(get_speed_mod_speed, int, 0x2f30);
    NET_CLASS_VAR_S(is_perform_avoidance, bool, 0x2f34);
    NET_CLASS_VAR_S(is_moving, bool, 0x2f35);
    NET_CLASS_VAR_S(is_fade_corpse, bool, 0x2f36);
    NET_CLASS_VAR_S(is_speed_mod_active, bool, 0x2f37);
    NET_CLASS_VAR_S(is_importan_ragdoll, bool, 0x2f38);
END_NET_CLASS(CAI_BaseNPC);
DEFINE_NET_CLASS(CAK47, 0x1, 0x00, netvar::class_base);
END_NET_CLASS(CAK47);
DEFINE_NET_CLASS(CBaseAttributableItem, 0x4, 0x00, netvar::class_base);
    /* TODO: m_AttributeManager of type 6*/
    NET_CLASS_VAR_S(get_original_owner_xuid_low, int, 0x31d0);
    NET_CLASS_VAR_S(get_original_owner_xuid_high, int, 0x31d4);
    NET_CLASS_VAR_S(get_fallback_paint_kit, int32_t, 0x31d8);
    NET_CLASS_VAR_S(get_fallback_seed, int32_t, 0x31dc);
    NET_CLASS_VAR_S(get_fallback_wear, float, 0x31e0);
    NET_CLASS_VAR_S(get_fallback_stat_trak, int32_t, 0x31e4);
END_NET_CLASS(CBaseAttributableItem);
DEFINE_NET_CLASS(CBaseButton, 0x5, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_usable, int, 0xa08);
END_NET_CLASS(CBaseButton);
DEFINE_NET_CLASS(CBaseCombatWeapon, 0x7, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_owner, EntityHandle, 0x3240);
    NET_CLASS_VAR_S(get_view_model_index, int, 0x3250);
    NET_CLASS_VAR_S(get_world_model_index, int, 0x3254);
    NET_CLASS_VAR_S(get_world_dropped_model_index, int, 0x3258);
    NET_CLASS_VAR_S(get_num_empty_attacks, int, 0x3260);
    NET_CLASS_VAR_S(get_weapon_world_model, EntityHandle, 0x3264);
    NET_CLASS_VAR_S(get_state, int, 0x3268);
    NET_CLASS_VAR_S(get_clip1, int, 0x3274);
    NET_CLASS_VAR_S(get_clip2, int, 0x3278);
    NET_CLASS_VAR_S(get_primary_reserve_ammo_count, int, 0x327c);
    NET_CLASS_VAR_S(get_secondary_reserve_ammo_count, int, 0x3280);
END_NET_CLASS(CBaseCombatWeapon);
DEFINE_NET_CLASS(CBaseCSGrenade, 0x8, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_redraw, bool, 0x33e0);
    NET_CLASS_VAR_S(is_held_by_player, bool, 0x33e1);
    NET_CLASS_VAR_S(is_pin_pulled, bool, 0x33e2);
    NET_CLASS_VAR_S(get_throw_time, float, 0x33e4);
    NET_CLASS_VAR_S(is_looping_sound_playing, bool, 0x33e8);
    NET_CLASS_VAR_S(get_throw_strength, float, 0x33ec);
    NET_CLASS_VAR_S(get_drop_time, float, 0x33f0);
END_NET_CLASS(CBaseCSGrenade);
DEFINE_NET_CLASS(CBaseCSGrenadeProjectile, 0x9, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_v_initial_velocity, Vector3f, 0x29e0);
    NET_CLASS_VAR_S(get_bounces, int32_t, 0x29ec);
    NET_CLASS_VAR_S(get_explode_effect_index, int32_t, 0x29f0);
    NET_CLASS_VAR_S(get_explode_effect_tick_begin, int32_t, 0x29f4);
    NET_CLASS_VAR_S(get_explode_effect_origin, Vector3f, 0x29f8);
END_NET_CLASS(CBaseCSGrenadeProjectile);
DEFINE_NET_CLASS(CBaseDoor, 0xa, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_wave_height, float, 0xa08);
END_NET_CLASS(CBaseDoor);
DEFINE_NET_CLASS(CBaseEntity, 0xb, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_last_made_noise_time, float, 0x20);
    NET_CLASS_VAR_S(is_autoaim_target, bool, 0x60);
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    NET_CLASS_VAR_S(get_cellbits, int, 0x74);
    NET_CLASS_VAR_S(get_cell_x, int, 0x7c);
    NET_CLASS_VAR_S(get_cell_y, int, 0x80);
    NET_CLASS_VAR_S(get_cell_z, int, 0x84);
    NET_CLASS_VAR_S(get_max_fall_velocity, float, 0xdc);
    NET_CLASS_VAR_S(get_f_effects, int, 0xf0);
    NET_CLASS_VAR_S(get_team_num, int, 0xf4);
    NET_CLASS_VAR_S(get_pending_team_num, int, 0xf8);
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x12c);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    NET_CLASS_VAR_S(get_owner_entity, EntityHandle, 0x14c);
    NET_CLASS_VAR_C(get_i_name, 0x154, 0x104);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    NET_CLASS_VAR_S(get_render_f_x, int32_t, 0x25a);
    NET_CLASS_VAR_S(get_render_mode, int32_t, 0x25b);
    NET_CLASS_VAR_S(get_fl_simulation_time, int, 0x268);
    NET_CLASS_VAR_S(get_use_look_at_angle, float, 0x2cc);
    NET_CLASS_VAR_S(get_parent_attachment, int, 0x2ec);
    NET_CLASS_VAR_S(get_fade_min_dist, float, 0x2f4);
    NET_CLASS_VAR_S(get_fade_max_dist, float, 0x2f8);
    NET_CLASS_VAR_S(get_fade_scale, float, 0x2fc);
    NET_CLASS_VAR_S(get_elasticity, float, 0x300);
    /* TODO: m_Collision of type 6*/
    NET_CLASS_VAR_S(get_shadow_cast_distance, float, 0x3a0);
    NET_CLASS_VAR_S(get_collision_group, int, 0x474);
    NET_CLASS_VAR_S(is_simulated_every_tick, bool, 0x93a);
    NET_CLASS_VAR_S(is_animated_every_tick, bool, 0x93b);
    NET_CLASS_VAR_S(is_alternate_sorting, bool, 0x93c);
    NET_CLASS_VAR_S(is_spotted, bool, 0x93d);
    /* TODO: m_bSpottedBy of type 6*/
    /* TODO: m_bSpottedByMask of type 6*/
    NET_CLASS_VAR_S(get_min_cpu_level, int32_t, 0x988);
    NET_CLASS_VAR_S(get_max_cpu_level, int32_t, 0x989);
    NET_CLASS_VAR_S(get_min_gpu_level, int32_t, 0x98a);
    NET_CLASS_VAR_S(get_max_gpu_level, int32_t, 0x98b);
    NET_CLASS_VAR_S(get_texture_frame_index, int, 0x98c);
    NET_CLASS_VAR_S(get_effect_entity, EntityHandle, 0x998);
    NET_CLASS_VAR_S(is_eligible_for_screen_highlight, bool, 0x9b9);
END_NET_CLASS(CBaseEntity);
DEFINE_NET_CLASS(CBaseGrenade, 0xd, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_f_flags, int, 0x104);
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x114);
    NET_CLASS_VAR_S(is_live, bool, 0x2991);
    NET_CLASS_VAR_S(get_dmg_radius, float, 0x2994);
    NET_CLASS_VAR_S(get_damage, float, 0x29a8);
    NET_CLASS_VAR_S(get_thrower, EntityHandle, 0x29b0);
END_NET_CLASS(CBaseGrenade);
DEFINE_NET_CLASS(CBaseParticleEntity, 0xe, 0x00, netvar::class_base);
END_NET_CLASS(CBaseParticleEntity);
DEFINE_NET_CLASS(CBasePropDoor, 0x10, 0x00, netvar::class_base);
END_NET_CLASS(CBasePropDoor);
DEFINE_NET_CLASS(CBaseTeamObjectiveResource, 0x11, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_timer_to_show_in_hu_d, int, 0x9d8);
    NET_CLASS_VAR_S(get_stop_watch_timer, int, 0x9dc);
    NET_CLASS_VAR_S(get_num_control_points, int, 0x9e0);
    NET_CLASS_VAR_S(is_playing_mini_rounds, bool, 0x9e8);
    NET_CLASS_VAR_S(is_control_points_reset, bool, 0x9e9);
    NET_CLASS_VAR_S(get_update_cap_hud_parity, int, 0x9ec);
    /* TODO: fix name for m_vCPPositions[0] of type 2*/
    /* TODO: m_bCPIsVisible of type 6*/
    /* TODO: m_flLazyCapPerc of type 6*/
    /* TODO: m_iTeamIcons of type 6*/
    /* TODO: m_iTeamOverlays of type 6*/
    /* TODO: m_iTeamReqCappers of type 6*/
    /* TODO: m_flTeamCapTime of type 6*/
    /* TODO: m_iPreviousPoints of type 6*/
    /* TODO: m_bTeamCanCap of type 6*/
    /* TODO: m_iTeamBaseIcons of type 6*/
    /* TODO: m_iBaseControlPoints of type 6*/
    /* TODO: m_bInMiniRound of type 6*/
    /* TODO: m_iWarnOnCap of type 6*/
    /* TODO: fix name for m_iszWarnSound[0] of type 4*/
    /* TODO: m_flPathDistance of type 6*/
    /* TODO: m_iNumTeamMembers of type 6*/
    /* TODO: m_iCappingTeam of type 6*/
    /* TODO: m_iTeamInZone of type 6*/
    /* TODO: m_bBlocked of type 6*/
    /* TODO: m_iOwner of type 6*/
    NET_CLASS_VAR_C(get_psz_cap_layout_in_hu_d, 0x1cec, 0x20);
END_NET_CLASS(CBaseTeamObjectiveResource);
DEFINE_NET_CLASS(CBaseTempEntity, 0x12, 0x00, netvar::class_base);
END_NET_CLASS(CBaseTempEntity);
DEFINE_NET_CLASS(CBaseToggle, 0x13, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_final_dest, Vector3f, 0x9ec);
    NET_CLASS_VAR_S(get_movement_type, int, 0x9f8);
    NET_CLASS_VAR_S(get_move_target_time, float, 0x9fc);
END_NET_CLASS(CBaseToggle);
DEFINE_NET_CLASS(CBaseTrigger, 0x14, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spawnflags, int, 0x2c8);
    NET_CLASS_VAR_S(is_client_side_predicted, bool, 0xa08);
END_NET_CLASS(CBaseTrigger);
DEFINE_NET_CLASS(CBaseViewModel, 0x15, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_f_effects, int, 0xf0);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    NET_CLASS_VAR_S(get_playback_rate, float, 0xa18);
    NET_CLASS_VAR_S(get_skin, int32_t, 0xa1c);
    NET_CLASS_VAR_S(get_body, int32_t, 0xa20);
    NET_CLASS_VAR_S(get_new_sequence_parity, int32_t, 0xa44);
    NET_CLASS_VAR_S(get_reset_events_parity, int32_t, 0xa48);
    NET_CLASS_VAR_S(get_muzzle_flash_parity, int32_t, 0xa64);
    NET_CLASS_VAR_S(get_sequence, int32_t, 0x28c0);
    NET_CLASS_VAR_S(is_should_ignore_offset_and_accuracy, bool, 0x29a0);
    NET_CLASS_VAR_S(get_view_model_index, int32_t, 0x29d0);
    NET_CLASS_VAR_S(get_animation_parity, int32_t, 0x29d4);
    NET_CLASS_VAR_S(get_weapon, EntityHandle, 0x29d8);
    NET_CLASS_VAR_S(get_owner, EntityHandle, 0x29dc);
END_NET_CLASS(CBaseViewModel);
DEFINE_NET_CLASS(CBaseVPhysicsTrigger, 0x16, 0x00, netvar::class_base);
END_NET_CLASS(CBaseVPhysicsTrigger);
DEFINE_NET_CLASS(CBaseWeaponWorldModel, 0x17, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_f_effects, int, 0xf0);
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    NET_CLASS_VAR_S(get_body, int32_t, 0xa20);
    NET_CLASS_VAR_S(get_combat_weapon_parent, EntityHandle, 0x2a00);
END_NET_CLASS(CBaseWeaponWorldModel);
DEFINE_NET_CLASS(CBeam, 0x18, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    NET_CLASS_VAR_S(get_render_f_x, int32_t, 0x25a);
    NET_CLASS_VAR_S(get_render_mode, int32_t, 0x25b);
    NET_CLASS_VAR_S(get_frame_rate, float, 0x9d8);
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0x9dc);
    NET_CLASS_VAR_S(get_num_beam_ents, int32_t, 0x9e8);
    NET_CLASS_VAR_S(get_halo_index, int32_t, 0x9f0);
    NET_CLASS_VAR_S(get_beam_type, int32_t, 0x9f4);
    NET_CLASS_VAR_S(get_beam_flags, int32_t, 0x9f8);
    /* TODO: m_hAttachEntity of type 6*/
    /* TODO: m_nAttachIndex of type 6*/
    NET_CLASS_VAR_S(get_width, float, 0xa4c);
    NET_CLASS_VAR_S(get_end_width, float, 0xa50);
    NET_CLASS_VAR_S(get_fade_length, float, 0xa54);
    NET_CLASS_VAR_S(get_halo_scale, float, 0xa58);
    NET_CLASS_VAR_S(get_amplitude, float, 0xa5c);
    NET_CLASS_VAR_S(get_start_frame, float, 0xa60);
    NET_CLASS_VAR_S(get_speed, float, 0xa64);
    NET_CLASS_VAR_S(get_frame, float, 0xa68);
    NET_CLASS_VAR_S(get_clip_style, int32_t, 0xa6c);
    NET_CLASS_VAR_S(get_end_pos, Vector3f, 0xa70);
END_NET_CLASS(CBeam);
DEFINE_NET_CLASS(CBeamSpotlight, 0x19, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_halo_index, int32_t, 0x9d8);
    NET_CLASS_VAR_S(get_rotation_axis, int32_t, 0x9dc);
    NET_CLASS_VAR_S(get_rotation_speed, float, 0x9e0);
    NET_CLASS_VAR_S(is_spotlight_on, bool, 0x9e4);
    NET_CLASS_VAR_S(has_dynamic_light, bool, 0x9e5);
    NET_CLASS_VAR_S(get_spotlight_max_length, float, 0x9e8);
    NET_CLASS_VAR_S(get_spotlight_goal_width, float, 0x9ec);
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0x9f0);
END_NET_CLASS(CBeamSpotlight);
DEFINE_NET_CLASS(CBoneFollower, 0x1a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_model_index, int, 0x9d8);
    NET_CLASS_VAR_S(get_solid_index, int, 0x9dc);
END_NET_CLASS(CBoneFollower);
DEFINE_NET_CLASS(CBRC4Target, 0x1b, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_broken_open, bool, 0x2994);
    NET_CLASS_VAR_S(get_radius, float, 0x2998);
END_NET_CLASS(CBRC4Target);
DEFINE_NET_CLASS(CBreachCharge, 0x1c, 0x00, netvar::class_base);
END_NET_CLASS(CBreachCharge);
DEFINE_NET_CLASS(CBreachChargeProjectile, 0x1d, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_should_explode, bool, 0x29e0);
    NET_CLASS_VAR_S(get_weapon_that_threw_me, int, 0x29e4);
    NET_CLASS_VAR_S(get_parent_bone_index, int32_t, 0x29e8);
    NET_CLASS_VAR_S(get_parent_bone_pos, Vector3f, 0x29ec);
END_NET_CLASS(CBreachChargeProjectile);
DEFINE_NET_CLASS(CBreakableProp, 0x1e, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_q_preferred_player_carry_angles, Vector3f, 0x2994);
    NET_CLASS_VAR_S(is_client_physics, bool, 0x29a0);
END_NET_CLASS(CBreakableProp);
DEFINE_NET_CLASS(CBreakableSurface, 0x1f, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_num_wide, int32_t, 0x9dc);
    NET_CLASS_VAR_S(get_num_high, int32_t, 0x9e0);
    NET_CLASS_VAR_S(get_panel_width, float, 0x9e4);
    NET_CLASS_VAR_S(get_panel_height, float, 0x9e8);
    NET_CLASS_VAR_S(get_v_normal, Vector3f, 0x9ec);
    NET_CLASS_VAR_S(get_v_corner, Vector3f, 0x9f8);
    NET_CLASS_VAR_S(is_broken, bool, 0xa04);
    NET_CLASS_VAR_S(get_surface_type, int32_t, 0xa08);
    /* TODO: m_RawPanelBitVec of type 6*/
END_NET_CLASS(CBreakableSurface);
DEFINE_NET_CLASS(CBumpMine, 0x20, 0x00, netvar::class_base);
END_NET_CLASS(CBumpMine);
DEFINE_NET_CLASS(CBumpMineProjectile, 0x21, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_parent_bone_index, int32_t, 0x29e4);
    NET_CLASS_VAR_S(get_parent_bone_pos, Vector3f, 0x29e8);
    NET_CLASS_VAR_S(is_armed, bool, 0x29f4);
END_NET_CLASS(CBumpMineProjectile);
DEFINE_NET_CLASS(CC4, 0x22, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_started_arming, bool, 0x3400);
    NET_CLASS_VAR_S(get_armed_time, float, 0x3404);
    NET_CLASS_VAR_S(is_bomb_placed_animation, bool, 0x3408);
    NET_CLASS_VAR_S(is_show_c4_le_d, bool, 0x3409);
    NET_CLASS_VAR_S(is_planting_via_use, bool, 0x340a);
END_NET_CLASS(CC4);
DEFINE_NET_CLASS(CCascadeLight, 0x23, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_shadow_direction, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(get_env_light_shadow_direction, Vector3f, 0x9e4);
    NET_CLASS_VAR_S(is_enabled, bool, 0x9f0);
    NET_CLASS_VAR_S(is_use_light_env_angles, bool, 0x9f1);
    NET_CLASS_VAR_S(get_light_color, int, 0x9f2);
    NET_CLASS_VAR_S(get_light_color_scale, int, 0x9f8);
    NET_CLASS_VAR_S(get_max_shadow_dist, float, 0x9fc);
END_NET_CLASS(CCascadeLight);
DEFINE_NET_CLASS(CChicken, 0x24, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_jumped_this_frame, int, 0x29f8);
    NET_CLASS_VAR_S(get_leader, int, 0x29fc);
END_NET_CLASS(CChicken);
DEFINE_NET_CLASS(CColorCorrection, 0x25, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(get_min_falloff, float, 0x9e4);
    NET_CLASS_VAR_S(get_max_falloff, float, 0x9e8);
    NET_CLASS_VAR_S(get_fade_in_duration, float, 0x9ec);
    NET_CLASS_VAR_S(get_fade_out_duration, float, 0x9f0);
    NET_CLASS_VAR_S(get_max_weight, float, 0x9f4);
    NET_CLASS_VAR_S(get_cur_weight, float, 0x9f8);
    NET_CLASS_VAR_C(get_net_lookup_filename, 0x9fc, 0x104);
    NET_CLASS_VAR_S(is_enabled, bool, 0xb00);
    NET_CLASS_VAR_S(is_master, bool, 0xb01);
    NET_CLASS_VAR_S(is_client_side, bool, 0xb02);
    NET_CLASS_VAR_S(is_exclusive, bool, 0xb03);
END_NET_CLASS(CColorCorrection);
DEFINE_NET_CLASS(CColorCorrectionVolume, 0x26, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_enabled, bool, 0xa20);
    NET_CLASS_VAR_S(get_max_weight, float, 0xa24);
    NET_CLASS_VAR_S(get_fade_duration, float, 0xa28);
    NET_CLASS_VAR_S(get_weight, float, 0xa2c);
    NET_CLASS_VAR_C(get_lookup_filename, 0xa30, 0x104);
END_NET_CLASS(CColorCorrectionVolume);
DEFINE_NET_CLASS(CCSGameRulesProxy, 0x27, 0x00, netvar::class_base);
END_NET_CLASS(CCSGameRulesProxy);
DEFINE_NET_CLASS(CCSPlayerResource, 0x29, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player_c4, int, 0x165c);
    NET_CLASS_VAR_S(get_player_vi_p, int, 0x1660);
    NET_CLASS_VAR_S(get_bombsite_center_a, Vector3f, 0x1664);
    NET_CLASS_VAR_S(get_bombsite_center_b, Vector3f, 0x1670);
    /* TODO: m_bHostageAlive of type 6*/
    /* TODO: m_isHostageFollowingSomeone of type 6*/
    /* TODO: m_iHostageEntityIDs of type 6*/
    /* TODO: m_hostageRescueX of type 6*/
    /* TODO: m_hostageRescueY of type 6*/
    /* TODO: m_hostageRescueZ of type 6*/
    /* TODO: m_iMVPs of type 6*/
    /* TODO: m_bHasDefuser of type 6*/
    /* TODO: m_bHasHelmet of type 6*/
    /* TODO: m_iArmor of type 6*/
    /* TODO: m_iScore of type 6*/
    /* TODO: m_iCompetitiveRanking of type 6*/
    /* TODO: m_iCompetitiveWins of type 6*/
    /* TODO: m_iCompetitiveRankType of type 6*/
    /* TODO: m_iCompTeammateColor of type 6*/
    /* TODO: m_iLifetimeStart of type 6*/
    /* TODO: m_iLifetimeEnd of type 6*/
    /* TODO: m_bControllingBot of type 6*/
    /* TODO: m_iControlledPlayer of type 6*/
    /* TODO: m_iControlledByPlayer of type 6*/
    /* TODO: m_iBotDifficulty of type 6*/
    /* TODO: m_szClan of type 6*/
    /* TODO: m_nCharacterDefIndex of type 6*/
    /* TODO: m_iTotalCashSpent of type 6*/
    /* TODO: m_iGunGameLevel of type 6*/
    /* TODO: m_iCashSpentThisRound of type 6*/
    /* TODO: m_nActiveCoinRank of type 6*/
    /* TODO: m_nMusicID of type 6*/
    /* TODO: m_nPersonaDataPublicLevel of type 6*/
    /* TODO: m_nPersonaDataPublicCommendsLeader of type 6*/
    /* TODO: m_nPersonaDataPublicCommendsTeacher of type 6*/
    /* TODO: m_nPersonaDataPublicCommendsFriendly of type 6*/
    /* TODO: m_bHasCommunicationAbuseMute of type 6*/
    /* TODO: m_szCrosshairCodes of type 6*/
    /* TODO: m_iMatchStats_Kills_Total of type 6*/
    /* TODO: m_iMatchStats_Assists_Total of type 6*/
    /* TODO: m_iMatchStats_Deaths_Total of type 6*/
    /* TODO: m_iMatchStats_3k_Total of type 6*/
    /* TODO: m_iMatchStats_4k_Total of type 6*/
    /* TODO: m_iMatchStats_5k_Total of type 6*/
    /* TODO: m_iMatchStats_Damage_Total of type 6*/
    /* TODO: m_iMatchStats_EquipmentValue_Total of type 6*/
    /* TODO: m_iMatchStats_KillReward_Total of type 6*/
    /* TODO: m_iMatchStats_LiveTime_Total of type 6*/
    /* TODO: m_iMatchStats_HeadShotKills_Total of type 6*/
    /* TODO: m_iMatchStats_Objective_Total of type 6*/
    /* TODO: m_iMatchStats_CashEarned_Total of type 6*/
    /* TODO: m_iMatchStats_UtilityDamage_Total of type 6*/
    /* TODO: m_iMatchStats_EnemiesFlashed_Total of type 6*/
    /* TODO: m_nEndMatchNextMapVotes of type 6*/
    NET_CLASS_VAR_S(is_end_match_next_map_all_voted, bool, 0x6b8c);
END_NET_CLASS(CCSPlayerResource);
DEFINE_NET_CLASS(CCSRagdoll, 0x2a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_team_num, int, 0xf4);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    NET_CLASS_VAR_S(get_force, Vector3f, 0x2680);
    NET_CLASS_VAR_S(get_force_bone, int32_t, 0x268c);
    NET_CLASS_VAR_S(is_client_side_animation, bool, 0x28a0);
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x2a00);
    NET_CLASS_VAR_S(get_ragdoll_velocity, Vector3f, 0x2a10);
    NET_CLASS_VAR_S(get_ragdoll_origin, Vector3f, 0x2a1c);
    NET_CLASS_VAR_S(get_death_pose, int, 0x2a28);
    NET_CLASS_VAR_S(get_death_frame, int, 0x2a2c);
    NET_CLASS_VAR_S(get_death_yaw, float, 0x2a30);
    NET_CLASS_VAR_S(get_abs_yaw, float, 0x2a34);
    NET_CLASS_VAR_S(is_died_airborne, bool, 0x2a38);
END_NET_CLASS(CCSRagdoll);
DEFINE_NET_CLASS(CCSTeam, 0x2b, 0x00, netvar::class_base);
END_NET_CLASS(CCSTeam);
DEFINE_NET_CLASS(CDangerZone, 0x2c, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_danger_zone_origin_started_at, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(get_bomb_launch_time, float, 0x9e4);
    NET_CLASS_VAR_S(get_extra_radius, float, 0x9e8);
    NET_CLASS_VAR_S(get_extra_radius_start_time, float, 0x9ec);
    NET_CLASS_VAR_S(get_extra_radius_total_lerp_time, float, 0x9f0);
    NET_CLASS_VAR_S(get_drop_order, int32_t, 0x9f4);
    NET_CLASS_VAR_S(get_wave, int, 0x9f8);
END_NET_CLASS(CDangerZone);
DEFINE_NET_CLASS(CDangerZoneController, 0x2d, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_danger_zone_controller_enabled, bool, 0x9d8);
    NET_CLASS_VAR_S(is_mission_controlled_explosions, bool, 0x9d9);
    NET_CLASS_VAR_S(get_end_game_circle_start, Vector3f, 0x9dc);
    NET_CLASS_VAR_S(get_end_game_circle_end, Vector3f, 0x9e8);
    NET_CLASS_VAR_S(get_start_time, float, 0x9f4);
    NET_CLASS_VAR_S(get_final_expansion_time, float, 0x9f8);
    /* TODO: m_DangerZones of type 6*/
    /* TODO: m_flWaveEndTimes of type 6*/
    NET_CLASS_VAR_S(get_the_final_zone, EntityHandle, 0xab8);
END_NET_CLASS(CDangerZoneController);
DEFINE_NET_CLASS(CDEagle, 0x2e, 0x00, netvar::class_base);
END_NET_CLASS(CDEagle);
DEFINE_NET_CLASS(CDecoyGrenade, 0x2f, 0x00, netvar::class_base);
END_NET_CLASS(CDecoyGrenade);
DEFINE_NET_CLASS(CDecoyProjectile, 0x30, 0x00, netvar::class_base);
END_NET_CLASS(CDecoyProjectile);
DEFINE_NET_CLASS(CDrone, 0x31, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_move_to_this_entity, EntityHandle, 0x29e8);
    NET_CLASS_VAR_S(get_delivery_cargo, EntityHandle, 0x29ec);
    NET_CLASS_VAR_S(is_pilot_takeover_allowed, bool, 0x29f0);
    NET_CLASS_VAR_S(get_potential_cargo, EntityHandle, 0x29f4);
    NET_CLASS_VAR_S(get_current_pilot, EntityHandle, 0x29f8);
    /* TODO: fix name for m_vecTagPositions[0] of type 2*/
    /* TODO: fix name for m_vecTagIncrements[0] of type 0*/
END_NET_CLASS(CDrone);
DEFINE_NET_CLASS(CDronegun, 0x32, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_health, int, 0x100);
    NET_CLASS_VAR_S(get_attention_target, Vector3f, 0x2990);
    NET_CLASS_VAR_S(get_target_offset, Vector3f, 0x299c);
    NET_CLASS_VAR_S(has_target, bool, 0x29a8);
END_NET_CLASS(CDronegun);
DEFINE_NET_CLASS(CDynamicLight, 0x33, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_flags, int, 0x9d8);
    NET_CLASS_VAR_S(get_light_style, int, 0x9d9);
    NET_CLASS_VAR_S(get_radius, float, 0x9dc);
    NET_CLASS_VAR_S(get_exponent, int, 0x9e0);
    NET_CLASS_VAR_S(get_inner_angle, float, 0x9e4);
    NET_CLASS_VAR_S(get_outer_angle, float, 0x9e8);
    NET_CLASS_VAR_S(get_spot_radius, float, 0x9ec);
END_NET_CLASS(CDynamicLight);
DEFINE_NET_CLASS(CDynamicProp, 0x34, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_use_hitboxes_for_render_box, bool, 0x29b4);
    NET_CLASS_VAR_S(get_glow_max_dist, float, 0x29d4);
    NET_CLASS_VAR_S(is_should_glow, bool, 0x29d8);
    NET_CLASS_VAR_S(get_clr_glow, int, 0x29d9);
    NET_CLASS_VAR_S(get_glow_style, int32_t, 0x29e0);
END_NET_CLASS(CDynamicProp);
DEFINE_NET_CLASS(CEconEntity, 0x35, 0x00, netvar::class_base);
    /* TODO: m_AttributeManager of type 6*/
    NET_CLASS_VAR_S(get_original_owner_xuid_low, int, 0x31d0);
    NET_CLASS_VAR_S(get_original_owner_xuid_high, int, 0x31d4);
    NET_CLASS_VAR_S(get_fallback_paint_kit, int32_t, 0x31d8);
    NET_CLASS_VAR_S(get_fallback_seed, int32_t, 0x31dc);
    NET_CLASS_VAR_S(get_fallback_wear, float, 0x31e0);
    NET_CLASS_VAR_S(get_fallback_stat_trak, int32_t, 0x31e4);
END_NET_CLASS(CEconEntity);
DEFINE_NET_CLASS(CEconWearable, 0x36, 0x00, netvar::class_base);
END_NET_CLASS(CEconWearable);
DEFINE_NET_CLASS(CEmbers, 0x37, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_density, int32_t, 0x9d8);
    NET_CLASS_VAR_S(get_lifetime, int32_t, 0x9dc);
    NET_CLASS_VAR_S(get_speed, int32_t, 0x9e0);
    NET_CLASS_VAR_S(is_emit, bool, 0x9e4);
END_NET_CLASS(CEmbers);
DEFINE_NET_CLASS(CEntityDissolve, 0x38, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_time, float, 0x9dc);
    NET_CLASS_VAR_S(get_fade_out_start, float, 0x9e0);
    NET_CLASS_VAR_S(get_fade_out_length, float, 0x9e4);
    NET_CLASS_VAR_S(get_fade_out_model_start, float, 0x9e8);
    NET_CLASS_VAR_S(get_fade_out_model_length, float, 0x9ec);
    NET_CLASS_VAR_S(get_fade_in_start, float, 0x9f0);
    NET_CLASS_VAR_S(get_fade_in_length, float, 0x9f4);
    NET_CLASS_VAR_S(get_dissolve_type, int32_t, 0x9f8);
    NET_CLASS_VAR_S(get_v_dissolver_origin, Vector3f, 0xa00);
    NET_CLASS_VAR_S(get_magnitude, int32_t, 0xa0c);
END_NET_CLASS(CEntityDissolve);
DEFINE_NET_CLASS(CEntityFlame, 0x39, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_ent_attached, EntityHandle, 0x9d8);
    NET_CLASS_VAR_S(is_cheap_effect, bool, 0x9ec);
END_NET_CLASS(CEntityFlame);
DEFINE_NET_CLASS(CEntityFreezing, 0x3a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_v_freezing_origin, Vector3f, 0x9d8);
    /* TODO: m_flFrozenPerHitbox of type 6*/
    NET_CLASS_VAR_S(get_frozen, float, 0xaac);
    NET_CLASS_VAR_S(is_finish_freezing, bool, 0xab0);
END_NET_CLASS(CEntityFreezing);
DEFINE_NET_CLASS(CEntityParticleTrail, 0x3b, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_material_name, int, 0xac0);
    /* TODO: m_Info of type 6*/
    NET_CLASS_VAR_S(get_constraint_entity, EntityHandle, 0xad8);
END_NET_CLASS(CEntityParticleTrail);
DEFINE_NET_CLASS(CEnvAmbientLight, 0x3c, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_color, Vector3f, 0xb00);
END_NET_CLASS(CEnvAmbientLight);
DEFINE_NET_CLASS(CEnvDetailController, 0x3d, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_fade_start_dist, float, 0x9d8);
    NET_CLASS_VAR_S(get_fade_end_dist, float, 0x9dc);
END_NET_CLASS(CEnvDetailController);
DEFINE_NET_CLASS(CEnvDOFController, 0x3e, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_dof_enabled, bool, 0x9d8);
    NET_CLASS_VAR_S(get_near_blur_depth, float, 0x9dc);
    NET_CLASS_VAR_S(get_near_focus_depth, float, 0x9e0);
    NET_CLASS_VAR_S(get_far_focus_depth, float, 0x9e4);
    NET_CLASS_VAR_S(get_far_blur_depth, float, 0x9e8);
    NET_CLASS_VAR_S(get_near_blur_radius, float, 0x9ec);
    NET_CLASS_VAR_S(get_far_blur_radius, float, 0x9f0);
END_NET_CLASS(CEnvDOFController);
DEFINE_NET_CLASS(CEnvGasCanister, 0x3f, 0x00, netvar::class_base);
    /* TODO: m_vecOrigin of type 3*/
    /* TODO: fix name for m_vecOrigin[2] of type 1*/
    NET_CLASS_VAR_S(is_landed, bool, 0x2990);
    NET_CLASS_VAR_S(get_skybox_copy, EntityHandle, 0x29b8);
    NET_CLASS_VAR_S(get_impact_position, Vector3f, 0x29c4);
    NET_CLASS_VAR_S(get_start_position, Vector3f, 0x29d0);
    NET_CLASS_VAR_S(get_enter_world_position, Vector3f, 0x29dc);
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x29e8);
    NET_CLASS_VAR_S(get_start_angles, Vector3f, 0x29f4);
    NET_CLASS_VAR_S(get_flight_time, float, 0x2a00);
    NET_CLASS_VAR_S(get_flight_speed, float, 0x2a04);
    NET_CLASS_VAR_S(get_launch_time, float, 0x2a08);
    NET_CLASS_VAR_S(get_initial_z_speed, float, 0x2a0c);
    NET_CLASS_VAR_S(get_z_acceleration, float, 0x2a10);
    NET_CLASS_VAR_S(get_horiz_speed, float, 0x2a14);
    NET_CLASS_VAR_S(is_launched_from_within_world, bool, 0x2a18);
    NET_CLASS_VAR_S(get_parabola_direction, Vector3f, 0x2a1c);
    NET_CLASS_VAR_S(get_world_enter_time, float, 0x2a28);
    NET_CLASS_VAR_S(get_skybox_origin, Vector3f, 0x2a2c);
    NET_CLASS_VAR_S(get_skybox_scale, float, 0x2a38);
    NET_CLASS_VAR_S(is_in_skybox, bool, 0x2a3c);
    NET_CLASS_VAR_S(is_do_impact_effects, bool, 0x2a3d);
    NET_CLASS_VAR_S(get_my_zone_index, int32_t, 0x2a40);
END_NET_CLASS(CEnvGasCanister);
DEFINE_NET_CLASS(CEnvParticleScript, 0x40, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_sequence_scale, float, 0x2a74);
END_NET_CLASS(CEnvParticleScript);
DEFINE_NET_CLASS(CEnvProjectedTexture, 0x41, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_target_entity, EntityHandle, 0x9dc);
    NET_CLASS_VAR_S(is_state, bool, 0x9e0);
    NET_CLASS_VAR_S(is_always_update, bool, 0x9e1);
    NET_CLASS_VAR_S(get_light_fo_v, float, 0x9e4);
    NET_CLASS_VAR_S(is_enable_shadows, bool, 0x9e8);
    NET_CLASS_VAR_S(is_simple_projection, bool, 0x9e9);
    NET_CLASS_VAR_S(is_light_only_target, bool, 0x9ea);
    NET_CLASS_VAR_S(is_light_world, bool, 0x9eb);
    NET_CLASS_VAR_S(is_camera_space, bool, 0x9ec);
    NET_CLASS_VAR_S(get_brightness_scale, float, 0x9f0);
    NET_CLASS_VAR_S(get_light_color, int, 0x9f4);
    NET_CLASS_VAR_S(get_color_transition_time, float, 0xa08);
    NET_CLASS_VAR_S(get_ambient, float, 0xa0c);
    NET_CLASS_VAR_S(get_near_z, float, 0xa10);
    NET_CLASS_VAR_S(get_far_z, float, 0xa14);
    NET_CLASS_VAR_C(get_spotlight_texture_name, 0xa18, 0x104);
    NET_CLASS_VAR_S(get_spotlight_texture_frame, int32_t, 0xb24);
    NET_CLASS_VAR_S(get_shadow_quality, int32_t, 0xb28);
    NET_CLASS_VAR_S(get_style, int, 0xb2c);
    NET_CLASS_VAR_S(get_projection_size, float, 0xb38);
    NET_CLASS_VAR_S(get_rotation, float, 0xb3c);
END_NET_CLASS(CEnvProjectedTexture);
DEFINE_NET_CLASS(CEnvQuadraticBeam, 0x42, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_target_position, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(get_control_position, Vector3f, 0x9e4);
    NET_CLASS_VAR_S(get_scroll_rate, float, 0x9f0);
    NET_CLASS_VAR_S(get_width, float, 0x9f4);
END_NET_CLASS(CEnvQuadraticBeam);
DEFINE_NET_CLASS(CEnvScreenEffect, 0x43, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_duration, float, 0x9d8);
    NET_CLASS_VAR_S(get_type, int32_t, 0x9dc);
END_NET_CLASS(CEnvScreenEffect);
DEFINE_NET_CLASS(CEnvScreenOverlay, 0x44, 0x00, netvar::class_base);
    /* TODO: fix name for m_iszOverlayNames[0] of type 4*/
    /* TODO: fix name for m_flOverlayTimes[0] of type 1*/
    NET_CLASS_VAR_S(get_start_time, float, 0x13f8);
    NET_CLASS_VAR_S(get_desired_overlay, int, 0x13fc);
    NET_CLASS_VAR_S(is_active, bool, 0x1400);
END_NET_CLASS(CEnvScreenOverlay);
DEFINE_NET_CLASS(CEnvTonemapController, 0x45, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_use_custom_auto_exposure_min, bool, 0x9d8);
    NET_CLASS_VAR_S(is_use_custom_auto_exposure_max, bool, 0x9d9);
    NET_CLASS_VAR_S(is_use_custom_bloom_scale, bool, 0x9da);
    NET_CLASS_VAR_S(get_custom_auto_exposure_min, float, 0x9dc);
    NET_CLASS_VAR_S(get_custom_auto_exposure_max, float, 0x9e0);
    NET_CLASS_VAR_S(get_custom_bloom_scale, float, 0x9e4);
    NET_CLASS_VAR_S(get_custom_bloom_scale_minimum, float, 0x9e8);
    NET_CLASS_VAR_S(get_bloom_exponent, float, 0x9ec);
    NET_CLASS_VAR_S(get_bloom_saturation, float, 0x9f0);
    NET_CLASS_VAR_S(get_tonemap_percent_target, float, 0x9f4);
    NET_CLASS_VAR_S(get_tonemap_percent_bright_pixels, float, 0x9f8);
    NET_CLASS_VAR_S(get_tonemap_min_avg_lum, float, 0x9fc);
    NET_CLASS_VAR_S(get_tonemap_rate, float, 0xa00);
END_NET_CLASS(CEnvTonemapController);
DEFINE_NET_CLASS(CEnvWind, 0x46, 0x00, netvar::class_base);
    /* TODO: m_EnvWindShared of type 6*/
END_NET_CLASS(CEnvWind);
DEFINE_NET_CLASS(CFEPlayerDecal, 0x47, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_unique_i_d, int32_t, 0x9d8);
    NET_CLASS_VAR_S(get_account_i_d, uint32_t, 0x9dc);
    NET_CLASS_VAR_S(get_trace_i_d, uint32_t, 0x9e0);
    NET_CLASS_VAR_S(get_rt_gc_time, int, 0x9e4);
    NET_CLASS_VAR_S(get_end_pos, Vector3f, 0x9e8);
    NET_CLASS_VAR_S(get_start, Vector3f, 0x9f4);
    NET_CLASS_VAR_S(get_right, Vector3f, 0xa00);
    NET_CLASS_VAR_S(get_normal, Vector3f, 0xa0c);
    NET_CLASS_VAR_S(get_player, int32_t, 0xa18);
    NET_CLASS_VAR_S(get_entity, int32_t, 0xa1c);
    NET_CLASS_VAR_S(get_hitbox, int32_t, 0xa20);
    NET_CLASS_VAR_S(get_tint_i_d, int32_t, 0xa24);
    NET_CLASS_VAR_S(get_creation_time, float, 0xa28);
    NET_CLASS_VAR_S(get_version, int32_t, 0xa2c);
    /* TODO: m_ubSignature of type 6*/
END_NET_CLASS(CFEPlayerDecal);
DEFINE_NET_CLASS(CFireCrackerBlast, 0x48, 0x00, netvar::class_base);
END_NET_CLASS(CFireCrackerBlast);
DEFINE_NET_CLASS(CFireSmoke, 0x49, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_scale, float, 0x9d8);
    NET_CLASS_VAR_S(get_scale, float, 0x9dc);
    NET_CLASS_VAR_S(get_scale_time, float, 0x9e0);
    NET_CLASS_VAR_S(get_flags, int32_t, 0x9e4);
    NET_CLASS_VAR_S(get_flame_model_index, int32_t, 0x9e8);
    NET_CLASS_VAR_S(get_flame_from_above_model_index, int32_t, 0x9ec);
END_NET_CLASS(CFireSmoke);
DEFINE_NET_CLASS(CFireTrail, 0x4a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_attachment, int32_t, 0xac4);
    NET_CLASS_VAR_S(get_lifetime, float, 0xac8);
END_NET_CLASS(CFireTrail);
DEFINE_NET_CLASS(CFish, 0x4b, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    NET_CLASS_VAR_S(get_x, float, 0x29d8);
    NET_CLASS_VAR_S(get_y, float, 0x29dc);
    NET_CLASS_VAR_S(get_z, float, 0x29e0);
    NET_CLASS_VAR_S(get_angle, float, 0x29e8);
    NET_CLASS_VAR_S(get_pool_origin, Vector3f, 0x29f0);
    NET_CLASS_VAR_S(get_water_level, float, 0x29fc);
END_NET_CLASS(CFish);
DEFINE_NET_CLASS(CFists, 0x4c, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_playing_uninterruptable_act, bool, 0x33e0);
END_NET_CLASS(CFists);
DEFINE_NET_CLASS(CFlashbang, 0x4d, 0x00, netvar::class_base);
END_NET_CLASS(CFlashbang);
DEFINE_NET_CLASS(CFogController, 0x4e, 0x00, netvar::class_base);
    /* TODO: fix name for m_fog.dirPrimary of type 2*/
    /* TODO: fix name for m_fog.colorPrimary of type 0*/
    /* TODO: fix name for m_fog.colorSecondary of type 0*/
    /* TODO: fix name for m_fog.colorPrimaryLerpTo of type 0*/
    /* TODO: fix name for m_fog.colorSecondaryLerpTo of type 0*/
    /* TODO: fix name for m_fog.start of type 1*/
    /* TODO: fix name for m_fog.end of type 1*/
    /* TODO: fix name for m_fog.farz of type 1*/
    /* TODO: fix name for m_fog.maxdensity of type 1*/
    /* TODO: fix name for m_fog.startLerpTo of type 1*/
    /* TODO: fix name for m_fog.endLerpTo of type 1*/
    /* TODO: fix name for m_fog.maxdensityLerpTo of type 1*/
    /* TODO: fix name for m_fog.lerptime of type 1*/
    /* TODO: fix name for m_fog.duration of type 1*/
    /* TODO: fix name for m_fog.enable of type 0*/
    /* TODO: fix name for m_fog.blend of type 0*/
    /* TODO: fix name for m_fog.ZoomFogScale of type 1*/
    /* TODO: fix name for m_fog.HDRColorScale of type 1*/
END_NET_CLASS(CFogController);
DEFINE_NET_CLASS(CFootstepControl, 0x4f, 0x00, netvar::class_base);
    NET_CLASS_VAR_C(get_source, 0xa10, 0x10);
    NET_CLASS_VAR_C(get_destination, 0xa20, 0x10);
END_NET_CLASS(CFootstepControl);
DEFINE_NET_CLASS(CFunc_Dust, 0x50, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x258);
    /* TODO: m_Collision of type 6*/
    NET_CLASS_VAR_S(get_color, int, 0x9d8);
    NET_CLASS_VAR_S(get_spawn_rate, int, 0x9dc);
    NET_CLASS_VAR_S(get_size_min, float, 0x9e0);
    NET_CLASS_VAR_S(get_size_max, float, 0x9e4);
    NET_CLASS_VAR_S(get_speed_max, int, 0x9e8);
    NET_CLASS_VAR_S(get_lifetime_min, int, 0x9ec);
    NET_CLASS_VAR_S(get_lifetime_max, int, 0x9f0);
    NET_CLASS_VAR_S(get_dist_max, int, 0x9f4);
    NET_CLASS_VAR_S(get_fall_speed, float, 0x9f8);
    NET_CLASS_VAR_S(is_affected_by_wind, bool, 0x9fc);
    NET_CLASS_VAR_S(get_dust_flags, int, 0xa00);
END_NET_CLASS(CFunc_Dust);
DEFINE_NET_CLASS(CFunc_LOD, 0x51, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_disappear_min_dist, int32_t, 0x9d8);
    NET_CLASS_VAR_S(get_disappear_max_dist, int32_t, 0x9dc);
END_NET_CLASS(CFunc_LOD);
DEFINE_NET_CLASS(CFuncAreaPortalWindow, 0x52, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_fade_start_dist, float, 0x9d8);
    NET_CLASS_VAR_S(get_fade_dist, float, 0x9dc);
    NET_CLASS_VAR_S(get_translucency_limit, float, 0x9e0);
    NET_CLASS_VAR_S(get_background_model_index, int, 0x9e4);
END_NET_CLASS(CFuncAreaPortalWindow);
DEFINE_NET_CLASS(CFuncBrush, 0x53, 0x00, netvar::class_base);
END_NET_CLASS(CFuncBrush);
DEFINE_NET_CLASS(CFuncConveyor, 0x54, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_conveyor_speed, float, 0x9d8);
END_NET_CLASS(CFuncConveyor);
DEFINE_NET_CLASS(CFuncLadder, 0x55, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_ladder_dir, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(get_player_mount_position_top, Vector3f, 0x9f8);
    NET_CLASS_VAR_S(get_player_mount_position_bottom, Vector3f, 0xa04);
    NET_CLASS_VAR_S(is_fake_ladder, bool, 0xa11);
END_NET_CLASS(CFuncLadder);
DEFINE_NET_CLASS(CFuncMonitor, 0x56, 0x00, netvar::class_base);
END_NET_CLASS(CFuncMonitor);
DEFINE_NET_CLASS(CFuncMoveLinear, 0x57, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_f_flags, int, 0x104);
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x114);
END_NET_CLASS(CFuncMoveLinear);
DEFINE_NET_CLASS(CFuncOccluder, 0x58, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_occluder_index, int32_t, 0x9d8);
    NET_CLASS_VAR_S(is_active, bool, 0x9dc);
END_NET_CLASS(CFuncOccluder);
DEFINE_NET_CLASS(CFuncReflectiveGlass, 0x59, 0x00, netvar::class_base);
END_NET_CLASS(CFuncReflectiveGlass);
DEFINE_NET_CLASS(CFuncRotating, 0x5a, 0x00, netvar::class_base);
    /* TODO: fix name for m_angRotation[0] of type 1*/
    /* TODO: fix name for m_angRotation[1] of type 1*/
    /* TODO: fix name for m_angRotation[2] of type 1*/
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_fl_simulation_time, int, 0x268);
END_NET_CLASS(CFuncRotating);
DEFINE_NET_CLASS(CFuncSmokeVolume, 0x5b, 0x00, netvar::class_base);
    /* TODO: m_Collision of type 6*/
    NET_CLASS_VAR_S(get_color1, int, 0xac4);
    NET_CLASS_VAR_S(get_color2, int, 0xac8);
    NET_CLASS_VAR_C(get_material_name, 0xacc, 0xff);
    NET_CLASS_VAR_S(get_particle_draw_width, float, 0xbcc);
    NET_CLASS_VAR_S(get_particle_spacing_distance, float, 0xbd0);
    NET_CLASS_VAR_S(get_density_ramp_speed, float, 0xbd4);
    NET_CLASS_VAR_S(get_rotation_speed, float, 0xbd8);
    NET_CLASS_VAR_S(get_movement_speed, float, 0xbdc);
    NET_CLASS_VAR_S(get_density, float, 0xbe0);
    NET_CLASS_VAR_S(get_max_draw_distance, float, 0xbe4);
    NET_CLASS_VAR_S(get_spawnflags, int, 0xbe8);
END_NET_CLASS(CFuncSmokeVolume);
DEFINE_NET_CLASS(CFuncTrackTrain, 0x5c, 0x00, netvar::class_base);
END_NET_CLASS(CFuncTrackTrain);
DEFINE_NET_CLASS(CGameRulesProxy, 0x5d, 0x00, netvar::class_base);
END_NET_CLASS(CGameRulesProxy);
DEFINE_NET_CLASS(CGrassBurn, 0x5e, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_grass_burn_clear_time, float, 0x9d8);
END_NET_CLASS(CGrassBurn);
DEFINE_NET_CLASS(CHandleTest, 0x5f, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_handle, int, 0x9d8);
    NET_CLASS_VAR_S(is_send_handle, bool, 0x9dc);
END_NET_CLASS(CHandleTest);
DEFINE_NET_CLASS(CHEGrenade, 0x60, 0x00, netvar::class_base);
END_NET_CLASS(CHEGrenade);
DEFINE_NET_CLASS(CHostage, 0x61, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_health, int, 0x100);
    NET_CLASS_VAR_S(get_f_flags, int, 0x104);
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    NET_CLASS_VAR_S(get_max_health, int, 0x2f28);
    NET_CLASS_VAR_S(get_leader, int, 0x2f30);
    NET_CLASS_VAR_S(get_vel, Vector3f, 0x2f34);
    NET_CLASS_VAR_S(get_s_rescued, int, 0x2f40);
    NET_CLASS_VAR_S(get_jumped_this_frame, int, 0x2f41);
    NET_CLASS_VAR_S(get_hostage_state, int32_t, 0x2f44);
    NET_CLASS_VAR_S(get_rescue_start_time, float, 0x2f48);
    NET_CLASS_VAR_S(get_grab_success_time, float, 0x2f4c);
    NET_CLASS_VAR_S(get_drop_start_time, float, 0x2f50);
END_NET_CLASS(CHostage);
DEFINE_NET_CLASS(CHostageCarriableProp, 0x62, 0x00, netvar::class_base);
END_NET_CLASS(CHostageCarriableProp);
DEFINE_NET_CLASS(CIncendiaryGrenade, 0x63, 0x00, netvar::class_base);
END_NET_CLASS(CIncendiaryGrenade);
DEFINE_NET_CLASS(CInferno, 0x64, 0x00, netvar::class_base);
    /* TODO: m_fireXDelta of type 6*/
    /* TODO: m_fireYDelta of type 6*/
    /* TODO: m_fireZDelta of type 6*/
    /* TODO: m_bFireIsBurning of type 6*/
    NET_CLASS_VAR_S(get_fire_count, int, 0x13a8);
    NET_CLASS_VAR_S(get_fire_effect_tick_begin, int32_t, 0x13b4);
END_NET_CLASS(CInferno);
DEFINE_NET_CLASS(CInfoLadderDismount, 0x65, 0x00, netvar::class_base);
END_NET_CLASS(CInfoLadderDismount);
DEFINE_NET_CLASS(CInfoMapRegion, 0x66, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_radius, float, 0x9d8);
    NET_CLASS_VAR_C(get_loc_token, 0x9dc, 0x80);
END_NET_CLASS(CInfoMapRegion);
DEFINE_NET_CLASS(CInfoOverlayAccessor, 0x67, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_texture_frame_index, int, 0x98c);
    NET_CLASS_VAR_S(get_overlay_i_d, int, 0x9d8);
END_NET_CLASS(CInfoOverlayAccessor);
DEFINE_NET_CLASS(CItem_Healthshot, 0x68, 0x00, netvar::class_base);
END_NET_CLASS(CItem_Healthshot);
DEFINE_NET_CLASS(CItemCash, 0x69, 0x00, netvar::class_base);
END_NET_CLASS(CItemCash);
DEFINE_NET_CLASS(CItemDogtags, 0x6a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_owning_player, int, 0x3450);
    NET_CLASS_VAR_S(get_killing_player, int, 0x3454);
END_NET_CLASS(CItemDogtags);
DEFINE_NET_CLASS(CKnife, 0x6b, 0x00, netvar::class_base);
END_NET_CLASS(CKnife);
DEFINE_NET_CLASS(CKnifeGG, 0x6c, 0x00, netvar::class_base);
END_NET_CLASS(CKnifeGG);
DEFINE_NET_CLASS(CLightGlow, 0x6d, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x12c);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    NET_CLASS_VAR_S(get_horizontal_size, int32_t, 0x9d8);
    NET_CLASS_VAR_S(get_vertical_size, int32_t, 0x9dc);
    NET_CLASS_VAR_S(get_min_dist, int32_t, 0x9e0);
    NET_CLASS_VAR_S(get_max_dist, int32_t, 0x9e4);
    NET_CLASS_VAR_S(get_outer_max_dist, int32_t, 0x9e8);
    NET_CLASS_VAR_S(get_spawnflags, int, 0x9ec);
    NET_CLASS_VAR_S(get_glow_proxy_size, float, 0xac4);
END_NET_CLASS(CLightGlow);
DEFINE_NET_CLASS(CMapVetoPickController, 0x6e, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_draft_type, int32_t, 0x9e8);
    NET_CLASS_VAR_S(get_team_winning_coin_toss, int32_t, 0x9ec);
    /* TODO: m_nTeamWithFirstChoice of type 6*/
    /* TODO: m_nVoteMapIdsList of type 6*/
    /* TODO: m_nAccountIDs of type 6*/
    /* TODO: m_nMapId0 of type 6*/
    /* TODO: m_nMapId1 of type 6*/
    /* TODO: m_nMapId2 of type 6*/
    /* TODO: m_nMapId3 of type 6*/
    /* TODO: m_nMapId4 of type 6*/
    /* TODO: m_nMapId5 of type 6*/
    /* TODO: m_nStartingSide0 of type 6*/
    NET_CLASS_VAR_S(get_current_phase, int32_t, 0x130c);
    NET_CLASS_VAR_S(get_phase_start_tick, int32_t, 0x1310);
    NET_CLASS_VAR_S(get_phase_duration_ticks, int32_t, 0x1314);
END_NET_CLASS(CMapVetoPickController);
DEFINE_NET_CLASS(CMaterialModifyControl, 0x6f, 0x00, netvar::class_base);
    NET_CLASS_VAR_C(get_material_name, 0x9d8, 0xff);
    NET_CLASS_VAR_C(get_material_var, 0xad7, 0xff);
    NET_CLASS_VAR_C(get_material_var_value, 0xbd6, 0xff);
    NET_CLASS_VAR_S(get_frame_start, int, 0xce0);
    NET_CLASS_VAR_S(get_frame_end, int, 0xce4);
    NET_CLASS_VAR_S(is_wrap, bool, 0xce8);
    NET_CLASS_VAR_S(get_framerate, float, 0xcec);
    NET_CLASS_VAR_S(is_new_anim_commands_semaphore, bool, 0xcf0);
    NET_CLASS_VAR_S(get_float_lerp_start_value, float, 0xcf4);
    NET_CLASS_VAR_S(get_float_lerp_end_value, float, 0xcf8);
    NET_CLASS_VAR_S(get_float_lerp_transition_time, float, 0xcfc);
    NET_CLASS_VAR_S(is_float_lerp_wrap, bool, 0xd00);
    NET_CLASS_VAR_S(get_modify_mode, int32_t, 0xd08);
END_NET_CLASS(CMaterialModifyControl);
DEFINE_NET_CLASS(CMelee, 0x70, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_throw_at, float, 0x33e0);
END_NET_CLASS(CMelee);
DEFINE_NET_CLASS(CMolotovGrenade, 0x71, 0x00, netvar::class_base);
END_NET_CLASS(CMolotovGrenade);
DEFINE_NET_CLASS(CMolotovProjectile, 0x72, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_inc_grenade, bool, 0x2a20);
END_NET_CLASS(CMolotovProjectile);
DEFINE_NET_CLASS(CMovieDisplay, 0x73, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_enabled, bool, 0x9d8);
    NET_CLASS_VAR_S(is_looping, bool, 0x9d9);
    NET_CLASS_VAR_C(get_movie_filename, 0x9da, 0x80);
    NET_CLASS_VAR_C(get_group_name, 0xa5a, 0x80);
    NET_CLASS_VAR_S(is_stretch_to_fill, bool, 0xada);
    NET_CLASS_VAR_S(is_forced_slave, bool, 0xadb);
    NET_CLASS_VAR_S(is_use_custom_u_vs, bool, 0xadc);
    NET_CLASS_VAR_S(get_u_min, float, 0xae0);
    NET_CLASS_VAR_S(get_u_max, float, 0xae4);
    NET_CLASS_VAR_S(get_v_min, float, 0xae8);
    NET_CLASS_VAR_S(get_v_max, float, 0xaec);
END_NET_CLASS(CMovieDisplay);
DEFINE_NET_CLASS(CParadropChopper, 0x74, 0x00, netvar::class_base);
    /* TODO: m_vecOrigin of type 3*/
    /* TODO: fix name for m_vecOrigin[2] of type 1*/
    NET_CLASS_VAR_S(get_calling_player, EntityHandle, 0x29a0);
END_NET_CLASS(CParadropChopper);
DEFINE_NET_CLASS(CParticleFire, 0x75, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_v_origin, Vector3f, 0xacc);
    NET_CLASS_VAR_S(get_v_direction, Vector3f, 0xad8);
END_NET_CLASS(CParticleFire);
DEFINE_NET_CLASS(CParticlePerformanceMonitor, 0x76, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_display_perf, bool, 0x9d8);
    NET_CLASS_VAR_S(is_measure_perf, bool, 0x9d9);
END_NET_CLASS(CParticlePerformanceMonitor);
DEFINE_NET_CLASS(CParticleSystem, 0x77, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_f_effects, int, 0xf0);
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x12c);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    NET_CLASS_VAR_S(get_owner_entity, EntityHandle, 0x14c);
    NET_CLASS_VAR_S(get_parent_attachment, int, 0x2ec);
    NET_CLASS_VAR_S(get_effect_index, int, 0x9d8);
    NET_CLASS_VAR_S(get_stop_type, int32_t, 0x9dc);
    NET_CLASS_VAR_S(is_active, bool, 0x9e0);
    NET_CLASS_VAR_S(get_start_time, float, 0x9e4);
    NET_CLASS_VAR_C(get_snapshot_file_name, 0x9e8, 0x104);
    /* TODO: m_vServerControlPoints of type 6*/
    /* TODO: m_iServerControlPointAssignments of type 6*/
    /* TODO: m_hControlPointEnts of type 6*/
    /* TODO: m_iControlPointParents of type 6*/
END_NET_CLASS(CParticleSystem);
DEFINE_NET_CLASS(CPhysBox, 0x78, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_mass, float, 0x9d8);
END_NET_CLASS(CPhysBox);
DEFINE_NET_CLASS(CPhysBoxMultiplayer, 0x79, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_physics_mode, int, 0x9e4);
    NET_CLASS_VAR_S(get_mass, float, 0x9e8);
END_NET_CLASS(CPhysBoxMultiplayer);
DEFINE_NET_CLASS(CPhysicsProp, 0x7a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spawnflags, int, 0x2c8);
    NET_CLASS_VAR_S(is_awake, bool, 0x29b0);
END_NET_CLASS(CPhysicsProp);
DEFINE_NET_CLASS(CPhysicsPropMultiplayer, 0x7b, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_physics_mode, int, 0x29d4);
    NET_CLASS_VAR_S(get_mass, float, 0x29d8);
    NET_CLASS_VAR_S(get_collision_mins, Vector3f, 0x29dc);
    NET_CLASS_VAR_S(get_collision_maxs, Vector3f, 0x29e8);
END_NET_CLASS(CPhysicsPropMultiplayer);
DEFINE_NET_CLASS(CPhysMagnet, 0x7c, 0x00, netvar::class_base);
END_NET_CLASS(CPhysMagnet);
DEFINE_NET_CLASS(CPhysPropAmmoBox, 0x7d, 0x00, netvar::class_base);
END_NET_CLASS(CPhysPropAmmoBox);
DEFINE_NET_CLASS(CPhysPropLootCrate, 0x7e, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_health, int, 0x100);
    NET_CLASS_VAR_S(is_render_in_psp_m, bool, 0x2a04);
    NET_CLASS_VAR_S(is_render_in_tablet, bool, 0x2a05);
    NET_CLASS_VAR_S(get_max_health, int, 0x2a08);
END_NET_CLASS(CPhysPropLootCrate);
DEFINE_NET_CLASS(CPhysPropRadarJammer, 0x7f, 0x00, netvar::class_base);
END_NET_CLASS(CPhysPropRadarJammer);
DEFINE_NET_CLASS(CPhysPropWeaponUpgrade, 0x80, 0x00, netvar::class_base);
END_NET_CLASS(CPhysPropWeaponUpgrade);
DEFINE_NET_CLASS(CPlantedC4, 0x81, 0x00, CBaseEntity);
    NET_CLASS_VAR_S(is_bomb_ticking, bool, 0x2990);
    NET_CLASS_VAR_S(get_bomb_site, int32_t, 0x2994);
    NET_CLASS_VAR_S(get_c4_blow, float, 0x29a0);
    NET_CLASS_VAR_S(get_timer_length, float, 0x29a4);
    NET_CLASS_VAR_S(get_defuse_length, float, 0x29b8);
    NET_CLASS_VAR_S(get_defuse_count_down, float, 0x29bc);
    NET_CLASS_VAR_S(is_bomb_defused, bool, 0x29c0);
    NET_CLASS_VAR_S(get_bomb_defuser, EntityHandle, 0x29c4);
END_NET_CLASS(CPlantedC4);
DEFINE_NET_CLASS(CPlasma, 0x82, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_scale, float, 0x9d8);
    NET_CLASS_VAR_S(get_scale, float, 0x9dc);
    NET_CLASS_VAR_S(get_scale_time, float, 0x9e0);
    NET_CLASS_VAR_S(get_flags, int32_t, 0x9e4);
    NET_CLASS_VAR_S(get_plasma_model_index, int32_t, 0x9e8);
    NET_CLASS_VAR_S(get_plasma_model_index2, int32_t, 0x9ec);
    NET_CLASS_VAR_S(get_glow_model_index, int32_t, 0x9f0);
END_NET_CLASS(CPlasma);
DEFINE_NET_CLASS(CPlayerPing, 0x83, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x9e4);
    NET_CLASS_VAR_S(get_pinged_entity, EntityHandle, 0x9e8);
    NET_CLASS_VAR_S(get_type, int, 0x9ec);
    NET_CLASS_VAR_S(is_urgent, bool, 0x9f4);
    NET_CLASS_VAR_C(get_place_name, 0x9f5, 0x12);
END_NET_CLASS(CPlayerPing);
DEFINE_NET_CLASS(CPlayerResource, 0x84, 0x00, netvar::class_base);
    /* TODO: m_bConnected of type 6*/
    /* TODO: m_iPing of type 6*/
    /* TODO: m_iKills of type 6*/
    /* TODO: m_iAssists of type 6*/
    /* TODO: m_iDeaths of type 6*/
    /* TODO: m_iTeam of type 6*/
    /* TODO: m_iPendingTeam of type 6*/
    /* TODO: m_bAlive of type 6*/
    /* TODO: m_iHealth of type 6*/
    /* TODO: m_iCoachingTeam of type 6*/
END_NET_CLASS(CPlayerResource);
DEFINE_NET_CLASS(CPointCamera, 0x85, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_fo_v, float, 0x9d8);
    NET_CLASS_VAR_S(get_resolution, float, 0x9dc);
    NET_CLASS_VAR_S(is_fog_enable, bool, 0x9e0);
    NET_CLASS_VAR_S(get_fog_color, int, 0x9e1);
    NET_CLASS_VAR_S(get_fog_start, float, 0x9e8);
    NET_CLASS_VAR_S(get_fog_end, float, 0x9ec);
    NET_CLASS_VAR_S(get_fog_max_density, float, 0x9f0);
    NET_CLASS_VAR_S(is_active, bool, 0x9f4);
    NET_CLASS_VAR_S(is_use_screen_aspect_ratio, bool, 0x9f5);
END_NET_CLASS(CPointCamera);
DEFINE_NET_CLASS(CPointCommentaryNode, 0x86, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_active, bool, 0x2990);
    NET_CLASS_VAR_S(get_start_time, float, 0x2994);
    NET_CLASS_VAR_C(get_isz_commentary_file, 0x2998, 0x104);
    NET_CLASS_VAR_C(get_isz_commentary_file_no_hd_r, 0x2a9c, 0x104);
    NET_CLASS_VAR_C(get_isz_speakers, 0x2ba0, 0x100);
    NET_CLASS_VAR_S(get_node_number, int, 0x2ca0);
    NET_CLASS_VAR_S(get_node_number_max, int, 0x2ca4);
    NET_CLASS_VAR_S(get_view_position, EntityHandle, 0x2cac);
END_NET_CLASS(CPointCommentaryNode);
DEFINE_NET_CLASS(CPointWorldText, 0x87, 0x00, netvar::class_base);
    NET_CLASS_VAR_C(get_text, 0xa08, 0x104);
    NET_CLASS_VAR_S(get_text_size, float, 0xb0c);
    NET_CLASS_VAR_S(get_text_color, int, 0xb10);
END_NET_CLASS(CPointWorldText);
DEFINE_NET_CLASS(CPoseController, 0x88, 0x00, netvar::class_base);
    /* TODO: m_hProps of type 6*/
    /* TODO: m_chPoseIndex of type 6*/
    NET_CLASS_VAR_S(is_pose_value_parity, bool, 0x9ec);
    NET_CLASS_VAR_S(get_pose_value, float, 0x9f0);
    NET_CLASS_VAR_S(get_interpolation_time, float, 0x9f4);
    NET_CLASS_VAR_S(is_interpolation_wrap, bool, 0x9f8);
    NET_CLASS_VAR_S(get_cycle_frequency, float, 0x9fc);
    NET_CLASS_VAR_S(get_f_mod_type, int32_t, 0xa00);
    NET_CLASS_VAR_S(get_f_mod_time_offset, float, 0xa04);
    NET_CLASS_VAR_S(get_f_mod_rate, float, 0xa08);
    NET_CLASS_VAR_S(get_f_mod_amplitude, float, 0xa0c);
END_NET_CLASS(CPoseController);
DEFINE_NET_CLASS(CPostProcessController, 0x89, 0x00, netvar::class_base);
    /* TODO: m_flPostProcessParameters of type 6*/
    NET_CLASS_VAR_S(is_master, bool, 0xa04);
END_NET_CLASS(CPostProcessController);
DEFINE_NET_CLASS(CPrecipitation, 0x8a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_precip_type, int32_t, 0xa00);
END_NET_CLASS(CPrecipitation);
DEFINE_NET_CLASS(CPrecipitationBlocker, 0x8b, 0x00, netvar::class_base);
END_NET_CLASS(CPrecipitationBlocker);
DEFINE_NET_CLASS(CPredictedViewModel, 0x8c, 0x00, netvar::class_base);
END_NET_CLASS(CPredictedViewModel);
DEFINE_NET_CLASS(CProp_Hallucination, 0x8d, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_enabled, bool, 0x29a9);
    NET_CLASS_VAR_S(get_visible_time, float, 0x29ac);
    NET_CLASS_VAR_S(get_recharge_time, float, 0x29b0);
END_NET_CLASS(CProp_Hallucination);
DEFINE_NET_CLASS(CPropCounter, 0x8e, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_display_value, float, 0x2990);
END_NET_CLASS(CPropCounter);
DEFINE_NET_CLASS(CPropDoorRotating, 0x8f, 0x00, netvar::class_base);
END_NET_CLASS(CPropDoorRotating);
DEFINE_NET_CLASS(CPropJeep, 0x90, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_headlight_is_on, bool, 0x2adc);
END_NET_CLASS(CPropJeep);
DEFINE_NET_CLASS(CPropVehicleDriveable, 0x91, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x2994);
    NET_CLASS_VAR_S(get_speed, int32_t, 0x2998);
    NET_CLASS_VAR_S(get_rp_m, int32_t, 0x299c);
    NET_CLASS_VAR_S(get_throttle, float, 0x29a0);
    NET_CLASS_VAR_S(get_boost_time_left, int32_t, 0x29a4);
    NET_CLASS_VAR_S(get_has_boost, int32_t, 0x29a8);
    NET_CLASS_VAR_S(get_scanner_disabled_weapons, int32_t, 0x29ac);
    NET_CLASS_VAR_S(get_scanner_disabled_vehicle, int32_t, 0x29b0);
    NET_CLASS_VAR_S(is_enter_anim_on, bool, 0x29d0);
    NET_CLASS_VAR_S(is_exit_anim_on, bool, 0x29d1);
    NET_CLASS_VAR_S(get_gun_crosshair, Vector3f, 0x29d8);
    NET_CLASS_VAR_S(get_eye_exit_endpoint, Vector3f, 0x2a10);
    NET_CLASS_VAR_S(has_gun, bool, 0x2a1c);
    NET_CLASS_VAR_S(is_unable_to_fire, bool, 0x2a1d);
END_NET_CLASS(CPropVehicleDriveable);
DEFINE_NET_CLASS(CRagdollManager, 0x92, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_current_max_ragdoll_count, int, 0x9d8);
END_NET_CLASS(CRagdollManager);
DEFINE_NET_CLASS(CRagdollProp, 0x93, 0x00, netvar::class_base);
    /* TODO: fix name for m_ragPos[0] of type 2*/
    /* TODO: fix name for m_ragAngles[0] of type 2*/
    NET_CLASS_VAR_S(get_unragdoll, EntityHandle, 0x2c8c);
    NET_CLASS_VAR_S(get_blend_weight, float, 0x2c90);
    NET_CLASS_VAR_S(get_overlay_sequence, int32_t, 0x2c98);
END_NET_CLASS(CRagdollProp);
DEFINE_NET_CLASS(CRagdollPropAttached, 0x94, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_attachment_point_bone_space, Vector3f, 0x2ca0);
    NET_CLASS_VAR_S(get_attachment_point_ragdoll_space, Vector3f, 0x2cb8);
    NET_CLASS_VAR_S(get_ragdoll_attached_object_index, int, 0x2cc4);
    NET_CLASS_VAR_S(is_one_index_attached, bool, 0x2cc8);
END_NET_CLASS(CRagdollPropAttached);
DEFINE_NET_CLASS(CRopeKeyframe, 0x95, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
    NET_CLASS_VAR_S(get_parent_attachment, int, 0x2ec);
    NET_CLASS_VAR_S(get_min_cpu_level, int32_t, 0x988);
    NET_CLASS_VAR_S(get_max_cpu_level, int32_t, 0x989);
    NET_CLASS_VAR_S(get_min_gpu_level, int32_t, 0x98a);
    NET_CLASS_VAR_S(get_max_gpu_level, int32_t, 0x98b);
    NET_CLASS_VAR_S(get_scroll_speed, float, 0xa0c);
    NET_CLASS_VAR_S(get_rope_flags, int, 0xa10);
    NET_CLASS_VAR_S(get_rope_material_model_index, int, 0xa14);
    NET_CLASS_VAR_S(get_default_rope_material_model_index, int, 0xa18);
    NET_CLASS_VAR_S(get_segments, int32_t, 0xca8);
    NET_CLASS_VAR_S(get_start_point, EntityHandle, 0xcac);
    NET_CLASS_VAR_S(get_end_point, EntityHandle, 0xcb0);
    NET_CLASS_VAR_S(get_start_attachment, int, 0xcb4);
    NET_CLASS_VAR_S(get_end_attachment, int, 0xcb6);
    NET_CLASS_VAR_S(get_subdiv, int, 0xcb8);
    NET_CLASS_VAR_S(get_rope_length, int, 0xcbc);
    NET_CLASS_VAR_S(get_slack, int, 0xcc0);
    NET_CLASS_VAR_S(get_texture_scale, float, 0xcc4);
    NET_CLASS_VAR_S(get_f_locked_points, int, 0xcc8);
    NET_CLASS_VAR_S(get_change_count, int32_t, 0xccc);
    NET_CLASS_VAR_S(get_width, float, 0xcd0);
    NET_CLASS_VAR_S(is_constrain_between_endpoints, bool, 0xd50);
END_NET_CLASS(CRopeKeyframe);
DEFINE_NET_CLASS(CSCAR17, 0x96, 0x00, netvar::class_base);
END_NET_CLASS(CSCAR17);
DEFINE_NET_CLASS(CSceneEntity, 0x97, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_playing_back, bool, 0x9dc);
    NET_CLASS_VAR_S(is_paused, bool, 0x9dd);
    NET_CLASS_VAR_S(is_multiplayer, bool, 0x9de);
    NET_CLASS_VAR_S(get_force_client_time, float, 0x9e4);
    NET_CLASS_VAR_S(get_scene_string_index, int32_t, 0x9e8);
END_NET_CLASS(CSceneEntity);
DEFINE_NET_CLASS(CSensorGrenade, 0x98, 0x00, netvar::class_base);
END_NET_CLASS(CSensorGrenade);
DEFINE_NET_CLASS(CSensorGrenadeProjectile, 0x99, 0x00, netvar::class_base);
END_NET_CLASS(CSensorGrenadeProjectile);
DEFINE_NET_CLASS(CShadowControl, 0x9a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_shadow_direction, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(get_shadow_color, int, 0x9e4);
    NET_CLASS_VAR_S(get_shadow_max_dist, float, 0x9e8);
    NET_CLASS_VAR_S(is_disable_shadows, bool, 0x9ec);
    NET_CLASS_VAR_S(is_enable_local_light_shadows, bool, 0x9ed);
END_NET_CLASS(CShadowControl);
DEFINE_NET_CLASS(CSlideshowDisplay, 0x9b, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_enabled, bool, 0x9d8);
    NET_CLASS_VAR_C(get_display_text, 0x9d9, 0x80);
    NET_CLASS_VAR_C(get_slideshow_directory, 0xa59, 0x80);
    /* TODO: m_chCurrentSlideLists of type 6*/
    NET_CLASS_VAR_S(get_min_slide_time, float, 0xb08);
    NET_CLASS_VAR_S(get_max_slide_time, float, 0xb0c);
    NET_CLASS_VAR_S(get_cycle_type, int, 0xb14);
    NET_CLASS_VAR_S(is_no_list_repeats, bool, 0xb18);
END_NET_CLASS(CSlideshowDisplay);
DEFINE_NET_CLASS(CSmokeGrenade, 0x9c, 0x00, netvar::class_base);
END_NET_CLASS(CSmokeGrenade);
DEFINE_NET_CLASS(CSmokeGrenadeProjectile, 0x9d, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_smoke_effect_tick_begin, int32_t, 0x2a20);
    NET_CLASS_VAR_S(is_did_smoke_effect, bool, 0x2a24);
END_NET_CLASS(CSmokeGrenadeProjectile);
DEFINE_NET_CLASS(CSmokeStack, 0x9e, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spread_speed, float, 0xb14);
    NET_CLASS_VAR_S(get_speed, float, 0xb18);
    NET_CLASS_VAR_S(get_start_size, float, 0xb1c);
    NET_CLASS_VAR_S(get_end_size, float, 0xb20);
    NET_CLASS_VAR_S(get_rate, float, 0xb24);
    NET_CLASS_VAR_S(get_jet_length, float, 0xb28);
    NET_CLASS_VAR_S(is_emit, bool, 0xb2c);
    NET_CLASS_VAR_S(get_base_spread, float, 0xb30);
    /* TODO: fix name for m_AmbientLight.m_vPos of type 2*/
    /* TODO: fix name for m_AmbientLight.m_vColor of type 2*/
    /* TODO: fix name for m_AmbientLight.m_flIntensity of type 1*/
    /* TODO: fix name for m_DirLight.m_vPos of type 2*/
    /* TODO: fix name for m_DirLight.m_vColor of type 2*/
    /* TODO: fix name for m_DirLight.m_flIntensity of type 1*/
    NET_CLASS_VAR_S(get_v_wind, Vector3f, 0xb78);
    NET_CLASS_VAR_S(get_twist, float, 0xb84);
    NET_CLASS_VAR_S(get_material_model, int, 0xb88);
    NET_CLASS_VAR_S(get_roll_speed, float, 0xbc0);
END_NET_CLASS(CSmokeStack);
DEFINE_NET_CLASS(CSnowball, 0x9f, 0x00, netvar::class_base);
END_NET_CLASS(CSnowball);
DEFINE_NET_CLASS(CSnowballPile, 0xa0, 0x00, netvar::class_base);
END_NET_CLASS(CSnowballPile);
DEFINE_NET_CLASS(CSnowballProjectile, 0xa1, 0x00, netvar::class_base);
END_NET_CLASS(CSnowballProjectile);
DEFINE_NET_CLASS(CSpatialEntity, 0xa2, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(get_min_falloff, float, 0x9e4);
    NET_CLASS_VAR_S(get_max_falloff, float, 0x9e8);
    NET_CLASS_VAR_S(get_cur_weight, float, 0x9ec);
    NET_CLASS_VAR_S(is_enabled, bool, 0xaf4);
END_NET_CLASS(CSpatialEntity);
DEFINE_NET_CLASS(CSpotlightEnd, 0xa3, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_light_scale, float, 0x9d8);
    NET_CLASS_VAR_S(get_radius, float, 0x9dc);
END_NET_CLASS(CSpotlightEnd);
DEFINE_NET_CLASS(CSprite, 0xa4, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_attached_to_entity, EntityHandle, 0x9e8);
    NET_CLASS_VAR_S(get_attachment, int32_t, 0x9ec);
    NET_CLASS_VAR_S(get_sprite_framerate, float, 0x9f0);
    NET_CLASS_VAR_S(get_frame, float, 0x9f4);
    NET_CLASS_VAR_S(get_brightness, int32_t, 0x9fc);
    NET_CLASS_VAR_S(get_brightness_time, float, 0xa00);
    NET_CLASS_VAR_S(get_sprite_scale, float, 0xa04);
    NET_CLASS_VAR_S(get_scale_time, float, 0xa08);
    NET_CLASS_VAR_S(is_world_space_scale, bool, 0xa0c);
    NET_CLASS_VAR_S(get_glow_proxy_size, float, 0xa10);
    NET_CLASS_VAR_S(get_hdr_color_scale, float, 0xa14);
END_NET_CLASS(CSprite);
DEFINE_NET_CLASS(CSpriteOriented, 0xa5, 0x00, netvar::class_base);
END_NET_CLASS(CSpriteOriented);
DEFINE_NET_CLASS(CSpriteTrail, 0xa6, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_life_time, float, 0x1074);
    NET_CLASS_VAR_S(get_start_width, float, 0x1078);
    NET_CLASS_VAR_S(get_end_width, float, 0x107c);
    NET_CLASS_VAR_S(get_start_width_variance, float, 0x1080);
    NET_CLASS_VAR_S(get_texture_res, float, 0x1084);
    NET_CLASS_VAR_S(get_min_fade_length, float, 0x1088);
    NET_CLASS_VAR_S(get_skybox_origin, Vector3f, 0x108c);
    NET_CLASS_VAR_S(get_skybox_scale, float, 0x1098);
END_NET_CLASS(CSpriteTrail);
DEFINE_NET_CLASS(CStatueProp, 0xa7, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_init_base_animating, EntityHandle, 0x29d0);
    NET_CLASS_VAR_S(is_shatter, bool, 0x29d4);
    NET_CLASS_VAR_S(get_shatter_flags, int32_t, 0x29d8);
    NET_CLASS_VAR_S(get_v_shatter_position, Vector3f, 0x29dc);
    NET_CLASS_VAR_S(get_v_shatter_force, Vector3f, 0x29e8);
END_NET_CLASS(CStatueProp);
DEFINE_NET_CLASS(CSteamJet, 0xa8, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spread_speed, float, 0xac4);
    NET_CLASS_VAR_S(get_speed, float, 0xac8);
    NET_CLASS_VAR_S(get_start_size, float, 0xacc);
    NET_CLASS_VAR_S(get_end_size, float, 0xad0);
    NET_CLASS_VAR_S(get_rate, float, 0xad4);
    NET_CLASS_VAR_S(get_jet_length, float, 0xad8);
    NET_CLASS_VAR_S(is_emit, bool, 0xadc);
    NET_CLASS_VAR_S(get_type, int32_t, 0xae0);
    NET_CLASS_VAR_S(is_face_left, bool, 0xae4);
    NET_CLASS_VAR_S(get_spawnflags, int, 0xae8);
    NET_CLASS_VAR_S(get_roll_speed, float, 0xaec);
END_NET_CLASS(CSteamJet);
DEFINE_NET_CLASS(CSun, 0xa9, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    NET_CLASS_VAR_S(get_clr_overlay, int, 0xb38);
    NET_CLASS_VAR_S(get_size, int32_t, 0xb3c);
    NET_CLASS_VAR_S(get_overlay_size, int32_t, 0xb40);
    NET_CLASS_VAR_S(get_v_direction, Vector3f, 0xb44);
    NET_CLASS_VAR_S(is_on, bool, 0xb50);
    NET_CLASS_VAR_S(get_material, int32_t, 0xb54);
    NET_CLASS_VAR_S(get_overlay_material, int32_t, 0xb58);
END_NET_CLASS(CSun);
DEFINE_NET_CLASS(CSunlightShadowControl, 0xaa, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_shadow_direction, Vector3f, 0x9d8);
    NET_CLASS_VAR_S(is_enabled, bool, 0x9e4);
    NET_CLASS_VAR_C(get_texture_name, 0x9e5, 0x104);
    NET_CLASS_VAR_S(get_light_color, int, 0xaf0);
    NET_CLASS_VAR_S(get_color_transition_time, float, 0xb04);
    NET_CLASS_VAR_S(get_sun_distance, float, 0xb08);
    NET_CLASS_VAR_S(get_fo_v, float, 0xb0c);
    NET_CLASS_VAR_S(get_near_z, float, 0xb10);
    NET_CLASS_VAR_S(get_north_offset, float, 0xb14);
    NET_CLASS_VAR_S(is_enable_shadows, bool, 0xb18);
END_NET_CLASS(CSunlightShadowControl);
DEFINE_NET_CLASS(CSurvivalSpawnChopper, 0xab, 0x00, netvar::class_base);
    /* TODO: m_vecOrigin of type 3*/
    /* TODO: fix name for m_vecOrigin[2] of type 1*/
END_NET_CLASS(CSurvivalSpawnChopper);
DEFINE_NET_CLASS(CTablet, 0xac, 0x00, netvar::class_base);
    /* TODO: fix name for m_flUpgradeExpirationTime[0] of type 1*/
    /* TODO: fix name for m_vecLocalHexFlags[0] of type 0*/
    NET_CLASS_VAR_S(get_contract_kill_grid_index, int32_t, 0x34a0);
    NET_CLASS_VAR_S(get_contract_kill_grid_high_res_index, int32_t, 0x34a4);
    NET_CLASS_VAR_S(is_tablet_reception_is_blocked, bool, 0x34a8);
    NET_CLASS_VAR_S(get_scan_progress, float, 0x34ac);
    NET_CLASS_VAR_S(get_boot_time, float, 0x34b0);
    NET_CLASS_VAR_S(get_show_map_time, float, 0x34b4);
    NET_CLASS_VAR_S(get_nearest_metal_crate_pos, Vector3f, 0x34b8);
    /* TODO: fix name for m_vecNotificationIds[0] of type 0*/
    /* TODO: fix name for m_vecNotificationTimestamps[0] of type 1*/
    NET_CLASS_VAR_S(get_last_purchase_index, int32_t, 0x3504);
    /* TODO: fix name for m_vecPlayerPositionHistory[0] of type 2*/
END_NET_CLASS(CTablet);
DEFINE_NET_CLASS(CTeam, 0xad, 0x00, netvar::class_base);
    NET_CLASS_VAR_C(get_teamname, 0x9ec, 0x20);
    NET_CLASS_VAR_C(get_clan_teamname, 0xa0c, 0x20);
    NET_CLASS_VAR_C(get_team_flag_image, 0xa2c, 0x8);
    NET_CLASS_VAR_C(get_team_logo_image, 0xa34, 0x8);
    NET_CLASS_VAR_C(get_team_match_stat, 0xa3c, 0x104);
    NET_CLASS_VAR_S(get_score_total, int, 0xb40);
    NET_CLASS_VAR_S(get_score_first_half, int, 0xb44);
    NET_CLASS_VAR_S(get_score_second_half, int, 0xb48);
    NET_CLASS_VAR_S(get_score_overtime, int, 0xb4c);
    NET_CLASS_VAR_S(get_gg_leader_ent_index_c_t, int32_t, 0xb50);
    NET_CLASS_VAR_S(get_gg_leader_ent_index_t, int32_t, 0xb54);
    NET_CLASS_VAR_S(get_clan_i_d, int, 0xb58);
    NET_CLASS_VAR_S(get_team_num, int, 0xb68);
    NET_CLASS_VAR_S(is_surrendered, bool, 0xb6c);
    NET_CLASS_VAR_S(get_um_map_victories, int32_t, 0xb70);
END_NET_CLASS(CTeam);
DEFINE_NET_CLASS(CTeamplayRoundBasedRulesProxy, 0xae, 0x00, netvar::class_base);
END_NET_CLASS(CTeamplayRoundBasedRulesProxy);
DEFINE_NET_CLASS(CTEArmorRicochet, 0xaf, 0x00, netvar::class_base);
END_NET_CLASS(CTEArmorRicochet);
DEFINE_NET_CLASS(CTEBaseBeam, 0xb0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x10);
    NET_CLASS_VAR_S(get_halo_index, int32_t, 0x14);
    NET_CLASS_VAR_S(get_start_frame, int32_t, 0x18);
    NET_CLASS_VAR_S(get_frame_rate, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_life, float, 0x20);
    NET_CLASS_VAR_S(get_width, float, 0x24);
    NET_CLASS_VAR_S(get_end_width, float, 0x28);
    NET_CLASS_VAR_S(get_fade_length, int32_t, 0x2c);
    NET_CLASS_VAR_S(get_amplitude, float, 0x30);
    NET_CLASS_VAR_S(get_r, int, 0x34);
    NET_CLASS_VAR_S(get_g, int, 0x38);
    NET_CLASS_VAR_S(get_b, int, 0x3c);
    NET_CLASS_VAR_S(get_a, int, 0x40);
    NET_CLASS_VAR_S(get_speed, int32_t, 0x44);
    NET_CLASS_VAR_S(get_flags, int32_t, 0x48);
END_NET_CLASS(CTEBaseBeam);
DEFINE_NET_CLASS(CTEBeamEntPoint, 0xb1, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
    NET_CLASS_VAR_S(get_start_point, Vector3f, 0x54);
    NET_CLASS_VAR_S(get_end_point, Vector3f, 0x60);
END_NET_CLASS(CTEBeamEntPoint);
DEFINE_NET_CLASS(CTEBeamEnts, 0xb2, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
END_NET_CLASS(CTEBeamEnts);
DEFINE_NET_CLASS(CTEBeamFollow, 0xb3, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_ent_index, int, 0x4c);
END_NET_CLASS(CTEBeamFollow);
DEFINE_NET_CLASS(CTEBeamLaser, 0xb4, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
END_NET_CLASS(CTEBeamLaser);
DEFINE_NET_CLASS(CTEBeamPoints, 0xb5, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_point, Vector3f, 0x4c);
    NET_CLASS_VAR_S(get_end_point, Vector3f, 0x58);
END_NET_CLASS(CTEBeamPoints);
DEFINE_NET_CLASS(CTEBeamRing, 0xb6, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_start_entity, int32_t, 0x4c);
    NET_CLASS_VAR_S(get_end_entity, int32_t, 0x50);
END_NET_CLASS(CTEBeamRing);
DEFINE_NET_CLASS(CTEBeamRingPoint, 0xb7, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_center, Vector3f, 0x4c);
    NET_CLASS_VAR_S(get_start_radius, float, 0x58);
    NET_CLASS_VAR_S(get_end_radius, float, 0x5c);
END_NET_CLASS(CTEBeamRingPoint);
DEFINE_NET_CLASS(CTEBeamSpline, 0xb8, 0x00, netvar::class_base);
    /* TODO: fix name for m_vecPoints[0] of type 2*/
    NET_CLASS_VAR_S(get_points, int32_t, 0xd0);
END_NET_CLASS(CTEBeamSpline);
DEFINE_NET_CLASS(CTEBloodSprite, 0xb9, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_r, int, 0x28);
    NET_CLASS_VAR_S(get_g, int, 0x2c);
    NET_CLASS_VAR_S(get_b, int, 0x30);
    NET_CLASS_VAR_S(get_a, int, 0x34);
    NET_CLASS_VAR_S(get_drop_model, int32_t, 0x38);
    NET_CLASS_VAR_S(get_spray_model, int32_t, 0x3c);
    NET_CLASS_VAR_S(get_size, int32_t, 0x40);
END_NET_CLASS(CTEBloodSprite);
DEFINE_NET_CLASS(CTEBloodStream, 0xba, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_r, int, 0x28);
    NET_CLASS_VAR_S(get_g, int, 0x2c);
    NET_CLASS_VAR_S(get_b, int, 0x30);
    NET_CLASS_VAR_S(get_a, int, 0x34);
    NET_CLASS_VAR_S(get_amount, int32_t, 0x38);
END_NET_CLASS(CTEBloodStream);
DEFINE_NET_CLASS(CTEBreakModel, 0xbb, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* TODO: fix name for m_angRotation[0] of type 1*/
    /* TODO: fix name for m_angRotation[1] of type 1*/
    /* TODO: fix name for m_angRotation[2] of type 1*/
    NET_CLASS_VAR_S(get_size, Vector3f, 0x28);
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x34);
    NET_CLASS_VAR_S(get_randomization, int32_t, 0x40);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x44);
    NET_CLASS_VAR_S(get_count, int32_t, 0x48);
    NET_CLASS_VAR_S(get_time, float, 0x4c);
    NET_CLASS_VAR_S(get_flags, int32_t, 0x50);
END_NET_CLASS(CTEBreakModel);
DEFINE_NET_CLASS(CTEBSPDecal, 0xbc, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_entity, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_index, int32_t, 0x20);
END_NET_CLASS(CTEBSPDecal);
DEFINE_NET_CLASS(CTEBubbles, 0xbd, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_mins, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_maxs, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_height, float, 0x28);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x2c);
    NET_CLASS_VAR_S(get_count, int32_t, 0x30);
    NET_CLASS_VAR_S(get_speed, float, 0x34);
END_NET_CLASS(CTEBubbles);
DEFINE_NET_CLASS(CTEBubbleTrail, 0xbe, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_mins, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_maxs, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_water_z, float, 0x28);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x2c);
    NET_CLASS_VAR_S(get_count, int32_t, 0x30);
    NET_CLASS_VAR_S(get_speed, float, 0x34);
END_NET_CLASS(CTEBubbleTrail);
DEFINE_NET_CLASS(CTEClientProjectile, 0xbf, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x28);
    NET_CLASS_VAR_S(get_life_time, int32_t, 0x2c);
    NET_CLASS_VAR_S(get_owner, EntityHandle, 0x30);
END_NET_CLASS(CTEClientProjectile);
DEFINE_NET_CLASS(CTEDecal, 0xc0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_start, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_entity, int32_t, 0x28);
    NET_CLASS_VAR_S(get_hitbox, int32_t, 0x2c);
    NET_CLASS_VAR_S(get_index, int32_t, 0x30);
END_NET_CLASS(CTEDecal);
DEFINE_NET_CLASS(CTEDust, 0xc1, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_size, float, 0x1c);
    NET_CLASS_VAR_S(get_speed, float, 0x20);
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x24);
END_NET_CLASS(CTEDust);
DEFINE_NET_CLASS(CTEDynamicLight, 0xc2, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_radius, float, 0x1c);
    NET_CLASS_VAR_S(get_r, int, 0x20);
    NET_CLASS_VAR_S(get_g, int, 0x24);
    NET_CLASS_VAR_S(get_b, int, 0x28);
    NET_CLASS_VAR_S(get_exponent, int, 0x2c);
    NET_CLASS_VAR_S(get_time, float, 0x30);
    NET_CLASS_VAR_S(get_decay, float, 0x34);
END_NET_CLASS(CTEDynamicLight);
DEFINE_NET_CLASS(CTEEffectDispatch, 0xc3, 0x00, netvar::class_base);
    /* TODO: m_EffectData of type 6*/
END_NET_CLASS(CTEEffectDispatch);
DEFINE_NET_CLASS(CTEEnergySplash, 0xc4, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_pos, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_dir, Vector3f, 0x1c);
    NET_CLASS_VAR_S(is_explosive, bool, 0x28);
END_NET_CLASS(CTEEnergySplash);
DEFINE_NET_CLASS(CTEExplosion, 0xc5, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    NET_CLASS_VAR_S(get_frame_rate, int32_t, 0x24);
    NET_CLASS_VAR_S(get_flags, int32_t, 0x28);
    NET_CLASS_VAR_S(get_normal, Vector3f, 0x2c);
    NET_CLASS_VAR_S(get_ch_material_type, int, 0x38);
    NET_CLASS_VAR_S(get_radius, int32_t, 0x3c);
    NET_CLASS_VAR_S(get_magnitude, int32_t, 0x40);
END_NET_CLASS(CTEExplosion);
DEFINE_NET_CLASS(CTEFireBullets, 0xc6, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, int, 0x10);
    NET_CLASS_VAR_S(get_item_def_index, int32_t, 0x14);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x18);
    /* TODO: fix name for m_vecAngles[0] of type 1*/
    /* TODO: fix name for m_vecAngles[1] of type 1*/
    NET_CLASS_VAR_S(get_weapon, int, 0x30);
    NET_CLASS_VAR_S(get_weapon_i_d, int, 0x34);
    NET_CLASS_VAR_S(get_mode, int, 0x38);
    NET_CLASS_VAR_S(get_seed, int, 0x3c);
    NET_CLASS_VAR_S(get_inaccuracy, float, 0x40);
    NET_CLASS_VAR_S(get_recoil_index, float, 0x44);
    NET_CLASS_VAR_S(get_spread, float, 0x48);
    NET_CLASS_VAR_S(get_sound_type, int, 0x4c);
END_NET_CLASS(CTEFireBullets);
DEFINE_NET_CLASS(CTEFizz, 0xc7, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_entity, int32_t, 0x10);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x14);
    NET_CLASS_VAR_S(get_density, int32_t, 0x18);
    NET_CLASS_VAR_S(get_current, int32_t, 0x1c);
END_NET_CLASS(CTEFizz);
DEFINE_NET_CLASS(CTEFootprintDecal, 0xc8, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_entity, int32_t, 0x34);
    NET_CLASS_VAR_S(get_index, int32_t, 0x38);
    NET_CLASS_VAR_S(get_ch_material_type, int, 0x3c);
END_NET_CLASS(CTEFootprintDecal);
DEFINE_NET_CLASS(CTEFoundryHelpers, 0xc9, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_entity, int, 0x10);
END_NET_CLASS(CTEFoundryHelpers);
DEFINE_NET_CLASS(CTEGaussExplosion, 0xca, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_type, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x20);
END_NET_CLASS(CTEGaussExplosion);
DEFINE_NET_CLASS(CTEGlowSprite, 0xcb, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    NET_CLASS_VAR_S(get_life, float, 0x24);
    NET_CLASS_VAR_S(get_brightness, int32_t, 0x28);
END_NET_CLASS(CTEGlowSprite);
DEFINE_NET_CLASS(CTEImpact, 0xcc, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_normal, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_type, int, 0x28);
    NET_CLASS_VAR_S(get_uc_flags, int, 0x2c);
END_NET_CLASS(CTEImpact);
DEFINE_NET_CLASS(CTEKillPlayerAttachments, 0xcd, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, int32_t, 0x10);
END_NET_CLASS(CTEKillPlayerAttachments);
DEFINE_NET_CLASS(CTELargeFunnel, 0xce, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_reversed, int32_t, 0x20);
END_NET_CLASS(CTELargeFunnel);
DEFINE_NET_CLASS(CTEMetalSparks, 0xcf, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_pos, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_dir, Vector3f, 0x1c);
END_NET_CLASS(CTEMetalSparks);
DEFINE_NET_CLASS(CTEMuzzleFlash, 0xd0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_angles, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_scale, float, 0x28);
    NET_CLASS_VAR_S(get_type, int32_t, 0x2c);
END_NET_CLASS(CTEMuzzleFlash);
DEFINE_NET_CLASS(CTEParticleSystem, 0xd1, 0x00, netvar::class_base);
    /* TODO: fix name for m_vecOrigin[0] of type 1*/
    /* TODO: fix name for m_vecOrigin[1] of type 1*/
    /* TODO: fix name for m_vecOrigin[2] of type 1*/
END_NET_CLASS(CTEParticleSystem);
DEFINE_NET_CLASS(CTEPhysicsProp, 0xd2, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    /* TODO: fix name for m_angRotation[0] of type 1*/
    /* TODO: fix name for m_angRotation[1] of type 1*/
    /* TODO: fix name for m_angRotation[2] of type 1*/
    NET_CLASS_VAR_S(get_velocity, Vector3f, 0x28);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x34);
    NET_CLASS_VAR_S(get_skin, int32_t, 0x38);
    NET_CLASS_VAR_S(get_flags, int32_t, 0x3c);
    NET_CLASS_VAR_S(get_effects, int32_t, 0x40);
    NET_CLASS_VAR_S(get_clr_render, int, 0x44);
END_NET_CLASS(CTEPhysicsProp);
DEFINE_NET_CLASS(CTEPlantBomb, 0xd3, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, int, 0x10);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x14);
    NET_CLASS_VAR_S(get_option, int, 0x20);
END_NET_CLASS(CTEPlantBomb);
DEFINE_NET_CLASS(CTEPlayerAnimEvent, 0xd4, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, EntityHandle, 0x10);
    NET_CLASS_VAR_S(get_event, int, 0x14);
    NET_CLASS_VAR_S(get_data, int32_t, 0x18);
END_NET_CLASS(CTEPlayerAnimEvent);
DEFINE_NET_CLASS(CTEPlayerDecal, 0xd5, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_player, int32_t, 0x10);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x14);
    NET_CLASS_VAR_S(get_start, Vector3f, 0x20);
    NET_CLASS_VAR_S(get_right, Vector3f, 0x2c);
    NET_CLASS_VAR_S(get_entity, int32_t, 0x38);
    NET_CLASS_VAR_S(get_hitbox, int32_t, 0x3c);
END_NET_CLASS(CTEPlayerDecal);
DEFINE_NET_CLASS(CTEProjectedDecal, 0xd6, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_ang_rotation, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_distance, float, 0x28);
    NET_CLASS_VAR_S(get_index, int32_t, 0x2c);
END_NET_CLASS(CTEProjectedDecal);
DEFINE_NET_CLASS(CTERadioIcon, 0xd7, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_attach_to_client, int, 0x10);
END_NET_CLASS(CTERadioIcon);
DEFINE_NET_CLASS(CTEShatterSurface, 0xd8, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_angles, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_force, Vector3f, 0x28);
    NET_CLASS_VAR_S(get_force_pos, Vector3f, 0x34);
    NET_CLASS_VAR_S(get_width, float, 0x40);
    NET_CLASS_VAR_S(get_height, float, 0x44);
    NET_CLASS_VAR_S(get_shard_size, float, 0x48);
    NET_CLASS_VAR_S(get_surface_type, int32_t, 0x50);
    /* TODO: fix name for m_uchFrontColor[0] of type 0*/
    /* TODO: fix name for m_uchFrontColor[1] of type 0*/
    /* TODO: fix name for m_uchFrontColor[2] of type 0*/
    /* TODO: fix name for m_uchBackColor[0] of type 0*/
    /* TODO: fix name for m_uchBackColor[1] of type 0*/
    /* TODO: fix name for m_uchBackColor[2] of type 0*/
END_NET_CLASS(CTEShatterSurface);
DEFINE_NET_CLASS(CTEShowLine, 0xd9, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_end, Vector3f, 0x1c);
END_NET_CLASS(CTEShowLine);
DEFINE_NET_CLASS(CTesla, 0xda, 0x00, netvar::class_base);
    NET_CLASS_VAR_C(get_sound_name, 0xa00, 0x40);
    NET_CLASS_VAR_C(get_isz_sprite_name, 0xa40, 0x100);
END_NET_CLASS(CTesla);
DEFINE_NET_CLASS(CTESmoke, 0xdb, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    NET_CLASS_VAR_S(get_frame_rate, int32_t, 0x24);
END_NET_CLASS(CTESmoke);
DEFINE_NET_CLASS(CTESparks, 0xdc, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_magnitude, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_trail_length, int32_t, 0x20);
    NET_CLASS_VAR_S(get_dir, Vector3f, 0x24);
END_NET_CLASS(CTESparks);
DEFINE_NET_CLASS(CTESprite, 0xdd, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x1c);
    NET_CLASS_VAR_S(get_scale, float, 0x20);
    NET_CLASS_VAR_S(get_brightness, int32_t, 0x24);
END_NET_CLASS(CTESprite);
DEFINE_NET_CLASS(CTESpriteSpray, 0xde, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_direction, Vector3f, 0x1c);
    NET_CLASS_VAR_S(get_model_index, int32_t, 0x28);
    NET_CLASS_VAR_S(get_speed, int32_t, 0x2c);
    NET_CLASS_VAR_S(get_noise, float, 0x30);
    NET_CLASS_VAR_S(get_count, int32_t, 0x34);
END_NET_CLASS(CTESpriteSpray);
DEFINE_NET_CLASS(CTest_ProxyToggle_Networkable, 0xdf, 0x00, netvar::class_base);
END_NET_CLASS(CTest_ProxyToggle_Networkable);
DEFINE_NET_CLASS(CTestTraceline, 0xe0, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_clr_render, int, 0x70);
    /* TODO: fix name for m_angRotation[0] of type 1*/
    /* TODO: fix name for m_angRotation[1] of type 1*/
    /* TODO: fix name for m_angRotation[2] of type 1*/
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    NET_CLASS_VAR_S(get_moveparent, int, 0x148);
END_NET_CLASS(CTestTraceline);
DEFINE_NET_CLASS(CTEWorldDecal, 0xe1, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_origin, Vector3f, 0x10);
    NET_CLASS_VAR_S(get_index, int32_t, 0x1c);
END_NET_CLASS(CTEWorldDecal);
DEFINE_NET_CLASS(CTriggerPlayerMovement, 0xe2, 0x00, netvar::class_base);
END_NET_CLASS(CTriggerPlayerMovement);
DEFINE_NET_CLASS(CTriggerSoundOperator, 0xe3, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_sound_operator, int32_t, 0xa10);
END_NET_CLASS(CTriggerSoundOperator);
DEFINE_NET_CLASS(CVGuiScreen, 0xe4, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_width, float, 0x9e0);
    NET_CLASS_VAR_S(get_height, float, 0x9e4);
    NET_CLASS_VAR_S(get_panel_name, int32_t, 0x9e8);
    NET_CLASS_VAR_S(get_attachment_index, int32_t, 0xa04);
    NET_CLASS_VAR_S(get_overlay_material, int32_t, 0xa08);
    NET_CLASS_VAR_S(get_f_screen_flags, int, 0xa0c);
    NET_CLASS_VAR_S(get_player_owner, EntityHandle, 0xa68);
END_NET_CLASS(CVGuiScreen);
DEFINE_NET_CLASS(CVoteController, 0xe5, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_active_issue_index, int, 0x9e4);
    NET_CLASS_VAR_S(get_only_team_to_vote, int, 0x9e8);
    /* TODO: m_nVoteOptionCount of type 6*/
    NET_CLASS_VAR_S(get_potential_votes, int32_t, 0xa04);
    NET_CLASS_VAR_S(is_yes_no_vote, bool, 0xa0a);
END_NET_CLASS(CVoteController);
DEFINE_NET_CLASS(CWaterBullet, 0xe6, 0x00, netvar::class_base);
END_NET_CLASS(CWaterBullet);
DEFINE_NET_CLASS(CWaterLODControl, 0xe7, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_cheap_water_start_distance, float, 0x9d8);
    NET_CLASS_VAR_S(get_cheap_water_end_distance, float, 0x9dc);
END_NET_CLASS(CWaterLODControl);
DEFINE_NET_CLASS(CWeaponAug, 0xe8, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponAug);
DEFINE_NET_CLASS(CWeaponAWP, 0xe9, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponAWP);
DEFINE_NET_CLASS(CWeaponBaseItem, 0xea, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_redraw, bool, 0x33ec);
END_NET_CLASS(CWeaponBaseItem);
DEFINE_NET_CLASS(CWeaponBizon, 0xeb, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponBizon);
DEFINE_NET_CLASS(CWeaponCSBase, 0xec, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_weapon_mode, int, 0x3328);
    NET_CLASS_VAR_S(get_accuracy_penalty, float, 0x3340);
    NET_CLASS_VAR_S(get_recoil_index_i, int, 0x3350);
    NET_CLASS_VAR_S(get_recoil_index_f, float, 0x3354);
    NET_CLASS_VAR_S(is_burst_mode, bool, 0x3358);
    NET_CLASS_VAR_S(get_postpone_fire_ready_time, float, 0x335c);
    NET_CLASS_VAR_S(is_reload_visually_complete, bool, 0x3360);
    NET_CLASS_VAR_S(is_silencer_on, bool, 0x3361);
    NET_CLASS_VAR_S(get_done_switching_silencer, float, 0x3364);
    NET_CLASS_VAR_S(get_original_team_number, int, 0x336c);
    NET_CLASS_VAR_S(get_prev_owner, EntityHandle, 0x3394);
    NET_CLASS_VAR_S(get_last_shot_time, float, 0x33b8);
    NET_CLASS_VAR_S(get_iron_sight_mode, int, 0x33d4);
END_NET_CLASS(CWeaponCSBase);
DEFINE_NET_CLASS(CWeaponCSBaseGun, 0xed, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_zoom_level, int, 0x33e0);
    NET_CLASS_VAR_S(get_burst_shots_remaining, int, 0x33e4);
END_NET_CLASS(CWeaponCSBaseGun);
DEFINE_NET_CLASS(CWeaponCycler, 0xee, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponCycler);
DEFINE_NET_CLASS(CWeaponElite, 0xef, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponElite);
DEFINE_NET_CLASS(CWeaponFamas, 0xf0, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponFamas);
DEFINE_NET_CLASS(CWeaponFiveSeven, 0xf1, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponFiveSeven);
DEFINE_NET_CLASS(CWeaponG3SG1, 0xf2, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponG3SG1);
DEFINE_NET_CLASS(CWeaponGalil, 0xf3, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponGalil);
DEFINE_NET_CLASS(CWeaponGalilAR, 0xf4, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponGalilAR);
DEFINE_NET_CLASS(CWeaponGlock, 0xf5, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponGlock);
DEFINE_NET_CLASS(CWeaponHKP2000, 0xf6, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponHKP2000);
DEFINE_NET_CLASS(CWeaponM249, 0xf7, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponM249);
DEFINE_NET_CLASS(CWeaponM3, 0xf8, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponM3);
DEFINE_NET_CLASS(CWeaponM4A1, 0xf9, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponM4A1);
DEFINE_NET_CLASS(CWeaponMAC10, 0xfa, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponMAC10);
DEFINE_NET_CLASS(CWeaponMag7, 0xfb, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponMag7);
DEFINE_NET_CLASS(CWeaponMP5Navy, 0xfc, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponMP5Navy);
DEFINE_NET_CLASS(CWeaponMP7, 0xfd, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponMP7);
DEFINE_NET_CLASS(CWeaponMP9, 0xfe, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponMP9);
DEFINE_NET_CLASS(CWeaponNegev, 0xff, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponNegev);
DEFINE_NET_CLASS(CWeaponNOVA, 0x100, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponNOVA);
DEFINE_NET_CLASS(CWeaponP228, 0x101, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponP228);
DEFINE_NET_CLASS(CWeaponP250, 0x102, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponP250);
DEFINE_NET_CLASS(CWeaponP90, 0x103, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponP90);
DEFINE_NET_CLASS(CWeaponSawedoff, 0x104, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponSawedoff);
DEFINE_NET_CLASS(CWeaponSCAR20, 0x105, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponSCAR20);
DEFINE_NET_CLASS(CWeaponScout, 0x106, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponScout);
DEFINE_NET_CLASS(CWeaponSG550, 0x107, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponSG550);
DEFINE_NET_CLASS(CWeaponSG552, 0x108, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponSG552);
DEFINE_NET_CLASS(CWeaponSG556, 0x109, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponSG556);
DEFINE_NET_CLASS(CWeaponShield, 0x10a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_display_health, float, 0x3400);
END_NET_CLASS(CWeaponShield);
DEFINE_NET_CLASS(CWeaponSSG08, 0x10b, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponSSG08);
DEFINE_NET_CLASS(CWeaponTaser, 0x10c, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_fire_time, float, 0x3400);
END_NET_CLASS(CWeaponTaser);
DEFINE_NET_CLASS(CWeaponTec9, 0x10d, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponTec9);
DEFINE_NET_CLASS(CWeaponTMP, 0x10e, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponTMP);
DEFINE_NET_CLASS(CWeaponUMP45, 0x10f, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponUMP45);
DEFINE_NET_CLASS(CWeaponUSP, 0x110, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponUSP);
DEFINE_NET_CLASS(CWeaponXM1014, 0x111, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_reload_state, int, 0x33e4);
END_NET_CLASS(CWeaponXM1014);
DEFINE_NET_CLASS(CWeaponZoneRepulsor, 0x112, 0x00, netvar::class_base);
END_NET_CLASS(CWeaponZoneRepulsor);
DEFINE_NET_CLASS(CWorld, 0x113, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_wave_height, float, 0x9d8);
    NET_CLASS_VAR_S(get_world_mins, Vector3f, 0x9dc);
    NET_CLASS_VAR_S(get_world_maxs, Vector3f, 0x9e8);
    NET_CLASS_VAR_S(is_start_dark, bool, 0x9f4);
    NET_CLASS_VAR_S(get_max_occludee_area, float, 0x9f8);
    NET_CLASS_VAR_S(get_min_occluder_area, float, 0x9fc);
    NET_CLASS_VAR_S(get_min_prop_screen_space_width, float, 0xa00);
    NET_CLASS_VAR_S(get_max_prop_screen_space_width, float, 0xa04);
    NET_CLASS_VAR_S(is_cold_world, bool, 0xa08);
    NET_CLASS_VAR_S(get_time_of_day, int, 0xa0c);
    NET_CLASS_VAR_C(get_isz_detail_sprite_material, 0xa10, 0x100);
END_NET_CLASS(CWorld);
DEFINE_NET_CLASS(CWorldVguiText, 0x114, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(is_enabled, bool, 0x9d8);
    NET_CLASS_VAR_C(get_display_text, 0x9d9, 0x200);
    NET_CLASS_VAR_C(get_display_text_option, 0xbd9, 0x100);
    NET_CLASS_VAR_C(get_font, 0xcd9, 0x40);
    NET_CLASS_VAR_S(get_clr_text, int, 0xd19);
    NET_CLASS_VAR_S(get_text_panel_width, int, 0xd20);
END_NET_CLASS(CWorldVguiText);
DEFINE_NET_CLASS(DustTrail, 0x115, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    NET_CLASS_VAR_S(get_color, Vector3f, 0xac8);
    NET_CLASS_VAR_S(get_opacity, float, 0xad4);
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xad8);
    NET_CLASS_VAR_S(get_stop_emit_time, float, 0xae0);
    NET_CLASS_VAR_S(get_min_speed, float, 0xae4);
    NET_CLASS_VAR_S(get_max_speed, float, 0xae8);
    NET_CLASS_VAR_S(get_min_directed_speed, float, 0xaec);
    NET_CLASS_VAR_S(get_max_directed_speed, float, 0xaf0);
    NET_CLASS_VAR_S(get_start_size, float, 0xaf4);
    NET_CLASS_VAR_S(get_end_size, float, 0xaf8);
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xafc);
    NET_CLASS_VAR_S(is_emit, bool, 0xb0c);
END_NET_CLASS(DustTrail);
DEFINE_NET_CLASS(MovieExplosion, 0x116, 0x00, netvar::class_base);
END_NET_CLASS(MovieExplosion);
DEFINE_NET_CLASS(ParticleSmokeGrenade, 0x117, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_current_stage, int, 0xac4);
    NET_CLASS_VAR_S(get_spawn_time, float, 0xad4);
    NET_CLASS_VAR_S(get_fade_start_time, float, 0xad8);
    NET_CLASS_VAR_S(get_fade_end_time, float, 0xadc);
    NET_CLASS_VAR_S(get_min_color, Vector3f, 0xae4);
    NET_CLASS_VAR_S(get_max_color, Vector3f, 0xaf0);
END_NET_CLASS(ParticleSmokeGrenade);
DEFINE_NET_CLASS(RocketTrail, 0x118, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    NET_CLASS_VAR_S(get_start_color, Vector3f, 0xac8);
    NET_CLASS_VAR_S(get_end_color, Vector3f, 0xad4);
    NET_CLASS_VAR_S(get_opacity, float, 0xae0);
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xae4);
    NET_CLASS_VAR_S(get_stop_emit_time, float, 0xae8);
    NET_CLASS_VAR_S(get_min_speed, float, 0xaec);
    NET_CLASS_VAR_S(get_max_speed, float, 0xaf0);
    NET_CLASS_VAR_S(get_start_size, float, 0xaf4);
    NET_CLASS_VAR_S(get_end_size, float, 0xaf8);
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xafc);
    NET_CLASS_VAR_S(is_emit, bool, 0xb0c);
    NET_CLASS_VAR_S(is_damaged, bool, 0xb0d);
    NET_CLASS_VAR_S(get_attachment, int32_t, 0xb10);
    NET_CLASS_VAR_S(get_flare_scale, float, 0xb20);
END_NET_CLASS(RocketTrail);
DEFINE_NET_CLASS(SmokeTrail, 0x119, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    NET_CLASS_VAR_S(get_start_color, Vector3f, 0xac8);
    NET_CLASS_VAR_S(get_end_color, Vector3f, 0xad4);
    NET_CLASS_VAR_S(get_opacity, float, 0xae0);
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xae4);
    NET_CLASS_VAR_S(get_stop_emit_time, float, 0xae8);
    NET_CLASS_VAR_S(get_min_speed, float, 0xaec);
    NET_CLASS_VAR_S(get_max_speed, float, 0xaf0);
    NET_CLASS_VAR_S(get_min_directed_speed, float, 0xaf4);
    NET_CLASS_VAR_S(get_max_directed_speed, float, 0xaf8);
    NET_CLASS_VAR_S(get_start_size, float, 0xafc);
    NET_CLASS_VAR_S(get_end_size, float, 0xb00);
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xb04);
    NET_CLASS_VAR_S(is_emit, bool, 0xb14);
    NET_CLASS_VAR_S(get_attachment, int32_t, 0xb18);
END_NET_CLASS(SmokeTrail);
DEFINE_NET_CLASS(SporeExplosion, 0x11a, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xac4);
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xac8);
    NET_CLASS_VAR_S(get_start_size, float, 0xacc);
    NET_CLASS_VAR_S(get_end_size, float, 0xad0);
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xad4);
    NET_CLASS_VAR_S(is_emit, bool, 0xadc);
    NET_CLASS_VAR_S(is_dont_remove, bool, 0xadd);
END_NET_CLASS(SporeExplosion);
DEFINE_NET_CLASS(SporeTrail, 0x11b, 0x00, netvar::class_base);
    NET_CLASS_VAR_S(get_end_color, Vector3f, 0xac0);
    NET_CLASS_VAR_S(get_spawn_rate, float, 0xacc);
    NET_CLASS_VAR_S(get_particle_lifetime, float, 0xad0);
    NET_CLASS_VAR_S(get_start_size, float, 0xad4);
    NET_CLASS_VAR_S(get_end_size, float, 0xad8);
    NET_CLASS_VAR_S(get_spawn_radius, float, 0xadc);
    NET_CLASS_VAR_S(is_emit, bool, 0xaec);
END_NET_CLASS(SporeTrail);
DEFINE_NET_CLASS(CBaseAnimating, 0x2, 0x00, CBaseEntity);
    NET_CLASS_VAR_S(is_client_side_ragdoll, bool, 0x279);
    NET_CLASS_VAR_S(get_hitbox_set, int32_t, 0x9fc);
    NET_CLASS_VAR_S(get_playback_rate, float, 0xa18);
    NET_CLASS_VAR_S(get_skin, int32_t, 0xa1c);
    NET_CLASS_VAR_S(get_body, int32_t, 0xa20);
    NET_CLASS_VAR_S(get_highlight_color_r, int32_t, 0xa38);
    NET_CLASS_VAR_S(get_highlight_color_g, int32_t, 0xa3c);
    NET_CLASS_VAR_S(get_highlight_color_b, int32_t, 0xa40);
    NET_CLASS_VAR_S(get_new_sequence_parity, int32_t, 0xa44);
    NET_CLASS_VAR_S(get_reset_events_parity, int32_t, 0xa48);
    /* TODO: m_flEncodedController of type 6*/
    NET_CLASS_VAR_S(get_muzzle_flash_parity, int32_t, 0xa64);
    NET_CLASS_VAR_S(get_force, Vector3f, 0x2680);
    NET_CLASS_VAR_S(get_force_bone, int32_t, 0x268c);
    NET_CLASS_VAR_S(is_client_side_frame_reset, bool, 0x26c4);
    NET_CLASS_VAR_S(get_frozen, float, 0x26fc);
    NET_CLASS_VAR_S(get_model_scale, float, 0x274c);
    NET_CLASS_VAR_S(get_scale_type, int, 0x2750);
    /* TODO: m_flPoseParameter of type 6*/
    NET_CLASS_VAR_S(is_client_side_animation, bool, 0x28a0);
    NET_CLASS_VAR_S(get_sequence, int32_t, 0x28c0);
    NET_CLASS_VAR_S(get_lighting_origin, EntityHandle, 0x2948);
    NET_CLASS_VAR_S(is_suppress_anim_sounds, bool, 0x294e);
END_NET_CLASS(CBaseAnimating);
DEFINE_NET_CLASS(CBaseAnimatingOverlay, 0x3, 0x00, CBaseAnimating);
END_NET_CLASS(CBaseAnimatingOverlay);
DEFINE_NET_CLASS(CBaseFlex, 0xc, 0x00, CBaseAnimatingOverlay);
    NET_CLASS_VAR_S(get_viewtarget, Vector3f, 0x2a00);
    /* TODO: m_flexWeight of type 6*/
    NET_CLASS_VAR_S(is_linktoggle, bool, 0x2be4);
END_NET_CLASS(CBaseFlex);
DEFINE_NET_CLASS(CBaseCombatCharacter, 0x6, 0x00, CBaseFlex);
    NET_CLASS_VAR_S(get_last_hit_group, int, 0x2d84);
    /* TODO: m_hMyWeapons of type 6*/
    NET_CLASS_VAR_S(get_active_weapon, EntityHandle, 0x2f08);
    NET_CLASS_VAR_S(get_time_of_last_injury, float, 0x2f0c);
    NET_CLASS_VAR_S(get_relative_direction_of_last_injury, int32_t, 0x2f10);
    /* TODO: m_hMyWearables of type 6*/
END_NET_CLASS(CBaseCombatCharacter);
DEFINE_NET_CLASS(CBasePlayer, 0xf, 0x00, CBaseCombatCharacter);
    NET_CLASS_VAR_S(get_health, int, 0x100);
    NET_CLASS_VAR_S(get_f_flags, int, 0x104);
    NET_CLASS_VAR_S(get_ground_entity, EntityHandle, 0x150);
    NET_CLASS_VAR_S(get_water_level, int32_t, 0x25e);
    NET_CLASS_VAR_S(get_life_state, int, 0x25f);
    /* TODO: m_iAmmo of type 6*/
    NET_CLASS_VAR_S(get_coaching_team, int, 0x2f60);
    NET_CLASS_VAR_S(get_duck_amount, float, 0x2fbc);
    NET_CLASS_VAR_S(get_duck_speed, float, 0x2fc0);
    /* TODO: pl of type 6*/
    NET_CLASS_VAR_S(get_fo_v, int, 0x31f4);
    NET_CLASS_VAR_S(get_fov_start, int, 0x31f8);
    NET_CLASS_VAR_S(get_ladder_surface_props, int, 0x3210);
    NET_CLASS_VAR_S(get_fov_time, float, 0x3218);
    NET_CLASS_VAR_S(get_ladder_normal, Vector3f, 0x3240);
    NET_CLASS_VAR_S(get_bonus_progress, int, 0x3250);
    NET_CLASS_VAR_S(get_bonus_challenge, int, 0x3254);
    NET_CLASS_VAR_S(get_maxspeed, float, 0x3258);
    NET_CLASS_VAR_S(get_zoom_owner, EntityHandle, 0x325c);
    NET_CLASS_VAR_S(get_vphysics_collision_state, int, 0x326c);
    NET_CLASS_VAR_S(get_af_physics_flags, int, 0x32fc);
    NET_CLASS_VAR_S(get_vehicle, EntityHandle, 0x3300);
    /* TODO: fix name for m_hViewModel[0] of type 0*/
    NET_CLASS_VAR_S(get_use_entity, EntityHandle, 0x3338);
    NET_CLASS_VAR_S(get_default_fo_v, int, 0x333c);
    NET_CLASS_VAR_S(get_view_entity, EntityHandle, 0x334c);
    NET_CLASS_VAR_S(is_should_draw_player_while_using_view_entity, bool, 0x3350);
    NET_CLASS_VAR_S(get_death_post_effect, int, 0x3384);
    NET_CLASS_VAR_S(get_observer_mode, int, 0x3388);
    NET_CLASS_VAR_S(is_active_camera_man, bool, 0x338c);
    NET_CLASS_VAR_S(is_camera_man_x_ray, bool, 0x338d);
    NET_CLASS_VAR_S(is_camera_man_overview, bool, 0x338e);
    NET_CLASS_VAR_S(is_camera_man_score_board, bool, 0x338f);
    NET_CLASS_VAR_S(get_u_camera_man_graphs, int, 0x3390);
    NET_CLASS_VAR_S(get_observer_target, EntityHandle, 0x339c);
    NET_CLASS_VAR_C(get_last_place_name, 0x35c4, 0x12);
    NET_CLASS_VAR_S(get_ub_ef_no_interp_parity, int, 0x35e8);
    NET_CLASS_VAR_S(get_post_process_ctrl, EntityHandle, 0x37b8);
    NET_CLASS_VAR_S(get_color_correction_ctrl, EntityHandle, 0x37bc);
    /* TODO: fix name for m_PlayerFog.m_hCtrl of type 0*/
END_NET_CLASS(CBasePlayer);
DEFINE_NET_CLASS(CCSPlayer, 0x28, 0x00, CBasePlayer);
    NET_CLASS_VAR_S(is_scoped, bool, 0x9974);
    NET_CLASS_VAR_S(is_walking, bool, 0x9975);
    NET_CLASS_VAR_S(is_resume_zoom, bool, 0x9976);
    NET_CLASS_VAR_S(get_player_state, int, 0x9978);
    NET_CLASS_VAR_S(is_defusing, bool, 0x997c);
    NET_CLASS_VAR_S(is_grabbing_hostage, bool, 0x997d);
    NET_CLASS_VAR_S(get_blocking_use_action_in_progress, int, 0x9980);
    NET_CLASS_VAR_S(is_rescuing, bool, 0x9984);
    NET_CLASS_VAR_S(get_immune_to_gun_game_damage_time, float, 0x9988);
    NET_CLASS_VAR_S(is_gun_game_immunity, bool, 0x9990);
    NET_CLASS_VAR_S(has_moved_since_spawn, bool, 0x9991);
    NET_CLASS_VAR_S(is_made_final_gun_game_progressive_kill, bool, 0x9992);
    NET_CLASS_VAR_S(get_gun_game_progressive_weapon_index, int, 0x9994);
    NET_CLASS_VAR_S(get_num_gun_game_tr_kill_points, int, 0x9998);
    NET_CLASS_VAR_S(get_num_gun_game_kills_with_current_weapon, int, 0x999c);
    NET_CLASS_VAR_S(get_num_round_kills, int, 0x99a0);
    NET_CLASS_VAR_S(get_num_round_kills_headshots, int, 0x99a4);
    NET_CLASS_VAR_S(get_total_round_damage_dealt, uint32_t, 0x99a8);
    NET_CLASS_VAR_S(get_molotov_use_time, float, 0x99ac);
    NET_CLASS_VAR_S(get_molotov_damage_time, float, 0x99b0);
    NET_CLASS_VAR_S(is_in_bomb_zone, bool, 0x99b4);
    NET_CLASS_VAR_S(is_in_buy_zone, bool, 0x99b5);
    NET_CLASS_VAR_S(is_in_no_defuse_area, bool, 0x99b6);
    NET_CLASS_VAR_S(get_throw_grenade_counter, int, 0x99b8);
    NET_CLASS_VAR_S(is_wait_for_no_attack, bool, 0x99bc);
    NET_CLASS_VAR_S(is_respawning_for_dm_bonus, bool, 0x99bd);
    NET_CLASS_VAR_S(get_guardian_too_far_dist_frac, float, 0x99c0);
    NET_CLASS_VAR_S(get_detected_by_enemy_sensor_time, float, 0x99c4);
    NET_CLASS_VAR_S(is_killed_by_taser, bool, 0x99cd);
    NET_CLASS_VAR_S(get_move_state, int, 0x99d0);
    NET_CLASS_VAR_S(is_can_move_during_freeze_period, bool, 0x99d4);
    NET_CLASS_VAR_S(get_s_current_gun_game_leader, int, 0x99d5);
    NET_CLASS_VAR_S(get_s_current_gun_game_team_leader, int, 0x99d6);
    NET_CLASS_VAR_C(get_arms_model, 0x99d7, 0x100);
    NET_CLASS_VAR_S(get_lower_body_yaw_target, float, 0x9adc);
    NET_CLASS_VAR_S(is_strafing, bool, 0x9ae0);
    NET_CLASS_VAR_S(is_player_ghost, bool, 0x9ae1);
    NET_CLASS_VAR_S(get_is_auto_mounting, int32_t, 0x9ae4);
    NET_CLASS_VAR_S(get_automove_target_end, Vector3f, 0x9af4);
    NET_CLASS_VAR_S(get_auto_move_start_time, float, 0x9b04);
    NET_CLASS_VAR_S(get_auto_move_target_time, float, 0x9b08);
    NET_CLASS_VAR_S(get_last_exo_jump_time, float, 0x9b0c);
    NET_CLASS_VAR_S(get_addon_bits, int, 0x103c4);
    NET_CLASS_VAR_S(get_primary_addon, int, 0x103c8);
    NET_CLASS_VAR_S(get_secondary_addon, int, 0x103cc);
    NET_CLASS_VAR_S(get_progress_bar_duration, int, 0x103d0);
    NET_CLASS_VAR_S(get_progress_bar_start_time, float, 0x103d4);
    NET_CLASS_VAR_S(is_night_vision_on, bool, 0x103e9);
    NET_CLASS_VAR_S(has_night_vision, bool, 0x103ea);
    NET_CLASS_VAR_S(get_ground_accel_linear_frac_last_time, float, 0x103f0);
    NET_CLASS_VAR_S(get_start_account, int, 0x103f4);
    NET_CLASS_VAR_S(get_total_hits_on_server, int, 0x103f8);
    NET_CLASS_VAR_S(is_spawn_rappelling, bool, 0x103fd);
    NET_CLASS_VAR_S(get_spawn_rappelling_rope_origin, Vector3f, 0x10400);
    NET_CLASS_VAR_S(get_survival_team, int32_t, 0x10410);
    NET_CLASS_VAR_S(get_survival_assassination_target, EntityHandle, 0x10414);
    NET_CLASS_VAR_S(get_health_shot_boost_expiration_time, float, 0x10418);
    NET_CLASS_VAR_S(get_ragdoll, EntityHandle, 0x1043c);
    NET_CLASS_VAR_S(get_player_ping, EntityHandle, 0x10440);
    NET_CLASS_VAR_S(get_carried_hostage, EntityHandle, 0x10448);
    NET_CLASS_VAR_S(get_carried_hostage_prop, EntityHandle, 0x1044c);
    NET_CLASS_VAR_S(get_flash_max_alpha, float, 0x1046c);
    NET_CLASS_VAR_S(get_flash_duration, float, 0x10470);
    /* TODO: m_iMatchStats_Kills of type 6*/
    /* TODO: m_iMatchStats_Damage of type 6*/
    /* TODO: m_iMatchStats_EquipmentValue of type 6*/
    /* TODO: m_iMatchStats_MoneySaved of type 6*/
    /* TODO: m_iMatchStats_KillReward of type 6*/
    /* TODO: m_iMatchStats_LiveTime of type 6*/
    /* TODO: m_iMatchStats_Deaths of type 6*/
    /* TODO: m_iMatchStats_Assists of type 6*/
    /* TODO: m_iMatchStats_HeadShotKills of type 6*/
    /* TODO: m_iMatchStats_Objective of type 6*/
    /* TODO: m_iMatchStats_CashEarned of type 6*/
    /* TODO: m_iMatchStats_UtilityDamage of type 6*/
    /* TODO: m_iMatchStats_EnemiesFlashed of type 6*/
    NET_CLASS_VAR_S(get_current_equipment_value, uint32_t, 0x11784);
    NET_CLASS_VAR_S(get_round_start_equipment_value, uint32_t, 0x11786);
    NET_CLASS_VAR_S(get_freezetime_end_equipment_value, uint32_t, 0x11788);
    /* TODO: m_rank of type 6*/
    NET_CLASS_VAR_S(has_parachute, bool, 0x117a4);
    /* TODO: m_passiveItems of type 6*/
    NET_CLASS_VAR_S(get_music_i_d, uint32_t, 0x117a8);
    NET_CLASS_VAR_S(get_account, int, 0x117b8);
    NET_CLASS_VAR_S(has_helmet, bool, 0x117c0);
    NET_CLASS_VAR_S(has_heavy_armor, bool, 0x117c1);
    NET_CLASS_VAR_S(get_heavy_assault_suit_cooldown_remaining, int32_t, 0x117c4);
    NET_CLASS_VAR_S(get_class, int, 0x117c8);
    NET_CLASS_VAR_S(get_armor_value, int, 0x117cc);
    /* TODO: fix name for m_angEyeAngles[0] of type 1*/
    NET_CLASS_VAR_S(get_ang_eye_angles, Vector3f, 0x117d0);
    /* TODO: fix name for m_angEyeAngles[1] of type 1*/
    NET_CLASS_VAR_S(has_defuser, bool, 0x117dc);
    NET_CLASS_VAR_S(is_in_hostage_rescue_zone, bool, 0x117dd);
    NET_CLASS_VAR_S(is_hud_mini_score_hidden, bool, 0x117fe);
    NET_CLASS_VAR_S(is_hud_radar_hidden, bool, 0x117ff);
    NET_CLASS_VAR_S(get_last_killer_index, int32_t, 0x11800);
    NET_CLASS_VAR_S(get_last_concurrent_killed, int32_t, 0x11804);
    NET_CLASS_VAR_S(get_death_cam_music, int32_t, 0x11808);
    NET_CLASS_VAR_S(get_cycle_latch, int, 0x118e0);
    NET_CLASS_VAR_S(is_looking_at_weapon, bool, 0x11974);
    NET_CLASS_VAR_S(is_holding_look_at_weapon, bool, 0x11975);
    /* TODO: m_vecPlayerPatchEconIndices of type 6*/
    NET_CLASS_VAR_S(get_thirdperson_recoil, float, 0x119ec);
    NET_CLASS_VAR_S(is_hide_target_i_d, bool, 0x119f0);
    NET_CLASS_VAR_S(is_assassination_target, bool, 0x11a4c);
    NET_CLASS_VAR_S(is_controlling_bot, bool, 0x11a4d);
    NET_CLASS_VAR_S(is_can_control_observed_bot, bool, 0x11a4e);
    NET_CLASS_VAR_S(get_controlled_bot_ent_index, int, 0x11a50);
    NET_CLASS_VAR_S(has_controlled_bot_this_round, bool, 0x11a5c);
END_NET_CLASS(CCSPlayer);
