#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SavableSystem_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MusicSetter)
namespace GlobalNamespace {
class MusicGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicSetter*, "", "MusicSetter");
// Dependencies SavableSystem, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicSetter
class CORDL_TYPE MusicSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field color, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field musicGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicGroup, put=__cordl_internal_set_musicGroup)) ::UnityW<::GlobalNamespace::MusicGroup>  musicGroup;

/// @brief Field saveName, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveName, put=__cordl_internal_set_saveName)) ::GlobalNamespace::SavableSystem  saveName;

static inline ::GlobalNamespace::MusicSetter* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::UnityW<::GlobalNamespace::MusicGroup> const& __cordl_internal_get_musicGroup() const;

constexpr ::UnityW<::GlobalNamespace::MusicGroup>& __cordl_internal_get_musicGroup() ;

constexpr ::GlobalNamespace::SavableSystem const& __cordl_internal_get_saveName() const;

constexpr ::GlobalNamespace::SavableSystem& __cordl_internal_get_saveName() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_musicGroup(::UnityW<::GlobalNamespace::MusicGroup>  value) ;

constexpr void __cordl_internal_set_saveName(::GlobalNamespace::SavableSystem  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicSetter(MusicSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicSetter(MusicSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5083};

/// @brief Field musicGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicGroup>  ___musicGroup;

/// @brief Field saveName, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::SavableSystem  ___saveName;

/// @brief Field color, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicSetter, ___musicGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicSetter, ___saveName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicSetter, ___color) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicSetter) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
