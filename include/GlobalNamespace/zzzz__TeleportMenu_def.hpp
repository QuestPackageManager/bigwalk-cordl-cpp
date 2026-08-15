#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TeleportMenu)
namespace GlobalNamespace {
class TeleportPoint;
}
namespace GlobalNamespace {
class TeleportRow;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleportMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportMenu*, "", "TeleportMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportMenu
class CORDL_TYPE TeleportMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field initialized, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field rowParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rowParent, put=__cordl_internal_set_rowParent)) ::UnityW<::UnityEngine::Transform>  rowParent;

/// @brief Field rowPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rowPrefab, put=__cordl_internal_set_rowPrefab)) ::UnityW<::UnityEngine::GameObject>  rowPrefab;

/// @brief Field rows, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_rows, put=__cordl_internal_set_rows)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>*  rows;

/// @brief Field timeAtLastTeleport, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtLastTeleport, put=__cordl_internal_set_timeAtLastTeleport)) float_t  timeAtLastTeleport;

/// @brief Field visibilityDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibilityDuration, put=__cordl_internal_set_visibilityDuration)) float_t  visibilityDuration;

/// @brief Method Initialize, addr 0x18042a300, size 0x1e0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::TeleportMenu* New_ctor() ;

/// @brief Method OnEnable, addr 0x18042a4e0, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTeleport, addr 0x18042a4f0, size 0x110, virtual false, abstract: false, final false
inline void OnTeleport(::GlobalNamespace::TeleportPoint*  destination) ;

/// @brief Method Update, addr 0x18042a600, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rowParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rowParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rowPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rowPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>* const& __cordl_internal_get_rows() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>*& __cordl_internal_get_rows() ;

constexpr float_t const& __cordl_internal_get_timeAtLastTeleport() const;

constexpr float_t& __cordl_internal_get_timeAtLastTeleport() ;

constexpr float_t const& __cordl_internal_get_visibilityDuration() const;

constexpr float_t& __cordl_internal_get_visibilityDuration() ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_rowParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rowPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rows(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>*  value) ;

constexpr void __cordl_internal_set_timeAtLastTeleport(float_t  value) ;

constexpr void __cordl_internal_set_visibilityDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x18042a650, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::TeleportMenu> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportMenu(TeleportMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportMenu(TeleportMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5218};

/// @brief Field rowPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rowPrefab;

/// @brief Field rowParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rowParent;

/// @brief Field visibilityDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___visibilityDuration;

/// @brief Field initialized, offset: 0x34, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field timeAtLastTeleport, offset: 0x38, size: 0x4, def value: None
 float_t  ___timeAtLastTeleport;

/// @brief Field rows, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleportRow>>*  ___rows;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportMenu, ___rowPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportMenu, ___rowParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportMenu, ___visibilityDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportMenu, ___initialized) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportMenu, ___timeAtLastTeleport) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportMenu, ___rows) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportMenu) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
