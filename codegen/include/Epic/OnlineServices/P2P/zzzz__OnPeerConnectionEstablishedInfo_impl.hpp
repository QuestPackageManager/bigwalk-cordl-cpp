#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionEstablishedInfo.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ConnectionEstablishedType_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NetworkConnectionType_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedInfo_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ConnectionEstablishedType_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NetworkConnectionType_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.get_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.set_ClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)(::System::Object*)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_ClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.get_RemoteUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_RemoteUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_RemoteUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.set_RemoteUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_RemoteUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_RemoteUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.get_SocketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_SocketId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_SocketId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.set_SocketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_SocketId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18052c9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_SocketId", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.get_ConnectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::ConnectionEstablishedType (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_ConnectionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_ConnectionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.set_ConnectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)(::Epic::OnlineServices::P2P::ConnectionEstablishedType)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_ConnectionType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_ConnectionType", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::ConnectionEstablishedType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.get_NetworkType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::NetworkConnectionType (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_NetworkType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_NetworkType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.set_NetworkType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)(::Epic::OnlineServices::P2P::NetworkConnectionType)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_NetworkType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_NetworkType", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::NetworkConnectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.GetClientData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::GetClientData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"GetClientData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo.GetResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Result> (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::GetResultCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Object* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_ClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_ClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_ClientData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_ClientData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_RemoteUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_RemoteUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_RemoteUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_RemoteUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_SocketId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_SocketId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_SocketId(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_SocketId", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::P2P::ConnectionEstablishedType Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_ConnectionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_ConnectionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::ConnectionEstablishedType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_ConnectionType(::Epic::OnlineServices::P2P::ConnectionEstablishedType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_ConnectionType", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::ConnectionEstablishedType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::P2P::NetworkConnectionType Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::get_NetworkType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"get_NetworkType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::NetworkConnectionType>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::set_NetworkType(::Epic::OnlineServices::P2P::NetworkConnectionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"set_NetworkType", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::NetworkConnectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::GetClientData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"GetClientData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Epic::OnlineServices::Result> Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::GetResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>(),
                        {"GetResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Result>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr  Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::operator ::Epic::OnlineServices::ICallbackInfo*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::i___Epic__OnlineServices__ICallbackInfo()  {
return static_cast<::Epic::OnlineServices::ICallbackInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RemoteUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SocketId_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ConnectionType_k__BackingField", ty: "::Epic::OnlineServices::P2P::ConnectionEstablishedType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_NetworkType_k__BackingField", ty: "::Epic::OnlineServices::P2P::NetworkConnectionType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::OnPeerConnectionEstablishedInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _RemoteUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField, ::Epic::OnlineServices::P2P::ConnectionEstablishedType  _ConnectionType_k__BackingField, ::Epic::OnlineServices::P2P::NetworkConnectionType  _NetworkType_k__BackingField) noexcept  {
this->_ClientData_k__BackingField = _ClientData_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_RemoteUserId_k__BackingField = _RemoteUserId_k__BackingField;
this->_SocketId_k__BackingField = _SocketId_k__BackingField;
this->_ConnectionType_k__BackingField = _ConnectionType_k__BackingField;
this->_NetworkType_k__BackingField = _NetworkType_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo::OnPeerConnectionEstablishedInfo()   {
}
