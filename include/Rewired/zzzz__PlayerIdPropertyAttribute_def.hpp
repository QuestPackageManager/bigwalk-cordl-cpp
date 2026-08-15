#pragma once
// IWYU pragma private; include "Rewired/PlayerIdPropertyAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(PlayerIdPropertyAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired {
class PlayerIdPropertyAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::PlayerIdPropertyAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::PlayerIdPropertyAttribute*, "Rewired", "PlayerIdPropertyAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Rewired {
// Is value type: false
// CS Name: Rewired.PlayerIdPropertyAttribute
class CORDL_TYPE PlayerIdPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
 __declspec(property(get=get_Type)) ::System::Type*  Type;

/// @brief Field ZWtECgRYPIlThidjcjnFDKrMpprbb, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZWtECgRYPIlThidjcjnFDKrMpprbb, put=__cordl_internal_set_ZWtECgRYPIlThidjcjnFDKrMpprbb)) ::System::Type*  ZWtECgRYPIlThidjcjnFDKrMpprbb;

static inline ::Rewired::PlayerIdPropertyAttribute* New_ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Type* const& __cordl_internal_get_ZWtECgRYPIlThidjcjnFDKrMpprbb() const;

constexpr ::System::Type*& __cordl_internal_get_ZWtECgRYPIlThidjcjnFDKrMpprbb() ;

constexpr void __cordl_internal_set_ZWtECgRYPIlThidjcjnFDKrMpprbb(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x1818382a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_Type, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerIdPropertyAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdPropertyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerIdPropertyAttribute(PlayerIdPropertyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdPropertyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerIdPropertyAttribute(PlayerIdPropertyAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1748};

/// @brief Field ZWtECgRYPIlThidjcjnFDKrMpprbb, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___ZWtECgRYPIlThidjcjnFDKrMpprbb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PlayerIdPropertyAttribute, ___ZWtECgRYPIlThidjcjnFDKrMpprbb) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::PlayerIdPropertyAttribute) == 0x20, "Size mismatch!");

} // namespace end def Rewired
