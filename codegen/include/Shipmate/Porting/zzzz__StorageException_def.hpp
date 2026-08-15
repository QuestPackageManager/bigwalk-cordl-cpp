#pragma once
// IWYU pragma private; include "Shipmate/Porting/StorageException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StorageException)
// Forward declare root types
namespace Shipmate::Porting {
class StorageException;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::StorageException*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::StorageException*, "Shipmate.Porting", "StorageException");
// Dependencies System.Exception
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.StorageException
class CORDL_TYPE StorageException : public ::System::Exception {
public:
// Declarations
/// @brief Field NO_SPACE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NO_SPACE, put=setStaticF_NO_SPACE)) int32_t  NO_SPACE;

/// @brief Field OTHER, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OTHER, put=setStaticF_OTHER)) int32_t  OTHER;

/// @brief Field errorCode, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_errorCode, put=__cordl_internal_set_errorCode)) int32_t  errorCode;

static inline ::Shipmate::Porting::StorageException* New_ctor(::StringW  aErrorMsg, int32_t  errorCode) ;

constexpr int32_t const& __cordl_internal_get_errorCode() const;

constexpr int32_t& __cordl_internal_get_errorCode() ;

constexpr void __cordl_internal_set_errorCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x181ac6d30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  aErrorMsg, int32_t  errorCode) ;

static inline int32_t getStaticF_NO_SPACE() ;

static inline int32_t getStaticF_OTHER() ;

static inline void setStaticF_NO_SPACE(int32_t  value) ;

static inline void setStaticF_OTHER(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StorageException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StorageException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StorageException(StorageException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StorageException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StorageException(StorageException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20649};

/// @brief Field errorCode, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___errorCode;

/// @brief Size padding 0x98 - 0x90 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Porting::StorageException, ___errorCode) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Porting::StorageException) == 0x98, "Size mismatch!");

} // namespace end def Shipmate::Porting
