#pragma once
// IWYU pragma private; include "Microsoft/Win32/ThrowHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/Win32/zzzz__ThrowHelper_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::ThrowHelper.ThrowArgumentException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::Microsoft::Win32::ThrowHelper::ThrowArgumentException)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815e81b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::ThrowHelper.ThrowArgumentNullException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Microsoft::Win32::ThrowHelper::ThrowArgumentNullException)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815e81c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowArgumentNullException", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::ThrowHelper.ThrowSecurityException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Microsoft::Win32::ThrowHelper::ThrowSecurityException)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1815e8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowSecurityException", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::ThrowHelper.ThrowObjectDisposedException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::Microsoft::Win32::ThrowHelper::ThrowObjectDisposedException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815e81d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowObjectDisposedException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::ThrowHelper::ThrowArgumentException(::StringW  msg, ::StringW  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowArgumentException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, argument);
}
inline void Microsoft::Win32::ThrowHelper::ThrowArgumentNullException(::StringW  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowArgumentNullException", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argument);
}
inline void Microsoft::Win32::ThrowHelper::ThrowSecurityException(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowSecurityException", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg);
}
inline void Microsoft::Win32::ThrowHelper::ThrowObjectDisposedException(::StringW  objectName, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Microsoft::Win32::ThrowHelper*>(),
                        {"ThrowObjectDisposedException", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objectName, msg);
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::ThrowHelper::ThrowHelper()   {
}
