#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509Name.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Name_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509NameEntryType_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Name_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::*)(::System::IntPtr, bool)>(&::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181dae860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::*)()>(&::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dae7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr bool& Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::__cordl_internal_get_dontFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontFree;
}
constexpr bool const& Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::__cordl_internal_get_dontFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dontFree;
}
constexpr void Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::__cordl_internal_set_dontFree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dontFree = value;
}
inline void Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, ownsHandle);
}
inline bool Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle* Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::New_ctor(::System::IntPtr  handle, bool  ownsHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>(handle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle::MonoBtlsX509Name_BoringX509NameHandle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_hash)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dba690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_hash", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_get_entry_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_count)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dba3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_count", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_get_entry_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509NameEntryType (*)(::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_type)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dba560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_type", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_get_entry_oid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_oid)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dba4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_oid", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_get_entry_oid_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::by_ref<::System::IntPtr>)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_oid_data)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dba420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_oid_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_get_entry_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::by_ref<int32_t>, ::by_ref<::System::IntPtr>)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_value)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dba5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_value", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_from_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(void*, int32_t, int32_t)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_from_data)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dba300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_from_data", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.mono_btls_x509_name_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dba280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle* (::Mono::Btls::MonoBtlsX509Name::*)()>(&::Mono::Btls::MonoBtlsX509Name::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dba230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509Name::*)(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*)>(&::Mono::Btls::MonoBtlsX509Name::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180544e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.GetHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mono::Btls::MonoBtlsX509Name::*)()>(&::Mono::Btls::MonoBtlsX509Name::GetHash)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181dba150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.GetEntryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Btls::MonoBtlsX509Name::*)()>(&::Mono::Btls::MonoBtlsX509Name::GetEntryCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181db9a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.GetEntryType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509NameEntryType (::Mono::Btls::MonoBtlsX509Name::*)(int32_t)>(&::Mono::Btls::MonoBtlsX509Name::GetEntryType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181db9e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.GetEntryOid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Btls::MonoBtlsX509Name::*)(int32_t)>(&::Mono::Btls::MonoBtlsX509Name::GetEntryOid)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181db9cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryOid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.GetEntryOidData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Btls::MonoBtlsX509Name::*)(int32_t)>(&::Mono::Btls::MonoBtlsX509Name::GetEntryOidData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181db9b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryOidData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.GetEntryValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Btls::MonoBtlsX509Name::*)(int32_t, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsX509Name::GetEntryValue)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181db9f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509Name.CreateFromData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Name* (*)(::ArrayW<uint8_t>, bool)>(&::Mono::Btls::MonoBtlsX509Name::CreateFromData)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181db9930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"CreateFromData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline int64_t Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_hash(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_hash", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_count(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_count", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsX509NameEntryType Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_type(::System::IntPtr  name, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_type", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509NameEntryType>(nullptr, ___internal_method, name, index);
}
inline int32_t Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_oid(::System::IntPtr  name, int32_t  index, ::System::IntPtr  buffer, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_oid", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name, index, buffer, size);
}
inline int32_t Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_oid_data(::System::IntPtr  name, int32_t  index, ::by_ref<::System::IntPtr>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_oid_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name, index, data);
}
inline int32_t Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_get_entry_value(::System::IntPtr  name, int32_t  index, ::by_ref<int32_t>  tag, ::by_ref<::System::IntPtr>  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_get_entry_value", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name, index, tag, str);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_from_data(void*  data, int32_t  len, int32_t  use_canon_enc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_from_data", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, len, use_canon_enc);
}
inline void Mono::Btls::MonoBtlsX509Name::mono_btls_x509_name_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"mono_btls_x509_name_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline ::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle* Mono::Btls::MonoBtlsX509Name::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509Name::_ctor(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline int64_t Mono::Btls::MonoBtlsX509Name::GetHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsX509Name::GetEntryCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509NameEntryType Mono::Btls::MonoBtlsX509Name::GetEntryType(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509NameEntryType>(this, ___internal_method, index);
}
inline ::StringW Mono::Btls::MonoBtlsX509Name::GetEntryOid(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryOid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::ArrayW<uint8_t> Mono::Btls::MonoBtlsX509Name::GetEntryOidData(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryOidData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, index);
}
inline ::StringW Mono::Btls::MonoBtlsX509Name::GetEntryValue(int32_t  index, ::by_ref<int32_t>  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"GetEntryValue", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index, tag);
}
inline ::Mono::Btls::MonoBtlsX509Name* Mono::Btls::MonoBtlsX509Name::CreateFromData(::ArrayW<uint8_t>  data, bool  use_canon_enc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509Name*>(),
                        {"CreateFromData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Name*>(nullptr, ___internal_method, data, use_canon_enc);
}
inline ::Mono::Btls::MonoBtlsX509Name* Mono::Btls::MonoBtlsX509Name::New_ctor(::Mono::Btls::MonoBtlsX509Name_BoringX509NameHandle*  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509Name*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509Name::MonoBtlsX509Name()   {
}
