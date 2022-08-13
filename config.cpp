
#define _ARMA_

class CfgPatches
{
	class FodsExpansionBits
	{
		units[] = {"fods_key01","fods_box"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data",DZ_Gear_Containers","DZ_Gear_Crafting","DZ_Gear_Tools","DZ_Vehicles_Wheeled"};
	};
};

class CfgMods
{
	class FodsBits_1
	{
		dir = "FodsExpansionBits";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "FodsBits";
		credits = "Fod";
		author = "Fod";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FodsBits/4_World"};
			};
		};
	};
};


class CfgVehicles
{


	class Inventory_Base;


	class fods_keybase : Inventory_Base
	{
		scope = 2;
		displayName = "Key";
		descriptionShort = " fods key";
		model = "\FodsBits\models\Fods_Key.p3d";
	};


	class fods_key01 : fods_keybase
	{
		scope = 2;
		displayName = "Key";
		descriptionShort = " fods key";
		model = "\FodsBits\models\Fods_Key.p3d";
	};

	class fods_box : Inventory_Base
	{
		scope = 2;
		weight=100;
		itemBehaviour=1;
		itemSize[]={2,2};
		displayName = "Box";
		descriptionShort = " fods box";
		model = "\FodsBits\models\Fods_Box.p3d";
	};


};