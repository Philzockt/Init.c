
#include "$CurrentDir:\mpmissions\dayzOffline.chernarusplus\tools\CreateLandObject.c"
void main()
{
	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);
	
	weather.GetRain().SetLimits( 0, 0.1 );

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year;
	int month;
	int day;
	int hour;
	int minute;

	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

    if (((month <= 9) && (day < 20)) || ((month >= 10) && (day > 20)))
    {
        month = 9;
        day = 20;
		
		GetGame().GetWorld().SetDate(year, month, day, hour, minute);
	}
	custom();
}

void custom()
{

	Object obj;
 
   
	// Mainland Side
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1955", "90 0 0", obj); 
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1935", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1915", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1895", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1895", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1875", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1855", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1835", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1815", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1795", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1775", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1755", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1735", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1715", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1695", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1675", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1655", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1635", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1615", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1595", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1575", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1555", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1535", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1515", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1495", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1475", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1455", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1435", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1415", "90 0 0", obj);
    CreateLandObject("Dam_Concrete_20_Floodgate", "2658 -6.55 1395", "90 0 0", obj); 
	// Island Side
    
	// Water Pumps, FuelStation, Radios
    CreateLandObject("Land_Misc_Well_Pump_Yellow", "2788.34 26.6838 1224.95", "0 0 0", obj); // Prison
	CreateLandObject("Land_Misc_Well_Pump_Yellow", "4630.9 339.713 9592.25", "0 0 0", obj);  // NWA
	CreateLandObject("Land_Misc_Well_Pump_Yellow", "10208.8 17 2034.71", "-15 0 0", obj);    // Phils Base
	
	// Alte base
	
	//CreateLandObject("Land_Misc_Well_Pump_Yellow", "3826.53 191 13004.3", "180 0 0", obj);
	//CreateLandObject("Land_FuelStation_Feed", "3822.1 191.3 13003.1", "30 0 0", obj);

	// Guardhouse Prison Island
    CreateLandObject("Land_Sawmill_Illuminanttower", "2653.55 12.0782 1947.52", "0 0 0", obj);
    CreateLandObject("Land_Mil_Guardhouse2", "2665.25 3.68976 1953.45", "0 0 0", obj);
    CreateLandObject("Land_Radio_PanelPAS", "2668.19 2.57883 1950.76", "180 0 0", obj);
    CreateLandObject("Land_Radio_PanelBig", "2669.57 2.46004 1955.67", "-180 0 0", obj);
    CreateLandObject("Land_Mil_Tower_Small", "2668.24 9.78019 1952.16", "-180 0 0", obj);
    CreateLandObject("Land_BusStation_building", "2671.62 2.80564 1951.65", "-90 0 0", obj);
    CreateLandObject("Land_Ladder", "2672.23 2.19335 1954.74", "-90 0 0", obj);
    CreateLandObject("Land_Wreck_V3S", "2668.4 4.40857 1960.24", "180 -11 0", obj);
    CreateLandObject("Land_Guardhouse", "2656.39 3.44714 1949.95", "90 0 0", obj);
}		

class CustomMission: MissionServer
{	
	void addMags(PlayerBase player, string mag_type, int count)
	{
		if (count < 1)
				return;
		EntityAI mag;
		for (int i = 0; i < count; i++) {
				mag = player.GetInventory().CreateInInventory(mag_type);
			}
			player.SetQuickBarEntityShortcut(mag, 1, true);
		}

	EntityAI l
	EntityAI e
	EntityAI g
	EntityAI t
	
	/// Admin tool einbinden
	bool DebugMonitor_active = false;
  	bool freecam_active = false;
	bool verify_admins = true; // true=verify presence of BI UID in admin list
	string cmd_prefix = "/"; // Must be special character
	ref TStringArray admins = {"6JmH28D6QXyU3l5/SYgpEkApfcp73KnGKY8+Yv+7xhg=","q/+SlchEwOUgddlvxo5CkVkw8uqtsLzhR91e8K25j9g="}; // Add your BI UID or SteamID

	bool IsPlayerAnAdmin(PlayerBase player) {
		bool found = false;
		for ( int i = 0; i < admins.Count(); ++i ) {
			if(player.GetIdentity().GetId() == admins[i] || player.GetIdentity().GetPlainId() == admins[i]) { found=true; break; }
		}
		return found;
	}

	void SendMessageToPlayer(PlayerBase player, string message) {
		Param1<string> param = new Param1<string>( message );
		GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, param, true, player.GetIdentity());
	}

	bool IsPlayer(string name) { 
		PlayerBase p;
		array<Man> players = new array<Man>; GetGame().GetPlayers(players);
		for ( int i = 0; i < players.Count(); ++i ) {
			p = players.Get(i);
			if(p.GetIdentity().GetName() == name) return true;
		}
		return false;
	}

	PlayerBase GetPlayer(string name) {
		PlayerBase p;
		array<Man> players = new array<Man>; GetGame().GetPlayers(players);
		for ( int i = 0; i < players.Count(); ++i ) {
			p = players.Get(i);
			if(p.GetIdentity().GetName() == name) return p;
		}
		return NULL;
	}

	override void OnEvent(EventType eventTypeId, Param params)  {
		int i;
		PlayerBase player, temp_player;
		array<Man> players = new array<Man>; GetGame().GetPlayers(players);
		if(eventTypeId != ChatMessageEventTypeID) { super.OnEvent(eventTypeId,params); return; }
		ChatMessageEventParams chat_params = ChatMessageEventParams.Cast( params );
		if(chat_params.param1 != 0 || chat_params.param2 == "") { super.OnEvent(eventTypeId,params); return; }
		player = GetPlayer(chat_params.param2);
		if(player == NULL) { super.OnEvent(eventTypeId,params); return; }
		string message = chat_params.param3, prefix, param0, command;
		TStringArray tokens = new TStringArray;
		message.Replace("` ", "&SPCESC!");
		message.Split(" ", tokens); int count = tokens.Count();
		for ( i = 0; i < count; ++i ) {
			message = tokens[i];
			message.Replace("&SPCESC!", " ");
			tokens[i] = message;
		}

		param0 = tokens.Get(0);
		param0.ParseStringEx(prefix); if(prefix != cmd_prefix) { super.OnEvent(eventTypeId,params); return; };
		param0.ParseStringEx(command);
		if(verify_admins && !IsPlayerAnAdmin(player)) { GetGame().AdminLog("[ADMCMD] (Unauthorized) " + player.GetIdentity().GetName() +" ("+player.GetIdentity().GetPlainId()+", "+player.GetIdentity().GetId()+") tried to execute "+ chat_params.param3); return; }
		GetGame().AdminLog("[ADMCMD] PLAYER: "+ player.GetIdentity().GetName() +" ("+player.GetIdentity().GetPlainId()+", "+player.GetIdentity().GetId()+") CMD: "+ command);
		switch(command) {
			case "spawn": {
				if(count != 2) { SendMessageToPlayer(player, "/spawn [object]"); return; }
				GetGame().CreateObject(tokens[1], player.GetPosition(), false, true );
				SendMessageToPlayer(player, "[ObjectSpawn] Object spawned: " + tokens[1]);
				break;
			}

			case "inv": {
				if(count != 2) { SendMessageToPlayer(player, "/inv [object]"); return; }
				player.GetInventory().CreateInInventory(tokens[1]);
				SendMessageToPlayer(player, "[ObjectSpawn] Object spawned in inventory: " + tokens[1]);
				break;
			}


			case "tp": {
				if(count < 2) 
				{ SendMessageToPlayer(player, "/tp city Spieler"); return; }
				vector poi;
				switch(tokens[1]) {
					
					case "nwa": {
						if (count > 2) { 
						poi = "4160 0 11000";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to NWA-Tents by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "4160 0 11000";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to NWA-Tents");
						}
						break;
					}
					
					case "nwa2": {
						if (count > 2) { 
						poi = "4660 0 10330";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to NWA by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "4660 0 10330";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to NWA");
						}
						break;
					}

					case "home": {
						if (count > 2) { 
						poi = "10205.7 16.84 2027.06";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Phils Base by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "10205.7 16.84 2027.06";
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Phils Base");
						}
						break;
					}

					case "home2": {
						if (count > 2) { 
						poi = "12336.55 0 14277.98";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to our Home by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "12336.55 0 14277.98";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to our Home");
						}
						break;
					}

					case "tisy": {
						if (count > 2) { 
						poi = "1600 0 14000";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Tisy Military by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "1600 0 14000";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Tisy Military");
						}
						break;
					}

					case "vybor": {
						if (count > 2) { 
						poi = "4600 0 8200";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Vybor by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "4600 0 8200";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Vybor");
						}
						break;
					}

					case "pavlovo": {
						if (count > 2) { 
						poi = "1830 0 3450";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Pavlovo by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "1830 0 3450";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Pavlovo");
						}
						break;
					}

					case "troitskoe": {
						if (count > 2) { 
						poi = "7850 0 14700";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Troitskoe by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "7850 0 14700";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Troitskoe");
						}
						break;
					}

					case "elektro": {
						if (count > 2) { 
						poi = "10553 0 2313";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Elektro by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "10553 0 2313";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Elektro");
						}
						break;
					}

					case "berezino": {
						if (count > 2) { 
						poi = "12319 0 9530";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Berezino by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "12319 0 9530";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Berezino");
						}
						break;
					}

					case "prison": {
						if (count > 2) { 
						poi = "2661 0 1393";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Prison Island by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "2661 0 1393";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Prison Island");
						}
						break;
					}

					case "balota": {
						if (count > 2) { 
						poi = "4864 0 2506";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Balota-Airstrip by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "4864 0 2506";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Balota-Airstrip");
						}
						break;
					}

					case "cherno": {
						if (count > 2) { 
						poi = "6612.37 0 2557.20";
						temp_player = GetPlayer(tokens[2]); 
						if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[2]+"'"); return;	 
						} else {
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);	
						temp_player.SetPosition(poi);
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to Cherno by admin " + player.GetIdentity().GetName());
						}
						} else {
						poi = "6612.37 0 2557.20";
						poi[1] = GetGame().SurfaceY(poi[0], poi[2]);
						player.SetPosition(poi);
						SendMessageToPlayer(player, "[Teleport] You've been teleported to Cherno");
						}
						break;
					}										

				}
				break;
			}

			case "strip": {
				if(count != 2) { SendMessageToPlayer(player, "/strip [player]"); return; }
				temp_player = GetPlayer(tokens[1]);
				if(temp_player == NULL) {
					SendMessageToPlayer(player, "[Strip] Can't find player called: '"+tokens[1]+"'");
				} else {
					temp_player.RemoveAllItems();
					SendMessageToPlayer(player, "[Strip] You stripped " + temp_player.GetIdentity().GetName());
					SendMessageToPlayer(temp_player, "You have been stripped by an admin");
				}
				break;
			}

			case "slap": {
				if(count != 2) { SendMessageToPlayer(player, "/slap [player]"); return; }
				temp_player = GetPlayer(tokens[1]);
				if(temp_player == NULL) {
					SendMessageToPlayer(player, "[Slap] Can't find player called: '"+tokens[1]+"'");
				} else {
					temp_player.SetPosition(temp_player.GetPosition() + "0 3 0");
					SendMessageToPlayer(player, "[Slap] You stripped " + temp_player.GetIdentity().GetName());
					SendMessageToPlayer(temp_player, "You have been slapped by an admin");
				}
				break;
			}

			case "topos": {
				if (count < 3) { SendMessageToPlayer(player, "/topos [x] [y] (player)"); return; }
				float ATL_Z = GetGame().SurfaceY(tokens[1].ToFloat(), tokens[2].ToFloat());
				vector reqpos = Vector(tokens[1].ToFloat(), ATL_Z, tokens[2].ToFloat());
				temp_player = player;
				if (count == 4) { 
					temp_player = GetPlayer(tokens[3]); 
					if (temp_player == NULL) {
						SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[3]+"'"); return;
					} else {
						SendMessageToPlayer(temp_player, "[Teleport] You've been teleported to " + reqpos + " by admin " + player.GetIdentity().GetName());
					}
				}
				temp_player.SetPosition(reqpos);
				SendMessageToPlayer(player, "[Teleport] Target teleported to " + temp_player.GetPosition());
				break;
			}

			case "goto": {
				if(count != 2) { SendMessageToPlayer(player, "/goto [player]"); return; }
				temp_player = GetPlayer(tokens[1]);
				if(temp_player == NULL) {
					SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[1]+"'");
				} else {
					player.SetPosition(temp_player.GetPosition());
					SendMessageToPlayer(player, "[Teleport] You teleported to " + temp_player.GetIdentity().GetName());
				}
				break;
			}

			case "allgoto": {
				PlayerBase allgoto_target;
				if(count != 2) { SendMessageToPlayer(player, "/allgoto [player]"); return; }
				allgoto_target = GetPlayer(tokens[1]);
				if(allgoto_target == NULL) {
					SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[1]+"'");
				} else {
					SendMessageToPlayer(player, "[Teleport] You teleported everyone to your location");
					for (i = 0; i < players.Count(); i++) {
						temp_player = players.Get(i);
						SendMessageToPlayer(temp_player, "[Teleport] You have been teleported to player " + allgoto_target.GetIdentity().GetName());
						temp_player.SetPosition(allgoto_target.GetPosition());
					}
				}
				break;
			}

			case "here": {
				if(count != 2) { SendMessageToPlayer(player, "/here [player]"); return; }
				temp_player = GetPlayer(tokens[1]);
				if(temp_player == NULL) {
					SendMessageToPlayer(player, "[Teleport] Can't find player called: '"+tokens[1]+"'");
				} else {
					temp_player.SetPosition(player.GetPosition());
					SendMessageToPlayer(temp_player, "[Teleport] You have been teleported to admin " + player.GetIdentity().GetName());
					SendMessageToPlayer(player, "[Teleport] You teleported " + temp_player.GetIdentity().GetName() + " to your location");
				}
				break;
			}

			case "allhere": {
				SendMessageToPlayer(player, "[Teleport] You teleported everyone to your location");
				for (i = 0; i < players.Count(); i++) {
					temp_player = players.Get(i);
					SendMessageToPlayer(temp_player, "[Teleport] You have been teleported to admin " + player.GetIdentity().GetName());
					temp_player.SetPosition(player.GetPosition());
				}
				break;
			}

			case "time": {
				if(count != 3) { SendMessageToPlayer(player, "/time [hour] [minute]"); return; }
				GetGame().GetWorld().SetDate( 2018, 1, 7, tokens[1].ToInt(), tokens[2].ToInt());
				SendMessageToPlayer(player, "[Servertime] You have set the servertime to " + tokens[1] + ":"+tokens[2]);
				break;
			}

			case "day": {
				GetGame().GetWorld().SetDate( 2018, 1, 7, 12, 0);
				SendMessageToPlayer(player, "[Servertime] You have set the servertime to daytime");
				break;
			}

			case "night": {
				GetGame().GetWorld().SetDate( 2018, 1, 7, 24, 0);
				SendMessageToPlayer(player, "[Servertime] You have set the servertime to daytime");
				break;
			}
		
			/*case "rain": {
				if(count != 2) { SendMessageToPlayer(player, "/rain [value 0-100]"); return; }
				float rain = tokens[1].ToFloat() / 100;
				GetGame().GetWeather().GetRain().Set(rain, 0, 600);
				SendMessageToPlayer(player, "[Weather] You have set Rain to " + tokens[1] + "% ["+rain+"]");
				break;
			}
			case "fog": {
				if(count != 2) { SendMessageToPlayer(player, "/rain [value 0-100]"); return; }
				float fog = tokens[1].ToFloat() / 100;
				GetGame().GetWeather().GetFog().Set(fog, 0, 600);
				SendMessageToPlayer(player, "[Weather] You have set Fog to " + tokens[1] + "% ["+fog+"]");
				break;
			}
			case "overcast": {
				if(count != 2) { SendMessageToPlayer(player, "/rain [value 0-100]"); return; }
				float overcast = tokens[1].ToFloat() / 100;
				GetGame().GetWeather().GetOvercast().Set(overcast, 0, 600);
				SendMessageToPlayer(player, "[Weather] You have set Overcast to " + tokens[1] + "% ["+overcast+"]");
				break;
			}
			*/
			case "kill": {
				if(count == 2) {
					temp_player = GetPlayer(tokens[1]);
					if(temp_player == NULL) {
						SendMessageToPlayer(player, "[Kill] Can't find player called: '"+tokens[1]+"'");
					} else {
						temp_player.SetHealth(0);
						SendMessageToPlayer(player, "[Kill] You killed " + temp_player.GetIdentity().GetName());
					}
				} else {
					player.SetHealth(0);
					SendMessageToPlayer(player, "[Kill] You killed yourself");
				}
				break;
			}

			case "killall": {
				SendMessageToPlayer(player, "[Kill] You killed everyone");
				for (i = 0; i < players.Count(); i++) {
					temp_player = players.Get(i);
					if(temp_player.GetIdentity().GetId() == player.GetIdentity().GetId()) continue;
					temp_player.SetHealth(0);
				}
				break;
			}

			case "heal": {
				PlayerBase heal_target;
				if(count == 2) {
					heal_target = GetPlayer(tokens[1]);
					if(heal_target == NULL) {
						SendMessageToPlayer(player, "[Heal] Can't find player called: '"+tokens[1]+"'");
					} else {
						SendMessageToPlayer(player, "[Heal] You healed " + heal_target.GetIdentity().GetName());
					}
				} else {
					heal_target = player;
					SendMessageToPlayer(player, "[Heal] You healed yourself");
				}
				if(heal_target != NULL) {
					heal_target.SetHealth(heal_target.GetMaxHealth("", ""));
					heal_target.SetHealth("", "Blood", heal_target.GetMaxHealth("", "Blood"));
					heal_target.GetStatStamina().Set(1000);
					heal_target.GetStatEnergy().Set(1000);
					heal_target.GetStatWater().Set(1000);
					heal_target.SetBleedingBits(0);
				}
				break;
			}

			case "phil": {
				player.RemoveAllItems();
				
				player.GetInventory().CreateInInventory("TTSKOPants");
				player.GetInventory().CreateInInventory("TTsKOJacket_Camo");
				player.GetInventory().CreateInInventory("MilitaryBoots_Beige");
				player.GetInventory().CreateInInventory("TacticalGloves_Green");
				player.GetInventory().CreateInInventory("HighCapacityVest_Olive");				
				player.GetInventory().CreateInInventory("NVGHeadstrap");
				player.GetInventory().CreateInInventory("GP5GasMask");
				player.GetInventory().CreateInInventory("AliceBag_Camo");


				
				addMags(player, "Mag_AKM_Drum75Rnd", 2);
				
				EntityAI primary;
				EntityAI axe = player.GetInventory().CreateInInventory("FirefighterAxe_Green");
				
				EntityAI gun = player.GetHumanInventory().CreateInHands("AKM");
				player.SetQuickBarEntityShortcut(gun, 0, true);
				gun.GetInventory().CreateAttachment("PSO1Optic");
				gun.GetInventory().CreateAttachment("AK_Suppressor");
				gun.GetInventory().CreateAttachment("AK_FoldingBttstck_Black");
				gun.GetInventory().CreateAttachment("AK_RailHndgrd_Black");
				
				
                break;
            }

			case "debug": {
				if (DebugMonitor_active) {
				SendMessageToPlayer(player, "[DebugMonitor] closed");
				GetGame().SetDebugMonitorEnabled(0);
				DebugMonitor_active = false;
				} else {
				SendMessageToPlayer(player, "[DebugMonitor] opened");
				GetGame().SetDebugMonitorEnabled(1);
				DebugMonitor_active = true;
				}

				break;
			}				

			case "freecam": {
				PlayerBase body = player;
				if(freecam_active) {
					freecam_active = false;
					GetGame().SelectPlayer(player.GetIdentity(), body);
					SendMessageToPlayer(player, "[Freecam] Exited");

				} else {
					freecam_active = true;
					GetGame().SelectPlayer(player.GetIdentity(), NULL);
					GetGame().SelectSpectator(player.GetIdentity(), "freedebugcamera", player.GetPosition());	
					SendMessageToPlayer(player, "[Freecam] Entered");
				}
				break;
			}

			case "offroad": {
				SendMessageToPlayer(player, "[Offroad] Vehicled spawned");
				Car v;
				float playerAngle = MiscGameplayFunctions.GetHeadingAngle(player);
				vector posModifier = Vector(-(3 * Math.Sin(playerAngle)), 0, 3 * Math.Cos(playerAngle));
				v = Car.Cast(GetGame().CreateObject( "OffroadHatchback", player.GetPosition() + posModifier));
				
                v.GetInventory().CreateAttachment("SparkPlug");
                v.GetInventory().CreateAttachment("EngineBelt");
				v.GetInventory().CreateAttachment("CarRadiator");
                v.GetInventory().CreateAttachment("CarBattery");
                v.GetInventory().CreateAttachment("HatchbackHood");
                v.GetInventory().CreateAttachment("HatchbackTrunk");
                v.GetInventory().CreateAttachment("HatchbackDoors_CoDriver");
                v.GetInventory().CreateAttachment("HatchbackWheel");
                v.GetInventory().CreateAttachment("HatchbackWheel");
                v.GetInventory().CreateAttachment("HatchbackWheel");
                v.GetInventory().CreateAttachment("HatchbackWheel");
                v.GetInventory().CreateAttachment("HatchbackWheel"); // spare
				break;
			}

			case "refuel": {
				ref array<Object> nearest_objects = new array<Object>;
				ref array<CargoBase> proxy_cargos = new array<CargoBase>;
				Car toBeFilled;
				vector position = player.GetPosition();
				GetGame().GetObjectsAtPosition ( position, 10, nearest_objects, proxy_cargos );
		
				for (i = 0; i < nearest_objects.Count(); i++) {
					if (nearest_objects[i].IsKindOf("CarScript")) {
						SendMessageToPlayer(player, "[Refuel] Found car: '"+nearest_objects[i]+"'");
						toBeFilled = Car.Cast(nearest_objects[i]);
						float fuelReq = toBeFilled.GetFluidCapacity( CarFluid.FUEL ) - (toBeFilled.GetFluidCapacity( CarFluid.FUEL ) * toBeFilled.GetFluidFraction( CarFluid.FUEL ));
						float oilReq = toBeFilled.GetFluidCapacity( CarFluid.OIL ) - (toBeFilled.GetFluidCapacity( CarFluid.OIL ) * toBeFilled.GetFluidFraction( CarFluid.OIL ));
						float coolantReq = toBeFilled.GetFluidCapacity( CarFluid.COOLANT ) - (toBeFilled.GetFluidCapacity( CarFluid.COOLANT ) * toBeFilled.GetFluidFraction( CarFluid.COOLANT ));
						float brakeReq = toBeFilled.GetFluidCapacity( CarFluid.BRAKE ) - (toBeFilled.GetFluidCapacity( CarFluid.BRAKE ) * toBeFilled.GetFluidFraction( CarFluid.BRAKE ));
						toBeFilled.Fill( CarFluid.FUEL, fuelReq );
						toBeFilled.Fill( CarFluid.OIL, oilReq );
						toBeFilled.Fill( CarFluid.COOLANT, coolantReq );
						toBeFilled.Fill( CarFluid.BRAKE, brakeReq );
						SendMessageToPlayer(player, "[Refuel] "+fuelReq+"L added, all fluids maxed");
					}
				}			
				
				break;
			}
				
			case "help": {

				SendMessageToPlayer(player, "Building shit");
		
				l = EntityAI.Cast(GetGame().CreateObject( "Seachest", player.GetPosition() + posModifier));
				GetGame().CreateObject("Woodenplank", player.GetPosition(), false, true );
			
				l.GetInventory().CreateInInventory("Hatchet");
				l.GetInventory().CreateInInventory("Pliers");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("Shovel");
				l.GetInventory().CreateInInventory("Nail");
				l.GetInventory().CreateInInventory("CombinationLock");
				l.GetInventory().CreateInInventory("MetalWire");
				l.GetInventory().CreateInInventory("DuctTape");
				l.GetInventory().CreateInInventory("DuctTape");
				l.GetInventory().CreateInInventory("DuctTape");
				l.GetInventory().CreateInInventory("DuctTape");
				l.GetInventory().CreateInInventory("FenceKit");
				l.GetInventory().CreateInInventory("WatchtowerKit");
				for ( int ia = 0; ia<20; ia++)
				GetGame().CreateObject("Woodenlog", player.GetPosition(), false, true );
				

				break;
			}

			case "save": {

				SendMessageToPlayer(player, "Building shit");
				for ( int ic = 0; ic<20; ic++)
				GetGame().CreateObject("BarbedWire", player.GetPosition(), false, true );
			
				break;
			}	

			case "info": {

				g = EntityAI.Cast(GetGame().CreateObject( "Seachest", player.GetPosition() + posModifier));
				g.GetInventory().CreateInInventory("GardenLime");
				g.GetInventory().CreateInInventory("GardenLime");
				g.GetInventory().CreateInInventory("CannabisSeedsPack");
				g.GetInventory().CreateInInventory("CannabisSeedsPack");
				g.GetInventory().CreateInInventory("CannabisSeedsPack");
				g.GetInventory().CreateInInventory("CannabisSeedsPack");
				g.GetInventory().CreateInInventory("CannabisSeedsPack");
				g.GetInventory().CreateInInventory("CannabisSeedsPack");
				g.GetInventory().CreateInInventory("PumpkinSeeds");
				g.GetInventory().CreateInInventory("PumpkinSeeds");
				g.GetInventory().CreateInInventory("PumpkinSeeds");
				g.GetInventory().CreateInInventory("PumpkinSeeds");
				g.GetInventory().CreateInInventory("PumpkinSeeds");
				g.GetInventory().CreateInInventory("PumpkinSeeds");				
				g.GetInventory().CreateInInventory("FarmingHoe");

			
				break;
						
			}
			
			case "test": {

			float playerAngler = MiscGameplayFunctions.GetHeadingAngle(player);
			vector posModifierA = Vector(-(12 * Math.Sin(playerAngler)), 0, 12 * Math.Cos(playerAngler));	
			vector posModifierB = Vector(-(4 * Math.Sin(playerAngler)), 0, 4 * Math.Cos(playerAngler));	


			TentBase Tent = GetGame().CreateObject("LargeTent", player.GetPosition()+ posModifierA);
			TentBase Tentd = GetGame().CreateObject("Seachest", player.GetPosition()+ posModifierA);
			TentBase Tente = GetGame().CreateObject("Seachest", player.GetPosition()+ posModifierA);
			
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");	
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");	
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_AKM_30Rnd");
				
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");
				Tente.GetInventory().CreateInInventory("Mag_STANAG_30Rnd");

				Tente.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
				Tente.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
				Tente.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
				Tente.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
	
				
				for ( int iab = 0; iab<14; iab++)
				Tentd.GetInventory().CreateInInventory("Armband_Red");
				for ( int ibc = 0; ibc<14; ibc++)
				Tentd.GetInventory().CreateInInventory("Armband_White");

			

			Tent.Pitch();
			EntityAI akm = Tent.GetInventory().CreateInInventory("AKM");
				akm.GetInventory().CreateAttachment("PSO1Optic");
				akm.GetInventory().CreateAttachment("AK_Suppressor");
				akm.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				akm.GetInventory().CreateAttachment("AK_FoldingBttstck_Black");
				akm.GetInventory().CreateAttachment("AK_RailHndgrd_Black");	
				akm.GetInventory().CreateAttachment("UniversalLight");	
				Tent.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd");
	

			EntityAI svd = Tent.GetInventory().CreateInInventory("SVD");
				svd.GetInventory().CreateAttachment("PSO1Optic");
				svd.GetInventory().CreateAttachment("ImprovisedSuppressor");
				svd.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				Tent.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
				Tent.GetInventory().CreateInInventory("Mag_SVD_10Rnd");	

			EntityAI m4 = Tent.GetInventory().CreateInInventory("M4A1");
				m4.GetInventory().CreateAttachment("ACOGOptic");
				m4.GetInventory().CreateAttachment("M4_Suppressor");
				m4.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				m4.GetInventory().CreateAttachment("M4_RISHndgrd_Black");
				m4.GetInventory().CreateAttachment("M4_CQBBttstck_Black");	
				m4.GetInventory().CreateAttachment("UniversalLight");	
				Tent.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");
				
				
			EntityAI akmb = Tent.GetInventory().CreateInInventory("AKM");
				akmb.GetInventory().CreateAttachment("PSO1Optic");
				akmb.GetInventory().CreateAttachment("AK_Suppressor");
				akmb.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				akmb.GetInventory().CreateAttachment("AK_FoldingBttstck_Black");
				akmb.GetInventory().CreateAttachment("AK_RailHndgrd_Black");	
				akmb.GetInventory().CreateAttachment("UniversalLight");	
				Tent.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd");
	

			EntityAI svdb = Tent.GetInventory().CreateInInventory("SVD");
				svdb.GetInventory().CreateAttachment("PSO1Optic");
				svdb.GetInventory().CreateAttachment("ImprovisedSuppressor");
				svdb.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				Tent.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
				Tent.GetInventory().CreateInInventory("Mag_SVD_10Rnd");	

			EntityAI m4b = Tent.GetInventory().CreateInInventory("M4A1");
				m4b.GetInventory().CreateAttachment("ACOGOptic");
				m4b.GetInventory().CreateAttachment("M4_Suppressor");
				m4b.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				m4b.GetInventory().CreateAttachment("M4_RISHndgrd_Black");
				m4b.GetInventory().CreateAttachment("M4_CQBBttstck_Black");	
				m4b.GetInventory().CreateAttachment("UniversalLight");	
				Tent.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");
					
				
			EntityAI akma = Tent.GetInventory().CreateInInventory("AKM");
				akma.GetInventory().CreateAttachment("PSO1Optic");
				akma.GetInventory().CreateAttachment("AK_Suppressor");
				akma.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				akma.GetInventory().CreateAttachment("AK_FoldingBttstck_Black");
				akma.GetInventory().CreateAttachment("AK_RailHndgrd_Black");	
				akma.GetInventory().CreateAttachment("UniversalLight");	
				Tent.GetInventory().CreateInInventory("Mag_AKM_Drum75Rnd");


			EntityAI svda = Tent.GetInventory().CreateInInventory("SVD");
				svda.GetInventory().CreateAttachment("PSO1Optic");
				svda.GetInventory().CreateAttachment("ImprovisedSuppressor");
				svda.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				Tent.GetInventory().CreateInInventory("Mag_SVD_10Rnd");
				Tent.GetInventory().CreateInInventory("Mag_SVD_10Rnd");	

			EntityAI m4a = Tent.GetInventory().CreateInInventory("M4A1");
				m4a.GetInventory().CreateAttachment("ACOGOptic");
				m4a.GetInventory().CreateAttachment("M4_Suppressor");
				m4a.GetInventory().CreateAttachment("GhillieAtt_Woodland");
				m4a.GetInventory().CreateAttachment("M4_RISHndgrd_Black");
				m4a.GetInventory().CreateAttachment("M4_CQBBttstck_Black");	
				m4a.GetInventory().CreateAttachment("UniversalLight");	
				Tent.GetInventory().CreateInInventory("Mag_STANAGCoupled_30Rnd");


			TentBase Tentb = GetGame().CreateObject("Cartent", player.GetPosition()+ posModifierB);

			Tentb.Pitch();				
				
				for ( int ih = 0; ih<6; ih++)
				Tentb.GetInventory().CreateInInventory("Canteen");
			
				for ( int ig = 0; ig<6; ig++)
				Tentb.GetInventory().CreateInInventory("TacticalBaconCan_Opened");
				
				Tentb.GetInventory().CreateInInventory("TTSKOPants");
				Tentb.GetInventory().CreateInInventory("TTsKOJacket_Camo");
				Tentb.GetInventory().CreateInInventory("TacticalGloves_Green");
				Tentb.GetInventory().CreateInInventory("PlateCarrierVest"); 
				Tentb.GetInventory().CreateInInventory("GhillieHood_Woodland");
				Tentb.GetInventory().CreateInInventory("GhillieSuit_Woodland");
				Tentb.GetInventory().CreateInInventory("BallisticHelmet_Green"); 
				Tentb.GetInventory().CreateInInventory("TTSKOPants");
				Tentb.GetInventory().CreateInInventory("TTsKOJacket_Camo");
				Tentb.GetInventory().CreateInInventory("TacticalGloves_Green");
				Tentb.GetInventory().CreateInInventory("PlateCarrierVest"); 
				Tentb.GetInventory().CreateInInventory("GhillieHood_Woodland");
				Tentb.GetInventory().CreateInInventory("GhillieSuit_Woodland");
				Tentb.GetInventory().CreateInInventory("BallisticHelmet_Green"); 
				Tentb.GetInventory().CreateInInventory("TTSKOPants");
				Tentb.GetInventory().CreateInInventory("TTsKOJacket_Camo");
				Tentb.GetInventory().CreateInInventory("TacticalGloves_Green");
				Tentb.GetInventory().CreateInInventory("PlateCarrierVest"); 
				Tentb.GetInventory().CreateInInventory("GhillieHood_Woodland");
				Tentb.GetInventory().CreateInInventory("GhillieSuit_Woodland");
				Tentb.GetInventory().CreateInInventory("BallisticHelmet_Green"); 
				
				
				TentBase Tentc = GetGame().CreateObject("seachest", player.GetPosition()+ posModifierB);
				
				for ( int il = 0; il<12; il++)
				Tentc.GetInventory().CreateInInventory("SalineBagIV");
				
				for ( int ik = 0; ik<6; ik++)
				Tentc.GetInventory().CreateInInventory("Rag");
			
				for ( int ij = 0; ij<12; ij++)
				Tentc.GetInventory().CreateInInventory("BloodBagFull");
				
				
				
				break;
						
			}			
				default: {
				SendMessageToPlayer(player, "Unknown command: " + command);
				break;
			}
		}
	}
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			int rndHlt = Math.RandomInt(55,100);
			itemEnt.SetHealth("","",rndHlt);
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");//Creates random player
		Class.CastTo(m_player, playerEnt);
		
		GetGame().SelectPlayer(identity, m_player);
		
		return m_player;
	}
	
	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
/*
		player.RemoveAllItems();

		EntityAI item = player.GetInventory().CreateInInventory(topsMissionArray.GetRandomElement());
		EntityAI item2 = player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
		EntityAI item3 = player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
*/
		EntityAI itemTop;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;
		
		itemTop = player.FindAttachmentBySlotName("Body");
		
		if ( itemTop )
		{
			itemEnt = itemTop.GetInventory().CreateInInventory("Rag");
			if ( Class.CastTo(itemBs, itemEnt ) )
				itemBs.SetQuantity(4);

			SetRandomHealth(itemEnt);
			
			itemEnt = itemTop.GetInventory().CreateInInventory("RoadFlare");
			SetRandomHealth(itemEnt);
		
			itemEnt = itemTop.GetInventory().CreateInInventory("StoneKnife");
			SetRandomHealth(itemEnt);
		}

		rand = Math.RandomFloatInclusive(0.0, 1.0);
		if ( rand < 0.25 )
			itemEnt = player.GetInventory().CreateInInventory("SodaCan_Cola");
		else if ( rand > 0.75 )
			itemEnt = player.GetInventory().CreateInInventory("SodaCan_Spite");
		else
			itemEnt = player.GetInventory().CreateInInventory("SodaCan_Pipsi");
		
		SetRandomHealth(itemEnt);

		rand = Math.RandomFloatInclusive(0.0, 1.0);
		if ( rand < 0.35 )
			itemEnt = player.GetInventory().CreateInInventory("Apple");
		else if ( rand > 0.65 )
			itemEnt = player.GetInventory().CreateInInventory("Pear");
		else
			itemEnt = player.GetInventory().CreateInInventory("Plum");
		
		SetRandomHealth(itemEnt);
	}
};
  
Mission CreateCustomMission(string path)
{
	return new CustomMission();
}