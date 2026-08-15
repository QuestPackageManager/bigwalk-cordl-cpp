#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Mirror/Authenticators/BasicAuthenticator.hpp"
#include "Mirror/Authenticators/DeviceAuthenticator.hpp"
#include "Mirror/Authenticators/HouseAuthenticator.hpp"
#include "Mirror/Authenticators/TimeoutAuthenticator.hpp"
#ifdef __cpp_modules
                    export module Authenticators;
                    #endif
                
