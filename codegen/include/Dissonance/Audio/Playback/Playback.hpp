#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Dissonance/Audio/Playback/BaseVoicePlayback.hpp"
#include "Dissonance/Audio/Playback/BufferedDecoder.hpp"
#include "Dissonance/Audio/Playback/DecoderFactory.hpp"
#include "Dissonance/Audio/Playback/DecoderPipeline.hpp"
#include "Dissonance/Audio/Playback/DecoderPipelinePool.hpp"
#include "Dissonance/Audio/Playback/DesyncCalculator.hpp"
#include "Dissonance/Audio/Playback/EncodedAudioBuffer.hpp"
#include "Dissonance/Audio/Playback/FrameFormat.hpp"
#include "Dissonance/Audio/Playback/FrameToSampleConverter.hpp"
#include "Dissonance/Audio/Playback/IDecoderPipeline.hpp"
#include "Dissonance/Audio/Playback/IFrameSource.hpp"
#include "Dissonance/Audio/Playback/IJitterEstimator.hpp"
#include "Dissonance/Audio/Playback/IPriorityManager.hpp"
#include "Dissonance/Audio/Playback/IRateProvider.hpp"
#include "Dissonance/Audio/Playback/IRemoteChannelProvider.hpp"
#include "Dissonance/Audio/Playback/ISampleSource.hpp"
#include "Dissonance/Audio/Playback/IVoicePlayback.hpp"
#include "Dissonance/Audio/Playback/IVoicePlaybackInternal.hpp"
#include "Dissonance/Audio/Playback/IVolumeProvider.hpp"
#include "Dissonance/Audio/Playback/PlaybackOptions.hpp"
#include "Dissonance/Audio/Playback/PriorityManager.hpp"
#include "Dissonance/Audio/Playback/Resampler.hpp"
#include "Dissonance/Audio/Playback/SamplePlaybackComponent.hpp"
#include "Dissonance/Audio/Playback/SessionContext.hpp"
#include "Dissonance/Audio/Playback/SoftClipSampleSource.hpp"
#include "Dissonance/Audio/Playback/SpeechSession.hpp"
#include "Dissonance/Audio/Playback/SpeechSessionStream.hpp"
#include "Dissonance/Audio/Playback/SyncState.hpp"
#include "Dissonance/Audio/Playback/SynchronizerSampleSource.hpp"
#include "Dissonance/Audio/Playback/VoicePlayback.hpp"
#include "Dissonance/Audio/Playback/VolumeRampedFrameSource.hpp"
#ifdef __cpp_modules
                    export module Playback;
                    #endif
                
