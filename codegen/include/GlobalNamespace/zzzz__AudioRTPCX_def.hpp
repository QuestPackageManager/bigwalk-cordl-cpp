#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPCX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AudioRTPCX)
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioRTPCX;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioRTPCX);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPCX, "", "AudioRTPCX");
// Dependencies AudioRTPC::XAxisType
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioRTPCX
struct CORDL_TYPE AudioRTPCX {
public:
// Declarations
/// @brief Method .ctor, addr 0x18048c7f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioRTPC_XAxisType  type, float_t  val) ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPCX() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::AudioRTPC_XAxisType", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None }]
constexpr AudioRTPCX(::GlobalNamespace::AudioRTPC_XAxisType  Type, float_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17554};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_XAxisType  Type;

/// @brief Field Value, offset: 0x4, size: 0x4, def value: None
 float_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPCX, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPCX, Value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPCX) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
