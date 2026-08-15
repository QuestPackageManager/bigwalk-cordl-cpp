#pragma once
// IWYU pragma private; include "Shipmate/Porting/BaseAuthValues.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AuthTypes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseAuthValues)
// Forward declare root types
namespace Shipmate::Porting {
class BaseAuthValues;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::BaseAuthValues*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::BaseAuthValues*, "Shipmate.Porting", "BaseAuthValues");
// Dependencies Shipmate.Porting.AuthTypes, System.Object
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.BaseAuthValues
class CORDL_TYPE BaseAuthValues : public ::System::Object {
public:
// Declarations
/// @brief Field authType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_authType, put=__cordl_internal_set_authType)) ::Shipmate::Porting::AuthTypes  authType;

/// @brief Field token, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::StringW  token;

static inline ::Shipmate::Porting::BaseAuthValues* New_ctor() ;

constexpr ::Shipmate::Porting::AuthTypes const& __cordl_internal_get_authType() const;

constexpr ::Shipmate::Porting::AuthTypes& __cordl_internal_get_authType() ;

constexpr ::StringW const& __cordl_internal_get_token() const;

constexpr ::StringW& __cordl_internal_get_token() ;

constexpr void __cordl_internal_set_authType(::Shipmate::Porting::AuthTypes  value) ;

constexpr void __cordl_internal_set_token(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAuthValues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAuthValues", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAuthValues(BaseAuthValues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAuthValues", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAuthValues(BaseAuthValues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20632};

/// @brief Field authType, offset: 0x10, size: 0x4, def value: None
 ::Shipmate::Porting::AuthTypes  ___authType;

/// @brief Field token, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::BaseAuthValues, ___authType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::BaseAuthValues, ___token) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::BaseAuthValues) == 0x20, "Size mismatch!");

} // namespace end def Shipmate::Porting
