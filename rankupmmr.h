#pragma once
#pragma comment( lib, "bakkesmod.lib" )

#include "bakkesmod/include/bakkesmod/plugin/bakkesmodplugin.h"
#include "bakkesmod/include/bakkesmod/wrappers/MMRWrapper.h"


class RankUpMMRPlugin : public BakkesMod::Plugin::BakkesModPlugin
{
public:

float GetPlayerMMR(SteamID playerID, int playlistID);
int GetCurrentPlaylist();

private:
	PIMPL
};