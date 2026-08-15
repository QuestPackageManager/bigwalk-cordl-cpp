#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoiceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoiceProvider)
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace GlobalNamespace {
class IVoiceDataProvider;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalVoiceProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalVoiceProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalVoiceProvider*, "", "LocalVoiceProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalVoiceProvider
class CORDL_TYPE LocalVoiceProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CachedVoiceData, put=set_CachedVoiceData)) ::ArrayW<float_t>  CachedVoiceData;

 __declspec(property(get=get_CachedVoiceWriteHead, put=set_CachedVoiceWriteHead)) int32_t  CachedVoiceWriteHead;

/// @brief Field OnWriteHeadJump, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnWriteHeadJump, put=__cordl_internal_set_OnWriteHeadJump)) ::System::Action*  OnWriteHeadJump;

 __declspec(property(get=get_RecommendedVoiceReadHead)) int32_t  RecommendedVoiceReadHead;

/// @brief Field <CachedVoiceData>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachedVoiceData_k__BackingField, put=__cordl_internal_set__CachedVoiceData_k__BackingField)) ::ArrayW<float_t>  _CachedVoiceData_k__BackingField;

/// @brief Field <CachedVoiceWriteHead>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__CachedVoiceWriteHead_k__BackingField, put=__cordl_internal_set__CachedVoiceWriteHead_k__BackingField)) int32_t  _CachedVoiceWriteHead_k__BackingField;

/// @brief Field _buferrNum, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__buferrNum, put=__cordl_internal_set__buferrNum)) int32_t  _buferrNum;

/// @brief Field _bufferLength, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferLength, put=__cordl_internal_set__bufferLength)) int32_t  _bufferLength;

/// @brief Field _channelCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__channelCount, put=__cordl_internal_set__channelCount)) int32_t  _channelCount;

/// @brief Field _firstBufferReceived, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__firstBufferReceived, put=__cordl_internal_set__firstBufferReceived)) bool  _firstBufferReceived;

/// @brief Field _format, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::NAudio::Wave::WaveFormat*  _format;

/// @brief Field _onWriteHeadJump, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__onWriteHeadJump, put=__cordl_internal_set__onWriteHeadJump)) bool  _onWriteHeadJump;

/// @brief Field _reset, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__reset, put=__cordl_internal_set__reset)) bool  _reset;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVoiceDataProvider"
constexpr operator  ::GlobalNamespace::IVoiceDataProvider*() noexcept;

/// @brief Method Awake, addr 0x1803d49b0, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData, addr 0x1803d4a40, size 0x1a0, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset, addr 0x1803d4be0, size 0xd0, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset() ;

static inline ::GlobalNamespace::LocalVoiceProvider* New_ctor() ;

/// @brief Method ResetAudioProcessing, addr 0x1803d4cb0, size 0x60, virtual false, abstract: false, final false
inline void ResetAudioProcessing() ;

/// @brief Method Start, addr 0x180394f80, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803d4d10, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action* const& __cordl_internal_get_OnWriteHeadJump() const;

constexpr ::System::Action*& __cordl_internal_get_OnWriteHeadJump() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__CachedVoiceData_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__CachedVoiceData_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CachedVoiceWriteHead_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CachedVoiceWriteHead_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__buferrNum() const;

constexpr int32_t& __cordl_internal_get__buferrNum() ;

constexpr int32_t const& __cordl_internal_get__bufferLength() const;

constexpr int32_t& __cordl_internal_get__bufferLength() ;

constexpr int32_t const& __cordl_internal_get__channelCount() const;

constexpr int32_t& __cordl_internal_get__channelCount() ;

constexpr bool const& __cordl_internal_get__firstBufferReceived() const;

constexpr bool& __cordl_internal_get__firstBufferReceived() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__format() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__format() ;

constexpr bool const& __cordl_internal_get__onWriteHeadJump() const;

constexpr bool& __cordl_internal_get__onWriteHeadJump() ;

constexpr bool const& __cordl_internal_get__reset() const;

constexpr bool& __cordl_internal_get__reset() ;

constexpr void __cordl_internal_set_OnWriteHeadJump(::System::Action*  value) ;

constexpr void __cordl_internal_set__CachedVoiceData_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__CachedVoiceWriteHead_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__buferrNum(int32_t  value) ;

constexpr void __cordl_internal_set__bufferLength(int32_t  value) ;

constexpr void __cordl_internal_set__channelCount(int32_t  value) ;

constexpr void __cordl_internal_set__firstBufferReceived(bool  value) ;

constexpr void __cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__onWriteHeadJump(bool  value) ;

constexpr void __cordl_internal_set__reset(bool  value) ;

/// @brief Method .ctor, addr 0x1803d4d40, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnWriteHeadJump, addr 0x1803d4d50, size 0x80, virtual true, abstract: false, final true
inline void add_OnWriteHeadJump(::System::Action*  value) ;

/// @brief Method get_CachedVoiceData, addr 0x1802e5850, size 0x10, virtual true, abstract: false, final true
inline ::ArrayW<float_t> get_CachedVoiceData() ;

/// @brief Method get_CachedVoiceWriteHead, addr 0x1803d4dd0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_CachedVoiceWriteHead() ;

/// @brief Method get_RecommendedVoiceReadHead, addr 0x1803d4de0, size 0x40, virtual true, abstract: false, final true
inline int32_t get_RecommendedVoiceReadHead() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept;

/// @brief Convert to "::GlobalNamespace::IVoiceDataProvider"
constexpr ::GlobalNamespace::IVoiceDataProvider* i___GlobalNamespace__IVoiceDataProvider() noexcept;

/// @brief Method remove_OnWriteHeadJump, addr 0x1803d4e20, size 0x80, virtual true, abstract: false, final true
inline void remove_OnWriteHeadJump(::System::Action*  value) ;

/// @brief Method set_CachedVoiceData, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_CachedVoiceData(::ArrayW<float_t>  value) ;

/// @brief Method set_CachedVoiceWriteHead, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_CachedVoiceWriteHead(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoiceProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoiceProvider(LocalVoiceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoiceProvider(LocalVoiceProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4847};

/// @brief Field _format, offset: 0x20, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____format;

/// @brief Field _reset, offset: 0x28, size: 0x1, def value: None
 bool  ____reset;

/// @brief Field _channelCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____channelCount;

/// @brief Field _bufferLength, offset: 0x30, size: 0x4, def value: None
 int32_t  ____bufferLength;

/// @brief Field _buferrNum, offset: 0x34, size: 0x4, def value: None
 int32_t  ____buferrNum;

/// @brief Field _firstBufferReceived, offset: 0x38, size: 0x1, def value: None
 bool  ____firstBufferReceived;

/// @brief Field _onWriteHeadJump, offset: 0x39, size: 0x1, def value: None
 bool  ____onWriteHeadJump;

/// @brief Field <CachedVoiceData>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____CachedVoiceData_k__BackingField;

/// @brief Field <CachedVoiceWriteHead>k__BackingField, offset: 0x48, size: 0x4, def value: None
 int32_t  ____CachedVoiceWriteHead_k__BackingField;

/// @brief Field OnWriteHeadJump, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnWriteHeadJump;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____format) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____reset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____channelCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____bufferLength) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____buferrNum) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____firstBufferReceived) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____onWriteHeadJump) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____CachedVoiceData_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ____CachedVoiceWriteHead_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceProvider, ___OnWriteHeadJump) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalVoiceProvider) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
