// Include these overrides in the class CfgExileCustomCode of your config.cpp in your missionfile.


class CfgExileCustomCode 
{

//Grinding Rebalance
ExileClient_action_grindLock_duration = "Exile_Client_Overrides\ExileClient_action_grindLock_duration.sqf";
ExileClient_action_grindLock_condition = "Exile_Client_Overrides\ExileClient_action_grindLock_condition.sqf";
ExileServer_object_lock_network_grindLockRequest = "Exile_Server_Overrides\ExileServer_object_lock_network_grindLockRequest.sqf";+	
	
};