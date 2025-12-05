modded class MissionBase
{
	void MissionBase()
	{
        PrintZenCfgMods();
	}
	
	void PrintZenCfgMods()
	{
		int mod_count = GetGame().ConfigGetChildrenCount("CfgMods");
		string mod_name;

		Print("\n\n[ZenCfgModsLister] Listing CfgMods:");

		for (int i = 0; i < mod_count; i++)
		{
			GetGame().ConfigGetChildName("CfgMods", i, mod_name);
			Print("#ifdef " + mod_name);
		}
		
		Print("\n\n");
	}
}