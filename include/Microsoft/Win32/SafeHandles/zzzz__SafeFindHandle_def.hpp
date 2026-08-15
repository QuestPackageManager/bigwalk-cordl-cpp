#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeFindHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
CORDL_MODULE_EXPORT(SafeFindHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeFindHandle;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::SafeHandles::SafeFindHandle*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::SafeHandles::SafeFindHandle*, "Microsoft.Win32.SafeHandles", "SafeFindHandle");
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeFindHandle
class CORDL_TYPE SafeFindHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
static inline ::Microsoft::Win32::SafeHandles::SafeFindHandle* New_ctor() ;

/// @brief Method ReleaseHandle, addr 0x1815dd500, size 0x10, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x1815dd510, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeFindHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeFindHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeFindHandle(SafeFindHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeFindHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeFindHandle(SafeFindHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeFindHandle) == 0x20, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
