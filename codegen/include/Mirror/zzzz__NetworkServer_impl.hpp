#pragma once
// IWYU pragma private; include "Mirror/NetworkServer.hpp"
#include "Mirror/zzzz__TimeSample_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkServer_def.hpp"
#include "Mirror/zzzz__CommandMessage_def.hpp"
#include "Mirror/zzzz__EntityStateMessage_def.hpp"
#include "Mirror/zzzz__InterestManagementBase_def.hpp"
#include "Mirror/zzzz__LocalConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkMessageDelegate_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkServer_def.hpp"
#include "Mirror/zzzz__NetworkWriterPooled_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__ReadyMessage_def.hpp"
#include "Mirror/zzzz__TimeSnapshotMessage_def.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkServer_DestroyMode::NetworkServer_DestroyMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkServer_DestroyMode::NetworkServer_DestroyMode()   {
}
constexpr ::Mirror::NetworkServer_DestroyMode  Mirror::NetworkServer_DestroyMode::Destroy{static_cast<int32_t>(0x0)};
constexpr ::Mirror::NetworkServer_DestroyMode  Mirror::NetworkServer_DestroyMode::Reset{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::System::Action_1<T>*& Mirror::NetworkServer___c__DisplayClass67_0_1<T>::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Mirror::NetworkServer___c__DisplayClass67_0_1<T>::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T>
constexpr void Mirror::NetworkServer___c__DisplayClass67_0_1<T>::__cordl_internal_set_handler(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
template<typename T>
inline void Mirror::NetworkServer___c__DisplayClass67_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer___c__DisplayClass67_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Mirror::NetworkServer___c__DisplayClass67_0_1<T>::_ReplaceHandler_b__0(::Mirror::NetworkConnectionToClient*  _, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer___c__DisplayClass67_0_1<T>*>(),
                        {"<ReplaceHandler>b__0", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, value);
}
template<typename T>
inline ::Mirror::NetworkServer___c__DisplayClass67_0_1<T>* Mirror::NetworkServer___c__DisplayClass67_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkServer___c__DisplayClass67_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Mirror::NetworkServer___c__DisplayClass67_0_1<T>::NetworkServer___c__DisplayClass67_0_1()   {
}
//  Writing Method size for method: ::Mirror::NetworkServer.get_tickInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Mirror::NetworkServer::get_tickInterval)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18154a130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_tickInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.get_sendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Mirror::NetworkServer::get_sendRate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815416d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_sendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.get_sendInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::Mirror::NetworkServer::get_sendInterval)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181541660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_sendInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.get_localConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::LocalConnectionToClient* (*)()>(&::Mirror::NetworkServer::get_localConnection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181552300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_localConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.set_localConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::LocalConnectionToClient*)>(&::Mirror::NetworkServer::set_localConnection)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181552390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"set_localConnection", {}, {::i2c::type_of<::Mirror::LocalConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.get_localClientActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkServer::get_localClientActive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815522c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_localClientActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkServer::get_active)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803163c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.set_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Mirror::NetworkServer::set_active)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181552340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"set_active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.get_activeHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkServer::get_activeHost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815522c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_activeHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Listen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::NetworkServer::Listen)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18154e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Listen", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::Initialize)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18154dfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.AddTransportHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::AddTransportHandlers)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18154ce60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddTransportHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::Shutdown)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x181550ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.RemoveTransportHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::RemoveTransportHandlers)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18154ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemoveTransportHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.CleanupSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::CleanupSpawned)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18154d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"CleanupSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.RegisterMessageHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::RegisterMessageHandlers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18154fd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RegisterMessageHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnClientReadyMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*, ::Mirror::ReadyMessage)>(&::Mirror::NetworkServer::OnClientReadyMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18154e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnClientReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::ReadyMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnCommandMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*, ::Mirror::CommandMessage, int32_t)>(&::Mirror::NetworkServer::OnCommandMessage)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18154e960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnCommandMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::CommandMessage>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnEntityStateMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*, ::Mirror::EntityStateMessage)>(&::Mirror::NetworkServer::OnEntityStateMessage)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18154ec20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnEntityStateMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnTimeSnapshotMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*, ::Mirror::TimeSnapshotMessage)>(&::Mirror::NetworkServer::OnTimeSnapshotMessage)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18154eed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::TimeSnapshotMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.AddConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::AddConnection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18154cb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.RemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::Mirror::NetworkServer::RemoveConnection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18154fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemoveConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SetLocalConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::LocalConnectionToClient*)>(&::Mirror::NetworkServer::SetLocalConnection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181550e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetLocalConnection", {}, {::i2c::type_of<::Mirror::LocalConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.RemoveLocalConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::RemoveLocalConnection)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18154fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemoveLocalConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.HasExternalConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkServer::HasExternalConnections)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18154df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"HasExternalConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnTransportConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::NetworkServer::OnTransportConnected)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18154f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportConnected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::OnConnected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18154eb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnConnected", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.UnpackAndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkConnectionToClient*, ::Mirror::NetworkReader*, int32_t)>(&::Mirror::NetworkServer::UnpackAndInvoke)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181551f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"UnpackAndInvoke", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnTransportData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkServer::OnTransportData)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x18154f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnTransportDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mirror::NetworkServer::OnTransportDisconnected)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18154f660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportDisconnected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.OnTransportError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::Mirror::TransportError, ::StringW)>(&::Mirror::NetworkServer::OnTransportError)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18154f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.DestroyPlayerForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::DestroyPlayerForConnection)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18154dbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DestroyPlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.ClearHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::ClearHandlers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18154d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ClearHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.GetNetworkIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::by_ref<::Mirror::NetworkIdentity*>)>(&::Mirror::NetworkServer::GetNetworkIdentity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18154de90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"GetNetworkIdentity", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Mirror::NetworkIdentity*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.DisconnectAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::DisconnectAll)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18154dd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DisconnectAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.AddPlayerForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*, uint32_t)>(&::Mirror::NetworkServer::AddPlayerForConnection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18154cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddPlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.AddPlayerForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*)>(&::Mirror::NetworkServer::AddPlayerForConnection)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18154ccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddPlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.ReplacePlayerForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*, bool)>(&::Mirror::NetworkServer::ReplacePlayerForConnection)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181550300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ReplacePlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.ReplacePlayerForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkConnectionToClient*, ::UnityEngine::GameObject*, uint32_t, bool)>(&::Mirror::NetworkServer::ReplacePlayerForConnection)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181550670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ReplacePlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.RemovePlayerForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnection*, bool)>(&::Mirror::NetworkServer::RemovePlayerForConnection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18154ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemovePlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SetClientReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::SetClientReady)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18154e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetClientReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SpawnObserversForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::SpawnObserversForConnection)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181551c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SpawnObserversForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SetClientNotReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::SetClientNotReady)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181550dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetClientNotReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SetAllClientsNotReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::SetAllClientsNotReady)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181550cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetAllClientsNotReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.ShowForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnection*)>(&::Mirror::NetworkServer::ShowForConnection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181550ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ShowForConnection", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.HideForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnection*)>(&::Mirror::NetworkServer::HideForConnection)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18154dfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"HideForConnection", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SendSpawnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnection*)>(&::Mirror::NetworkServer::SendSpawnMessage)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x181550850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SendSpawnMessage", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.CreateSpawnMessagePayload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (*)(bool, ::Mirror::NetworkIdentity*, ::Mirror::NetworkWriterPooled*, ::Mirror::NetworkWriterPooled*)>(&::Mirror::NetworkServer::CreateSpawnMessagePayload)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18154d6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"CreateSpawnMessagePayload", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkWriterPooled*>(), ::i2c::type_of<::Mirror::NetworkWriterPooled*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SendChangeOwnerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::SendChangeOwnerMessage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815507b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SendChangeOwnerMessage", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.ValidParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkServer::ValidParent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815520e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ValidParent", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SpawnObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Mirror::NetworkServer::SpawnObjects)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181551ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SpawnObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(&::Mirror::NetworkServer::Spawn)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181551ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Respawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkServer::Respawn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181550760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Respawn", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Mirror::NetworkConnection*)>(&::Mirror::NetworkServer::Spawn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181551f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, uint32_t, ::Mirror::NetworkConnection*)>(&::Mirror::NetworkServer::Spawn)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181551df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SpawnObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Mirror::NetworkConnection*)>(&::Mirror::NetworkServer::SpawnObject)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x181551450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SpawnObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.UnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Mirror::NetworkServer::UnSpawn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181551f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"UnSpawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Mirror::NetworkServer::Destroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18154dd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.DestroyObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, ::Mirror::NetworkServer_DestroyMode)>(&::Mirror::NetworkServer::DestroyObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18154d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DestroyObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::NetworkServer_DestroyMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.DestroyObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkServer_DestroyMode)>(&::Mirror::NetworkServer::DestroyObject)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18154d880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DestroyObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkServer_DestroyMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.RebuildObserversDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, bool)>(&::Mirror::NetworkServer::RebuildObserversDefault)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18154f960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RebuildObserversDefault", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.AddAllReadyServerConnectionsToObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkServer::AddAllReadyServerConnectionsToObservers)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18154c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddAllReadyServerConnectionsToObservers", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.RebuildObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity*, bool)>(&::Mirror::NetworkServer::RebuildObservers)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18154fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RebuildObservers", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.SerializeForConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkWriter* (*)(::Mirror::NetworkIdentity*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::SerializeForConnection)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181550c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SerializeForConnection", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.BroadcastToConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkServer::BroadcastToConnection)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18154d180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"BroadcastToConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.Broadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::Broadcast)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18154d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Broadcast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.NetworkEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::NetworkEarlyUpdate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18154e430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"NetworkEarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.NetworkLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::NetworkLateUpdate)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18154e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"NetworkLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkServer.ActivateHostScene
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkServer::ActivateHostScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ActivateHostScene", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkServer::setStaticF_initialized(bool  value)  {
::cordl_internals::setStaticField<bool, "initialized", ::Mirror::NetworkServer*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkServer::getStaticF_initialized()  {
return ::cordl_internals::getStaticField<bool, "initialized", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_maxConnections(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxConnections", ::Mirror::NetworkServer*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::NetworkServer::getStaticF_maxConnections()  {
return ::cordl_internals::getStaticField<int32_t, "maxConnections", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_tickRate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tickRate", ::Mirror::NetworkServer*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::NetworkServer::getStaticF_tickRate()  {
return ::cordl_internals::getStaticField<int32_t, "tickRate", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_lastSendTime(double_t  value)  {
::cordl_internals::setStaticField<double_t, "lastSendTime", ::Mirror::NetworkServer*>(std::forward<double_t>(value));
}
inline double_t Mirror::NetworkServer::getStaticF_lastSendTime()  {
return ::cordl_internals::getStaticField<double_t, "lastSendTime", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF__localConnection_k__BackingField(::Mirror::LocalConnectionToClient*  value)  {
::cordl_internals::setStaticField<::Mirror::LocalConnectionToClient*, "<localConnection>k__BackingField", ::Mirror::NetworkServer*>(std::forward<::Mirror::LocalConnectionToClient*>(value));
}
inline ::Mirror::LocalConnectionToClient* Mirror::NetworkServer::getStaticF__localConnection_k__BackingField()  {
return ::cordl_internals::getStaticField<::Mirror::LocalConnectionToClient*, "<localConnection>k__BackingField", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_connections(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*, "connections", ::Mirror::NetworkServer*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>* Mirror::NetworkServer::getStaticF_connections()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*, "connections", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_handlers(::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*, "handlers", ::Mirror::NetworkServer*>(std::forward<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>* Mirror::NetworkServer::getStaticF_handlers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::NetworkMessageDelegate*>*, "handlers", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_spawned(::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*, "spawned", ::Mirror::NetworkServer*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>* Mirror::NetworkServer::getStaticF_spawned()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::UnityW<::Mirror::NetworkIdentity>>*, "spawned", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_dontListen(bool  value)  {
::cordl_internals::setStaticField<bool, "dontListen", ::Mirror::NetworkServer*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkServer::getStaticF_dontListen()  {
return ::cordl_internals::getStaticField<bool, "dontListen", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF__active_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<active>k__BackingField", ::Mirror::NetworkServer*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkServer::getStaticF__active_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<active>k__BackingField", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_isLoadingScene(bool  value)  {
::cordl_internals::setStaticField<bool, "isLoadingScene", ::Mirror::NetworkServer*>(std::forward<bool>(value));
}
inline bool Mirror::NetworkServer::getStaticF_isLoadingScene()  {
return ::cordl_internals::getStaticField<bool, "isLoadingScene", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_aoi(::UnityW<::Mirror::InterestManagementBase>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::InterestManagementBase>, "aoi", ::Mirror::NetworkServer*>(std::forward<::UnityW<::Mirror::InterestManagementBase>>(value));
}
inline ::UnityW<::Mirror::InterestManagementBase> Mirror::NetworkServer::getStaticF_aoi()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::InterestManagementBase>, "aoi", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_OnConnectedEvent(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::NetworkConnectionToClient*>*, "OnConnectedEvent", ::Mirror::NetworkServer*>(std::forward<::System::Action_1<::Mirror::NetworkConnectionToClient*>*>(value));
}
inline ::System::Action_1<::Mirror::NetworkConnectionToClient*>* Mirror::NetworkServer::getStaticF_OnConnectedEvent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::NetworkConnectionToClient*>*, "OnConnectedEvent", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_OnDisconnectedEvent(::System::Action_1<::Mirror::NetworkConnectionToClient*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::NetworkConnectionToClient*>*, "OnDisconnectedEvent", ::Mirror::NetworkServer*>(std::forward<::System::Action_1<::Mirror::NetworkConnectionToClient*>*>(value));
}
inline ::System::Action_1<::Mirror::NetworkConnectionToClient*>* Mirror::NetworkServer::getStaticF_OnDisconnectedEvent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::NetworkConnectionToClient*>*, "OnDisconnectedEvent", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_OnErrorEvent(::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>*, "OnErrorEvent", ::Mirror::NetworkServer*>(std::forward<::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>*>(value));
}
inline ::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>* Mirror::NetworkServer::getStaticF_OnErrorEvent()  {
return ::cordl_internals::getStaticField<::System::Action_3<::Mirror::NetworkConnectionToClient*,::Mirror::TransportError,::StringW>*, "OnErrorEvent", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_actualTickRate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "actualTickRate", ::Mirror::NetworkServer*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::NetworkServer::getStaticF_actualTickRate()  {
return ::cordl_internals::getStaticField<int32_t, "actualTickRate", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_actualTickRateStart(double_t  value)  {
::cordl_internals::setStaticField<double_t, "actualTickRateStart", ::Mirror::NetworkServer*>(std::forward<double_t>(value));
}
inline double_t Mirror::NetworkServer::getStaticF_actualTickRateStart()  {
return ::cordl_internals::getStaticField<double_t, "actualTickRateStart", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_actualTickRateCounter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "actualTickRateCounter", ::Mirror::NetworkServer*>(std::forward<int32_t>(value));
}
inline int32_t Mirror::NetworkServer::getStaticF_actualTickRateCounter()  {
return ::cordl_internals::getStaticField<int32_t, "actualTickRateCounter", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_earlyUpdateDuration(::Mirror::TimeSample  value)  {
::cordl_internals::setStaticField<::Mirror::TimeSample, "earlyUpdateDuration", ::Mirror::NetworkServer*>(std::forward<::Mirror::TimeSample>(value));
}
inline ::Mirror::TimeSample Mirror::NetworkServer::getStaticF_earlyUpdateDuration()  {
return ::cordl_internals::getStaticField<::Mirror::TimeSample, "earlyUpdateDuration", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_lateUpdateDuration(::Mirror::TimeSample  value)  {
::cordl_internals::setStaticField<::Mirror::TimeSample, "lateUpdateDuration", ::Mirror::NetworkServer*>(std::forward<::Mirror::TimeSample>(value));
}
inline ::Mirror::TimeSample Mirror::NetworkServer::getStaticF_lateUpdateDuration()  {
return ::cordl_internals::getStaticField<::Mirror::TimeSample, "lateUpdateDuration", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_fullUpdateDuration(::Mirror::TimeSample  value)  {
::cordl_internals::setStaticField<::Mirror::TimeSample, "fullUpdateDuration", ::Mirror::NetworkServer*>(std::forward<::Mirror::TimeSample>(value));
}
inline ::Mirror::TimeSample Mirror::NetworkServer::getStaticF_fullUpdateDuration()  {
return ::cordl_internals::getStaticField<::Mirror::TimeSample, "fullUpdateDuration", ::Mirror::NetworkServer*>();
}
inline void Mirror::NetworkServer::setStaticF_connectionsCopy(::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*, "connectionsCopy", ::Mirror::NetworkServer*>(std::forward<::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>* Mirror::NetworkServer::getStaticF_connectionsCopy()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Mirror::NetworkConnectionToClient*>*, "connectionsCopy", ::Mirror::NetworkServer*>();
}
inline float_t Mirror::NetworkServer::get_tickInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_tickInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t Mirror::NetworkServer::get_sendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_sendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t Mirror::NetworkServer::get_sendInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_sendInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::Mirror::LocalConnectionToClient* Mirror::NetworkServer::get_localConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_localConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::LocalConnectionToClient*>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::set_localConnection(::Mirror::LocalConnectionToClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"set_localConnection", {}, {::i2c::type_of<::Mirror::LocalConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Mirror::NetworkServer::get_localClientActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_localClientActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkServer::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::set_active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"set_active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Mirror::NetworkServer::get_activeHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"get_activeHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::Listen(int32_t  maxConns)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Listen", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, maxConns);
}
inline void Mirror::NetworkServer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::AddTransportHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddTransportHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::RemoveTransportHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemoveTransportHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::CleanupSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"CleanupSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::RegisterMessageHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RegisterMessageHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::OnClientReadyMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::ReadyMessage  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnClientReadyMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::ReadyMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn, msg);
}
inline void Mirror::NetworkServer::OnCommandMessage(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::CommandMessage  msg, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnCommandMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::CommandMessage>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn, msg, channelId);
}
inline void Mirror::NetworkServer::OnEntityStateMessage(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::EntityStateMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnEntityStateMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::EntityStateMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connection, message);
}
inline void Mirror::NetworkServer::OnTimeSnapshotMessage(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::TimeSnapshotMessage  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTimeSnapshotMessage", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::TimeSnapshotMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connection, _);
}
inline bool Mirror::NetworkServer::AddConnection(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, conn);
}
inline bool Mirror::NetworkServer::RemoveConnection(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemoveConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connectionId);
}
inline void Mirror::NetworkServer::SetLocalConnection(::Mirror::LocalConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetLocalConnection", {}, {::i2c::type_of<::Mirror::LocalConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn);
}
inline void Mirror::NetworkServer::RemoveLocalConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemoveLocalConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkServer::HasExternalConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"HasExternalConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template<typename T>
inline void Mirror::NetworkServer::SendToAll(T  message, int32_t  channelId, bool  sendToReadyOnly)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"SendToAll", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, channelId, sendToReadyOnly);
}
template<typename T>
inline void Mirror::NetworkServer::SendToReady(T  message, int32_t  channelId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"SendToReady", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, channelId);
}
template<typename T>
inline void Mirror::NetworkServer::SendToObservers(::Mirror::NetworkIdentity*  identity, T  message, int32_t  channelId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"SendToObservers", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, message, channelId);
}
template<typename T>
inline void Mirror::NetworkServer::SendToReadyObservers(::Mirror::NetworkIdentity*  identity, T  message, bool  includeOwner, int32_t  channelId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"SendToReadyObservers", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, message, includeOwner, channelId);
}
template<typename T>
inline void Mirror::NetworkServer::SendToReadyObservers(::Mirror::NetworkIdentity*  identity, T  message, int32_t  channelId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"SendToReadyObservers", {::i2c::class_of<T>()}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, message, channelId);
}
inline void Mirror::NetworkServer::OnTransportConnected(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportConnected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionId);
}
inline void Mirror::NetworkServer::OnConnected(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnConnected", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn);
}
inline bool Mirror::NetworkServer::UnpackAndInvoke(::Mirror::NetworkConnectionToClient*  connection, ::Mirror::NetworkReader*  reader, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"UnpackAndInvoke", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, connection, reader, channelId);
}
inline void Mirror::NetworkServer::OnTransportData(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  data, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionId, data, channelId);
}
inline void Mirror::NetworkServer::OnTransportDisconnected(int32_t  connectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportDisconnected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionId);
}
inline void Mirror::NetworkServer::OnTransportError(int32_t  connectionId, ::Mirror::TransportError  error, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"OnTransportError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Mirror::TransportError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connectionId, error, reason);
}
inline void Mirror::NetworkServer::DestroyPlayerForConnection(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DestroyPlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn);
}
template<typename T>
inline void Mirror::NetworkServer::RegisterHandler(::System::Action_2<::Mirror::NetworkConnectionToClient*,T>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"RegisterHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_2<::Mirror::NetworkConnectionToClient*,T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T>
inline void Mirror::NetworkServer::RegisterHandler(::System::Action_3<::Mirror::NetworkConnectionToClient*,T,int32_t>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"RegisterHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_3<::Mirror::NetworkConnectionToClient*,T,int32_t>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T>
inline void Mirror::NetworkServer::ReplaceHandler(::System::Action_1<T>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"ReplaceHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T>
inline void Mirror::NetworkServer::ReplaceHandler(::System::Action_2<::Mirror::NetworkConnectionToClient*,T>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"ReplaceHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Action_2<::Mirror::NetworkConnectionToClient*,T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T>
inline void Mirror::NetworkServer::UnregisterHandler()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkServer*>(),
                    {"UnregisterHandler", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::ClearHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ClearHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkServer::GetNetworkIdentity(::UnityEngine::GameObject*  go, ::by_ref<::Mirror::NetworkIdentity*>  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"GetNetworkIdentity", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::Mirror::NetworkIdentity*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, go, identity);
}
inline void Mirror::NetworkServer::DisconnectAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DisconnectAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Mirror::NetworkServer::AddPlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player, uint32_t  assetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddPlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, conn, player, assetId);
}
inline bool Mirror::NetworkServer::AddPlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddPlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, conn, player);
}
inline bool Mirror::NetworkServer::ReplacePlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player, bool  keepAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ReplacePlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, conn, player, keepAuthority);
}
inline bool Mirror::NetworkServer::ReplacePlayerForConnection(::Mirror::NetworkConnectionToClient*  conn, ::UnityEngine::GameObject*  player, uint32_t  assetId, bool  keepAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ReplacePlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>(), ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, conn, player, assetId, keepAuthority);
}
inline void Mirror::NetworkServer::RemovePlayerForConnection(::Mirror::NetworkConnection*  conn, bool  destroyServerObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RemovePlayerForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn, destroyServerObject);
}
inline void Mirror::NetworkServer::SetClientReady(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetClientReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn);
}
inline void Mirror::NetworkServer::SpawnObserversForConnection(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SpawnObserversForConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn);
}
inline void Mirror::NetworkServer::SetClientNotReady(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetClientNotReady", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, conn);
}
inline void Mirror::NetworkServer::SetAllClientsNotReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SetAllClientsNotReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::ShowForConnection(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ShowForConnection", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, conn);
}
inline void Mirror::NetworkServer::HideForConnection(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"HideForConnection", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, conn);
}
inline void Mirror::NetworkServer::SendSpawnMessage(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SendSpawnMessage", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, conn);
}
inline ::System::ArraySegment_1<uint8_t> Mirror::NetworkServer::CreateSpawnMessagePayload(bool  isOwner, ::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkWriterPooled*  ownerWriter, ::Mirror::NetworkWriterPooled*  observersWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"CreateSpawnMessagePayload", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkWriterPooled*>(), ::i2c::type_of<::Mirror::NetworkWriterPooled*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(nullptr, ___internal_method, isOwner, identity, ownerWriter, observersWriter);
}
inline void Mirror::NetworkServer::SendChangeOwnerMessage(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SendChangeOwnerMessage", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, conn);
}
inline bool Mirror::NetworkServer::ValidParent(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ValidParent", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, identity);
}
inline bool Mirror::NetworkServer::SpawnObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SpawnObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::Spawn(::UnityEngine::GameObject*  obj, ::UnityEngine::GameObject*  ownerPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, ownerPlayer);
}
inline void Mirror::NetworkServer::Respawn(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Respawn", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
inline void Mirror::NetworkServer::Spawn(::UnityEngine::GameObject*  obj, ::Mirror::NetworkConnection*  ownerConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, ownerConnection);
}
inline void Mirror::NetworkServer::Spawn(::UnityEngine::GameObject*  obj, uint32_t  assetId, ::Mirror::NetworkConnection*  ownerConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Spawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, assetId, ownerConnection);
}
inline void Mirror::NetworkServer::SpawnObject(::UnityEngine::GameObject*  obj, ::Mirror::NetworkConnection*  ownerConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SpawnObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, ownerConnection);
}
inline void Mirror::NetworkServer::UnSpawn(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"UnSpawn", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void Mirror::NetworkServer::Destroy(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void Mirror::NetworkServer::DestroyObject(::UnityEngine::GameObject*  obj, ::Mirror::NetworkServer_DestroyMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DestroyObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Mirror::NetworkServer_DestroyMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, mode);
}
inline void Mirror::NetworkServer::DestroyObject(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkServer_DestroyMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"DestroyObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkServer_DestroyMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, mode);
}
inline void Mirror::NetworkServer::RebuildObserversDefault(::Mirror::NetworkIdentity*  identity, bool  initialize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RebuildObserversDefault", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, initialize);
}
inline void Mirror::NetworkServer::AddAllReadyServerConnectionsToObservers(::Mirror::NetworkIdentity*  identity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"AddAllReadyServerConnectionsToObservers", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity);
}
inline void Mirror::NetworkServer::RebuildObservers(::Mirror::NetworkIdentity*  identity, bool  initialize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"RebuildObservers", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, identity, initialize);
}
inline ::Mirror::NetworkWriter* Mirror::NetworkServer::SerializeForConnection(::Mirror::NetworkIdentity*  identity, ::Mirror::NetworkConnectionToClient*  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"SerializeForConnection", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkWriter*>(nullptr, ___internal_method, identity, connection);
}
inline void Mirror::NetworkServer::BroadcastToConnection(::Mirror::NetworkConnectionToClient*  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"BroadcastToConnection", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, connection);
}
inline void Mirror::NetworkServer::Broadcast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"Broadcast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::NetworkEarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"NetworkEarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::NetworkLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"NetworkLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkServer::ActivateHostScene()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkServer*>(),
                        {"ActivateHostScene", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkServer::NetworkServer()   {
}
