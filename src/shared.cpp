#include <chrono>

#include "nexus/Nexus.h"
#include "shared.h"

const char* ADDON_NAME = "Log Proofs";

AddonConfig defaultConfig = { true, false };
AddonConfig Config = defaultConfig;

AddonAPI* APIDefs = nullptr;
NexusLinkData* NexusLink = nullptr;

std::vector<Player> players;
std::string selfName;
Player self;