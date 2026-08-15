#pragma once
// IWYU pragma private; include "Mirror/RemoteCalls/RemoteProcedureCalls.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteProcedureCalls_def.hpp"
#include "Mirror/RemoteCalls/zzzz__Invoker_def.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallDelegate_def.hpp"
#include "Mirror/RemoteCalls/zzzz__RemoteCallType_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.CheckIfDelegateExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::Mirror::RemoteCalls::RemoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*, uint16_t)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::CheckIfDelegateExists)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1815978f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"CheckIfDelegateExists", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.RegisterDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Type*, ::StringW, ::Mirror::RemoteCalls::RemoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*, bool)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::RegisterDelegate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181597d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RegisterDelegate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.RegisterCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW, ::Mirror::RemoteCalls::RemoteCallDelegate*, bool)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::RegisterCommand)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181597d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RegisterCommand", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.RegisterRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW, ::Mirror::RemoteCalls::RemoteCallDelegate*)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::RegisterRpc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181597ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RegisterRpc", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.RemoveDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint16_t)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::RemoveDelegate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181597ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RemoveDelegate", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.GetInvokerForHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t, ::Mirror::RemoteCalls::RemoteCallType, ::by_ref<::Mirror::RemoteCalls::Invoker*>)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::GetInvokerForHash)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181597bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"GetInvokerForHash", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::by_ref<::Mirror::RemoteCalls::Invoker*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t, ::Mirror::RemoteCalls::RemoteCallType, ::Mirror::NetworkReader*, ::Mirror::NetworkBehaviour*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::Invoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181597c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"Invoke", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.CommandRequiresAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::CommandRequiresAuthority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181597ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"CommandRequiresAuthority", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteCalls::RemoteProcedureCalls.GetDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::RemoteCalls::RemoteCallDelegate* (*)(uint16_t)>(&::Mirror::RemoteCalls::RemoteProcedureCalls::GetDelegate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181597b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"GetDelegate", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::RemoteCalls::RemoteProcedureCalls::setStaticF_remoteCallDelegates(::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>*, "remoteCallDelegates", ::Mirror::RemoteCalls::RemoteProcedureCalls*>(std::forward<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>* Mirror::RemoteCalls::RemoteProcedureCalls::getStaticF_remoteCallDelegates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint16_t,::Mirror::RemoteCalls::Invoker*>*, "remoteCallDelegates", ::Mirror::RemoteCalls::RemoteProcedureCalls*>();
}
inline bool Mirror::RemoteCalls::RemoteProcedureCalls::CheckIfDelegateExists(::System::Type*  componentType, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*  func, uint16_t  functionHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"CheckIfDelegateExists", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, componentType, remoteCallType, func, functionHash);
}
inline uint16_t Mirror::RemoteCalls::RemoteProcedureCalls::RegisterDelegate(::System::Type*  componentType, ::StringW  functionFullName, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::RemoteCalls::RemoteCallDelegate*  func, bool  cmdRequiresAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RegisterDelegate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, componentType, functionFullName, remoteCallType, func, cmdRequiresAuthority);
}
inline void Mirror::RemoteCalls::RemoteProcedureCalls::RegisterCommand(::System::Type*  componentType, ::StringW  functionFullName, ::Mirror::RemoteCalls::RemoteCallDelegate*  func, bool  requiresAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RegisterCommand", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, componentType, functionFullName, func, requiresAuthority);
}
inline void Mirror::RemoteCalls::RemoteProcedureCalls::RegisterRpc(::System::Type*  componentType, ::StringW  functionFullName, ::Mirror::RemoteCalls::RemoteCallDelegate*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RegisterRpc", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, componentType, functionFullName, func);
}
inline void Mirror::RemoteCalls::RemoteProcedureCalls::RemoveDelegate(uint16_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"RemoveDelegate", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hash);
}
inline bool Mirror::RemoteCalls::RemoteProcedureCalls::GetInvokerForHash(uint16_t  functionHash, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::by_ref<::Mirror::RemoteCalls::Invoker*>  invoker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"GetInvokerForHash", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::by_ref<::Mirror::RemoteCalls::Invoker*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, functionHash, remoteCallType, invoker);
}
inline bool Mirror::RemoteCalls::RemoteProcedureCalls::Invoke(uint16_t  functionHash, ::Mirror::RemoteCalls::RemoteCallType  remoteCallType, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkBehaviour*  component, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"Invoke", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Mirror::RemoteCalls::RemoteCallType>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, functionHash, remoteCallType, reader, component, senderConnection);
}
inline bool Mirror::RemoteCalls::RemoteProcedureCalls::CommandRequiresAuthority(uint16_t  cmdHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"CommandRequiresAuthority", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cmdHash);
}
inline ::Mirror::RemoteCalls::RemoteCallDelegate* Mirror::RemoteCalls::RemoteProcedureCalls::GetDelegate(uint16_t  functionHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteCalls::RemoteProcedureCalls*>(),
                        {"GetDelegate", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::RemoteCalls::RemoteCallDelegate*>(nullptr, ___internal_method, functionHash);
}
// Ctor Parameters []
constexpr ::Mirror::RemoteCalls::RemoteProcedureCalls::RemoteProcedureCalls()   {
}
