#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/Message.hpp"
#include "Mirror/SimpleWeb/zzzz__EventType_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__Message_def.hpp"
#include "Mirror/SimpleWeb/zzzz__ArrayBuffer_def.hpp"
#include "Mirror/SimpleWeb/zzzz__EventType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Message::*)(::Mirror::SimpleWeb::EventType)>(&::Mirror::SimpleWeb::Message::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad1ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::EventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Message::*)(::Mirror::SimpleWeb::ArrayBuffer*)>(&::Mirror::SimpleWeb::Message::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad1cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Message::*)(::System::Exception*)>(&::Mirror::SimpleWeb::Message::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad1d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Message::*)(int32_t, ::Mirror::SimpleWeb::EventType)>(&::Mirror::SimpleWeb::Message::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad1d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::EventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Message::*)(int32_t, ::Mirror::SimpleWeb::ArrayBuffer*)>(&::Mirror::SimpleWeb::Message::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ad1d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::Message._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::Message::*)(int32_t, ::System::Exception*)>(&::Mirror::SimpleWeb::Message::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ad1cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::SimpleWeb::Message::_ctor(::Mirror::SimpleWeb::EventType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::EventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type);
}
inline void Mirror::SimpleWeb::Message::_ctor(::Mirror::SimpleWeb::ArrayBuffer*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline void Mirror::SimpleWeb::Message::_ctor(::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, exception);
}
inline void Mirror::SimpleWeb::Message::_ctor(int32_t  connId, ::Mirror::SimpleWeb::EventType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::EventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, connId, type);
}
inline void Mirror::SimpleWeb::Message::_ctor(int32_t  connId, ::Mirror::SimpleWeb::ArrayBuffer*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::SimpleWeb::ArrayBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, connId, data);
}
inline void Mirror::SimpleWeb::Message::_ctor(int32_t  connId, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::Message>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, connId, exception);
}
// Ctor Parameters [CppParam { name: "connId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::Mirror::SimpleWeb::EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::Mirror::SimpleWeb::ArrayBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "exception", ty: "::System::Exception*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::Message::Message(int32_t  connId, ::Mirror::SimpleWeb::EventType  type, ::Mirror::SimpleWeb::ArrayBuffer*  data, ::System::Exception*  exception) noexcept  {
this->connId = connId;
this->type = type;
this->data = data;
this->exception = exception;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::Message::Message()   {
}
