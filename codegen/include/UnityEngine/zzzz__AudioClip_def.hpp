#pragma once
// IWYU pragma private; include "UnityEngine/AudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClip)
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::Audio {
struct AudioFormat;
}
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
class IAudioGenerator;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip_PCMSetPositionCallback;
}
namespace UnityEngine {
struct AudioDataLoadState;
}
// Forward declare root types
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioClip_PCMReaderCallback;
}
namespace UnityEngine {
class AudioClip_PCMSetPositionCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioClip*);
MARK_REF_T(::UnityEngine::AudioClip_PCMReaderCallback*);
MARK_REF_T(::UnityEngine::AudioClip_PCMSetPositionCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioClip*, "UnityEngine", "AudioClip");
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioClip_PCMReaderCallback*, "UnityEngine", "AudioClip/PCMReaderCallback");
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioClip_PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMReaderCallback
class CORDL_TYPE AudioClip_PCMReaderCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::ArrayW<float_t>  data) ;

static inline ::UnityEngine::AudioClip_PCMReaderCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClip_PCMReaderCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMReaderCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClip_PCMReaderCallback(AudioClip_PCMReaderCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMReaderCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClip_PCMReaderCallback(AudioClip_PCMReaderCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioClip_PCMReaderCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip/PCMSetPositionCallback
class CORDL_TYPE AudioClip_PCMSetPositionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(int32_t  position) ;

static inline ::UnityEngine::AudioClip_PCMSetPositionCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClip_PCMSetPositionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMSetPositionCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClip_PCMSetPositionCallback(AudioClip_PCMSetPositionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip_PCMSetPositionCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClip_PCMSetPositionCallback(AudioClip_PCMSetPositionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20464};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioClip_PCMSetPositionCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Audio.AudioResource
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioClip
class CORDL_TYPE AudioClip : public ::UnityEngine::Audio::AudioResource {
public:
// Declarations
using PCMReaderCallback = ::UnityEngine::AudioClip_PCMReaderCallback;

using PCMSetPositionCallback = ::UnityEngine::AudioClip_PCMSetPositionCallback;

 __declspec(property(get=UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite)) bool  UnityEngine_Audio_GeneratorInstance_ICapabilities_isFinite;

 __declspec(property(get=UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime)) bool  UnityEngine_Audio_GeneratorInstance_ICapabilities_isRealtime;

 __declspec(property(get=UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length)) ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>  UnityEngine_Audio_GeneratorInstance_ICapabilities_length;

 __declspec(property(get=get_channels)) int32_t  channels;

 __declspec(property(get=get_frequency)) int32_t  frequency;

 __declspec(property(get=get_length)) float_t  length;

 __declspec(property(get=get_loadState)) ::UnityEngine::AudioDataLoadState  loadState;

/// @brief Field m_PCMReaderCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PCMReaderCallback, put=__cordl_internal_set_m_PCMReaderCallback)) ::UnityEngine::AudioClip_PCMReaderCallback*  m_PCMReaderCallback;

/// @brief Field m_PCMSetPositionCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PCMSetPositionCallback, put=__cordl_internal_set_m_PCMSetPositionCallback)) ::UnityEngine::AudioClip_PCMSetPositionCallback*  m_PCMSetPositionCallback;

 __declspec(property(get=get_samples)) int32_t  samples;

/// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr operator  ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept;

/// @brief Convert operator to "::UnityEngine::Audio::IAudioGenerator"
constexpr operator  ::UnityEngine::Audio::IAudioGenerator*() noexcept;

/// @brief Method Construct_Internal, addr 0x182238840, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Construct_Internal() ;

/// @brief Method Construct_Internal_Injected, addr 0x182238830, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Construct_Internal_Injected() ;

/// @brief Method Create, addr 0x182238d40, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream) ;

/// @brief Method Create, addr 0x1822389c0, size 0x190, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream, ::UnityEngine::AudioClip_PCMReaderCallback*  pcmreadercallback) ;

/// @brief Method Create, addr 0x182238b50, size 0x1f0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Create(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream, ::UnityEngine::AudioClip_PCMReaderCallback*  pcmreadercallback, ::UnityEngine::AudioClip_PCMSetPositionCallback*  pcmsetpositioncallback) ;

/// @brief Method CreateUserSound, addr 0x182238870, size 0x150, virtual false, abstract: false, final false
inline void CreateUserSound(::StringW  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream) ;

/// @brief Method CreateUserSound_Injected, addr 0x182238860, size 0x10, virtual false, abstract: false, final false
static inline void CreateUserSound_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, int32_t  lengthSamples, int32_t  channels, int32_t  frequency, bool  stream) ;

/// @brief Method GetData, addr 0x182238f90, size 0xb0, virtual false, abstract: false, final false
static inline bool GetData(::UnityEngine::AudioClip*  clip, ::System::Span_1<float_t>  data, int32_t  samplesOffset) ;

/// @brief Method GetData, addr 0x182238e60, size 0x130, virtual false, abstract: false, final false
inline bool GetData(::ArrayW<float_t>  data, int32_t  offsetSamples) ;

/// @brief Method GetData_Injected, addr 0x182238e50, size 0x10, virtual false, abstract: false, final false
static inline bool GetData_Injected(::System::IntPtr  clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, int32_t  samplesOffset) ;

/// @brief Method GetName, addr 0x182239050, size 0xb0, virtual false, abstract: false, final false
inline ::StringW GetName() ;

/// @brief Method GetName_Injected, addr 0x182239040, size 0x10, virtual false, abstract: false, final false
static inline void GetName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method InvokePCMReaderCallback_Internal, addr 0x182239100, size 0x20, virtual false, abstract: false, final false
inline void InvokePCMReaderCallback_Internal(::ArrayW<float_t>  data) ;

/// @brief Method InvokePCMSetPositionCallback_Internal, addr 0x182239120, size 0x20, virtual false, abstract: false, final false
inline void InvokePCMSetPositionCallback_Internal(int32_t  position) ;

/// @brief Method LoadAudioData, addr 0x182239150, size 0x30, virtual false, abstract: false, final false
inline bool LoadAudioData() ;

/// @brief Method LoadAudioData_Injected, addr 0x182239140, size 0x10, virtual false, abstract: false, final false
static inline bool LoadAudioData_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::AudioClip* New_ctor() ;

/// @brief Method SetData, addr 0x182239330, size 0xb0, virtual false, abstract: false, final false
static inline bool SetData(::UnityEngine::AudioClip*  clip, ::System::ReadOnlySpan_1<float_t>  data, int32_t  samplesOffset) ;

/// @brief Method SetData, addr 0x182239190, size 0x1a0, virtual false, abstract: false, final false
inline bool SetData(::ArrayW<float_t>  data, int32_t  offsetSamples) ;

/// @brief Method SetData_Injected, addr 0x182239180, size 0x10, virtual false, abstract: false, final false
static inline bool SetData_Injected(::System::IntPtr  clip, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, int32_t  samplesOffset) ;

/// @brief Method UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isFinite, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final true
inline bool UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite() ;

/// @brief Method UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isRealtime, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final true
inline bool UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime() ;

/// @brief Method UnityEngine.Audio.GeneratorInstance.ICapabilities.get_length, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length() ;

/// @brief Method UnityEngine.Audio.IAudioGenerator.CreateInstance, addr 0x1805b4350, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::Audio::GeneratorInstance UnityEngine_Audio_IAudioGenerator_CreateInstance(::UnityEngine::Audio::ControlContext  context, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>  nestedFormat, ::UnityEngine::Audio::ProcessorInstance_CreationParameters  parameters) ;

/// @brief Method UnloadAudioData, addr 0x1822393f0, size 0x30, virtual false, abstract: false, final false
inline bool UnloadAudioData() ;

/// @brief Method UnloadAudioData_Injected, addr 0x1822393e0, size 0x10, virtual false, abstract: false, final false
static inline bool UnloadAudioData_Injected(::System::IntPtr  _unity_self) ;

constexpr ::UnityEngine::AudioClip_PCMReaderCallback* const& __cordl_internal_get_m_PCMReaderCallback() const;

constexpr ::UnityEngine::AudioClip_PCMReaderCallback*& __cordl_internal_get_m_PCMReaderCallback() ;

constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback* const& __cordl_internal_get_m_PCMSetPositionCallback() const;

constexpr ::UnityEngine::AudioClip_PCMSetPositionCallback*& __cordl_internal_get_m_PCMSetPositionCallback() ;

constexpr void __cordl_internal_set_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

constexpr void __cordl_internal_set_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value) ;

/// @brief Method .ctor, addr 0x182239420, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_m_PCMReaderCallback, addr 0x182239460, size 0x80, virtual false, abstract: false, final false
inline void add_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

/// @brief Method add_m_PCMSetPositionCallback, addr 0x1822394e0, size 0x80, virtual false, abstract: false, final false
inline void add_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value) ;

/// @brief Method get_channels, addr 0x182239570, size 0x30, virtual false, abstract: false, final false
inline int32_t get_channels() ;

/// @brief Method get_channels_Injected, addr 0x182239560, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_channels_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_frequency, addr 0x1822395b0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_frequency() ;

/// @brief Method get_frequency_Injected, addr 0x1822395a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_frequency_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_length, addr 0x1822395f0, size 0x30, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method get_length_Injected, addr 0x1822395e0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_length_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_loadState, addr 0x182239630, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::AudioDataLoadState get_loadState() ;

/// @brief Method get_loadState_Injected, addr 0x182239620, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioDataLoadState get_loadState_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_samples, addr 0x182239670, size 0x30, virtual false, abstract: false, final false
inline int32_t get_samples() ;

/// @brief Method get_samples_Injected, addr 0x182239660, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_samples_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept;

/// @brief Convert to "::UnityEngine::Audio::IAudioGenerator"
constexpr ::UnityEngine::Audio::IAudioGenerator* i___UnityEngine__Audio__IAudioGenerator() noexcept;

/// @brief Method remove_m_PCMReaderCallback, addr 0x1822396a0, size 0x80, virtual false, abstract: false, final false
inline void remove_m_PCMReaderCallback(::UnityEngine::AudioClip_PCMReaderCallback*  value) ;

/// @brief Method remove_m_PCMSetPositionCallback, addr 0x182239720, size 0x80, virtual false, abstract: false, final false
inline void remove_m_PCMSetPositionCallback(::UnityEngine::AudioClip_PCMSetPositionCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClip(AudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClip(AudioClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20465};

/// @brief Field m_PCMReaderCallback, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AudioClip_PCMReaderCallback*  ___m_PCMReaderCallback;

/// @brief Field m_PCMSetPositionCallback, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::AudioClip_PCMSetPositionCallback*  ___m_PCMSetPositionCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMReaderCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AudioClip, ___m_PCMSetPositionCallback) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AudioClip) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine
