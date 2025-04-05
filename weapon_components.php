<?php
$weapons = json_decode(file_get_contents("https://raw.githubusercontent.com/DurtyFree/gta-v-data-dumps/master/weapons.json"), true);

$name_map = [
	"COMPONENT_KNUCKLE_VARMOD_BASE" => "WT_KNUCKLE",
	"COMPONENT_KNUCKLE_VARMOD_PIMP" => "WCT_KNUCK_02",
	"COMPONENT_KNUCKLE_VARMOD_BALLAS" => "WCT_KNUCK_BG",
	"COMPONENT_KNUCKLE_VARMOD_DOLLAR" => "WCT_KNUCK_DLR",
	"COMPONENT_KNUCKLE_VARMOD_DIAMOND" => "WCT_KNUCK_DMD",
	"COMPONENT_KNUCKLE_VARMOD_HATE" => "WCT_KNUCK_HT",
	"COMPONENT_KNUCKLE_VARMOD_LOVE" => "WCT_KNUCK_LV",
	"COMPONENT_KNUCKLE_VARMOD_PLAYER" => "WCT_KNUCK_PC",
	"COMPONENT_KNUCKLE_VARMOD_KING" => "WCT_KNUCK_SLG",
	"COMPONENT_KNUCKLE_VARMOD_VAGOS" => "WCT_KNUCK_VG",
	"COMPONENT_BAT_VARMOD_XM3" => "WCT_BAT_XM3",
	"COMPONENT_BAT_VARMOD_XM3_01" => "WCT_BAT_XM301",
	"COMPONENT_BAT_VARMOD_XM3_02" => "WCT_BAT_XM302",
	"COMPONENT_BAT_VARMOD_XM3_03" => "WCT_BAT_XM303",
	"COMPONENT_BAT_VARMOD_XM3_04" => "WCT_BAT_XM304",
	"COMPONENT_BAT_VARMOD_XM3_05" => "WCT_BAT_XM305",
	"COMPONENT_BAT_VARMOD_XM3_06" => "WCT_BAT_XM306",
	"COMPONENT_BAT_VARMOD_XM3_07" => "WCT_BAT_XM307",
	"COMPONENT_BAT_VARMOD_XM3_08" => "WCT_BAT_XM308",
	"COMPONENT_BAT_VARMOD_XM3_09" => "WCT_BAT_XM309",
	"COMPONENT_KNIFE_VARMOD_XM3" => "WCT_KNIFE_XM3",
	"COMPONENT_KNIFE_VARMOD_XM3_01" => "WCT_KNIFE_XM301",
	"COMPONENT_KNIFE_VARMOD_XM3_02" => "WCT_KNIFE_XM302",
	"COMPONENT_KNIFE_VARMOD_XM3_03" => "WCT_KNIFE_XM303",
	"COMPONENT_KNIFE_VARMOD_XM3_04" => "WCT_KNIFE_XM304",
	"COMPONENT_KNIFE_VARMOD_XM3_05" => "WCT_KNIFE_XM305",
	"COMPONENT_KNIFE_VARMOD_XM3_06" => "WCT_KNIFE_XM306",
	"COMPONENT_KNIFE_VARMOD_XM3_07" => "WCT_KNIFE_XM307",
	"COMPONENT_KNIFE_VARMOD_XM3_08" => "WCT_KNIFE_XM308",
	"COMPONENT_KNIFE_VARMOD_XM3_09" => "WCT_KNIFE_XM309",
	"COMPONENT_AT_RAILCOVER_01" => "WCT_RAIL",
	"COMPONENT_AT_AR_AFGRIP" => "WCT_GRIP",
	"COMPONENT_AT_PI_FLSH" => "WCT_FLASH",
	"COMPONENT_AT_AR_FLSH" => "WCT_FLASH",
	"COMPONENT_AT_SCOPE_MACRO" => "WCT_SCOPE_MAC",
	"COMPONENT_AT_SCOPE_MACRO_02" => "WCT_SCOPE_MAC",
	"COMPONENT_AT_SCOPE_SMALL" => "WCT_SCOPE_SML",
	"COMPONENT_AT_SCOPE_SMALL_02" => "WCT_SCOPE_SML",
	"COMPONENT_AT_SCOPE_MEDIUM" => "WCT_SCOPE_MED",
	"COMPONENT_AT_SCOPE_LARGE" => "WCT_SCOPE_LRG",
	"COMPONENT_AT_SCOPE_MAX" => "WCT_SCOPE_MAX",
	"COMPONENT_AT_PI_SUPP" => "WCT_SUPP",
	"COMPONENT_AT_AR_SUPP" => "WCT_SUPP",
	"COMPONENT_AT_AR_SUPP_02" => "WCT_SUPP",
	"COMPONENT_AT_SR_SUPP" => "WCT_SUPP",
	"COMPONENT_PISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_PISTOL_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_COMBATPISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_COMBATPISTOL_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_APPISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_APPISTOL_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_MICROSMG_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_MICROSMG_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_SMG_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_SMG_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_ASSAULTRIFLE_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_ASSAULTRIFLE_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_CARBINERIFLE_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_CARBINERIFLE_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_ADVANCEDRIFLE_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_ADVANCEDRIFLE_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_MG_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_MG_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_COMBATMG_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_COMBATMG_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_ASSAULTSHOTGUN_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_ASSAULTSHOTGUN_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_SNIPERRIFLE_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_HEAVYSNIPER_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_MINIGUN_CLIP_01" => "WCT_CLIP2",
	"COMPONENT_ASSAULTSMG_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_ASSAULTSMG_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_PISTOL50_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_PISTOL50_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_SNSPISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_SNSPISTOL_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_VINTAGEPISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_VINTAGEPISTOL_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_HEAVYSHOTGUN_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_MARKSMANRIFLE_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_HEAVYSHOTGUN_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_MARKSMANRIFLE_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_TACTICALRIFLE_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_TACTICALRIFLE_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM" => "WCT_SCOPE_LRG",
	"COMPONENT_AT_PI_SUPP_02" => "WCT_SUPP",
	"COMPONENT_COMBATPDW_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_COMBATPDW_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_MARKSMANPISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_MACHINEPISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_MACHINEPISTOL_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_ASSAULTRIFLE_VARMOD_LUXE" => "WCT_VAR_GOLD",
	"COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE" => "WCT_VAR_METAL",
	"COMPONENT_CARBINERIFLE_VARMOD_LUXE" => "WCT_VAR_GOLD",
	"COMPONENT_APPISTOL_VARMOD_LUXE" => "WCT_VAR_METAL",
	"COMPONENT_PISTOL_VARMOD_LUXE" => "WCT_VAR_GOLD",
	"COMPONENT_PISTOL50_VARMOD_LUXE" => "WCT_VAR_SIL",
	"COMPONENT_HEAVYPISTOL_VARMOD_LUXE" => "WCT_VAR_WOOD",
	"COMPONENT_SMG_VARMOD_LUXE" => "WCT_VAR_GOLD",
	"COMPONENT_MICROSMG_VARMOD_LUXE" => "WCT_VAR_GOLD",
	"COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE" => "WCT_VAR_METAL",
	"COMPONENT_SNIPERRIFLE_VARMOD_LUXE" => "WCT_VAR_WOOD",
	"COMPONENT_MARKSMANRIFLE_VARMOD_LUXE" => "WCT_VAR_GOLD",
	"COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER" => "WCT_VAR_GOLD",
	"COMPONENT_BULLPUPRIFLE_VARMOD_LOW" => "WCT_VAR_METAL",
	"COMPONENT_COMBATMG_VARMOD_LOWRIDER" => "WCT_VAR_ETCHM",
	"COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER" => "WCT_VAR_GOLD",
	"COMPONENT_MG_VARMOD_LOWRIDER" => "WCT_VAR_GOLD",
	"COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER" => "WCT_VAR_GOLD",
	"COMPONENT_SNSPISTOL_VARMOD_LOWRIDER" => "WCT_VAR_WOOD",
	"COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER" => "WCT_VAR_ETCHM",
	"COMPONENT_SWITCHBLADE_VARMOD_BASE" => "WCT_SB_BASE",
	"COMPONENT_SWITCHBLADE_VARMOD_VAR1" => "WCT_SB_VAR1",
	"COMPONENT_SWITCHBLADE_VARMOD_VAR2" => "WCT_SB_VAR2",
	"COMPONENT_REVOLVER_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_REVOLVER_VARMOD_BOSS" => "WCT_REV_VARB",
	"COMPONENT_REVOLVER_VARMOD_GOON" => "WCT_REV_VARG",
	"COMPONENT_SMG_CLIP_03" => "WCT_CLIP_DRM",
	"COMPONENT_CARBINERIFLE_CLIP_03" => "WCT_CLIP_BOX",
	"COMPONENT_ASSAULTRIFLE_CLIP_03" => "WCT_CLIP_DRM",
	"COMPONENT_HEAVYSHOTGUN_CLIP_03" => "WCT_CLIP_DRM",
	"COMPONENT_GUNRUN_MK2_UPGRADE" => "WCT_VAR_GUN",
	"COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01" => "WCT_CAMO_IND",
	"COMPONENT_SNSPISTOL_MK2_CAMO_IND_01" => "WCT_CAMO_IND",
	"COMPONENT_SNSPISTOL_MK2_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_AT_SCOPE_MACRO_02_MK2" => "WCT_SCOPE_MAC2",
	"COMPONENT_AT_SCOPE_SMALL_MK2" => "WCT_SCOPE_SML2",
	"COMPONENT_RAYPISTOL_VARMOD_XMAS18" => "WCT_VAR_RAY18",
	"COMPONENT_CERAMICPISTOL_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_CERAMICPISTOL_CLIP_02" => "WCT_CLIP2",
	"COMPONENT_CERAMICPISTOL_SUPP" => "WCT_SUPP",
	"COMPONENT_HEAVYRIFLE_CAMO1" => "WCT_VAR_FAM",
	"COMPONENT_MICROSMG_VARMOD_SECURITY" => "WCT_VAR_WEED",
	"COMPONENT_APPISTOL_VARMOD_SECURITY" => "WCT_VAR_STUD",
	"COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY" => "WCT_VAR_BONE",
	"COMPONENT_PISTOL_MK2_VARMOD_XM3" => "WCT_PISTMK2_XM3",
	"COMPONENT_MICROSMG_VARMOD_XM3" => "WCT_MSMG_XM3",
	"COMPONENT_PUMPSHOTGUN_VARMOD_XM3" => "WCT_PUMPSHT_XM3",
	"COMPONENT_PISTOLXM3_CLIP_01" => "WCT_CLIP1",
	"COMPONENT_PISTOLXM3_SUPP" => "WCT_SUPP",
];

foreach($weapons as $weapon)
{
	foreach($weapon["Components"] as $comp)
	{
		echo "{ ATSTRINGHASH(\"".$comp["Name"]."\"), \"";
		if ($comp["TranslatedLabel"] && $comp["TranslatedLabel"]["Name"])
		{
			echo $comp["TranslatedLabel"]["Name"];
		}
		else
		{
			echo $name_map[$comp["Name"]] ?? $comp["Name"];
		}
		echo "\" },\n";
	}
}
