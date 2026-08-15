#pragma once
// IWYU pragma private; include "Rewired/Utils/NativeTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeTools)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Rewired::Utils {
class NativeTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::NativeTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::NativeTools*, "Rewired.Utils", "NativeTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.NativeTools
class CORDL_TYPE NativeTools : public ::System::Object {
public:
// Declarations
/// @brief Field XFYjeYCIhXyEqCcqsVFYMNmiuywNA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_XFYjeYCIhXyEqCcqsVFYMNmiuywNA, put=setStaticF_XFYjeYCIhXyEqCcqsVFYMNmiuywNA)) ::ArrayW<uint8_t>  XFYjeYCIhXyEqCcqsVFYMNmiuywNA;

/// @brief Method CopyMemory, addr 0x18190b0b0, size 0x150, virtual false, abstract: false, final false
static inline bool CopyMemory(::ArrayW<uint8_t>  source, ::System::IntPtr  destination, int32_t  sourceStartIndex, int32_t  destinationStartIndex, int32_t  bytesToCopy, bool  throwOnError) ;

/// @brief Method CopyMemory, addr 0x18190b450, size 0x150, virtual false, abstract: false, final false
static inline bool CopyMemory(::System::IntPtr  source, ::ArrayW<uint8_t>  destination, int32_t  sourceStartIndex, int32_t  destinationStartIndex, int32_t  bytesToCopy, bool  throwOnError) ;

/// @brief Method CopyMemory, addr 0x18190b200, size 0x250, virtual false, abstract: false, final false
static inline bool CopyMemory(::System::IntPtr  source, ::System::IntPtr  destination, int32_t  sourceStartIndex, int32_t  destinationStartIndex, int32_t  bytesToCopy, bool  throwOnError) ;

/// @brief Method DumpToString, addr 0x18190b5a0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW DumpToString(::System::IntPtr  buffer, int32_t  length, ::StringW  stringFormat) ;

/// @brief Method FillMemory, addr 0x18190bf50, size 0x30, virtual false, abstract: false, final false
static inline bool FillMemory(::ArrayW<uint8_t>  buffer, int32_t  length, uint8_t  value, bool  throwOnError) ;

/// @brief Method FillMemory, addr 0x18190b6c0, size 0x1e0, virtual false, abstract: false, final false
static inline bool FillMemory(::ArrayW<uint8_t>  buffer, int32_t  startIndex, int32_t  length, uint8_t  value, bool  throwOnError) ;

/// @brief Method FillMemory, addr 0x18190b690, size 0x30, virtual false, abstract: false, final false
static inline bool FillMemory(::System::IntPtr  buffer, int32_t  length, uint8_t  value, bool  throwOnError) ;

/// @brief Method FillMemory, addr 0x18190b8a0, size 0x6b0, virtual false, abstract: false, final false
static inline bool FillMemory(::System::IntPtr  buffer, int32_t  startIndex, int32_t  length, uint8_t  value, bool  throwOnError) ;

/// @brief Method FreeHGlobalSafe, addr 0x18190bf80, size 0x40, virtual false, abstract: false, final false
static inline void FreeHGlobalSafe(::by_ref<::System::IntPtr>  pointer) ;

/// @brief Method OffsetIntPtr, addr 0x18190bfc0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IntPtr OffsetIntPtr(::System::IntPtr  intPtr, int32_t  offset) ;

/// @brief Method ZeroFillMemory, addr 0x18190c070, size 0x130, virtual false, abstract: false, final false
static inline void ZeroFillMemory(::System::IntPtr  buffer, int32_t  length) ;

static inline ::ArrayW<uint8_t> getStaticF_XFYjeYCIhXyEqCcqsVFYMNmiuywNA() ;

static inline void setStaticF_XFYjeYCIhXyEqCcqsVFYMNmiuywNA(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeTools(NativeTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeTools(NativeTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::NativeTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
