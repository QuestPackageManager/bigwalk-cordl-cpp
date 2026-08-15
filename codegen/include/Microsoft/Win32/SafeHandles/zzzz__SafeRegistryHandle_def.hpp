#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeRegistryHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
CORDL_MODULE_EXPORT(SafeRegistryHandle)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeRegistryHandle;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, "Microsoft.Win32.SafeHandles", "SafeRegistryHandle");
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeRegistryHandle
class CORDL_TYPE SafeRegistryHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
static inline ::Microsoft::Win32::SafeHandles::SafeRegistryHandle* New_ctor() ;

static inline ::Microsoft::Win32::SafeHandles::SafeRegistryHandle* New_ctor(::System::IntPtr  preexistingHandle, bool  ownsHandle) ;

/// @brief Method ReleaseHandle, addr 0x1815dd720, size 0x20, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x1815dd510, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1815dd4d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  preexistingHandle, bool  ownsHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeRegistryHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeRegistryHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeRegistryHandle(SafeRegistryHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeRegistryHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeRegistryHandle(SafeRegistryHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::SafeHandles::SafeRegistryHandle) == 0x20, "Size mismatch!");

} // namespace end def Microsoft::Win32::SafeHandles
