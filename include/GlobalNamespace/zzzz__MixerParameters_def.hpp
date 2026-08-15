#pragma once
// IWYU pragma private; include "GlobalNamespace/MixerParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MixerParameters)
// Forward declare root types
namespace GlobalNamespace {
class MixerParameters;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MixerParameters*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MixerParameters*, "", "MixerParameters");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MixerParameters
class CORDL_TYPE MixerParameters : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerParameters(MixerParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerParameters(MixerParameters const& ) = delete;

/// @brief Field DECAY_HF_RATIO offset 0xffffffff size 0x8
static constexpr ::ConstString  DECAY_HF_RATIO{u"DecayHFRatio"};

/// @brief Field DECAY_TIME offset 0xffffffff size 0x8
static constexpr ::ConstString  DECAY_TIME{u"DecayTime"};

/// @brief Field DENSITY offset 0xffffffff size 0x8
static constexpr ::ConstString  DENSITY{u"Density"};

/// @brief Field DIFFUSION offset 0xffffffff size 0x8
static constexpr ::ConstString  DIFFUSION{u"Diffusion"};

/// @brief Field DRY_LEVEL offset 0xffffffff size 0x8
static constexpr ::ConstString  DRY_LEVEL{u"DryLevel"};

/// @brief Field ECHO_CHANNELS offset 0xffffffff size 0x8
static constexpr ::ConstString  ECHO_CHANNELS{u"EchoChannels"};

/// @brief Field ECHO_DECAY offset 0xffffffff size 0x8
static constexpr ::ConstString  ECHO_DECAY{u"EchoDecay"};

/// @brief Field ECHO_DELAY offset 0xffffffff size 0x8
static constexpr ::ConstString  ECHO_DELAY{u"EchoDelay"};

/// @brief Field ECHO_DRY offset 0xffffffff size 0x8
static constexpr ::ConstString  ECHO_DRY{u"EchoDry"};

/// @brief Field ECHO_WET offset 0xffffffff size 0x8
static constexpr ::ConstString  ECHO_WET{u"EchoWet"};

/// @brief Field HF_REFERENCE offset 0xffffffff size 0x8
static constexpr ::ConstString  HF_REFERENCE{u"HFReference"};

/// @brief Field LF_REFERENCE offset 0xffffffff size 0x8
static constexpr ::ConstString  LF_REFERENCE{u"LFReference"};

/// @brief Field REFLECTIONS offset 0xffffffff size 0x8
static constexpr ::ConstString  REFLECTIONS{u"Reflections"};

/// @brief Field REFLECT_DELAY offset 0xffffffff size 0x8
static constexpr ::ConstString  REFLECT_DELAY{u"ReflectDelay"};

/// @brief Field REVERB offset 0xffffffff size 0x8
static constexpr ::ConstString  REVERB{u"Reverb"};

/// @brief Field REVERB_DELAY offset 0xffffffff size 0x8
static constexpr ::ConstString  REVERB_DELAY{u"ReverbDelay"};

/// @brief Field ROOM offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM{u"Room"};

/// @brief Field ROOM_HF offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_HF{u"RoomHF"};

/// @brief Field ROOM_LF offset 0xffffffff size 0x8
static constexpr ::ConstString  ROOM_LF{u"RoomLF"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17504};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MixerParameters) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
