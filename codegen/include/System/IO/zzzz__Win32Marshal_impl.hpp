#pragma once
// IWYU pragma private; include "System/IO/Win32Marshal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Win32Marshal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::IO::Win32Marshal.GetExceptionForLastWin32Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::IO::Win32Marshal::GetExceptionForLastWin32Error)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1816e4040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"GetExceptionForLastWin32Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Win32Marshal.GetExceptionForWin32Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(int32_t, ::StringW)>(&::System::IO::Win32Marshal::GetExceptionForWin32Error)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1816e4070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"GetExceptionForWin32Error", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Win32Marshal.MakeHRFromErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::IO::Win32Marshal::MakeHRFromErrorCode)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1816e4470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"MakeHRFromErrorCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Win32Marshal.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::IO::Win32Marshal::GetMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1816e4460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"GetMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Exception* System::IO::Win32Marshal::GetExceptionForLastWin32Error(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"GetExceptionForLastWin32Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, path);
}
inline ::System::Exception* System::IO::Win32Marshal::GetExceptionForWin32Error(int32_t  errorCode, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"GetExceptionForWin32Error", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, errorCode, path);
}
inline int32_t System::IO::Win32Marshal::MakeHRFromErrorCode(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"MakeHRFromErrorCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, errorCode);
}
inline ::StringW System::IO::Win32Marshal::GetMessage(int32_t  errorCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::IO::Win32Marshal*>(),
                        {"GetMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode);
}
// Ctor Parameters []
constexpr ::System::IO::Win32Marshal::Win32Marshal()   {
}
