#include "rankupmmr.h"
#include "bakkesmod/include/bakkesmod/wrappers/includes.h"
#include "bakkesmod/include/utils/parser.h"
BAKKESMOD_PLUGIN(RankUpMMRPlugin, "Rank UP MMR", "0.1", PLUGINTYPE_FREEPLAY | PLUGINTYPE_CUSTOM_TRAINING)
std::ofstream interaction_file;

void RankUpMMRPlugin::onLoad()
{
	gameWrapper->RegisterDrawable(std::bind(&RankUpMMRPlugin::Render, this, std::placeholders::_1));
}