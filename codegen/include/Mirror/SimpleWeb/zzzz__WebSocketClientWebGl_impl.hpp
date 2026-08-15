#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/WebSocketClientWebGl.hpp"
#include "Mirror/SimpleWeb/zzzz__SimpleWebClient_impl.hpp"
#include "Mirror/SimpleWeb/zzzz__WebSocketClientWebGl_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)(int32_t, int32_t)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad7120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.CheckJsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::SimpleWeb::WebSocketClientWebGl::*)()>(&::Mirror::SimpleWeb::WebSocketClientWebGl::CheckJsConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ad6b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"CheckJsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)(::System::Uri*)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::Connect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ad6c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)()>(&::Mirror::SimpleWeb::WebSocketClientWebGl::Disconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181ad6d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)(::System::ArraySegment_1<uint8_t>)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::Send)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ad6fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                    {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.onOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)()>(&::Mirror::SimpleWeb::WebSocketClientWebGl::onOpen)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181ad7430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.onClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)()>(&::Mirror::SimpleWeb::WebSocketClientWebGl::onClose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ad7140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onClose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.onMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)(::System::IntPtr, int32_t)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::onMessage)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181ad72a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onMessage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.onErr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::SimpleWeb::WebSocketClientWebGl::*)()>(&::Mirror::SimpleWeb::WebSocketClientWebGl::onErr)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ad71e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onErr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.OpenCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::OpenCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad6ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"OpenCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.CloseCallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::CloseCallBack)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ad6b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"CloseCallBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.MessageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, int32_t)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::MessageCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ad6e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"MessageCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::SimpleWeb::WebSocketClientWebGl.ErrorCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::SimpleWeb::WebSocketClientWebGl::ErrorCallback)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181ad6d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"ErrorCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::SimpleWeb::WebSocketClientWebGl::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Mirror::SimpleWeb::WebSocketClientWebGl::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Mirror::SimpleWeb::WebSocketClientWebGl::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*& Mirror::SimpleWeb::WebSocketClientWebGl::__cordl_internal_get_ConnectingSendQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectingSendQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>* const& Mirror::SimpleWeb::WebSocketClientWebGl::__cordl_internal_get_ConnectingSendQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectingSendQueue;
}
constexpr void Mirror::SimpleWeb::WebSocketClientWebGl::__cordl_internal_set_ConnectingSendQueue(::System::Collections::Generic::Queue_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectingSendQueue = value;
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::setStaticF_instances(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>*, "instances", ::Mirror::SimpleWeb::WebSocketClientWebGl*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>* Mirror::SimpleWeb::WebSocketClientWebGl::getStaticF_instances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::SimpleWeb::WebSocketClientWebGl*>*, "instances", ::Mirror::SimpleWeb::WebSocketClientWebGl*>();
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxMessageSize, maxMessagesPerTick);
}
inline bool Mirror::SimpleWeb::WebSocketClientWebGl::CheckJsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"CheckJsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::Connect(::System::Uri*  serverAddress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverAddress);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::Send(::System::ArraySegment_1<uint8_t>  segment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::onOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::onClose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onClose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::onMessage(::System::IntPtr  bufferPtr, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onMessage", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferPtr, count);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::onErr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"onErr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::OpenCallback(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"OpenCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::CloseCallBack(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"CloseCallBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::MessageCallback(int32_t  index, ::System::IntPtr  bufferPtr, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"MessageCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, bufferPtr, count);
}
inline void Mirror::SimpleWeb::WebSocketClientWebGl::ErrorCallback(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::SimpleWeb::WebSocketClientWebGl*>(),
                        {"ErrorCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
inline ::Mirror::SimpleWeb::WebSocketClientWebGl* Mirror::SimpleWeb::WebSocketClientWebGl::New_ctor(int32_t  maxMessageSize, int32_t  maxMessagesPerTick)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::SimpleWeb::WebSocketClientWebGl*>(maxMessageSize, maxMessagesPerTick));
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::WebSocketClientWebGl::WebSocketClientWebGl()   {
}
