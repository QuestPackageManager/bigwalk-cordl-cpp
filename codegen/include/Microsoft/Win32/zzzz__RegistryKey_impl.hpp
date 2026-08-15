#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryKey.hpp"
#include "Microsoft/Win32/zzzz__RegistryKeyPermissionCheck_impl.hpp"
#include "Microsoft/Win32/zzzz__RegistryView_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "Microsoft/Win32/zzzz__RegistryKey_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeRegistryHandle_def.hpp"
#include "Microsoft/Win32/zzzz__RegistryHive_def.hpp"
#include "Microsoft/Win32/zzzz__RegistryKeyPermissionCheck_def.hpp"
#include "Microsoft/Win32/zzzz__RegistryKey_def.hpp"
#include "Microsoft/Win32/zzzz__RegistryValueOptions_def.hpp"
#include "Microsoft/Win32/zzzz__RegistryView_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Microsoft::Win32::RegistryKey_StateFlags::RegistryKey_StateFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::RegistryKey_StateFlags::RegistryKey_StateFlags()   {
}
constexpr ::Microsoft::Win32::RegistryKey_StateFlags  Microsoft::Win32::RegistryKey_StateFlags::Dirty{static_cast<int32_t>(0x1)};
constexpr ::Microsoft::Win32::RegistryKey_StateFlags  Microsoft::Win32::RegistryKey_StateFlags::SystemKey{static_cast<int32_t>(0x2)};
constexpr ::Microsoft::Win32::RegistryKey_StateFlags  Microsoft::Win32::RegistryKey_StateFlags::WriteAccess{static_cast<int32_t>(0x4)};
constexpr ::Microsoft::Win32::RegistryKey_StateFlags  Microsoft::Win32::RegistryKey_StateFlags::PerfData{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.ClosePerfDataKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::ClosePerfDataKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815db260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"ClosePerfDataKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.OpenBaseKeyCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::RegistryKey* (*)(::Microsoft::Win32::RegistryHive, ::Microsoft::Win32::RegistryView)>(&::Microsoft::Win32::RegistryKey::OpenBaseKeyCore)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1815dc590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"OpenBaseKeyCore", {}, {::i2c::type_of<::Microsoft::Win32::RegistryHive>(), ::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.InternalOpenSubKeyCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::RegistryKey* (::Microsoft::Win32::RegistryKey::*)(::StringW, bool, bool)>(&::Microsoft::Win32::RegistryKey::InternalOpenSubKeyCore)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1815dc290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalOpenSubKeyCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.InternalSubKeyCountCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::InternalSubKeyCountCore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815dc450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalSubKeyCountCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.InternalGetSubKeyNamesCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Microsoft::Win32::RegistryKey::*)(int32_t)>(&::Microsoft::Win32::RegistryKey::InternalGetSubKeyNamesCore)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1815db8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetSubKeyNamesCore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.InternalGetValueCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Microsoft::Win32::RegistryKey::*)(::StringW, ::System::Object*, bool)>(&::Microsoft::Win32::RegistryKey::InternalGetValueCore)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x1815dba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetValueCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.Win32Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::RegistryKey::*)(int32_t, ::StringW)>(&::Microsoft::Win32::RegistryKey::Win32Error)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1815dccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"Win32Error", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.GetRegistryKeyAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::Microsoft::Win32::RegistryKey::GetRegistryKeyAccess)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815db6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetRegistryKeyAccess", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::RegistryKey::*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, bool, bool, bool, bool, ::Microsoft::Win32::RegistryView)>(&::Microsoft::Win32::RegistryKey::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1815dd080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {".ctor", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::Dispose)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1815db2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.OpenBaseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::RegistryKey* (*)(::Microsoft::Win32::RegistryHive, ::Microsoft::Win32::RegistryView)>(&::Microsoft::Win32::RegistryKey::OpenBaseKey)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1815dc6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"OpenBaseKey", {}, {::i2c::type_of<::Microsoft::Win32::RegistryHive>(), ::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.OpenSubKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::RegistryKey* (::Microsoft::Win32::RegistryKey::*)(::StringW, bool)>(&::Microsoft::Win32::RegistryKey::OpenSubKey)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1815dc880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"OpenSubKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.InternalSubKeyCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::InternalSubKeyCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalSubKeyCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.GetSubKeyNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::GetSubKeyNames)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1815db6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetSubKeyNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.InternalGetSubKeyNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::InternalGetSubKeyNames)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1815db6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetSubKeyNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Microsoft::Win32::RegistryKey::*)(::StringW, ::System::Object*, ::Microsoft::Win32::RegistryValueOptions)>(&::Microsoft::Win32::RegistryKey::GetValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815db830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Microsoft::Win32::RegistryValueOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.InternalGetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Microsoft::Win32::RegistryKey::*)(::StringW, ::System::Object*, bool, bool)>(&::Microsoft::Win32::RegistryKey::InternalGetValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815dc240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815dcaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                    {::i2c::class_of<::Microsoft::Win32::RegistryKey*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.FixupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Microsoft::Win32::RegistryKey::FixupName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1815db3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"FixupName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.FixupPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::Microsoft::Win32::RegistryKey::FixupPath)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1815db5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"FixupPath", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.EnsureNotDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::EnsureNotDisposed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815db3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"EnsureNotDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.GetSubKeyPermissionCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::RegistryKeyPermissionCheck (::Microsoft::Win32::RegistryKey::*)(bool)>(&::Microsoft::Win32::RegistryKey::GetSubKeyPermissionCheck)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1815db810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetSubKeyPermissionCheck", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.ValidateKeyName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Microsoft::Win32::RegistryKey::ValidateKeyName)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1815dcae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"ValidateKeyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.ValidateKeyView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Microsoft::Win32::RegistryView)>(&::Microsoft::Win32::RegistryKey::ValidateKeyView)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815dccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"ValidateKeyView", {}, {::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.IsSystemKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::IsSystemKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815dc580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"IsSystemKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::RegistryKey.IsPerfDataKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Microsoft::Win32::RegistryKey::*)()>(&::Microsoft::Win32::RegistryKey::IsPerfDataKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815dc570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"IsPerfDataKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Microsoft::Win32::SafeHandles::SafeRegistryHandle*& Microsoft::Win32::RegistryKey::__cordl_internal_get__hkey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hkey;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeRegistryHandle* const& Microsoft::Win32::RegistryKey::__cordl_internal_get__hkey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hkey;
}
constexpr void Microsoft::Win32::RegistryKey::__cordl_internal_set__hkey(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hkey = value;
}
constexpr ::StringW& Microsoft::Win32::RegistryKey::__cordl_internal_get__keyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyName;
}
constexpr ::StringW const& Microsoft::Win32::RegistryKey::__cordl_internal_get__keyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyName;
}
constexpr void Microsoft::Win32::RegistryKey::__cordl_internal_set__keyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyName = value;
}
constexpr bool& Microsoft::Win32::RegistryKey::__cordl_internal_get__remoteKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteKey;
}
constexpr bool const& Microsoft::Win32::RegistryKey::__cordl_internal_get__remoteKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteKey;
}
constexpr void Microsoft::Win32::RegistryKey::__cordl_internal_set__remoteKey(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteKey = value;
}
constexpr ::Microsoft::Win32::RegistryKey_StateFlags& Microsoft::Win32::RegistryKey::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::Microsoft::Win32::RegistryKey_StateFlags const& Microsoft::Win32::RegistryKey::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Microsoft::Win32::RegistryKey::__cordl_internal_set__state(::Microsoft::Win32::RegistryKey_StateFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck& Microsoft::Win32::RegistryKey::__cordl_internal_get__checkMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkMode;
}
constexpr ::Microsoft::Win32::RegistryKeyPermissionCheck const& Microsoft::Win32::RegistryKey::__cordl_internal_get__checkMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkMode;
}
constexpr void Microsoft::Win32::RegistryKey::__cordl_internal_set__checkMode(::Microsoft::Win32::RegistryKeyPermissionCheck  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkMode = value;
}
constexpr ::Microsoft::Win32::RegistryView& Microsoft::Win32::RegistryKey::__cordl_internal_get__regView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regView;
}
constexpr ::Microsoft::Win32::RegistryView const& Microsoft::Win32::RegistryKey::__cordl_internal_get__regView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____regView;
}
constexpr void Microsoft::Win32::RegistryKey::__cordl_internal_set__regView(::Microsoft::Win32::RegistryView  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____regView = value;
}
inline void Microsoft::Win32::RegistryKey::setStaticF_HKEY_CLASSES_ROOT(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "HKEY_CLASSES_ROOT", ::Microsoft::Win32::RegistryKey*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Microsoft::Win32::RegistryKey::getStaticF_HKEY_CLASSES_ROOT()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "HKEY_CLASSES_ROOT", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::setStaticF_HKEY_CURRENT_USER(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "HKEY_CURRENT_USER", ::Microsoft::Win32::RegistryKey*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Microsoft::Win32::RegistryKey::getStaticF_HKEY_CURRENT_USER()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "HKEY_CURRENT_USER", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::setStaticF_HKEY_LOCAL_MACHINE(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "HKEY_LOCAL_MACHINE", ::Microsoft::Win32::RegistryKey*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Microsoft::Win32::RegistryKey::getStaticF_HKEY_LOCAL_MACHINE()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "HKEY_LOCAL_MACHINE", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::setStaticF_HKEY_USERS(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "HKEY_USERS", ::Microsoft::Win32::RegistryKey*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Microsoft::Win32::RegistryKey::getStaticF_HKEY_USERS()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "HKEY_USERS", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::setStaticF_HKEY_PERFORMANCE_DATA(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "HKEY_PERFORMANCE_DATA", ::Microsoft::Win32::RegistryKey*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Microsoft::Win32::RegistryKey::getStaticF_HKEY_PERFORMANCE_DATA()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "HKEY_PERFORMANCE_DATA", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::setStaticF_HKEY_CURRENT_CONFIG(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "HKEY_CURRENT_CONFIG", ::Microsoft::Win32::RegistryKey*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Microsoft::Win32::RegistryKey::getStaticF_HKEY_CURRENT_CONFIG()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "HKEY_CURRENT_CONFIG", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::setStaticF_HKEY_DYN_DATA(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "HKEY_DYN_DATA", ::Microsoft::Win32::RegistryKey*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr Microsoft::Win32::RegistryKey::getStaticF_HKEY_DYN_DATA()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "HKEY_DYN_DATA", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::setStaticF_s_hkeyNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_hkeyNames", ::Microsoft::Win32::RegistryKey*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Microsoft::Win32::RegistryKey::getStaticF_s_hkeyNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_hkeyNames", ::Microsoft::Win32::RegistryKey*>();
}
inline void Microsoft::Win32::RegistryKey::ClosePerfDataKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"ClosePerfDataKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::OpenBaseKeyCore(::Microsoft::Win32::RegistryHive  hKeyHive, ::Microsoft::Win32::RegistryView  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"OpenBaseKeyCore", {}, {::i2c::type_of<::Microsoft::Win32::RegistryHive>(), ::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::RegistryKey*>(nullptr, ___internal_method, hKeyHive, view);
}
inline ::Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::InternalOpenSubKeyCore(::StringW  name, bool  writable, bool  throwOnPermissionFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalOpenSubKeyCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::RegistryKey*>(this, ___internal_method, name, writable, throwOnPermissionFailure);
}
inline int32_t Microsoft::Win32::RegistryKey::InternalSubKeyCountCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalSubKeyCountCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Microsoft::Win32::RegistryKey::InternalGetSubKeyNamesCore(int32_t  subkeys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetSubKeyNamesCore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, subkeys);
}
inline ::System::Object* Microsoft::Win32::RegistryKey::InternalGetValueCore(::StringW  name, ::System::Object*  defaultValue, bool  doNotExpand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetValueCore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, defaultValue, doNotExpand);
}
inline void Microsoft::Win32::RegistryKey::Win32Error(int32_t  errorCode, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"Win32Error", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, str);
}
inline int32_t Microsoft::Win32::RegistryKey::GetRegistryKeyAccess(bool  isWritable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetRegistryKeyAccess", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, isWritable);
}
inline void Microsoft::Win32::RegistryKey::_ctor(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hkey, bool  writable, bool  systemkey, bool  remoteKey, bool  isPerfData, ::Microsoft::Win32::RegistryView  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {".ctor", {}, {::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hkey, writable, systemkey, remoteKey, isPerfData, view);
}
inline void Microsoft::Win32::RegistryKey::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::OpenBaseKey(::Microsoft::Win32::RegistryHive  hKey, ::Microsoft::Win32::RegistryView  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"OpenBaseKey", {}, {::i2c::type_of<::Microsoft::Win32::RegistryHive>(), ::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::RegistryKey*>(nullptr, ___internal_method, hKey, view);
}
inline ::Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::OpenSubKey(::StringW  name, bool  writable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"OpenSubKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::RegistryKey*>(this, ___internal_method, name, writable);
}
inline int32_t Microsoft::Win32::RegistryKey::InternalSubKeyCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalSubKeyCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Microsoft::Win32::RegistryKey::GetSubKeyNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetSubKeyNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Microsoft::Win32::RegistryKey::InternalGetSubKeyNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetSubKeyNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Object* Microsoft::Win32::RegistryKey::GetValue(::StringW  name, ::System::Object*  defaultValue, ::Microsoft::Win32::RegistryValueOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Microsoft::Win32::RegistryValueOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, defaultValue, options);
}
inline ::System::Object* Microsoft::Win32::RegistryKey::InternalGetValue(::StringW  name, ::System::Object*  defaultValue, bool  doNotExpand, bool  checkSecurity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"InternalGetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, defaultValue, doNotExpand, checkSecurity);
}
inline ::StringW Microsoft::Win32::RegistryKey::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Microsoft::Win32::RegistryKey*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Microsoft::Win32::RegistryKey::FixupName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"FixupName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name);
}
inline void Microsoft::Win32::RegistryKey::FixupPath(::System::Text::StringBuilder*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"FixupPath", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline void Microsoft::Win32::RegistryKey::EnsureNotDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"EnsureNotDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Microsoft::Win32::RegistryKeyPermissionCheck Microsoft::Win32::RegistryKey::GetSubKeyPermissionCheck(bool  subkeyWritable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"GetSubKeyPermissionCheck", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::RegistryKeyPermissionCheck>(this, ___internal_method, subkeyWritable);
}
inline void Microsoft::Win32::RegistryKey::ValidateKeyName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"ValidateKeyName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void Microsoft::Win32::RegistryKey::ValidateKeyView(::Microsoft::Win32::RegistryView  view)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"ValidateKeyView", {}, {::i2c::type_of<::Microsoft::Win32::RegistryView>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, view);
}
inline bool Microsoft::Win32::RegistryKey::IsSystemKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"IsSystemKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Microsoft::Win32::RegistryKey::IsPerfDataKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::RegistryKey*>(),
                        {"IsPerfDataKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::New_ctor(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*  hkey, bool  writable, bool  systemkey, bool  remoteKey, bool  isPerfData, ::Microsoft::Win32::RegistryView  view)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Microsoft::Win32::RegistryKey*>(hkey, writable, systemkey, remoteKey, isPerfData, view));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Microsoft::Win32::RegistryKey::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Microsoft::Win32::RegistryKey::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::RegistryKey::RegistryKey()   {
}
