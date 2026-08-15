#pragma once
// IWYU pragma private; include "Steamworks/InteropHelp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InteropHelp)
namespace Steamworks {
class InteropHelp_SteamParamStringArray;
}
namespace Steamworks {
class InteropHelp_UTF8StringHandle;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Steamworks {
class InteropHelp;
}
namespace Steamworks {
class InteropHelp_SteamParamStringArray;
}
namespace Steamworks {
class InteropHelp_UTF8StringHandle;
}
// Write type traits
MARK_REF_T(::Steamworks::InteropHelp*);
MARK_REF_T(::Steamworks::InteropHelp_SteamParamStringArray*);
MARK_REF_T(::Steamworks::InteropHelp_UTF8StringHandle*);
DEFINE_IL2CPP_CLASS(::Steamworks::InteropHelp*, "Steamworks", "InteropHelp");
DEFINE_IL2CPP_CLASS(::Steamworks::InteropHelp_SteamParamStringArray*, "Steamworks", "InteropHelp/SteamParamStringArray");
DEFINE_IL2CPP_CLASS(::Steamworks::InteropHelp_UTF8StringHandle*, "Steamworks", "InteropHelp/UTF8StringHandle");
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.InteropHelp/UTF8StringHandle
class CORDL_TYPE InteropHelp_UTF8StringHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
// Declarations
static inline ::Steamworks::InteropHelp_UTF8StringHandle* New_ctor(::StringW  str) ;

/// @brief Method ReleaseHandle, addr 0x1805a77b0, size 0x40, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

/// @brief Method .ctor, addr 0x1805a77f0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::StringW  str) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteropHelp_UTF8StringHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp_UTF8StringHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InteropHelp_UTF8StringHandle(InteropHelp_UTF8StringHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp_UTF8StringHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteropHelp_UTF8StringHandle(InteropHelp_UTF8StringHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::InteropHelp_UTF8StringHandle) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.IntPtr, System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.InteropHelp/SteamParamStringArray
class CORDL_TYPE InteropHelp_SteamParamStringArray : public ::System::Object {
public:
// Declarations
/// @brief Field m_Strings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Strings, put=__cordl_internal_set_m_Strings)) ::ArrayW<::System::IntPtr>  m_Strings;

/// @brief Field m_pSteamParamStringArray, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_pSteamParamStringArray, put=__cordl_internal_set_m_pSteamParamStringArray)) ::System::IntPtr  m_pSteamParamStringArray;

/// @brief Field m_ptrStrings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ptrStrings, put=__cordl_internal_set_m_ptrStrings)) ::System::IntPtr  m_ptrStrings;

/// @brief Method Finalize, addr 0x1805a6690, size 0x80, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Steamworks::InteropHelp_SteamParamStringArray* New_ctor(::System::Collections::Generic::IList_1<::StringW>*  strings) ;

constexpr ::ArrayW<::System::IntPtr> const& __cordl_internal_get_m_Strings() const;

constexpr ::ArrayW<::System::IntPtr>& __cordl_internal_get_m_Strings() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_pSteamParamStringArray() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_pSteamParamStringArray() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_ptrStrings() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_ptrStrings() ;

constexpr void __cordl_internal_set_m_Strings(::ArrayW<::System::IntPtr>  value) ;

constexpr void __cordl_internal_set_m_pSteamParamStringArray(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_m_ptrStrings(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1805a6710, size 0x470, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<::StringW>*  strings) ;

/// @brief Method op_Implicit, addr 0x1805a6b80, size 0xba0, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Implicit___System__IntPtr(::Steamworks::InteropHelp_SteamParamStringArray*  that) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteropHelp_SteamParamStringArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp_SteamParamStringArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InteropHelp_SteamParamStringArray(InteropHelp_SteamParamStringArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp_SteamParamStringArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteropHelp_SteamParamStringArray(InteropHelp_SteamParamStringArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16013};

/// @brief Field m_Strings, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::IntPtr>  ___m_Strings;

/// @brief Field m_ptrStrings, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ___m_ptrStrings;

/// @brief Field m_pSteamParamStringArray, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  ___m_pSteamParamStringArray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::InteropHelp_SteamParamStringArray, ___m_Strings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InteropHelp_SteamParamStringArray, ___m_ptrStrings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::InteropHelp_SteamParamStringArray, ___m_pSteamParamStringArray) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Steamworks::InteropHelp_SteamParamStringArray) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.InteropHelp
class CORDL_TYPE InteropHelp : public ::System::Object {
public:
// Declarations
using SteamParamStringArray = ::Steamworks::InteropHelp_SteamParamStringArray;

using UTF8StringHandle = ::Steamworks::InteropHelp_UTF8StringHandle;

/// @brief Method ByteArrayToStringUTF8, addr 0x1805529b0, size 0x80, virtual false, abstract: false, final false
static inline ::StringW ByteArrayToStringUTF8(::ArrayW<uint8_t>  buffer) ;

static inline ::Steamworks::InteropHelp* New_ctor() ;

/// @brief Method PtrToStringUTF8, addr 0x180552a30, size 0xe0, virtual false, abstract: false, final false
static inline ::StringW PtrToStringUTF8(::System::IntPtr  nativeUtf8) ;

/// @brief Method StringToByteArrayUTF8, addr 0x180552b10, size 0x80, virtual false, abstract: false, final false
static inline void StringToByteArrayUTF8(::StringW  str, ::ArrayW<uint8_t>  outArrayBuffer, int32_t  outArrayBufferSize) ;

/// @brief Method TestIfAvailableClient, addr 0x180552b90, size 0x40, virtual false, abstract: false, final false
static inline void TestIfAvailableClient() ;

/// @brief Method TestIfAvailableGameServer, addr 0x180552bd0, size 0x40, virtual false, abstract: false, final false
static inline void TestIfAvailableGameServer() ;

/// @brief Method TestIfPlatformSupported, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void TestIfPlatformSupported() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteropHelp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InteropHelp(InteropHelp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteropHelp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteropHelp(InteropHelp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16014};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::InteropHelp) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
