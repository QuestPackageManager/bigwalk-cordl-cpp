#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Log.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__Log_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Log_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__ILogger_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::Log_Levels::Log_Levels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::Log_Levels::Log_Levels()   {
}
constexpr ::Mirror::SimpleWeb::Log_Levels  Mirror::SimpleWeb::Log_Levels::none{static_cast<int32_t>(0x0)};
constexpr ::Mirror::SimpleWeb::Log_Levels  Mirror::SimpleWeb::Log_Levels::error{static_cast<int32_t>(0x1)};
constexpr ::Mirror::SimpleWeb::Log_Levels  Mirror::SimpleWeb::Log_Levels::warn{static_cast<int32_t>(0x2)};
constexpr ::Mirror::SimpleWeb::Log_Levels  Mirror::SimpleWeb::Log_Levels::info{static_cast<int32_t>(0x3)};
constexpr ::Mirror::SimpleWeb::Log_Levels  Mirror::SimpleWeb::Log_Levels::verbose{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.BufferToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, ::System::Nullable_1<int32_t>)>(&::Mirror::SimpleWeb::Log::BufferToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ad09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"BufferToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.DumpBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Mirror::SimpleWeb::Log::DumpBuffer)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181ad0a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"DumpBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.DumpBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Mirror::SimpleWeb::ArrayBuffer*)>(&::Mirror::SimpleWeb::Log::DumpBuffer)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181ad0b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"DumpBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::Mirror::SimpleWeb::Log::Verbose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad1110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::Mirror::SimpleWeb::Log::Info)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad1070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.InfoException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::Mirror::SimpleWeb::Log::InfoException)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181ad0ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"InfoException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::Mirror::SimpleWeb::Log::Warn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ad11b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, bool)>(&::Mirror::SimpleWeb::Log::Error)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad0cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Log.Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*)>(&::Mirror::SimpleWeb::Log::Exception)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181ad0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::Log::setStaticF_logger(::UnityEngine::ILogger*  value)  {
::cordl_internals::setStaticField<::UnityEngine::ILogger*, "logger", ::Mirror::SimpleWeb::Log*>(std::forward<::UnityEngine::ILogger*>(value));
}
inline ::UnityEngine::ILogger* Mirror::SimpleWeb::Log::getStaticF_logger()  {
return ::cordl_internals::getStaticField<::UnityEngine::ILogger*, "logger", ::Mirror::SimpleWeb::Log*>();
}
inline void Mirror::SimpleWeb::Log::setStaticF_level(::Mirror::SimpleWeb::Log_Levels  value)  {
::cordl_internals::setStaticField<::Mirror::SimpleWeb::Log_Levels, "level", ::Mirror::SimpleWeb::Log*>(std::forward<::Mirror::SimpleWeb::Log_Levels>(value));
}
inline ::Mirror::SimpleWeb::Log_Levels Mirror::SimpleWeb::Log::getStaticF_level()  {
return ::cordl_internals::getStaticField<::Mirror::SimpleWeb::Log_Levels, "level", ::Mirror::SimpleWeb::Log*>();
}
inline ::StringW Mirror::SimpleWeb::Log::BufferToString(::ArrayW<uint8_t>  buffer, int32_t  offset, ::System::Nullable_1<int32_t>  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"BufferToString", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer, offset, length);
}
inline void Mirror::SimpleWeb::Log::DumpBuffer(::StringW  label, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"DumpBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, label, buffer, offset, length);
}
inline void Mirror::SimpleWeb::Log::DumpBuffer(::StringW  label, ::Mirror::SimpleWeb::ArrayBuffer*  arrayBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"DumpBuffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, label, arrayBuffer);
}
inline void Mirror::SimpleWeb::Log::Verbose(::StringW  msg, bool  showColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, showColor);
}
inline void Mirror::SimpleWeb::Log::Info(::StringW  msg, bool  showColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, showColor);
}
inline void Mirror::SimpleWeb::Log::InfoException(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"InfoException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e);
}
inline void Mirror::SimpleWeb::Log::Warn(::StringW  msg, bool  showColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, showColor);
}
inline void Mirror::SimpleWeb::Log::Error(::StringW  msg, bool  showColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, msg, showColor);
}
inline void Mirror::SimpleWeb::Log::Exception(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Log*>(),
                        {"Exception", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::Log::Log()   {
}
