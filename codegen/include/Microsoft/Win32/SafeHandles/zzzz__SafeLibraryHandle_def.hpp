#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeLibraryHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
CORDL_MODULE_EXPORT(SafeLibraryHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeLibraryHandle;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::SafeHandles::SafeLibraryHandle*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::SafeHandles::SafeLibraryHandle*, "Microsoft.Win32.SafeHandles", "SafeLibraryHandle");
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeLibraryHandle
class CORDL_TYPE SafeLibraryHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
static inline ::Microsoft::Win32::SafeHandles::SafeLibraryHandle* New_ctor() ;

/// @brief Method ReleaseHandle, addr 0x1815dd610, size 0x10, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x1815dd510, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeLibraryHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeLibraryHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeLibraryHandle(SafeLibraryHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeLibraryHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeLibraryHandle(SafeLibraryHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{125};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeLibraryHandle) == 0x20, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
