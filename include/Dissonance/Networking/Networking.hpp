#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Dissonance/Networking/BaseClientCollection_1.hpp"
#include "Dissonance/Networking/BaseClient_3.hpp"
#include "Dissonance/Networking/BaseCommsNetwork_5.hpp"
#include "Dissonance/Networking/BaseServer_3.hpp"
#include "Dissonance/Networking/ChannelBitField.hpp"
#include "Dissonance/Networking/ClientIdCollection.hpp"
#include "Dissonance/Networking/ClientInfo.hpp"
#include "Dissonance/Networking/ClientInfo_1.hpp"
#include "Dissonance/Networking/ConnectionStatus.hpp"
#include "Dissonance/Networking/IClientCollection_1.hpp"
#include "Dissonance/Networking/ICommsNetwork.hpp"
#include "Dissonance/Networking/ICommsNetworkState.hpp"
#include "Dissonance/Networking/IReadonlyClientIdCollection.hpp"
#include "Dissonance/Networking/MessageTypes.hpp"
#include "Dissonance/Networking/NetworkMode.hpp"
#include "Dissonance/Networking/NetworkModeExtensions.hpp"
#include "Dissonance/Networking/PacketReader.hpp"
#include "Dissonance/Networking/PacketWriter.hpp"
#include "Dissonance/Networking/RoomClientsCollection_1.hpp"
#include "Dissonance/Networking/RoomEvent.hpp"
#include "Dissonance/Networking/TextMessage.hpp"
#include "Dissonance/Networking/TextPacket.hpp"
#include "Dissonance/Networking/TrafficCounter.hpp"
#include "Dissonance/Networking/VoicePacket.hpp"
#ifdef __cpp_modules
                    export module Networking;
                    #endif
                
