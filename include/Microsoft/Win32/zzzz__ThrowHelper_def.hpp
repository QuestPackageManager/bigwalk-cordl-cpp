#pragma once
// IWYU pragma private; include "Microsoft/Win32/ThrowHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ThrowHelper)
// Forward declare root types
namespace Microsoft::Win32 {
class ThrowHelper;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::ThrowHelper*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::ThrowHelper*, "Microsoft.Win32", "ThrowHelper");
// Dependencies System.Object
namespace Microsoft::Win32 {
// Is value type: false
// CS Name: Microsoft.Win32.ThrowHelper
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
// Declarations
/// @brief Method ThrowArgumentException, addr 0x1815e81b0, size 0x10, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::StringW  msg, ::StringW  argument) ;

/// @brief Method ThrowArgumentNullException, addr 0x1815e81c0, size 0x10, virtual false, abstract: false, final false
static inline void ThrowArgumentNullException(::StringW  argument) ;

/// @brief Method ThrowObjectDisposedException, addr 0x1815e81d0, size 0x50, virtual false, abstract: false, final false
static inline void ThrowObjectDisposedException(::StringW  objectName, ::StringW  msg) ;

/// @brief Method ThrowSecurityException, addr 0x1815e8220, size 0x190, virtual false, abstract: false, final false
static inline void ThrowSecurityException(::StringW  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowHelper(ThrowHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowHelper(ThrowHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{122};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::ThrowHelper) == 0x10, "Size mismatch!");

} // namespace end def Microsoft::Win32
