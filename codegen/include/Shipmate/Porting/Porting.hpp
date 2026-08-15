#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Shipmate/Porting/AbstractPlatformAchievements.hpp"
#include "Shipmate/Porting/AbstractPlatformCore.hpp"
#include "Shipmate/Porting/AbstractPlatformLeaderboards.hpp"
#include "Shipmate/Porting/AbstractPlatformLobby.hpp"
#include "Shipmate/Porting/AbstractPlatformLogic.hpp"
#include "Shipmate/Porting/AbstractPlatformManager_1.hpp"
#include "Shipmate/Porting/AbstractPlatformMarketplace.hpp"
#include "Shipmate/Porting/AbstractPlatformRichPresence.hpp"
#include "Shipmate/Porting/AbstractPlatformStorage.hpp"
#include "Shipmate/Porting/AbstractPlatformUsers.hpp"
#include "Shipmate/Porting/AbstractPlayablePlatform.hpp"
#include "Shipmate/Porting/AuthException.hpp"
#include "Shipmate/Porting/AuthTypes.hpp"
#include "Shipmate/Porting/BaseAuthValues.hpp"
#include "Shipmate/Porting/CreateLobbyException.hpp"
#include "Shipmate/Porting/DirectoryFileInfo.hpp"
#include "Shipmate/Porting/EFileEntryType.hpp"
#include "Shipmate/Porting/ELeaderboardType.hpp"
#include "Shipmate/Porting/EPlatformAchievement.hpp"
#include "Shipmate/Porting/EStorageType.hpp"
#include "Shipmate/Porting/EUserFetchingType.hpp"
#include "Shipmate/Porting/GetPlayerRankResponse.hpp"
#include "Shipmate/Porting/IPlatformAddon.hpp"
#include "Shipmate/Porting/JoinLobbyException.hpp"
#include "Shipmate/Porting/KeyboardContent.hpp"
#include "Shipmate/Porting/LobbyData.hpp"
#include "Shipmate/Porting/MarketplaceDurable.hpp"
#include "Shipmate/Porting/PlatformLeaderboardEntry.hpp"
#include "Shipmate/Porting/PlatformLeaderboardException.hpp"
#include "Shipmate/Porting/PlatformManager.hpp"
#include "Shipmate/Porting/SecondaryPlatformManager.hpp"
#include "Shipmate/Porting/StorageException.hpp"
#include "Shipmate/Porting/VirtualKeyboardShowType.hpp"
#ifdef __cpp_modules
                    export module Porting;
                    #endif
                
