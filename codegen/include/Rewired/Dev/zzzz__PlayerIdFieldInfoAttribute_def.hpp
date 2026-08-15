#pragma once
// IWYU pragma private; include "Rewired/Dev/PlayerIdFieldInfoAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerIdFieldInfoAttribute)
// Forward declare root types
namespace Rewired::Dev {
class PlayerIdFieldInfoAttribute;
}
// Write type traits
MARK_REF_T(::Rewired::Dev::PlayerIdFieldInfoAttribute*);
DEFINE_IL2CPP_CLASS(::Rewired::Dev::PlayerIdFieldInfoAttribute*, "Rewired.Dev", "PlayerIdFieldInfoAttribute");
// Dependencies System.Attribute
namespace Rewired::Dev {
// Is value type: false
// CS Name: Rewired.Dev.PlayerIdFieldInfoAttribute
class CORDL_TYPE PlayerIdFieldInfoAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field friendlyName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendlyName, put=__cordl_internal_set_friendlyName)) ::StringW  friendlyName;

static inline ::Rewired::Dev::PlayerIdFieldInfoAttribute* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_friendlyName() const;

constexpr ::StringW& __cordl_internal_get_friendlyName() ;

constexpr void __cordl_internal_set_friendlyName(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerIdFieldInfoAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdFieldInfoAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerIdFieldInfoAttribute(PlayerIdFieldInfoAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerIdFieldInfoAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerIdFieldInfoAttribute(PlayerIdFieldInfoAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3092};

/// @brief Field friendlyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___friendlyName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Dev::PlayerIdFieldInfoAttribute, ___friendlyName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Dev::PlayerIdFieldInfoAttribute) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Dev
