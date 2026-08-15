#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsError)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsError;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsError*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsError*, "Mono.Btls", "MonoBtlsError");
// Dependencies System.Object
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsError
class CORDL_TYPE MonoBtlsError : public ::System::Object {
public:
// Declarations
/// @brief Method ClearError, addr 0x181b45140, size 0x70, virtual false, abstract: false, final false
static inline void ClearError() ;

/// @brief Method GetError, addr 0x181b45390, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetError(::by_ref<::StringW>  file, ::by_ref<int32_t>  line) ;

/// @brief Method GetErrorReason, addr 0x181b451b0, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetErrorReason(int32_t  error) ;

/// @brief Method GetErrorString, addr 0x181b45230, size 0x160, virtual false, abstract: false, final false
static inline ::StringW GetErrorString(int32_t  error) ;

/// @brief Method mono_btls_error_clear_error, addr 0x181b45140, size 0x70, virtual false, abstract: false, final false
static inline void mono_btls_error_clear_error() ;

/// @brief Method mono_btls_error_get_error_line, addr 0x181b45450, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_error_get_error_line(::by_ref<::System::IntPtr>  file, ::by_ref<int32_t>  line) ;

/// @brief Method mono_btls_error_get_error_string_n, addr 0x181b454e0, size 0xa0, virtual false, abstract: false, final false
static inline void mono_btls_error_get_error_string_n(int32_t  error, ::System::IntPtr  buf, int32_t  len) ;

/// @brief Method mono_btls_error_get_reason, addr 0x181b451b0, size 0x80, virtual false, abstract: false, final false
static inline int32_t mono_btls_error_get_reason(int32_t  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsError", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsError(MonoBtlsError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsError", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsError(MonoBtlsError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11456};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsError) == 0x10, "Size mismatch!");

} // namespace end def Mono::Btls
