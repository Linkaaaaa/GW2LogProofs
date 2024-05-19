#include <chrono>
#include <mutex>

#include "nexus/Nexus.h"
#include "shared.h"

const char* ADDON_NAME = "Log Proofs";
const char* SHOW_ADDON_KEYBIND = "Toggle Show Addon";

AddonConfig defaultConfig = { true };
AddonConfig Config = defaultConfig;

AddonAPI* APIDefs = nullptr;
NexusLinkData* NexusLink = nullptr;

std::mutex playerMutex;
std::vector<Player> players;
std::string selfName;
Player self;
