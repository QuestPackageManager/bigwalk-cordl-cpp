#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/AudioBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBuffer)
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct AudioBuffer;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::AudioBuffer);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::AudioBuffer, "Epic.OnlineServices.RTCAudio", "AudioBuffer");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.AudioBuffer
struct CORDL_TYPE AudioBuffer {
public:
// Declarations
 __declspec(property(get=get_Channels, put=set_Channels)) uint32_t  Channels;

 __declspec(property(get=get_Frames, put=set_Frames)) ::ArrayW<int16_t>  Frames;

 __declspec(property(get=get_SampleRate, put=set_SampleRate)) uint32_t  SampleRate;

/// @brief Method get_Channels, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Channels() ;

/// @brief Method get_Frames, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<int16_t> get_Frames() ;

/// @brief Method get_SampleRate, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_SampleRate() ;

/// @brief Method set_Channels, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_Channels(uint32_t  value) ;

/// @brief Method set_Frames, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Frames(::ArrayW<int16_t>  value) ;

/// @brief Method set_SampleRate, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_SampleRate(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioBuffer() ;

// Ctor Parameters [CppParam { name: "_Frames_k__BackingField", ty: "::ArrayW<int16_t>", modifiers: "", def_value: None }, CppParam { name: "_SampleRate_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Channels_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AudioBuffer(::ArrayW<int16_t>  _Frames_k__BackingField, uint32_t  _SampleRate_k__BackingField, uint32_t  _Channels_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Frames>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int16_t>  _Frames_k__BackingField;

/// @brief Field <SampleRate>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _SampleRate_k__BackingField;

/// @brief Field <Channels>k__BackingField, offset: 0xc, size: 0x4, def value: None
 uint32_t  _Channels_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBuffer, _Frames_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBuffer, _SampleRate_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCAudio::AudioBuffer, _Channels_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::AudioBuffer) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
