#pragma once

enum eMpMission
{
	AM_HOLD_UP = 1,
	AM_CR_SELL_DRUGS = AM_HOLD_UP + 2, // 3
	AM_STRIPPER,
	stripclub_mp,
	AM_ArmWrestling,
	AM_ImportExport,
	AM_Tennis,
	AM_Darts,
	AM_FistFight,
	AM_DropOffHooker,
	AM_Safehouse,
	AM_Hitchhiker,

	AM_DOORS = AM_Hitchhiker + 2, // 15
	MG_RACE_TO_POINT,
	AM_PI_MENU,
	AM_CRATE_DROP,
	AM_IMP_EXP,
	FM_INTRO,
	AM_PROSTITUTE,
	AM_TAXI,
	AM_TAXI_LAUNCHER,
	AM_GANG_CALL,
	heli_gun,
	AM_backup_heli,
	AM_airstrike,
	AM_AMMO_DROP,
	AM_VEHICLE_DROP,
	AM_BRU_BOX,
	AM_GA_PICKUPS,

	AM_JOYRIDER = 32,
	AM_PLANE_TAKEDOWN,
	AM_DISTRACT_COPS,
	AM_DESTROY_VEH,
	AM_HOT_TARGET,
	AM_KILL_LIST,
	AM_TIME_TRIAL,
	AM_CP_COLLECTION,
	AM_CHALLENGES,
	AM_PENNED_IN,
	AM_PASS_THE_PARCEL,
	AM_HOT_PROPERTY,
	AM_DEAD_DROP,
	AM_KING_OF_THE_CASTLE,
	AM_CRIMINAL_DAMAGE,
	AM_HUNT_THE_BEAST,
	GB_LIMO_ATTACK,
	GB_DEATHMATCH,
	GB_STEAL_VEH,
	GB_POINT_TO_POINT,
	GB_TERMINATE,
	GB_YACHT_ROB,
	GB_BELLYBEAST,
	GB_FIVESTAR,
	GB_ROB_SHOP,
	GB_COLLECT_MONEY,
	GB_ASSAULT,
	GB_VEH_SURV,
	GB_SIGHTSEER,
	GB_FLYING_IN_STYLE,
	GB_FINDERSKEEPERS,
	GB_HUNT_THE_BOSS,
	GB_CARJACKING,
	GB_HEADHUNTER,
	GB_CONTRABAND_BUY,
	GB_CONTRABAND_SELL,
	GB_CONTRABAND_DEFEND,
	GB_AIRFREIGHT,
	GB_CASHING_OUT,
	GB_SALVAGE,
	GB_FRAGILE_GOODS,
	GB_VEHICLE_EXPORT, // 73 & 74
	GB_PLOUGHED = GB_VEHICLE_EXPORT + 2, // 75
	GB_FULLY_LOADED,
	GB_AMPHIBIOUS_ASSAULT,
	GB_TRANSPORTER,
	GB_FORTIFIED,
	GB_VELOCITY,
	GB_RAMPED_UP,
	GB_STOCKPILING,
	GB_BIKER_RACE_P2P,
	GB_BIKER_JOUST,
	GB_BIKER_UNLOAD_WEAPONS,
	GB_BIKER_BAD_DEAL = GB_BIKER_UNLOAD_WEAPONS + 2, // 87
	GB_BIKER_RESCUE_CONTACT,
	GB_BIKER_LAST_RESPECTS,
	GB_BIKER_CONTRACT_KILLING,
	GB_BIKER_CONTRABAND_SELL,
	GB_BIKER_CONTRABAND_DEFEND,
	GB_ILLICIT_GOODS_RESUPPLY,
	GB_BIKER_DRIVEBY_ASSASSIN,
	GB_BIKER_RIPPIN_IT_UP,
	GB_BIKER_FREE_PRISONER,
	GB_BIKER_SAFECRACKER,
	GB_BIKER_STEAL_BIKES,
	GB_BIKER_SEARCH_AND_DESTROY,
	GB_BIKER_STAND_YOUR_GROUND = GB_BIKER_SEARCH_AND_DESTROY + 2, // 101
	GB_BIKER_CRIMINAL_MISCHIEF,
	GB_BIKER_DESTROY_VANS,
	GB_BIKER_BURN_ASSETS,
	GB_BIKER_SHUTTLE,
	GB_BIKER_WHEELIE_RIDER,
	GB_GUNRUNNING,
	GB_GUNRUNNING_2,
	GB_GUNRUNNING_DEFEND,

	GB_SMUGGLER = GB_GUNRUNNING_DEFEND + 3, // 112
	GB_GANGOPS,
	BUSINESS_BATTLES,
	BUSINESS_BATTLES_SELL,
	BUSINESS_BATTLES_DEFEND,
	GB_SECURITY_VAN,
	GB_TARGET_PURSUIT,
	GB_JEWEL_STORE_GRAB,
	GB_BANK_JOB,
	GB_DATA_HACK,
	GB_INFILTRATION,
	BUSINESS_BATTLES_DEFEND_2,
	BUSINESS_BATTLES_SELL_2,
	GB_CASINO,
	GB_CASINO_HEIST,
	fm_content_business_battles,
	fm_content_drug_vehicle,
	fm_content_movie_props,
	fm_content_island_heist,
	fm_content_island_dj,
	AM_ISLAND_BACKUP_HELI,
	fm_content_golden_gun,
	fm_content_tuner_robbery,
	fm_content_vehicle_list,
	tuner_sandbox_activity,
	fm_content_auto_shop_delivery,
	fm_content_payphone_hit,
	fm_content_security_contract,
	fm_content_vip_contract_1,
	fm_content_metal_detector,
	am_agency_suv,
	fm_content_phantom_car,
	fm_content_slasher,
	fm_content_sightseeing,
	fm_content_smuggler_trail,
	fm_content_smuggler_plane,
	fm_content_skydive,
	fm_content_cerberus,
	fm_content_parachuter,
	fm_content_crime_scene,
	fm_content_bar_resupply,
	fm_content_bike_shop_delivery,
	fm_content_clubhouse_contracts,
	fm_content_cargo,
	fm_content_export_cargo,
	fm_content_ammunation,
	fm_content_gunrunning,
	fm_content_source_research,
	fm_content_club_management,
	fm_content_club_odd_jobs,
	fm_content_club_source,
	fm_content_convoy,
	fm_content_robbery,
	fm_content_acid_lab_setup,
	fm_content_acid_lab_source,
	fm_content_acid_lab_sell,
	fm_content_drug_lab_work,
	fm_content_stash_house,
	fm_content_taxi_driver,
	fm_content_xmas_mugger,
	fm_content_bank_shootout,
	fm_content_armoured_truck,
	fm_content_ghosthunt,
	fm_content_ufo_abduction,
	fm_content_smuggler_sell,
	fm_content_smuggler_resupply,
	fm_content_smuggler_ops,
	fm_content_bicycle_time_trial,
	fm_content_possessed_animals,
	fm_content_chop_shop_delivery,
	fm_content_xmas_truck,
	fm_content_tow_truck_work,
	fm_content_vehrob_scoping,
	fm_content_vehrob_task,
	fm_content_vehrob_prep,
	fm_content_vehrob_disrupt,
	fm_content_vehrob_cargo_ship,
	fm_content_vehrob_police,
	fm_content_vehrob_arena,
	fm_content_vehrob_casino_prize,
	fm_content_vehrob_submarine,
	fm_content_bounty_targets,
	fm_content_daily_bounty,
	fm_content_dispatch_work,
	fm_content_pizza_delivery,

	AM_BOAT_TAXI,
	AM_HELI_TAXI,
	fm_hold_up_tut,
	AM_CAR_MOD_TUT,
	AM_CONTACT_REQUESTS,
	am_mission_launch,
	am_npc_invites,
	am_lester_cut,
	am_heist_int,
	am_lowrider_int,

	AM_VEHICLE_SPAWN,
	am_ronTrevor_Cut,
	AM_ARMYBASE,
	AM_PRISON,
	am_rollercoaster,
	am_ferriswheel,
	AM_LAUNCHER,
	AM_DAILY_OBJECTIVES,

	golf_mp = AM_DAILY_OBJECTIVES + 3, // 193
	Range_Modern_MP,
	tennis_network_mp,
	Pilot_School_MP,
	FM_Impromptu_DM_Controler,
	fm_Bj_race_controler,
	fm_deathmatch_controler,
	fm_hideout_controler,
	fm_mission_controller,
	FM_Race_Controler,
	FM_Survival_Controller,

	dont_cross_the_line,
	am_darts_apartment,
	AM_Armwrestling_Apartment,
	grid_arcade_cabinet,
	scroll_arcade_cabinet,
	example_arcade,
	road_arcade,
	gunslinger_arcade,
	wizard_arcade,
	AM_CASINO_LIMO,
	AM_CASINO_LUXURY_CAR,
	Degenatron_Games,
	ggsm_arcade,
	puzzle,
	camhedz_arcade,

	SCTV,

	NUM_SCRIPT_IDS
};
