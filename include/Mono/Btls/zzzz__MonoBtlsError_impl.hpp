#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsError.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Btls/zzzz__MonoBtlsError_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.mono_btls_error_clear_error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Btls::MonoBtlsError::mono_btls_error_clear_error)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b45140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_clear_error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.mono_btls_error_get_error_line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsError::mono_btls_error_get_error_line)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b45450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_get_error_line", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.mono_btls_error_get_error_string_n
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, int32_t)>(&::Mono::Btls::MonoBtlsError::mono_btls_error_get_error_string_n)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181b454e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_get_error_string_n", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.mono_btls_error_get_reason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Mono::Btls::MonoBtlsError::mono_btls_error_get_reason)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b451b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_get_reason", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.ClearError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mono::Btls::MonoBtlsError::ClearError)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b45140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"ClearError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.GetErrorString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::Mono::Btls::MonoBtlsError::GetErrorString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181b45230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"GetErrorString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.GetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::StringW>, ::by_ref<int32_t>)>(&::Mono::Btls::MonoBtlsError::GetError)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181b45390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"GetError", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Btls::MonoBtlsError.GetErrorReason
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Mono::Btls::MonoBtlsError::GetErrorReason)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b451b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"GetErrorReason", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Btls::MonoBtlsError::mono_btls_error_clear_error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_clear_error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t Mono::Btls::MonoBtlsError::mono_btls_error_get_error_line(::by_ref<::System::IntPtr>  file, ::by_ref<int32_t>  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_get_error_line", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, file, line);
}
inline void Mono::Btls::MonoBtlsError::mono_btls_error_get_error_string_n(int32_t  error, ::System::IntPtr  buf, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_get_error_string_n", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error, buf, len);
}
inline int32_t Mono::Btls::MonoBtlsError::mono_btls_error_get_reason(int32_t  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"mono_btls_error_get_reason", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, error);
}
inline void Mono::Btls::MonoBtlsError::ClearError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"ClearError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Mono::Btls::MonoBtlsError::GetErrorString(int32_t  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"GetErrorString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, error);
}
inline int32_t Mono::Btls::MonoBtlsError::GetError(::by_ref<::StringW>  file, ::by_ref<int32_t>  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"GetError", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, file, line);
}
inline int32_t Mono::Btls::MonoBtlsError::GetErrorReason(int32_t  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Btls::MonoBtlsError*>(),
                        {"GetErrorReason", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, error);
}
// Ctor Parameters []
constexpr ::Mono::Btls::MonoBtlsError::MonoBtlsError()   {
}
