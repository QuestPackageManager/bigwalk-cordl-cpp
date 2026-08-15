#pragma once
// IWYU pragma private; include "GlobalNamespace/TeleportRow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TeleportRow)
namespace GlobalNamespace {
class TeleportPoint;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleportRow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TeleportRow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TeleportRow*, "", "TeleportRow");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TeleportRow
class CORDL_TYPE TeleportRow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activeColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_activeColor, put=__cordl_internal_set_activeColor)) ::UnityEngine::Color  activeColor;

/// @brief Field normalColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_normalColor, put=__cordl_internal_set_normalColor)) ::UnityEngine::Color  normalColor;

/// @brief Field teleportPoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportPoint, put=__cordl_internal_set_teleportPoint)) ::UnityW<::GlobalNamespace::TeleportPoint>  teleportPoint;

/// @brief Field textField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

/// @brief Method Assign, addr 0x18042a680, size 0x60, virtual false, abstract: false, final false
inline void Assign(::GlobalNamespace::TeleportPoint*  teleportPoint) ;

static inline ::GlobalNamespace::TeleportRow* New_ctor() ;

/// @brief Method SetActiveDestination, addr 0x18042a6e0, size 0x50, virtual false, abstract: false, final false
inline void SetActiveDestination(bool  active) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_activeColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_normalColor() ;

constexpr ::UnityW<::GlobalNamespace::TeleportPoint> const& __cordl_internal_get_teleportPoint() const;

constexpr ::UnityW<::GlobalNamespace::TeleportPoint>& __cordl_internal_get_teleportPoint() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_teleportPoint(::UnityW<::GlobalNamespace::TeleportPoint>  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TeleportRow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TeleportRow", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TeleportRow(TeleportRow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TeleportRow", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TeleportRow(TeleportRow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5219};

/// @brief Field textField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

/// @brief Field teleportPoint, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeleportPoint>  ___teleportPoint;

/// @brief Field normalColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___normalColor;

/// @brief Field activeColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___activeColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TeleportRow, ___textField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportRow, ___teleportPoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportRow, ___normalColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleportRow, ___activeColor) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TeleportRow) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
