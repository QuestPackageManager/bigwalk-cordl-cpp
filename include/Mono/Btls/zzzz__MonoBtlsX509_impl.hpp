#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509.hpp"
#include "Mono/Btls/zzzz__MonoBtlsObject_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Format_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509Name_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509TrustKind_def.hpp"
#include "Mono/Btls/zzzz__MonoBtlsX509_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509_BoringX509Handle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509_BoringX509Handle::*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509_BoringX509Handle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509_BoringX509Handle.ReleaseHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Btls::MonoBtlsX509_BoringX509Handle::*)()>(&::Mono::Btls::MonoBtlsX509_BoringX509Handle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dae630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(),
                    {::i2c::class_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509_BoringX509Handle.StealHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Mono::Btls::MonoBtlsX509_BoringX509Handle::*)()>(&::Mono::Btls::MonoBtlsX509_BoringX509Handle::StealHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181dae6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(),
                        {"StealHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsX509_BoringX509Handle::_ctor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline bool Mono::Btls::MonoBtlsX509_BoringX509Handle::ReleaseHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509_BoringX509Handle::StealHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(),
                        {"StealHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509_BoringX509Handle* Mono::Btls::MonoBtlsX509_BoringX509Handle::New_ctor(::System::IntPtr  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509_BoringX509Handle::MonoBtlsX509_BoringX509Handle()   {
}
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509_BoringX509Handle* (::Mono::Btls::MonoBtlsX509::*)()>(&::Mono::Btls::MonoBtlsX509::get_Handle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181dbdf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509::*)(::Mono::Btls::MonoBtlsX509_BoringX509Handle*)>(&::Mono::Btls::MonoBtlsX509::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180544e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.mono_btls_x509_up_ref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509::mono_btls_x509_up_ref)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbe2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.mono_btls_x509_from_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t, ::Mono::Btls::MonoBtlsX509Format)>(&::Mono::Btls::MonoBtlsX509::mono_btls_x509_from_data)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dbe130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_from_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.mono_btls_x509_get_subject_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509::mono_btls_x509_get_subject_name)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbe270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_get_subject_name", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.mono_btls_x509_get_raw_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::Mono::Btls::MonoBtlsX509Format)>(&::Mono::Btls::MonoBtlsX509::mono_btls_x509_get_raw_data)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181dbe1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_get_raw_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.mono_btls_x509_cmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509::mono_btls_x509_cmp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dbe020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_cmp", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.mono_btls_x509_free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Mono::Btls::MonoBtlsX509::mono_btls_x509_free)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181dbe0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.mono_btls_x509_add_explicit_trust
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Mono::Btls::MonoBtlsX509TrustKind)>(&::Mono::Btls::MonoBtlsX509::mono_btls_x509_add_explicit_trust)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181dbdf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_add_explicit_trust", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (::Mono::Btls::MonoBtlsX509::*)()>(&::Mono::Btls::MonoBtlsX509::Copy)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181dbd6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"Copy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.LoadFromData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509* (*)(::ArrayW<uint8_t>, ::Mono::Btls::MonoBtlsX509Format)>(&::Mono::Btls::MonoBtlsX509::LoadFromData)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181dbdd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"LoadFromData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.GetSubjectName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Btls::MonoBtlsX509Name* (::Mono::Btls::MonoBtlsX509::*)()>(&::Mono::Btls::MonoBtlsX509::GetSubjectName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181dbdbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"GetSubjectName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.GetSubjectNameHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Mono::Btls::MonoBtlsX509::*)()>(&::Mono::Btls::MonoBtlsX509::GetSubjectNameHash)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181dbda00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"GetSubjectNameHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.GetRawData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Btls::MonoBtlsX509::*)(::Mono::Btls::MonoBtlsX509Format)>(&::Mono::Btls::MonoBtlsX509::GetRawData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181dbd810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"GetRawData", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Mono::Btls::MonoBtlsX509*, ::Mono::Btls::MonoBtlsX509*)>(&::Mono::Btls::MonoBtlsX509::Compare)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181dbd580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"Compare", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsX509.AddExplicitTrust
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Btls::MonoBtlsX509::*)(::Mono::Btls::MonoBtlsX509TrustKind)>(&::Mono::Btls::MonoBtlsX509::AddExplicitTrust)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181dbd470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"AddExplicitTrust", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Mono::Btls::MonoBtlsX509_BoringX509Handle* Mono::Btls::MonoBtlsX509::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>(this, ___internal_method);
}
inline void Mono::Btls::MonoBtlsX509::_ctor(::Mono::Btls::MonoBtlsX509_BoringX509Handle*  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509_BoringX509Handle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509::mono_btls_x509_up_ref(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_up_ref", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509::mono_btls_x509_from_data(::System::IntPtr  data, int32_t  len, ::Mono::Btls::MonoBtlsX509Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_from_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data, len, format);
}
inline ::System::IntPtr Mono::Btls::MonoBtlsX509::mono_btls_x509_get_subject_name(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_get_subject_name", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsX509::mono_btls_x509_get_raw_data(::System::IntPtr  handle, ::System::IntPtr  bio, ::Mono::Btls::MonoBtlsX509Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_get_raw_data", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, bio, format);
}
inline int32_t Mono::Btls::MonoBtlsX509::mono_btls_x509_cmp(::System::IntPtr  a, ::System::IntPtr  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_cmp", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void Mono::Btls::MonoBtlsX509::mono_btls_x509_free(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_free", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline int32_t Mono::Btls::MonoBtlsX509::mono_btls_x509_add_explicit_trust(::System::IntPtr  handle, ::Mono::Btls::MonoBtlsX509TrustKind  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"mono_btls_x509_add_explicit_trust", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, handle, kind);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsX509::Copy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"Copy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(this, ___internal_method);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsX509::LoadFromData(::ArrayW<uint8_t>  buffer, ::Mono::Btls::MonoBtlsX509Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"LoadFromData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509*>(nullptr, ___internal_method, buffer, format);
}
inline ::Mono::Btls::MonoBtlsX509Name* Mono::Btls::MonoBtlsX509::GetSubjectName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"GetSubjectName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Btls::MonoBtlsX509Name*>(this, ___internal_method);
}
inline int64_t Mono::Btls::MonoBtlsX509::GetSubjectNameHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"GetSubjectNameHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Btls::MonoBtlsX509::GetRawData(::Mono::Btls::MonoBtlsX509Format  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"GetRawData", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509Format>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, format);
}
inline int32_t Mono::Btls::MonoBtlsX509::Compare(::Mono::Btls::MonoBtlsX509*  a, ::Mono::Btls::MonoBtlsX509*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"Compare", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509*>(), ::i2c::type_of<::Mono::Btls::MonoBtlsX509*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
inline void Mono::Btls::MonoBtlsX509::AddExplicitTrust(::Mono::Btls::MonoBtlsX509TrustKind  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsX509*>(),
                        {"AddExplicitTrust", {}, {::i2c::type_of<::Mono::Btls::MonoBtlsX509TrustKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kind);
}
inline ::Mono::Btls::MonoBtlsX509* Mono::Btls::MonoBtlsX509::New_ctor(::Mono::Btls::MonoBtlsX509_BoringX509Handle*  handle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Btls::MonoBtlsX509*>(handle));
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsX509::MonoBtlsX509()   {
}
