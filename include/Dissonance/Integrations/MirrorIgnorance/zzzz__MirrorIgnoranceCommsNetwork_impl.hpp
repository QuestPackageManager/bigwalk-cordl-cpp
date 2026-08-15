#pragma once
// IWYU pragma private; include "Dissonance/Integrations/MirrorIgnorance/MirrorIgnoranceCommsNetwork.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_impl.hpp"
#include "Dissonance/Networking/zzzz__BaseCommsNetwork_5_impl.hpp"
#include "Dissonance/zzzz__Unit_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceCommsNetwork_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__DissonanceNetworkMessage_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorConn_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceClient_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceCommsNetwork_def.hpp"
#include "Dissonance/Integrations/MirrorIgnorance/zzzz__MirrorIgnoranceServer_def.hpp"
#include "Dissonance/zzzz__Unit_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c.__ctor_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803d15d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>(),
                        {"<.ctor>b__11_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::setStaticF___9(::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*, "<>9", ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>(std::forward<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>(value));
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*, "<>9", ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>();
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::setStaticF___9__11_0(::System::Func_1<::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::ArrayW<uint8_t>>*, "<>9__11_0", ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>(std::forward<::System::Func_1<::ArrayW<uint8_t>>*>(value));
}
inline ::System::Func_1<::ArrayW<uint8_t>>* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::ArrayW<uint8_t>>*, "<>9__11_0", ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>();
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::__ctor_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>(),
                        {"<.ctor>b__11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork___c::MirrorIgnoranceCommsNetwork___c()   {
}
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork.CreateServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer* (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::*)(::Dissonance::Unit)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::CreateServer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803cde50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork.CreateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient* (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::*)(::Dissonance::Unit)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::CreateClient)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803cddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::Update)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1803ce210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::Initialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cdf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                    {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork.PreprocessPacketToClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::*)(::System::ArraySegment_1<uint8_t>, ::Dissonance::Integrations::MirrorIgnorance::MirrorConn)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::PreprocessPacketToClient)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803cdf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {"PreprocessPacketToClient", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork.PreprocessPacketToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::PreprocessPacketToServer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803ce120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {"PreprocessPacketToServer", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork.NullMessageReceivedHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnection*, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage)>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::NullMessageReceivedHandler)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803cdf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {"NullMessageReceivedHandler", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::*)()>(&::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803ce540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::__cordl_internal_get__loopbackBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopbackBuffers;
}
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>* const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::__cordl_internal_get__loopbackBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopbackBuffers;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::__cordl_internal_set__loopbackBuffers(::Dissonance::Datastructures::ConcurrentPool_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopbackBuffers = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::__cordl_internal_get__loopbackQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopbackQueue;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::__cordl_internal_get__loopbackQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopbackQueue;
}
constexpr void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::__cordl_internal_set__loopbackQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopbackQueue = value;
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::CreateServer(::Dissonance::Unit  details)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceServer*>(this, ___internal_method, details);
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::CreateClient(::Dissonance::Unit  details)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceClient*>(this, ___internal_method, details);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::PreprocessPacketToClient(::System::ArraySegment_1<uint8_t>  packet, ::Dissonance::Integrations::MirrorIgnorance::MirrorConn  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {"PreprocessPacketToClient", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::MirrorConn>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet, destination);
}
inline bool Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::PreprocessPacketToServer(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {"PreprocessPacketToServer", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::NullMessageReceivedHandler(::Mirror::NetworkConnection*  source, ::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {"NullMessageReceivedHandler", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Dissonance::Integrations::MirrorIgnorance::DissonanceNetworkMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, msg);
}
inline void Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork* Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Integrations::MirrorIgnorance::MirrorIgnoranceCommsNetwork::MirrorIgnoranceCommsNetwork()   {
}
