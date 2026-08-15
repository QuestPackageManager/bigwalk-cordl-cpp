#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/SendLoop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__SendLoop_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__Connection_def.hpp"
#include "Mirror/SimpleWeb/zzzz__MaskHelper_def.hpp"
#include "Mirror/SimpleWeb/zzzz__SendLoop_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::SendLoop_Config._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SendLoop_Config::*)(::Mirror::SimpleWeb::Connection*, int32_t, bool)>(&::Mirror::SimpleWeb::SendLoop_Config::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ad0440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop_Config>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SendLoop_Config.Deconstruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::SendLoop_Config::*)(::by_ref<::Mirror::SimpleWeb::Connection*>, ::by_ref<int32_t>, ::by_ref<bool>)>(&::Mirror::SimpleWeb::SendLoop_Config::Deconstruct)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181ad02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop_Config>(),
                        {"Deconstruct", {}, {::i2c::type_of<::by_ref<::Mirror::SimpleWeb::Connection*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::SendLoop_Config::_ctor(::Mirror::SimpleWeb::Connection*  conn, int32_t  bufferSize, bool  setMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop_Config>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::Connection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, conn, bufferSize, setMask);
}
inline void Mirror::SimpleWeb::SendLoop_Config::Deconstruct(::by_ref<::Mirror::SimpleWeb::Connection*>  conn, ::by_ref<int32_t>  bufferSize, ::by_ref<bool>  setMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop_Config>(),
                        {"Deconstruct", {}, {::i2c::type_of<::by_ref<::Mirror::SimpleWeb::Connection*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, conn, bufferSize, setMask);
}
// Ctor Parameters [CppParam { name: "conn", ty: "::Mirror::SimpleWeb::Connection*", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "setMask", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::SendLoop_Config::SendLoop_Config(::Mirror::SimpleWeb::Connection*  conn, int32_t  bufferSize, bool  setMask) noexcept  {
this->conn = conn;
this->bufferSize = bufferSize;
this->setMask = setMask;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SendLoop_Config::SendLoop_Config()   {
}
//  Writing Method size for method: ::Mirror::SimpleWeb::SendLoop.Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::SimpleWeb::SendLoop_Config)>(&::Mirror::SimpleWeb::SendLoop::Loop)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x181ad3480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop*>(),
                        {"Loop", {}, {::i2c::type_of<::Mirror::SimpleWeb::SendLoop_Config>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SendLoop.SendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, ::Mirror::SimpleWeb::ArrayBuffer*, bool, ::Mirror::SimpleWeb::MaskHelper*)>(&::Mirror::SimpleWeb::SendLoop::SendMessage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181ad3b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop*>(),
                        {"SendMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Mirror::SimpleWeb::MaskHelper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::SendLoop.WriteHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::Mirror::SimpleWeb::SendLoop::WriteHeader)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ad3d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop*>(),
                        {"WriteHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::SendLoop::Loop(::Mirror::SimpleWeb::SendLoop_Config  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop*>(),
                        {"Loop", {}, {::i2c::type_of<::Mirror::SimpleWeb::SendLoop_Config>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config);
}
inline int32_t Mirror::SimpleWeb::SendLoop::SendMessage(::ArrayW<uint8_t>  buffer, int32_t  startOffset, ::Mirror::SimpleWeb::ArrayBuffer*  msg, bool  setMask, ::Mirror::SimpleWeb::MaskHelper*  maskHelper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop*>(),
                        {"SendMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Mirror::SimpleWeb::MaskHelper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, startOffset, msg, setMask, maskHelper);
}
inline int32_t Mirror::SimpleWeb::SendLoop::WriteHeader(::ArrayW<uint8_t>  buffer, int32_t  startOffset, int32_t  msgLength, bool  setMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::SendLoop*>(),
                        {"WriteHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, startOffset, msgLength, setMask);
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::SendLoop::SendLoop()   {
}
