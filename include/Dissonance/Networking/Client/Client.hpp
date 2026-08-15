#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Dissonance/Networking/Client/ClientStatus.hpp"
#include "Dissonance/Networking/Client/ConnectionNegotiator_1.hpp"
#include "Dissonance/Networking/Client/ConnectionState.hpp"
#include "Dissonance/Networking/Client/EventQueue.hpp"
#include "Dissonance/Networking/Client/IClient_1.hpp"
#include "Dissonance/Networking/Client/ISendQueue_1.hpp"
#include "Dissonance/Networking/Client/ISession.hpp"
#include "Dissonance/Networking/Client/IVoiceEventQueue.hpp"
#include "Dissonance/Networking/Client/OpenChannel.hpp"
#include "Dissonance/Networking/Client/PacketDelaySimulator.hpp"
#include "Dissonance/Networking/Client/PeerVoiceReceiver.hpp"
#include "Dissonance/Networking/Client/SendQueue_1.hpp"
#include "Dissonance/Networking/Client/SlaveClientCollection_1.hpp"
#include "Dissonance/Networking/Client/TextReceiver_1.hpp"
#include "Dissonance/Networking/Client/TextSender_1.hpp"
#include "Dissonance/Networking/Client/VoicePacketOptions.hpp"
#include "Dissonance/Networking/Client/VoiceReceiver_1.hpp"
#include "Dissonance/Networking/Client/VoiceSender_1.hpp"
#ifdef __cpp_modules
                    export module Client;
                    #endif
                
