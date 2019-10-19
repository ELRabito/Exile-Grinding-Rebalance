// Replace the class CfgGrinding in your config.cpp with the lines below and configure them as you like. 
class CfgGrinding
{
	GrindWoodTypes[] = 
	{
		"Exile_Construction_WoodDoor_Static",
		"Exile_Construction_WoodGate_Static",
		"Exile_Construction_WoodDrawBridge_Static",
		"Exile_Construction_WoodLadderHatch_Static",
		"EBM_door_frame",
		"EBM_Brickwall_floorport_door",
		"EBM_Brickwall_window",
		"EBM_Brickwall_door",
		"EBM_Brickwall_gate"
	};
	
	GrindMetalTypes[] = 
	{
		"Exile_Construction_WoodDoor_Reinforced_Static",
		"Exile_Construction_WoodGate_Reinforced_Static",
		"Exile_Construction_WoodDrawBridge_Reinforced_Static",
		"Exile_Construction_WoodLadderHatch_Reinforced_Static",
		"EBM_pollard",
		"EBM_Metalwall_window",
		"EBM_Metalwall_floorport_door",
		"EBM_Metalwall_door",
		"EBM_Metalwall_gate"
	};
		
	GrindConcreteypes[] = 
	{
		"Exile_Construction_ConcreteDoor_Static",
		"Exile_Construction_ConcreteGate_Static",
		"Exile_Construction_ConcreteWindowHatch_Static",
		"Exile_Construction_ConcreteFloorHatch_Static",
		"Exile_Construction_ConcreteDrawBridge_Static",
		"Exile_Construction_ConcreteLadderHatch_Static"
	};
	
	// Enables code lock grinding on the server.
	enableGrinding = 1;
	
	// Grinding is only possible in third person. (0 = disabled / = 1 enabled).
	FPGrindingOnly = 1;
	
	// Time it takes to grind a fresh lock in minutes.
	grindDurationWood = 8;
	grindDurationMetal = 14; 
	grindDurationConcrete = 18;
	
	//Amount of batteries it takes to grind.
	BatteryAmountRequiredWood = 1;
	BatteryAmountRequiredMetal = 2;
	BatteryAmountRequiredConcrete = 3;
	
	// Percentage chance the grinding will fail
	failChance = 25;
	
	// Percentage chance that failing will break your grinder (otherwise it will just remove a battery)
	breakChance = 35;
	
	// Notify the entire server if someone is hacking. 1 == notify, 0 == don't notify
	notifyServer = 1;
	
	// The cooldown time, in minutes, before another server side notification is sent out from a territory. This is on a per territory basis. 
	notificationCooldown = 10;
};