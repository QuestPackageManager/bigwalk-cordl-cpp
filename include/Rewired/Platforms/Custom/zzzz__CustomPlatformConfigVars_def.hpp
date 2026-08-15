#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformConfigVars.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/zzzz__ConfigVars_def.hpp"
CORDL_MODULE_EXPORT(CustomPlatformConfigVars)
// Forward declare root types
namespace Rewired::Platforms::Custom {
class CustomPlatformConfigVars;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Custom::CustomPlatformConfigVars*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Custom::CustomPlatformConfigVars*, "Rewired.Platforms.Custom", "CustomPlatformConfigVars");
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Platforms::Custom {
// Is value type: false
// CS Name: Rewired.Platforms.Custom.CustomPlatformConfigVars
class CORDL_TYPE CustomPlatformConfigVars : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field useNativeKeyboard, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNativeKeyboard, put=__cordl_internal_set_useNativeKeyboard)) bool  useNativeKeyboard;

/// @brief Field useNativeMouse, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNativeMouse, put=__cordl_internal_set_useNativeMouse)) bool  useNativeMouse;

static inline ::Rewired::Platforms::Custom::CustomPlatformConfigVars* New_ctor() ;

constexpr bool const& __cordl_internal_get_useNativeKeyboard() const;

constexpr bool& __cordl_internal_get_useNativeKeyboard() ;

constexpr bool const& __cordl_internal_get_useNativeMouse() const;

constexpr bool& __cordl_internal_get_useNativeMouse() ;

constexpr void __cordl_internal_set_useNativeKeyboard(bool  value) ;

constexpr void __cordl_internal_set_useNativeMouse(bool  value) ;

/// @brief Method .ctor, addr 0x18187ec60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomPlatformConfigVars() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformConfigVars", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomPlatformConfigVars(CustomPlatformConfigVars && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomPlatformConfigVars", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomPlatformConfigVars(CustomPlatformConfigVars const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2295};

/// @brief Field useNativeKeyboard, offset: 0x13, size: 0x1, def value: None
 bool  ___useNativeKeyboard;

/// @brief Field useNativeMouse, offset: 0x14, size: 0x1, def value: None
 bool  ___useNativeMouse;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformConfigVars, ___useNativeKeyboard) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Custom::CustomPlatformConfigVars, ___useNativeMouse) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Custom::CustomPlatformConfigVars) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Custom
