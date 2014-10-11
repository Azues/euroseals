class CfgPatches
{
	class euroseals_vehicles_config
	{
		units[]=
		{
			"eus_a10",

		};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F_EPC_Plane_CAS_01",
			"A3_Air_F",
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
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class Plane_CAS_01_base_F;
	class EUS_A10_F: Plane_CAS_01_base_F
	{
		_generalMacro="EUS_A10_F";
		scope=2;
		displayName="[EUS] A10E Thunderstorm";
		author="Mitsu";
		faction="EUROSEALS";
		vehicleClass="EUROSEALS";
		model="\A3\Air_F_Gamma\Plane_CAS_01\Plane_cas_01_F.p3d";
		icon="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Map_Plane_CAS_01_CA.paa";
		picture="\A3\Air_F_EPC\Plane_CAS_01\Data\UI\Plane_CAS_01_CA.paa";
		destrType="DestructWreck";
		armor=70;
		armorStructural=1;
		damageResistance=0.0050000002;
		accuracy=0.3;
		maxSpeed=850;
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"euroseals_vehicles\data\a10e_texture_0.paa",
			"euroseals_vehicles\data\a10e_texture_1.paa"
		};
		mapSize=17.52;
		crew="B_pilot_F";
		typicalCargo[]=
		{
			"B_pilot_F"
		};
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
	};
};