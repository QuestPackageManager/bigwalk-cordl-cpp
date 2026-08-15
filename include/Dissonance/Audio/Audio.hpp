#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Dissonance/Audio/AecDiagnostics.hpp"
#include "Dissonance/Audio/ArvCalculator.hpp"
#include "Dissonance/Audio/AudioFileWriter.hpp"
#include "Dissonance/Audio/AudioSettingsWatcher.hpp"
#include "Dissonance/Audio/Fader.hpp"
#include "Dissonance/Audio/OpenChannelVolumeDuck.hpp"
#ifdef __cpp_modules
                    export module Audio;
                    #endif
                
