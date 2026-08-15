#pragma once
// IWYU pragma private; include "Mirror/NetworkIdentity.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkIdentitySerialization_impl.hpp"
#include "Mirror/zzzz__Visibility_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallType_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkIdentitySerialization_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkIdentity_ClientAuthorityCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity_ClientAuthorityCallback::*)(::System::Object*, ::System::IntPtr)>(&::Mirror::NetworkIdentity_ClientAuthorityCallback::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181536100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity_ClientAuthorityCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity_ClientAuthorityCallback::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::NetworkIdentity*, bool)>(&::Mirror::NetworkIdentity_ClientAuthorityCallback::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(),
                    {::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity_ClientAuthorityCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Mirror::NetworkIdentity_ClientAuthorityCallback::*)(::Mirror::NetworkConnectionToClient*, ::Mirror::NetworkIdentity*, bool, ::System::AsyncCallback*, ::System::Object*)>(&::Mirror::NetworkIdentity_ClientAuthorityCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181535df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(),
                    {::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity_ClientAuthorityCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity_ClientAuthorityCallback::*)(::System::IAsyncResult*)>(&::Mirror::NetworkIdentity_ClientAuthorityCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(),
                    {::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Mirror::NetworkIdentity_ClientAuthorityCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mirror::NetworkIdentity_ClientAuthorityCallback::Invoke(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkIdentity*  identity, bool  authorityState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, identity, authorityState);
}
inline ::System::IAsyncResult* Mirror::NetworkIdentity_ClientAuthorityCallback::BeginInvoke(::Mirror::NetworkConnectionToClient*  conn, ::Mirror::NetworkIdentity*  identity, bool  authorityState, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, conn, identity, authorityState, callback, object);
}
inline void Mirror::NetworkIdentity_ClientAuthorityCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Mirror::NetworkIdentity_ClientAuthorityCallback* Mirror::NetworkIdentity_ClientAuthorityCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mirror::NetworkIdentity_ClientAuthorityCallback::NetworkIdentity_ClientAuthorityCallback()   {
}
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_isClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_isClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_isClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(bool)>(&::Mirror::NetworkIdentity::set_isClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isClient", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_isServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_isServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_isServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(bool)>(&::Mirror::NetworkIdentity::set_isServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isServer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_isLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_isLocalPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_isLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(bool)>(&::Mirror::NetworkIdentity::set_isLocalPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isLocalPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_isServerOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_isServerOnly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181545010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isServerOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_isClientOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_isClientOnly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181544ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isClientOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_isOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_isOwned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isOwned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_isOwned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(bool)>(&::Mirror::NetworkIdentity::set_isOwned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isOwned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_hasAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_hasAuthority)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_hasAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_netId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_netId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_netId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_netId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(uint32_t)>(&::Mirror::NetworkIdentity::set_netId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_netId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_assetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_assetId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_assetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_assetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(uint32_t)>(&::Mirror::NetworkIdentity::set_assetId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815450e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_assetId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_connectionToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkConnection* (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_connectionToServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_connectionToServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_connectionToServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::Mirror::NetworkConnection*)>(&::Mirror::NetworkIdentity::set_connectionToServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_connectionToServer", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_connectionToClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkConnectionToClient* (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_connectionToClient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_connectionToClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_connectionToClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkIdentity::set_connectionToClient)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181545150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_connectionToClient", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_NetworkBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Mirror::NetworkBehaviour>> (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_NetworkBehaviours)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_NetworkBehaviours", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_NetworkBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::ArrayW<::Mirror::NetworkBehaviour*>)>(&::Mirror::NetworkIdentity::set_NetworkBehaviours)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_NetworkBehaviours", {}, {::i2c::type_of<::ArrayW<::Mirror::NetworkBehaviour*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.HandleRemoteCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(uint8_t, uint16_t, ::Mirror::RemoteCalls::RemoteCallType, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkIdentity::HandleRemoteCall)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1815438a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"HandleRemoteCall", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkIdentity::ResetStatics)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181544590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ResetClientStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkIdentity::ResetClientStatics)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815444d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetClientStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ResetServerStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkIdentity::ResetServerStatics)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181544550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetServerStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.GetSceneIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (*)(uint64_t)>(&::Mirror::NetworkIdentity::GetSceneIdentity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815437b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"GetSceneIdentity", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.GetNextNetworkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::Mirror::NetworkIdentity::GetNextNetworkId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181543770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"GetNextNetworkId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ResetNextNetworkId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkIdentity::ResetNextNetworkId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181544550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetNextNetworkId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.add_clientAuthorityCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity_ClientAuthorityCallback*)>(&::Mirror::NetworkIdentity::add_clientAuthorityCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181544f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"add_clientAuthorityCallback", {}, {::i2c::type_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.remove_clientAuthorityCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkIdentity_ClientAuthorityCallback*)>(&::Mirror::NetworkIdentity::remove_clientAuthorityCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181545030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"remove_clientAuthorityCallback", {}, {::i2c::type_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.get_SpawnedFromInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::get_SpawnedFromInstantiate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_SpawnedFromInstantiate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.set_SpawnedFromInstantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(bool)>(&::Mirror::NetworkIdentity::set_SpawnedFromInstantiate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_SpawnedFromInstantiate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.InitializeNetworkBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::InitializeNetworkBehaviours)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181543ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"InitializeNetworkBehaviours", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ValidateComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::ValidateComponents)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181544ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ValidateComponents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181543260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d4a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnDestroy)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181543be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStartServer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181543fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStopServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStopServer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181544290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStartClient)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181543de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStopClient)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181544130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181543ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStopLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStopLocalPlayer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815441e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ServerDirtyMasks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<uint64_t,uint64_t> (::Mirror::NetworkIdentity::*)(bool)>(&::Mirror::NetworkIdentity::ServerDirtyMasks)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181544b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ServerDirtyMasks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ClientDirtyMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::ClientDirtyMask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181543580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClientDirtyMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, int32_t)>(&::Mirror::NetworkIdentity::IsDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181543b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"IsDirty", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.SerializeServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(bool, ::Mirror::NetworkWriter*, ::Mirror::NetworkWriter*)>(&::Mirror::NetworkIdentity::SerializeServer)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181544860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"SerializeServer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.SerializeClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::Mirror::NetworkWriter*)>(&::Mirror::NetworkIdentity::SerializeClient)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181544760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"SerializeClient", {}, {::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.DeserializeServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkIdentity::DeserializeServer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815436b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"DeserializeServer", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.DeserializeClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::NetworkIdentity::DeserializeClient)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181543610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"DeserializeClient", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.GetServerSerializationAtTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::NetworkIdentitySerialization (::Mirror::NetworkIdentity::*)(int32_t)>(&::Mirror::NetworkIdentity::GetServerSerializationAtTick)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181543810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"GetServerSerializationAtTick", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ClearDirtyComponentsDirtyBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::ClearDirtyComponentsDirtyBits)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181543430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClearDirtyComponentsDirtyBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.AddObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkIdentity::AddObserver)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181542f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"AddObserver", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ClearAllComponentsDirtyBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::ClearAllComponentsDirtyBits)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181543360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClearAllComponentsDirtyBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.RemoveObserver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::Mirror::NetworkConnection*)>(&::Mirror::NetworkIdentity::RemoveObserver)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815444a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"RemoveObserver", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.AssignClientAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkIdentity::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkIdentity::AssignClientAuthority)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1815430b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"AssignClientAuthority", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.SetClientOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)(::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkIdentity::SetClientOwner)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181544c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"SetClientOwner", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.RemoveClientAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::RemoveClientAuthority)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181544340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"RemoveClientAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::Reset)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1815445d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.NotifyAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::NotifyAuthority)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181543b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"NotifyAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStartAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStartAuthority)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181543d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.OnStopAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::OnStopAuthority)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181544080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity.ClearObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::ClearObservers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815434c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClearObservers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkIdentity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkIdentity::*)()>(&::Mirror::NetworkIdentity::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181544e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get__isClient_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClient_k__BackingField;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get__isClient_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isClient_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__isClient_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isClient_k__BackingField = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get__isServer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServer_k__BackingField;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get__isServer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isServer_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__isServer_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isServer_k__BackingField = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get__isLocalPlayer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocalPlayer_k__BackingField;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get__isLocalPlayer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLocalPlayer_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__isLocalPlayer_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLocalPlayer_k__BackingField = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get__isOwned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOwned_k__BackingField;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get__isOwned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOwned_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__isOwned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOwned_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*& Mirror::NetworkIdentity::__cordl_internal_get_observers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>* const& Mirror::NetworkIdentity::__cordl_internal_get_observers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observers;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_observers(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::NetworkConnectionToClient*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observers = value;
}
constexpr uint32_t& Mirror::NetworkIdentity::__cordl_internal_get__netId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netId_k__BackingField;
}
constexpr uint32_t const& Mirror::NetworkIdentity::__cordl_internal_get__netId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____netId_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__netId_k__BackingField(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____netId_k__BackingField = value;
}
constexpr uint64_t& Mirror::NetworkIdentity::__cordl_internal_get_sceneId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneId;
}
constexpr uint64_t const& Mirror::NetworkIdentity::__cordl_internal_get_sceneId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneId;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_sceneId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneId = value;
}
constexpr uint32_t& Mirror::NetworkIdentity::__cordl_internal_get__assetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetId;
}
constexpr uint32_t const& Mirror::NetworkIdentity::__cordl_internal_get__assetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetId;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__assetId(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assetId = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get_serverOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverOnly;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get_serverOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverOnly;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_serverOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverOnly = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get_destroyCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyCalled;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get_destroyCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyCalled;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_destroyCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyCalled = value;
}
constexpr ::Mirror::NetworkConnection*& Mirror::NetworkIdentity::__cordl_internal_get__connectionToServer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionToServer_k__BackingField;
}
constexpr ::Mirror::NetworkConnection* const& Mirror::NetworkIdentity::__cordl_internal_get__connectionToServer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionToServer_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__connectionToServer_k__BackingField(::Mirror::NetworkConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionToServer_k__BackingField = value;
}
constexpr ::Mirror::NetworkConnectionToClient*& Mirror::NetworkIdentity::__cordl_internal_get__connectionToClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionToClient;
}
constexpr ::Mirror::NetworkConnectionToClient* const& Mirror::NetworkIdentity::__cordl_internal_get__connectionToClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionToClient;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__connectionToClient(::Mirror::NetworkConnectionToClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionToClient = value;
}
constexpr ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>& Mirror::NetworkIdentity::__cordl_internal_get__NetworkBehaviours_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkBehaviours_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>> const& Mirror::NetworkIdentity::__cordl_internal_get__NetworkBehaviours_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NetworkBehaviours_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__NetworkBehaviours_k__BackingField(::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NetworkBehaviours_k__BackingField = value;
}
constexpr ::Mirror::Visibility& Mirror::NetworkIdentity::__cordl_internal_get_visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr ::Mirror::Visibility const& Mirror::NetworkIdentity::__cordl_internal_get_visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_visible(::Mirror::Visibility  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visible = value;
}
constexpr ::Mirror::NetworkIdentitySerialization& Mirror::NetworkIdentity::__cordl_internal_get_lastSerialization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSerialization;
}
constexpr ::Mirror::NetworkIdentitySerialization const& Mirror::NetworkIdentity::__cordl_internal_get_lastSerialization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSerialization;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_lastSerialization(::Mirror::NetworkIdentitySerialization  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSerialization = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get_hasSpawned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSpawned;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get_hasSpawned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasSpawned;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_hasSpawned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasSpawned = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get__SpawnedFromInstantiate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnedFromInstantiate_k__BackingField;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get__SpawnedFromInstantiate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpawnedFromInstantiate_k__BackingField;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set__SpawnedFromInstantiate_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpawnedFromInstantiate_k__BackingField = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get_clientStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientStarted;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get_clientStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientStarted;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_clientStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientStarted = value;
}
constexpr bool& Mirror::NetworkIdentity::__cordl_internal_get_hadAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hadAuthority;
}
constexpr bool const& Mirror::NetworkIdentity::__cordl_internal_get_hadAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hadAuthority;
}
constexpr void Mirror::NetworkIdentity::__cordl_internal_set_hadAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hadAuthority = value;
}
inline void Mirror::NetworkIdentity::setStaticF_sceneIds(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*, "sceneIds", ::Mirror::NetworkIdentity*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>* Mirror::NetworkIdentity::getStaticF_sceneIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Mirror::NetworkIdentity>>*, "sceneIds", ::Mirror::NetworkIdentity*>();
}
inline void Mirror::NetworkIdentity::setStaticF_nextNetworkId(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "nextNetworkId", ::Mirror::NetworkIdentity*>(std::forward<uint32_t>(value));
}
inline uint32_t Mirror::NetworkIdentity::getStaticF_nextNetworkId()  {
return ::cordl_internals::getStaticField<uint32_t, "nextNetworkId", ::Mirror::NetworkIdentity*>();
}
inline void Mirror::NetworkIdentity::setStaticF_clientAuthorityCallback(::Mirror::NetworkIdentity_ClientAuthorityCallback*  value)  {
::cordl_internals::setStaticField<::Mirror::NetworkIdentity_ClientAuthorityCallback*, "clientAuthorityCallback", ::Mirror::NetworkIdentity*>(std::forward<::Mirror::NetworkIdentity_ClientAuthorityCallback*>(value));
}
inline ::Mirror::NetworkIdentity_ClientAuthorityCallback* Mirror::NetworkIdentity::getStaticF_clientAuthorityCallback()  {
return ::cordl_internals::getStaticField<::Mirror::NetworkIdentity_ClientAuthorityCallback*, "clientAuthorityCallback", ::Mirror::NetworkIdentity*>();
}
inline void Mirror::NetworkIdentity::setStaticF_previousLocalPlayer(::UnityW<::Mirror::NetworkIdentity>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::NetworkIdentity>, "previousLocalPlayer", ::Mirror::NetworkIdentity*>(std::forward<::UnityW<::Mirror::NetworkIdentity>>(value));
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkIdentity::getStaticF_previousLocalPlayer()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::NetworkIdentity>, "previousLocalPlayer", ::Mirror::NetworkIdentity*>();
}
inline bool Mirror::NetworkIdentity::get_isClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_isClient(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isClient", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::NetworkIdentity::get_isServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_isServer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isServer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::NetworkIdentity::get_isLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_isLocalPlayer(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isLocalPlayer", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::NetworkIdentity::get_isServerOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isServerOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::NetworkIdentity::get_isClientOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isClientOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mirror::NetworkIdentity::get_isOwned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_isOwned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_isOwned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_isOwned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Mirror::NetworkIdentity::get_hasAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_hasAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t Mirror::NetworkIdentity::get_netId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_netId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_netId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_netId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Mirror::NetworkIdentity::get_assetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_assetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_assetId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_assetId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mirror::NetworkConnection* Mirror::NetworkIdentity::get_connectionToServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_connectionToServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkConnection*>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_connectionToServer(::Mirror::NetworkConnection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_connectionToServer", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mirror::NetworkConnectionToClient* Mirror::NetworkIdentity::get_connectionToClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_connectionToClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkConnectionToClient*>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_connectionToClient(::Mirror::NetworkConnectionToClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_connectionToClient", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::Mirror::NetworkBehaviour>> Mirror::NetworkIdentity::get_NetworkBehaviours()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_NetworkBehaviours", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Mirror::NetworkBehaviour>>>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_NetworkBehaviours(::ArrayW<::Mirror::NetworkBehaviour*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_NetworkBehaviours", {}, {::i2c::type_of<::ArrayW<::Mirror::NetworkBehaviour*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkIdentity::HandleRemoteCall(uint8_t  componentIndex, uint16_t  functionHash, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"HandleRemoteCall", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentIndex, functionHash, remoteCallType, reader, senderConnection);
}
inline void Mirror::NetworkIdentity::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkIdentity::ResetClientStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetClientStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkIdentity::ResetServerStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetServerStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkIdentity::GetSceneIdentity(uint64_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"GetSceneIdentity", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(nullptr, ___internal_method, id);
}
inline uint32_t Mirror::NetworkIdentity::GetNextNetworkId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"GetNextNetworkId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline void Mirror::NetworkIdentity::ResetNextNetworkId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ResetNextNetworkId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Mirror::NetworkIdentity::add_clientAuthorityCallback(::Mirror::NetworkIdentity_ClientAuthorityCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"add_clientAuthorityCallback", {}, {::i2c::type_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::NetworkIdentity::remove_clientAuthorityCallback(::Mirror::NetworkIdentity_ClientAuthorityCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"remove_clientAuthorityCallback", {}, {::i2c::type_of<::Mirror::NetworkIdentity_ClientAuthorityCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Mirror::NetworkIdentity::get_SpawnedFromInstantiate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"get_SpawnedFromInstantiate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::set_SpawnedFromInstantiate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"set_SpawnedFromInstantiate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkIdentity::InitializeNetworkBehaviours()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"InitializeNetworkBehaviours", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::ValidateComponents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ValidateComponents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStartServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStopServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStartClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStopClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStartLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStopLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<uint64_t,uint64_t> Mirror::NetworkIdentity::ServerDirtyMasks(bool  initialState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ServerDirtyMasks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<uint64_t,uint64_t>>(this, ___internal_method, initialState);
}
inline uint64_t Mirror::NetworkIdentity::ClientDirtyMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClientDirtyMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool Mirror::NetworkIdentity::IsDirty(uint64_t  mask, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"IsDirty", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, index);
}
inline void Mirror::NetworkIdentity::SerializeServer(bool  initialState, ::Mirror::NetworkWriter*  ownerWriter, ::Mirror::NetworkWriter*  observersWriter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"SerializeServer", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState, ownerWriter, observersWriter);
}
inline void Mirror::NetworkIdentity::SerializeClient(::Mirror::NetworkWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"SerializeClient", {}, {::i2c::type_of<::Mirror::NetworkWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline bool Mirror::NetworkIdentity::DeserializeServer(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"DeserializeServer", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader);
}
inline void Mirror::NetworkIdentity::DeserializeClient(::Mirror::NetworkReader*  reader, bool  initialState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"DeserializeClient", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::NetworkIdentitySerialization Mirror::NetworkIdentity::GetServerSerializationAtTick(int32_t  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"GetServerSerializationAtTick", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkIdentitySerialization>(this, ___internal_method, tick);
}
inline void Mirror::NetworkIdentity::ClearDirtyComponentsDirtyBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClearDirtyComponentsDirtyBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::AddObserver(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"AddObserver", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkIdentity::ClearAllComponentsDirtyBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClearAllComponentsDirtyBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::RemoveObserver(::Mirror::NetworkConnection*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"RemoveObserver", {}, {::i2c::type_of<::Mirror::NetworkConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline bool Mirror::NetworkIdentity::AssignClientAuthority(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"AssignClientAuthority", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, conn);
}
inline void Mirror::NetworkIdentity::SetClientOwner(::Mirror::NetworkConnectionToClient*  conn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"SetClientOwner", {}, {::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn);
}
inline void Mirror::NetworkIdentity::RemoveClientAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"RemoveClientAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::NotifyAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"NotifyAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStartAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStartAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::OnStopAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"OnStopAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::ClearObservers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {"ClearObservers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkIdentity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkIdentity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkIdentity* Mirror::NetworkIdentity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkIdentity*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkIdentity::NetworkIdentity()   {
}
