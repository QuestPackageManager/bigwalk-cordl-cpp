#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/AecmRoutingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AecmRoutingMode)
// Forward declare root types
namespace Dissonance::Audio::Capture {
struct AecmRoutingMode;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Capture::AecmRoutingMode);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::AecmRoutingMode, "Dissonance.Audio.Capture", "AecmRoutingMode");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: true
// CS Name: Dissonance.Audio.Capture.AecmRoutingMode
struct CORDL_TYPE AecmRoutingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AecmRoutingMode_Unwrapped
enum struct __AecmRoutingMode_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0xffffffff),
__E_QuietEarpieceOrHeadset = static_cast<int32_t>(0x0),
__E_Earpiece = static_cast<int32_t>(0x1),
__E_LoudEarpiece = static_cast<int32_t>(0x2),
__E_Speakerphone = static_cast<int32_t>(0x3),
__E_LoudSpeakerphone = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AecmRoutingMode_Unwrapped () const noexcept {
return static_cast<__AecmRoutingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AecmRoutingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AecmRoutingMode(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(-1)
static ::Dissonance::Audio::Capture::AecmRoutingMode const Disabled;

/// @brief Field Earpiece value: I32(1)
static ::Dissonance::Audio::Capture::AecmRoutingMode const Earpiece;

/// @brief Field LoudEarpiece value: I32(2)
static ::Dissonance::Audio::Capture::AecmRoutingMode const LoudEarpiece;

/// @brief Field LoudSpeakerphone value: I32(4)
static ::Dissonance::Audio::Capture::AecmRoutingMode const LoudSpeakerphone;

/// @brief Field QuietEarpieceOrHeadset value: I32(0)
static ::Dissonance::Audio::Capture::AecmRoutingMode const QuietEarpieceOrHeadset;

/// @brief Field Speakerphone value: I32(3)
static ::Dissonance::Audio::Capture::AecmRoutingMode const Speakerphone;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17016};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::AecmRoutingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::AecmRoutingMode) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
