/*
	(c) 2025 | ZenCfgModsLister | Zenarchist
	
	Original concept: https://steamcommunity.com/sharedfiles/filedetails/?id=3528925483
*/

class CfgPatches
{
	class ZenCfgModsLister
	{
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class ZenCfgModsLister
	{
		author = "Zenarchist";
		type = "mod";
		class defs
		{
			class missionScriptModule
			{
				value = "";
				files[] = 
				{ 
					"ZenCfgModsLister/scripts/5_Mission"
				};
			};
		};
	};
};