#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Mirror/SimpleWeb/ArrayBuffer.hpp"
#include "Mirror/SimpleWeb/BufferBucket.hpp"
#include "Mirror/SimpleWeb/BufferPool.hpp"
#include "Mirror/SimpleWeb/ClientHandshake.hpp"
#include "Mirror/SimpleWeb/ClientSslHelper.hpp"
#include "Mirror/SimpleWeb/ClientState.hpp"
#include "Mirror/SimpleWeb/Connection.hpp"
#include "Mirror/SimpleWeb/Constants.hpp"
#include "Mirror/SimpleWeb/EventType.hpp"
#include "Mirror/SimpleWeb/IBufferOwner.hpp"
#include "Mirror/SimpleWeb/Log.hpp"
#include "Mirror/SimpleWeb/MaskHelper.hpp"
#include "Mirror/SimpleWeb/Message.hpp"
#include "Mirror/SimpleWeb/MessageProcessor.hpp"
#include "Mirror/SimpleWeb/ReadHelper.hpp"
#include "Mirror/SimpleWeb/ReadHelperException.hpp"
#include "Mirror/SimpleWeb/ReceiveLoop.hpp"
#include "Mirror/SimpleWeb/SendLoop.hpp"
#include "Mirror/SimpleWeb/SendLoopConfig.hpp"
#include "Mirror/SimpleWeb/ServerHandshake.hpp"
#include "Mirror/SimpleWeb/ServerSslHelper.hpp"
#include "Mirror/SimpleWeb/SimpleWebClient.hpp"
#include "Mirror/SimpleWeb/SimpleWebJSLib.hpp"
#include "Mirror/SimpleWeb/SimpleWebServer.hpp"
#include "Mirror/SimpleWeb/SimpleWebTransport.hpp"
#include "Mirror/SimpleWeb/SslConfig.hpp"
#include "Mirror/SimpleWeb/SslConfigLoader.hpp"
#include "Mirror/SimpleWeb/TcpConfig.hpp"
#include "Mirror/SimpleWeb/Utils.hpp"
#include "Mirror/SimpleWeb/WebSocketClientStandAlone.hpp"
#include "Mirror/SimpleWeb/WebSocketClientWebGl.hpp"
#include "Mirror/SimpleWeb/WebSocketServer.hpp"
#ifdef __cpp_modules
                    export module SimpleWeb;
                    #endif
                
