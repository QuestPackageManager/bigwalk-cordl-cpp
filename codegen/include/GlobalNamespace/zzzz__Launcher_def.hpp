#pragma once
// IWYU pragma private; include "GlobalNamespace/Launcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Launcher)
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct Launcher;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Launcher);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Launcher, "", "Launcher");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Launcher
struct CORDL_TYPE Launcher {
public:
// Declarations
/// @brief Method Launch, addr 0x180445ed0, size 0x510, virtual false, abstract: false, final false
inline void Launch(::GlobalNamespace::Prop*  prop) ;

// Ctor Parameters []
// @brief default ctor
constexpr Launcher() ;

// Ctor Parameters [CppParam { name: "justDrop", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "baseStrength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "aim", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "directionRandomOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "torque", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "launchFromHere", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "copyRotation", ty: "bool", modifiers: "", def_value: None }]
constexpr Launcher(bool  justDrop, float_t  baseStrength, ::UnityW<::UnityEngine::Transform>  aim, float_t  directionRandomOffset, ::UnityEngine::Vector3  torque, ::UnityW<::UnityEngine::Transform>  launchFromHere, bool  copyRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field justDrop, offset: 0x0, size: 0x1, def value: None
 bool  justDrop;

/// @brief Field baseStrength, offset: 0x4, size: 0x4, def value: None
 float_t  baseStrength;

/// @brief Field aim, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  aim;

/// @brief Field directionRandomOffset, offset: 0x10, size: 0x4, def value: None
 float_t  directionRandomOffset;

/// @brief Field torque, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  torque;

/// @brief Field launchFromHere, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  launchFromHere;

/// @brief Field copyRotation, offset: 0x28, size: 0x1, def value: None
 bool  copyRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Launcher, justDrop) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Launcher, baseStrength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Launcher, aim) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Launcher, directionRandomOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Launcher, torque) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Launcher, launchFromHere) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Launcher, copyRotation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Launcher) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
