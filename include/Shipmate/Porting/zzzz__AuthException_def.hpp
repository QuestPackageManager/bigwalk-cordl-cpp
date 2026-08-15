#pragma once
// IWYU pragma private; include "Shipmate/Porting/AuthException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AuthException)
// Forward declare root types
namespace Shipmate::Porting {
class AuthException;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::AuthException*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::AuthException*, "Shipmate.Porting", "AuthException");
// Dependencies System.Exception
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.AuthException
class CORDL_TYPE AuthException : public ::System::Exception {
public:
// Declarations
/// @brief Field mLocalizedMessage, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_mLocalizedMessage, put=__cordl_internal_set_mLocalizedMessage)) ::StringW  mLocalizedMessage;

/// @brief Field mShouldShowError, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_mShouldShowError, put=__cordl_internal_set_mShouldShowError)) bool  mShouldShowError;

static inline ::Shipmate::Porting::AuthException* New_ctor(::StringW  aMessage, bool  aShowError, ::StringW  aLocalizedMessage) ;

constexpr ::StringW const& __cordl_internal_get_mLocalizedMessage() const;

constexpr ::StringW& __cordl_internal_get_mLocalizedMessage() ;

constexpr bool const& __cordl_internal_get_mShouldShowError() const;

constexpr bool& __cordl_internal_get_mShouldShowError() ;

constexpr void __cordl_internal_set_mLocalizedMessage(::StringW  value) ;

constexpr void __cordl_internal_set_mShouldShowError(bool  value) ;

/// @brief Method .ctor, addr 0x181ac65a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  aMessage, bool  aShowError, ::StringW  aLocalizedMessage) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthException(AuthException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthException(AuthException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20634};

/// @brief Field mShouldShowError, offset: 0x8c, size: 0x1, def value: None
 bool  ___mShouldShowError;

/// @brief Field mLocalizedMessage, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___mLocalizedMessage;

/// @brief Size padding 0xa0 - 0x98 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::AuthException, ___mShouldShowError) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Shipmate::Porting::AuthException, ___mLocalizedMessage) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::AuthException) == 0xa0, "Size mismatch!");

} // namespace end def Shipmate::Porting
