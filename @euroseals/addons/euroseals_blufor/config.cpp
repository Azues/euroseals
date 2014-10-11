class CfgPatches
{
	class euroseals_config
	{
		units[]=
		{
			"euroseals_rifleman_woodland",
			"euroseals_rifleman_recon_woodland",
			"euroseals_rifleman_tee_woodland",
			"euroseals_rifleman_medic_woodland",
		};
		weapons[]=
		{
			"euroseals_uniform_woodland",
			"euroseals_uniform_tee_woodland",
			"euroseals_uniform_recon_woodland",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_BETA",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_Data_F"
		};
	};
};
class CfgFactionClasses
{
	class EUROSEALS
	{
		icon="\euroseals\data\euroseals.paa";
		displayName="EUROSEALS";
		priority=2;
		side="TWest";
	};
};
class CfgVehicleClasses
{
	class EUROSEALS
	{
		displayName="EUROSEALS";
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_02_f;
	class B_Soldier_lite_F;
	class B_medic_F;
	class REPLACE_ME_F: REPLACE_ME_F
	{
		_generalMacro="REPLACE_ME_F";
		scope=2;
		displayName="[EUS] REPLACE_ME";
		author="Mitsu";
		faction="EUROSEALS";
		vehicleClass="EUROSEALS";
		nakedUniform="U_BasicBody";
		uniformClass="REPLACE_ME";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\euroseals\data\textures\REPLACE_ME.paa"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class REPLACE_ME: Uniform_Base
	{
		scope=2;
		author="Mitsu";
		displayName="REPLACE_ME";
		picture="\A3\characters_f\data\ui\icon_u_ir_officer_spc_ca.paa";	
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="REPLACE_ME";
			containerClass="Supply50";
			mass=80;
		};
	};
	class Vest_Base;
	class VestItem;
	class Vest_Camo_Base;
	/*
	###VESTS GO HERE###
	*/
	class ItemCore;
	class HeadgearItem;
	/*
	###HELMETS GO HERE###
	*/
};
class CfgGlasses
{
	class G_Balaclava_blk;
	/*
	###BALACLAVAS GO HERE###
	*/
};