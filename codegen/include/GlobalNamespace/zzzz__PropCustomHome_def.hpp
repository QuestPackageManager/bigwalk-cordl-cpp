#pragma once
// IWYU pragma private; include "GlobalNamespace/PropCustomHome.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropCustomHome)
// Forward declare root types
namespace GlobalNamespace {
struct PropCustomHome;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PropCustomHome);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropCustomHome, "", "PropCustomHome");
// Dependencies PropGroup, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: PropCustomHome
struct CORDL_TYPE PropCustomHome {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PropCustomHome() ;

// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr PropCustomHome(::GlobalNamespace::PropGroup  propGroup, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5577};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field propGroup, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  propGroup;

/// @brief Field position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropCustomHome, propGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropCustomHome, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropCustomHome, rotation) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropCustomHome) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
