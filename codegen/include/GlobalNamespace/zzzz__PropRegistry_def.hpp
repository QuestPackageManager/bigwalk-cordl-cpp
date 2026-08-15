#pragma once
// IWYU pragma private; include "GlobalNamespace/PropRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PropRegistry)
namespace GlobalNamespace {
class AnimMoment;
}
// Forward declare root types
namespace GlobalNamespace {
struct PropRegistry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PropRegistry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropRegistry, "", "PropRegistry");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropRegistry
struct CORDL_TYPE PropRegistry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropRegistry() ;

// Ctor Parameters [CppParam { name: "textStrokeAnimation", ty: "::UnityW<::GlobalNamespace::AnimMoment>", modifiers: "", def_value: None }, CppParam { name: "textEraseAnimation", ty: "::UnityW<::GlobalNamespace::AnimMoment>", modifiers: "", def_value: None }]
constexpr PropRegistry(::UnityW<::GlobalNamespace::AnimMoment>  textStrokeAnimation, ::UnityW<::GlobalNamespace::AnimMoment>  textEraseAnimation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field textStrokeAnimation, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimMoment>  textStrokeAnimation;

/// @brief Field textEraseAnimation, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimMoment>  textEraseAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropRegistry, textStrokeAnimation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropRegistry, textEraseAnimation) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropRegistry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
