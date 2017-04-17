// BAF - Army (MTP)
// Author: Cole

class TB_BLUBasicAmmunitionBox
{
	transportClear = 1;
	proxyObject = "TB_BLUBasicAmmunitionBox";
	class transportCargo
	{
		transportMagazines[] = {
			{"CUP_30Rnd_556x45_Stanag", 20},
			{"CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", 5},
			{"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1", 5},
			{"CUP_5Rnd_86x70_L115A1", 10},
			{"SmokeShell", 10},
			{"rhs_mag_m67", 10},
			{"CUP_1Rnd_HE_M203", 10},
			{"CUP_M136_M", 2},
			{"LaserBatteries", 2},
			{"DemoCharge_Remote_Mag", 0}
		};
		transportWeapons[] = {{"rhs_weap_rsp30_green", 10}, {"CUP_launch_M136",1}, {"CUP_arifle_L85A2",2}};
		//transportBackpacks[] = {};
		//transportItems[] = {};
	};
};
class TB_Box_West_Mines_F
{
	transportClear = 1;
	proxyObject = "TB_Box_West_Mines_F";
	class transportCargo
	{
		transportMagazines[] = {
			{"rhs_mine_M19_mag", 0},
			{"SLAMDirectionalMine_Wire_Mag", 0},
			{"APERSMine_Range_Mag", 0},
			{"APERSBoundingMine_Range_Mag", 0},
			{"APERSTripMine_Wire_Mag", 0},
			{"ClaymoreDirectionalMine_Remote_Mag", 2}
		};
		//transportWeapons[] = {};
		transportBackpacks[] = {{"B_Kitbag_mcamo", 2}};
		transportItems[] = {{"MineDetector", 2}, {"ToolKit", 1}};
	};
};