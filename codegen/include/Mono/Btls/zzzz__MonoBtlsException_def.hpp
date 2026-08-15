#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MonoBtlsException)
namespace Mono::Btls {
struct MonoBtlsSslError;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsException;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsException*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsException*, "Mono.Btls", "MonoBtlsException");
// Dependencies System.Exception
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsException
class CORDL_TYPE MonoBtlsException : public ::System::Exception {
public:
// Declarations
static inline ::Mono::Btls::MonoBtlsException* New_ctor() ;

static inline ::Mono::Btls::MonoBtlsException* New_ctor(::Mono::Btls::MonoBtlsSslError  error) ;

static inline ::Mono::Btls::MonoBtlsException* New_ctor(::StringW  format, ::ArrayW<::System::Object*>  args) ;

static inline ::Mono::Btls::MonoBtlsException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x18170eab0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181b455b0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Mono::Btls::MonoBtlsSslError  error) ;

/// @brief Method .ctor, addr 0x181b45580, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  format, ::ArrayW<::System::Object*>  args) ;

/// @brief Method .ctor, addr 0x1804be150, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsException(MonoBtlsException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsException(MonoBtlsException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsException) == 0x90, "Size mismatch!");

} // namespace end def Mono::Btls
