#include "\ice\tb_main\sys\gameModes\sad_init.sqf"
0 setfog [.0008, .05, 150];
if (isServer) then {3200 setFog [0.0, 0.0, 00];};
[] execVM "functions\initFastRope.sqf";
TB_rules_SAD_estimatedCacheOffsetRadius = 150;
