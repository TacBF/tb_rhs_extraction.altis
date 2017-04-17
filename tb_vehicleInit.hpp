class TB_vehicleInit {
	class HellfireRemove {
		code = "if (local _this) then { _this removeweapon 'rhs_weap_SidewinderLauncher'; _this removeweapon 'rhs_weap_hellfirelauncher'; };";
	};
	class Attach {
		code = "if (local _this) then {[_this] execVM 'functions\OffroadAUG.sqf'};";
	};
};

