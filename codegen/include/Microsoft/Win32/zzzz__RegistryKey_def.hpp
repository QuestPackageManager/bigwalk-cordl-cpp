#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/zzzz__RegistryKeyPermissionCheck_def.hpp"
#include "Microsoft/Win32/zzzz__RegistryView_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegistryKey)
namespace Microsoft::Win32::SafeHandles {
class SafeRegistryHandle;
}
namespace Microsoft::Win32 {
struct RegistryHive;
}
namespace Microsoft::Win32 {
struct RegistryKeyPermissionCheck;
}
namespace Microsoft::Win32 {
struct RegistryKey_StateFlags;
}
namespace Microsoft::Win32 {
struct RegistryValueOptions;
}
namespace Microsoft::Win32 {
struct RegistryView;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Microsoft::Win32 {
struct RegistryKey_StateFlags;
}
namespace Microsoft::Win32 {
class RegistryKey;
}
// Write type traits
MARK_VAL_T(::Microsoft::Win32::RegistryKey_StateFlags);
MARK_REF_T(::Microsoft::Win32::RegistryKey*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::RegistryKey_StateFlags, "Microsoft.Win32", "RegistryKey/StateFlags");
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::RegistryKey*, "Microsoft.Win32", "RegistryKey");
// Dependencies 
namespace Microsoft::Win32 {
// Is value type: true
// CS Name: Microsoft.Win32.RegistryKey/StateFlags
struct CORDL_TYPE RegistryKey_StateFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RegistryKey_StateFlags_Unwrapped
enum struct __RegistryKey_StateFlags_Unwrapped : int32_t {
__E_Dirty = static_cast<int32_t>(0x1),
__E_SystemKey = static_cast<int32_t>(0x2),
__E_WriteAccess = static_cast<int32_t>(0x4),
__E_PerfData = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RegistryKey_StateFlags_Unwrapped () const noexcept {
return static_cast<__RegistryKey_StateFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RegistryKey_StateFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegistryKey_StateFlags(int32_t  value__) noexcept;

/// @brief Field Dirty value: I32(1)
static ::Microsoft::Win32::RegistryKey_StateFlags const Dirty;

/// @brief Field PerfData value: I32(8)
static ::Microsoft::Win32::RegistryKey_StateFlags const PerfData;

/// @brief Field SystemKey value: I32(2)
static ::Microsoft::Win32::RegistryKey_StateFlags const SystemKey;

/// @brief Field WriteAccess value: I32(4)
static ::Microsoft::Win32::RegistryKey_StateFlags const WriteAccess;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Microsoft::Win32::RegistryKey_StateFlags, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Microsoft::Win32::RegistryKey_StateFlags) == 0x4, "Size mismatch!");

} // namespace end def Microsoft::Win32
// Dependencies Microsoft.Win32.RegistryKey::StateFlags, Microsoft.Win32.RegistryKeyPermissionCheck, Microsoft.Win32.RegistryView, System.IntPtr, System.MarshalByRefObject
namespace Microsoft::Win32 {
// Is value type: false
// CS Name: Microsoft.Win32.RegistryKey
class CORDL_TYPE RegistryKey : public ::System::MarshalByRefObject {
public:
// Declarations
using StateFlags = ::Microsoft::Win32::RegistryKey_StateFlags;

/// @brief Field HKEY_CLASSES_ROOT, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HKEY_CLASSES_ROOT, put=setStaticF_HKEY_CLASSES_ROOT)) ::System::IntPtr  HKEY_CLASSES_ROOT;

/// @brief Field HKEY_CURRENT_CONFIG, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HKEY_CURRENT_CONFIG, put=setStaticF_HKEY_CURRENT_CONFIG)) ::System::IntPtr  HKEY_CURRENT_CONFIG;

/// @brief Field HKEY_CURRENT_USER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HKEY_CURRENT_USER, put=setStaticF_HKEY_CURRENT_USER)) ::System::IntPtr  HKEY_CURRENT_USER;

/// @brief Field HKEY_DYN_DATA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HKEY_DYN_DATA, put=setStaticF_HKEY_DYN_DATA)) ::System::IntPtr  HKEY_DYN_DATA;

/// @brief Field HKEY_LOCAL_MACHINE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HKEY_LOCAL_MACHINE, put=setStaticF_HKEY_LOCAL_MACHINE)) ::System::IntPtr  HKEY_LOCAL_MACHINE;

/// @brief Field HKEY_PERFORMANCE_DATA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HKEY_PERFORMANCE_DATA, put=setStaticF_HKEY_PERFORMANCE_DATA)) ::System::IntPtr  HKEY_PERFORMANCE_DATA;

/// @brief Field HKEY_USERS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HKEY_USERS, put=setStaticF_HKEY_USERS)) ::System::IntPtr  HKEY_USERS;

/// @brief Field _checkMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__checkMode, put=__cordl_internal_set__checkMode)) ::Microsoft::Win32::RegistryKeyPermissionCheck  _checkMode;

/// @brief Field _hkey, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__hkey, put=__cordl_internal_set__hkey)) ::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  _hkey;

/// @brief Field _keyName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyName, put=__cordl_internal_set__keyName)) ::StringW  _keyName;

/// @brief Field _regView, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__regView, put=__cordl_internal_set__regView)) ::Microsoft::Win32::RegistryView  _regView;

/// @brief Field _remoteKey, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__remoteKey, put=__cordl_internal_set__remoteKey)) bool  _remoteKey;

/// @brief Field _state, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Microsoft::Win32::RegistryKey_StateFlags  _state;

/// @brief Field s_hkeyNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_hkeyNames, put=setStaticF_s_hkeyNames)) ::ArrayW<::StringW>  s_hkeyNames;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ClosePerfDataKey, addr 0x1815db260, size 0x40, virtual false, abstract: false, final false
inline void ClosePerfDataKey() ;

/// @brief Method Dispose, addr 0x1815db2a0, size 0x100, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnsureNotDisposed, addr 0x1815db3a0, size 0x40, virtual false, abstract: false, final false
inline void EnsureNotDisposed() ;

/// @brief Method FixupName, addr 0x1815db3e0, size 0x1c0, virtual false, abstract: false, final false
static inline ::StringW FixupName(::StringW  name) ;

/// @brief Method FixupPath, addr 0x1815db5a0, size 0x110, virtual false, abstract: false, final false
static inline void FixupPath(::System::Text::StringBuilder*  path) ;

/// @brief Method GetRegistryKeyAccess, addr 0x1815db6b0, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetRegistryKeyAccess(bool  isWritable) ;

/// @brief Method GetSubKeyNames, addr 0x1815db6d0, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetSubKeyNames() ;

/// @brief Method GetSubKeyPermissionCheck, addr 0x1815db810, size 0x20, virtual false, abstract: false, final false
inline ::Microsoft::Win32::RegistryKeyPermissionCheck GetSubKeyPermissionCheck(bool  subkeyWritable) ;

/// @brief Method GetValue, addr 0x1815db830, size 0xa0, virtual false, abstract: false, final false
inline ::System::Object* GetValue(::StringW  name, ::System::Object*  defaultValue, ::Microsoft::Win32::RegistryValueOptions  options) ;

/// @brief Method InternalGetSubKeyNames, addr 0x1815db6d0, size 0x140, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> InternalGetSubKeyNames() ;

/// @brief Method InternalGetSubKeyNamesCore, addr 0x1815db8d0, size 0x1c0, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> InternalGetSubKeyNamesCore(int32_t  subkeys) ;

/// @brief Method InternalGetValue, addr 0x1815dc240, size 0x50, virtual false, abstract: false, final false
inline ::System::Object* InternalGetValue(::StringW  name, ::System::Object*  defaultValue, bool  doNotExpand, bool  checkSecurity) ;

/// @brief Method InternalGetValueCore, addr 0x1815dba90, size 0x7b0, virtual false, abstract: false, final false
inline ::System::Object* InternalGetValueCore(::StringW  name, ::System::Object*  defaultValue, bool  doNotExpand) ;

/// @brief Method InternalOpenSubKeyCore, addr 0x1815dc290, size 0x1c0, virtual false, abstract: false, final false
inline ::Microsoft::Win32::RegistryKey* InternalOpenSubKeyCore(::StringW  name, bool  writable, bool  throwOnPermissionFailure) ;

/// @brief Method InternalSubKeyCount, addr 0x1815dc4d0, size 0xa0, virtual false, abstract: false, final false
inline int32_t InternalSubKeyCount() ;

/// @brief Method InternalSubKeyCountCore, addr 0x1815dc450, size 0x80, virtual false, abstract: false, final false
inline int32_t InternalSubKeyCountCore() ;

/// @brief Method IsPerfDataKey, addr 0x1815dc570, size 0x10, virtual false, abstract: false, final false
inline bool IsPerfDataKey() ;

/// @brief Method IsSystemKey, addr 0x1815dc580, size 0x10, virtual false, abstract: false, final false
inline bool IsSystemKey() ;

static inline ::Microsoft::Win32::RegistryKey* New_ctor(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hkey, bool  writable, bool  systemkey, bool  remoteKey, bool  isPerfData, ::Microsoft::Win32::RegistryView  view) ;

/// @brief Method OpenBaseKey, addr 0x1815dc6f0, size 0x190, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::RegistryKey* OpenBaseKey(::Microsoft::Win32::RegistryHive  hKey, ::Microsoft::Win32::RegistryView  view) ;

/// @brief Method OpenBaseKeyCore, addr 0x1815dc590, size 0x160, virtual false, abstract: false, final false
static inline ::Microsoft::Win32::RegistryKey* OpenBaseKeyCore(::Microsoft::Win32::RegistryHive  hKeyHive, ::Microsoft::Win32::RegistryView  view) ;

/// @brief Method OpenSubKey, addr 0x1815dc880, size 0x220, virtual false, abstract: false, final false
inline ::Microsoft::Win32::RegistryKey* OpenSubKey(::StringW  name, bool  writable) ;

/// @brief Method ToString, addr 0x1815dcaa0, size 0x40, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ValidateKeyName, addr 0x1815dcae0, size 0x1e0, virtual false, abstract: false, final false
static inline void ValidateKeyName(::StringW  name) ;

/// @brief Method ValidateKeyView, addr 0x1815dccc0, size 0x30, virtual false, abstract: false, final false
static inline void ValidateKeyView(::Microsoft::Win32::RegistryView  view) ;

/// @brief Method Win32Error, addr 0x1815dccf0, size 0x170, virtual false, abstract: false, final false
inline void Win32Error(int32_t  errorCode, ::StringW  str) ;

constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck const& __cordl_internal_get__checkMode() const;

constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck& __cordl_internal_get__checkMode() ;

constexpr ::Microsoft::Win32::SafeHandles::SafeRegistryHandle* const& __cordl_internal_get__hkey() const;

constexpr ::Microsoft::Win32::SafeHandles::SafeRegistryHandle*& __cordl_internal_get__hkey() ;

constexpr ::StringW const& __cordl_internal_get__keyName() const;

constexpr ::StringW& __cordl_internal_get__keyName() ;

constexpr ::Microsoft::Win32::RegistryView const& __cordl_internal_get__regView() const;

constexpr ::Microsoft::Win32::RegistryView& __cordl_internal_get__regView() ;

constexpr bool const& __cordl_internal_get__remoteKey() const;

constexpr bool& __cordl_internal_get__remoteKey() ;

constexpr ::Microsoft::Win32::RegistryKey_StateFlags const& __cordl_internal_get__state() const;

constexpr ::Microsoft::Win32::RegistryKey_StateFlags& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set__checkMode(::Microsoft::Win32::RegistryKeyPermissionCheck  value) ;

constexpr void __cordl_internal_set__hkey(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  value) ;

constexpr void __cordl_internal_set__keyName(::StringW  value) ;

constexpr void __cordl_internal_set__regView(::Microsoft::Win32::RegistryView  value) ;

constexpr void __cordl_internal_set__remoteKey(bool  value) ;

constexpr void __cordl_internal_set__state(::Microsoft::Win32::RegistryKey_StateFlags  value) ;

/// @brief Method .ctor, addr 0x1815dd080, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hkey, bool  writable, bool  systemkey, bool  remoteKey, bool  isPerfData, ::Microsoft::Win32::RegistryView  view) ;

static inline ::System::IntPtr getStaticF_HKEY_CLASSES_ROOT() ;

static inline ::System::IntPtr getStaticF_HKEY_CURRENT_CONFIG() ;

static inline ::System::IntPtr getStaticF_HKEY_CURRENT_USER() ;

static inline ::System::IntPtr getStaticF_HKEY_DYN_DATA() ;

static inline ::System::IntPtr getStaticF_HKEY_LOCAL_MACHINE() ;

static inline ::System::IntPtr getStaticF_HKEY_PERFORMANCE_DATA() ;

static inline ::System::IntPtr getStaticF_HKEY_USERS() ;

static inline ::ArrayW<::StringW> getStaticF_s_hkeyNames() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_HKEY_CLASSES_ROOT(::System::IntPtr  value) ;

static inline void setStaticF_HKEY_CURRENT_CONFIG(::System::IntPtr  value) ;

static inline void setStaticF_HKEY_CURRENT_USER(::System::IntPtr  value) ;

static inline void setStaticF_HKEY_DYN_DATA(::System::IntPtr  value) ;

static inline void setStaticF_HKEY_LOCAL_MACHINE(::System::IntPtr  value) ;

static inline void setStaticF_HKEY_PERFORMANCE_DATA(::System::IntPtr  value) ;

static inline void setStaticF_HKEY_USERS(::System::IntPtr  value) ;

static inline void setStaticF_s_hkeyNames(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RegistryKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RegistryKey", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RegistryKey(RegistryKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegistryKey", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegistryKey(RegistryKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{118};

/// @brief Field _hkey, offset: 0x18, size: 0x8, def value: None
 ::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  ____hkey;

/// @brief Field _keyName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____keyName;

/// @brief Field _remoteKey, offset: 0x28, size: 0x1, def value: None
 bool  ____remoteKey;

/// @brief Field _state, offset: 0x2c, size: 0x4, def value: None
 ::Microsoft::Win32::RegistryKey_StateFlags  ____state;

/// @brief Field _checkMode, offset: 0x30, size: 0x4, def value: None
 ::Microsoft::Win32::RegistryKeyPermissionCheck  ____checkMode;

/// @brief Field _regView, offset: 0x34, size: 0x4, def value: None
 ::Microsoft::Win32::RegistryView  ____regView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Microsoft::Win32::RegistryKey, ____hkey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Microsoft::Win32::RegistryKey, ____keyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Microsoft::Win32::RegistryKey, ____remoteKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Microsoft::Win32::RegistryKey, ____state) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Microsoft::Win32::RegistryKey, ____checkMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Microsoft::Win32::RegistryKey, ____regView) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Microsoft::Win32::RegistryKey) == 0x38, "Size mismatch!");

} // namespace end def Microsoft::Win32
