class RscTitles
{
	class Default
	{
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 0;
	};
	class RscPicture
	{
		idc = -1;
		type = 0;
		style = 48;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		font = "puristaMedium";
		sizeEx = 0;
		lineSpacing = 0;
		fixedWidth = 0;
		shadow = 0;
		text = "";
		x = "safezoneX";
		y = "safezoneY";
		w = "safezoneW";
		h = "safezoneH";
	};
	class RscEOD_Helmet_BaseTitle
	{
		idd = -1;
		text = "x\aext\addons\eod\textures\EODS_EOD_SUIT_OVERLAY2_ca.paa";
	//	onLoad = "uiNamespace setVariable ['EOD_Helmet_Display', _this select 0]";
	//	onUnload = "uiNamespace setVariable ['EOD_Helmet_Display', displayNull]";
		fadeIn = 0.5;
		fadeOut = 0.5;
		movingEnable = "false";
		duration = 1e+011;
		name = "RscEOD_Helmet_BaseTitle";
		class controls;
	};
	class RscEOD_Helmet: RscEOD_Helmet_BaseTitle
	{
		idd = 1044;
		name = "RscEOD_Helmet";
		class controls
		{
			class EOD_HelmetImage: RscPicture
			{
				text = "x\aext\addons\eod\textures\EODS_EOD_SUIT_OVERLAY2_ca.paa";
				idc = 10650;
			};
		};
	};
	class RscEOD_Helmet_Cracked: RscEOD_Helmet_BaseTitle
	{
		idd = 1045;
		name = "RscEOD_Helmet_Cracked";
		class controls
		{
			class EOD_CrackedHelmetImage: RscPicture
			{
				text = "x\aext\addons\eod\textures\EODS_EOD_SUIT_OVERLAY2_cracked_ca.paa";
				idc = 10651;
			};
		};
	};
	class RscEOD_Interface: RscEOD_Helmet_BaseTitle
	{
		idd = 1046;
		name = "RscEOD_Helmet_Cracked";
		class controls
		{
			class EOD_CrackedHelmetImage: RscPicture
			{
				text = "x\aext\addons\eod\textures\EOD_Suit_HandControl.paa";
				idc = 10652;
			};
		};
	};
};
class RscBackPicture
{
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class HiddenButton
{
	type = 1;
	text = "";
	colorText[] = {
			0, 0, 0, 1
	};
	colorDisabled[] = {
			0, 0, 0, 0
	};
	colorBackground[] = {
			0, 0, 0, 0
	};
	colorBackgroundDisabled[] = {
			0, 0, 0, 0
	};
	colorBackgroundActive[] = {
			0, 0, 0, 0
	};
	colorFocused[] = {
			0, 0, 0, 0
	};
	colorShadow[] = {
			0, 0, 0, 0
	};
	colorBorder[] = {
			0, 0, 0, 0
	};

	soundEnter[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.5,
		1
	};
	soundClick[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.5,
		1
	};
	soundEscape[] =
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
/*		For Dialog Editor please do not delete....
$
[1.063,["EOD_helmet_GUI",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
[1200,"eod_overlay",[1,"\x\aext\addons\eod\textures\EODS_EOD_SUIT_OVERLAY2_ca.paa",["-0.0245075 * safezoneW + safezoneX","-0.00507435 * safezoneH + safezoneY","1.05214 * safezoneW","1.012 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

/*     For Dialog Editor please do not delete....
$
[1.063,["EOD_Suit_HandControl_Dialog",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
[1200,"EOD_Suit_HandControl_PIC",[1,"x\aext\addons\eod\textures\EOD_Suit_HandControl.paa",["-0.000281591 * safezoneW + safezoneX","-0.00125921 * safezoneH + safezoneY","1.00407 * safezoneW","1.00169 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
[1600,"EOD_Suit_HandControl_B1",[1,"",["0.243016 * safezoneW + safezoneX","0.599815 * safezoneH + safezoneY","0.0273986 * safezoneW","0.0321852 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Redbreather","-1"],[]],
[1601,"EOD_Suit_HandControl_B2",[1,"",["0.244775 * safezoneW + safezoneX","0.651223 * safezoneH + safezoneY","0.0251202 * safezoneW","0.0309259 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Sound system","-1"],[]],
[1602,"EOD_Suit_HandControl_B3",[1,"",["0.326254 * safezoneW + safezoneX","0.592519 * safezoneH + safezoneY","0.0282441 * safezoneW","0.0364815 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Redbreather (External system)","-1"],[]],
[1603,"EOD_Suit_HandControl_B5",[1,"",["0.326775 * safezoneW + safezoneX","0.644741 * safezoneH + safezoneY","0.0266822 * safezoneW","0.0346297 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Heat regulation system","-1"],[]],
[1604,"EOD_Suit_HandControl_B4",[1,"",["0.244254 * safezoneW + safezoneX","0.701593 * safezoneH + safezoneY","0.0256409 * safezoneW","0.0337038 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Lights","-1"],[]],
[1605,"EOD_Suit_HandControl_B_ON",[1,"",["0.16022 * safezoneW + safezoneX","0.542149 * safezoneH + safezoneY","0.0277234 * safezoneW","0.0540742 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Power","-1"],[]]
]
*/


#define IDD_BACKGROUND	67676
#define IDC_EOD_Suit_HandControl_PIC	IDD_BACKGROUND
#define IDD_EOD_Suit_HandControl_Dialog 160791
#define IDD_REDBREATHER_LED	67677
#define IDC_EOD_Suit_REDBREATHER_LED	IDD_REDBREATHER_LED
#define IDD_POWER_LED	67678
#define IDC_EOD_Suit_Power_LED	IDD_POWER_LED
#define IDD_SOUND_LED	67679
#define IDC_EOD_Suit_Sound_LED	IDD_SOUND_LED
#define IDD_LIGHT_LED	67680
#define IDC_EOD_Suit_Light_LED	IDD_LIGHT_LED
#define IDD_ENERGY_LED	67681
#define IDC_EOD_Suit_Energy_LED	IDD_ENERGY_LED

////////////////////////////////////////////////////////////////////////////////Led Rouges ///////////////////////////////////////////////////////////////////
#define IDD_SOUND_LED_R	67682
#define IDC_EOD_Suit_Sound_LED_R	IDD_SOUND_LED_R
#define IDD_LIGHT_LED_R	67683
#define IDC_EOD_Suit_Light_LED_R	IDD_LIGHT_LED_R
#define IDD_REDBREATHER_LED_R	67684
#define IDC_EOD_Suit_REDBREATHER_LED_R	IDD_REDBREATHER_LED_R
//#define IDD_ENERGY_LED_R	67685									Decommente Ici si tu veut utiliser la led Rouge pour l'energie
//#define IDC_EOD_Suit_Energy_LED_R	IDD_ENERGY_LED_R				Decommente Ici si tu veut utiliser la led Rouge pour l'energie
////////////////////////////////////////////////////////////////////////////////Led Rouges Fin ///////////////////////////////////////////////////////////////////

class EOD_Suit_HandControl_Dialog
{
	idd=IDD_EOD_Suit_HandControl_Dialog;
//	movingEnable = 1;
	enableSimulation = true ;
	controlsBackground[] = { };
	objects[] = { };
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText '\x\aext\addons\eod\textures\EOD_Suit_HandControl_n.paa';};";
	controls[]=
	{
		background,
		REDBREATHER_LED,
		POWER_LED,
		SOUND_LED,
		LIGHT_LED,
		ENERGY_LED,
		////////////////////////////////////////////////////////////////////////////////Led Rouges ///////////////////////////////////////////////////////////////////

		SOUND_LED_R,
		LIGHT_LED_R,
		REDBREATHER_LED_R,
		//ENERGY_LED_R,      Decommente Ici si tu veut utiliser la led Rouge pour l'energie

		////////////////////////////////////////////////////////////////////////////////Led Rouges Fin///////////////////////////////////////////////////////////////////
		EOD_Suit_HandControl_B1,
		EOD_Suit_HandControl_B2,
		EOD_Suit_HandControl_B3,
		EOD_Suit_HandControl_B4,
		EOD_Suit_HandControl_B5,
		EOD_Suit_HandControl_B_ON
	};

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by MrEwok, v1.063, #Gydory)
////////////////////////////////////////////////////////
	class background: RscBackPicture
	{
		idc = IDC_EOD_Suit_HandControl_PIC;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl.paa";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class REDBREATHER_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_REDBREATHER_LED;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_RedbreatherLED.paa";
		onLoad = "ctrlShow [67677, False]; [] call AEXT_EOD_fnc_interfaceOpen;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class POWER_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Power_LED;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_PowerLED.paa";
		onLoad = "ctrlShow [67678, False]; [] call AEXT_EOD_fnc_interfaceOpen;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class SOUND_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Sound_LED;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_SoundLED.paa";
		onLoad = "ctrlShow [67679, False]; [] call AEXT_EOD_fnc_interfaceOpen;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class LIGHT_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Light_LED;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_LightLED.paa";
		onLoad = "ctrlShow [67680, False]; [] call AEXT_EOD_fnc_interfaceOpen;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class ENERGY_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Energy_LED;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_EnergyLED.paa";
		onLoad = "ctrlShow [67681, False]; [] call AEXT_EOD_fnc_interfaceOpen;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	////////////////////////////////////////////////////////////////////////////////Led Rouges ///////////////////////////////////////////////////////////////////
	class SOUND_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_Sound_LED_R;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_SoundLED_R.paa";
		onLoad = "ctrlShow [67682, False];";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	class LIGHT_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_Light_LED_R;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_LightLED_R.paa";
		onLoad = "ctrlShow [67683, False];";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	class REDBREATHER_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_REDBREATHER_LED_R;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_RedbreatherLED_R.paa";
		onLoad = "ctrlShow [67684, False];";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	/* uncomment if you want to use the red led for energy
	class ENERGY_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_Energy_LED_R;
		text = "x\aext\addons\eod\textures\EOD_Suit_HandControl_EnergyLED_R.paa";
		onLoad = "ctrlShow [67685, False] ;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	*/
	////////////////////////////////////////////////////////////////////////////////Led Rouges Fin ///////////////////////////////////////////////////////////////////
	class EOD_Suit_HandControl_B1: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B1;
		x = 0.243016 * safezoneW + safezoneX;
		y = 0.599815 * safezoneH + safezoneY;
		w = 0.0273986 * safezoneW;
		h = 0.0321852 * safezoneH;
		tooltip = "$STR_Rebreather";
		action = "[""Respirator""] call AEXT_EOD_fnc_actionButton;";
	};
	class EOD_Suit_HandControl_B2: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B2;
		x = 0.244775 * safezoneW + safezoneX;
		y = 0.651223 * safezoneH + safezoneY;
		w = 0.0251202 * safezoneW;
		h = 0.0309259 * safezoneH;
		tooltip = "$STR_Sound_System";
		action = "[""Sound system""] call AEXT_EOD_fnc_actionButton;";
	};
	class EOD_Suit_HandControl_B3: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B3;
		x = 0.326254 * safezoneW + safezoneX;
		y = 0.592519 * safezoneH + safezoneY;
		w = 0.0282441 * safezoneW;
		h = 0.0364815 * safezoneH;
		tooltip = "$STR_Rebreather_External_System";
		action = "[""External respirator""] call AEXT_EOD_fnc_actionButton;";
	};
	class EOD_Suit_HandControl_B4: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B4;
		x = 0.244254 * safezoneW + safezoneX;
		y = 0.701593 * safezoneH + safezoneY;
		w = 0.0256409 * safezoneW;
		h = 0.0337038 * safezoneH;
		tooltip = "$STR_Lights";
		action = "[""Lights""] call AEXT_EOD_fnc_actionButton;";
	};
	class EOD_Suit_HandControl_B5: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B5;
		x = 0.326775 * safezoneW + safezoneX;
		y = 0.644741 * safezoneH + safezoneY;
		w = 0.0266822 * safezoneW;
		h = 0.0346297 * safezoneH;
		tooltip = "$STR_Heat_Regulation_System";
		action = "[""Ventilation""] call AEXT_EOD_fnc_actionButton;";
	};
	class EOD_Suit_HandControl_B_ON: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B_ON;
		x = 0.16022 * safezoneW + safezoneX;
		y = 0.542149 * safezoneH + safezoneY;
		w = 0.0277234 * safezoneW;
		h = 0.0540742 * safezoneH;
		tooltip = "$STR_Power";
		action = "[""Power""] call AEXT_EOD_fnc_actionButton;";
	};
};
