#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "System/Net/NetworkInformation/IPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/IPGlobalPropertiesFactoryPal.hpp"
#include "System/Net/NetworkInformation/NetBiosNodeType.hpp"
#include "System/Net/NetworkInformation/NetworkInterfaceComponent.hpp"
#include "System/Net/NetworkInformation/UnixIPGlobalPropertiesFactoryPal.hpp"
#include "System/Net/NetworkInformation/Win32IPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/Win32IPGlobalPropertiesFactoryPal.hpp"
#include "System/Net/NetworkInformation/Win32NetworkInterface.hpp"
#include "System/Net/NetworkInformation/Win32_FIXED_INFO.hpp"
#include "System/Net/NetworkInformation/Win32_FIXED_INFO_Marshal.hpp"
#include "System/Net/NetworkInformation/Win32_IP_ADDR_STRING.hpp"
#ifdef __cpp_modules
                    export module NetworkInformation;
                    #endif
                
