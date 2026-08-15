#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Dissonance/Audio/Capture/AecSuppressionLevels.hpp"
#include "Dissonance/Audio/Capture/AecmRoutingMode.hpp"
#include "Dissonance/Audio/Capture/AudioPluginDissonanceNative.hpp"
#include "Dissonance/Audio/Capture/BasePreprocessingPipeline.hpp"
#include "Dissonance/Audio/Capture/BasicMicrophoneCapture.hpp"
#include "Dissonance/Audio/Capture/BufferedSampleProvider.hpp"
#include "Dissonance/Audio/Capture/CapturePipelineManager.hpp"
#include "Dissonance/Audio/Capture/EmptyPreprocessingPipeline.hpp"
#include "Dissonance/Audio/Capture/EncoderPipeline.hpp"
#include "Dissonance/Audio/Capture/IAmplitudeProvider.hpp"
#include "Dissonance/Audio/Capture/IChannelPriorityProvider.hpp"
#include "Dissonance/Audio/Capture/IFrameProvider.hpp"
#include "Dissonance/Audio/Capture/IMicrophoneCapture.hpp"
#include "Dissonance/Audio/Capture/IMicrophoneDeviceList.hpp"
#include "Dissonance/Audio/Capture/IMicrophoneSubscriber.hpp"
#include "Dissonance/Audio/Capture/IPreprocessingPipeline.hpp"
#include "Dissonance/Audio/Capture/NoiseSuppressionLevels.hpp"
#include "Dissonance/Audio/Capture/Resampler.hpp"
#include "Dissonance/Audio/Capture/SampleToFrameProvider.hpp"
#include "Dissonance/Audio/Capture/SineSampleProvider.hpp"
#include "Dissonance/Audio/Capture/VadSensitivityLevels.hpp"
#include "Dissonance/Audio/Capture/WebRtcPreprocessingPipeline.hpp"
#ifdef __cpp_modules
                    export module Capture;
                    #endif
                
