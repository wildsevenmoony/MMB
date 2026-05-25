/*
 * Author: Moony
 * Adds Several Things to the game
 */

class CfgVehicles
{
    
	class B_Messenger_Black_F;
	class B_Messenger_Coyote_F;
	class B_Messenger_Gray_F;
	class B_Messenger_Olive_F;

	// Messenger Bags (Bigger)

	class GVAR(B_Messenger_Black_F): B_Messenger_Black_F
	{
		maximumLoad = 200;
		mass = 20;
	};

	class GVAR(B_Messenger_Coyote_F): B_Messenger_Coyote_F
	{
		maximumLoad = 200;
		mass = 20;
	};
	
	class GVAR(B_Messenger_Gray_F): B_Messenger_Gray_F
	{
		maximumLoad = 200;
		mass = 20;
	};
	
	class GVAR(B_Messenger_Olive_F): B_Messenger_Olive_F
	{
		maximumLoad = 200;
		mass = 20;
	};
	
	class GVAR(B_Messenger_Purple_Moony_F): B_Messenger_Gray_F
	{
		displayName = "Messenger Bag (Moony)";
		maximumLoad = 320;
		mass = 35;
		hiddenSelectionsTextures[] = {"\z\mma\addons\additions\txt\B_Messenger_Purple_Moony_F_CO.paa"};
	};
};
