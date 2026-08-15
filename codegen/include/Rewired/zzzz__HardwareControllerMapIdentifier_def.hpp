#pragma once
// IWYU pragma private; include "Rewired/HardwareControllerMapIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__InputPlatform_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareControllerMapIdentifier)
namespace Rewired {
struct InputPlatform;
}
namespace Rewired {
struct InputSource;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
struct HardwareControllerMapIdentifier;
}
// Write type traits
MARK_VAL_T(::Rewired::HardwareControllerMapIdentifier);
DEFINE_IL2CPP_CLASS(::Rewired::HardwareControllerMapIdentifier, "Rewired", "HardwareControllerMapIdentifier");
// Dependencies Rewired.InputPlatform, Rewired.InputSource, System.Guid
namespace Rewired {
// Is value type: true
// CS Name: Rewired.HardwareControllerMapIdentifier
struct CORDL_TYPE HardwareControllerMapIdentifier {
public:
// Declarations
/// @brief Method Matches, addr 0x181843220, size 0x70, virtual false, abstract: false, final false
static inline bool Matches(::Rewired::HardwareControllerMapIdentifier  a, ::Rewired::HardwareControllerMapIdentifier  b) ;

/// @brief Method .ctor, addr 0x181843290, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::InputPlatform  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

// Ctor Parameters []
// @brief default ctor
constexpr HardwareControllerMapIdentifier() ;

// Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "inputSource", ty: "::Rewired::InputSource", modifiers: "", def_value: None }, CppParam { name: "actualInputPlatform", ty: "::Rewired::InputPlatform", modifiers: "", def_value: None }, CppParam { name: "variantIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HardwareControllerMapIdentifier(::System::Guid  guid, ::Rewired::InputSource  inputSource, ::Rewired::InputPlatform  actualInputPlatform, int32_t  variantIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field guid, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  guid;

/// @brief Field inputSource, offset: 0x10, size: 0x4, def value: None
 ::Rewired::InputSource  inputSource;

/// @brief Field actualInputPlatform, offset: 0x14, size: 0x4, def value: None
 ::Rewired::InputPlatform  actualInputPlatform;

/// @brief Field variantIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  variantIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HardwareControllerMapIdentifier, guid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMapIdentifier, inputSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMapIdentifier, actualInputPlatform) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareControllerMapIdentifier, variantIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::HardwareControllerMapIdentifier) == 0x1c, "Size mismatch!");

} // namespace end def Rewired
