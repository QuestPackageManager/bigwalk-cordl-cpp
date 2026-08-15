#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLookSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerLookSet)
namespace GlobalNamespace {
struct PlayerLookSet_FontStyle;
}
namespace GlobalNamespace {
struct PlayerLookSet_LookColor;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerLookSet_FontStyle;
}
namespace GlobalNamespace {
class PlayerLookSet;
}
namespace GlobalNamespace {
struct PlayerLookSet_LookColor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerLookSet_FontStyle);
MARK_REF_T(::GlobalNamespace::PlayerLookSet*);
MARK_VAL_T(::GlobalNamespace::PlayerLookSet_LookColor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLookSet_FontStyle, "", "PlayerLookSet/FontStyle");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLookSet*, "", "PlayerLookSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerLookSet_LookColor, "", "PlayerLookSet/LookColor");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerLookSet/FontStyle
struct CORDL_TYPE PlayerLookSet_FontStyle {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerLookSet_FontStyle_Unwrapped
enum struct __PlayerLookSet_FontStyle_Unwrapped : int32_t {
__E_Light = static_cast<int32_t>(0x0),
__E_Dark = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerLookSet_FontStyle_Unwrapped () const noexcept {
return static_cast<__PlayerLookSet_FontStyle_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerLookSet_FontStyle() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerLookSet_FontStyle(int32_t  value__) noexcept;

/// @brief Field Dark value: I32(1)
static ::GlobalNamespace::PlayerLookSet_FontStyle const Dark;

/// @brief Field Light value: I32(0)
static ::GlobalNamespace::PlayerLookSet_FontStyle const Light;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLookSet_FontStyle, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLookSet_FontStyle) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerLookSet::FontStyle, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerLookSet/LookColor
struct CORDL_TYPE PlayerLookSet_LookColor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLookSet_LookColor() ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::GlobalNamespace::PlayerLookSet_FontStyle", modifiers: "", def_value: None }, CppParam { name: "rewardOnly", ty: "bool", modifiers: "", def_value: None }]
constexpr PlayerLookSet_LookColor(::UnityEngine::Color  color, ::GlobalNamespace::PlayerLookSet_FontStyle  fontStyle, bool  rewardOnly) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field color, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field fontStyle, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::PlayerLookSet_FontStyle  fontStyle;

/// @brief Field rewardOnly, offset: 0x14, size: 0x1, def value: None
 bool  rewardOnly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLookSet_LookColor, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLookSet_LookColor, fontStyle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLookSet_LookColor, rewardOnly) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLookSet_LookColor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerLookSet::LookColor, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerLookSet
class CORDL_TYPE PlayerLookSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using FontStyle = ::GlobalNamespace::PlayerLookSet_FontStyle;

using LookColor = ::GlobalNamespace::PlayerLookSet_LookColor;

/// @brief Field colorPropertyName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorPropertyName, put=__cordl_internal_set_colorPropertyName)) ::StringW  colorPropertyName;

/// @brief Field colors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor>  colors;

/// @brief Field defaultMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMaterial, put=__cordl_internal_set_defaultMaterial)) ::UnityW<::UnityEngine::Material>  defaultMaterial;

/// @brief Method GetColor, addr 0x180360970, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(int32_t  lookId) ;

/// @brief Method GetMaterial, addr 0x1803609a0, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::PlayerLookSet* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_colorPropertyName() const;

constexpr ::StringW& __cordl_internal_get_colorPropertyName() ;

constexpr ::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor> const& __cordl_internal_get_colors() const;

constexpr ::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor>& __cordl_internal_get_colors() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMaterial() ;

constexpr void __cordl_internal_set_colorPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_colors(::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor>  value) ;

constexpr void __cordl_internal_set_defaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLookSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLookSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLookSet(PlayerLookSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLookSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLookSet(PlayerLookSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5504};

/// @brief Field colors, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PlayerLookSet_LookColor>  ___colors;

/// @brief Field defaultMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMaterial;

/// @brief Field colorPropertyName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___colorPropertyName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerLookSet, ___colors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLookSet, ___defaultMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerLookSet, ___colorPropertyName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerLookSet) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
