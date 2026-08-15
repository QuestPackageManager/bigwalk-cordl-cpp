#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SendPacketOptions.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SendPacketOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_RemoteUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_RemoteUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_RemoteUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_RemoteUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_RemoteUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_RemoteUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_SocketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_SocketId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18035c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_SocketId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_SocketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_SocketId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18052c970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_SocketId", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_Channel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_Channel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803023c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_Channel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_Channel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(uint8_t)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_Channel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_Channel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_Data)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_Data)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18052ca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_AllowDelayedDelivery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_AllowDelayedDelivery)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_AllowDelayedDelivery", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_AllowDelayedDelivery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(bool)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_AllowDelayedDelivery)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_AllowDelayedDelivery", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_Reliability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::P2P::PacketReliability (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_Reliability)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_Reliability", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_Reliability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(::Epic::OnlineServices::P2P::PacketReliability)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_Reliability)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180497a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_Reliability", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::PacketReliability>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.get_DisableAutoAcceptConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::P2P::SendPacketOptions::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptions::get_DisableAutoAcceptConnection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803151e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_DisableAutoAcceptConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptions.set_DisableAutoAcceptConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptions::*)(bool)>(&::Epic::OnlineServices::P2P::SendPacketOptions::set_DisableAutoAcceptConnection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803de5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_DisableAutoAcceptConnection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::P2P::SendPacketOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::P2P::SendPacketOptions::get_RemoteUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_RemoteUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_RemoteUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_RemoteUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> Epic::OnlineServices::P2P::SendPacketOptions::get_SocketId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_SocketId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_SocketId(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_SocketId", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t Epic::OnlineServices::P2P::SendPacketOptions::get_Channel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_Channel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_Channel(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_Channel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::ArraySegment_1<uint8_t> Epic::OnlineServices::P2P::SendPacketOptions::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_Data(::System::ArraySegment_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::P2P::SendPacketOptions::get_AllowDelayedDelivery()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_AllowDelayedDelivery", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_AllowDelayedDelivery(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_AllowDelayedDelivery", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::P2P::PacketReliability Epic::OnlineServices::P2P::SendPacketOptions::get_Reliability()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_Reliability", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::P2P::PacketReliability>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_Reliability(::Epic::OnlineServices::P2P::PacketReliability  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_Reliability", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::PacketReliability>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::P2P::SendPacketOptions::get_DisableAutoAcceptConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"get_DisableAutoAcceptConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::SendPacketOptions::set_DisableAutoAcceptConnection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptions>(),
                        {"set_DisableAutoAcceptConnection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RemoteUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SocketId_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Channel_k__BackingField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AllowDelayedDelivery_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Reliability_k__BackingField", ty: "::Epic::OnlineServices::P2P::PacketReliability", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DisableAutoAcceptConnection_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SendPacketOptions::SendPacketOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _RemoteUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField, uint8_t  _Channel_k__BackingField, ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField, bool  _AllowDelayedDelivery_k__BackingField, ::Epic::OnlineServices::P2P::PacketReliability  _Reliability_k__BackingField, bool  _DisableAutoAcceptConnection_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_RemoteUserId_k__BackingField = _RemoteUserId_k__BackingField;
this->_SocketId_k__BackingField = _SocketId_k__BackingField;
this->_Channel_k__BackingField = _Channel_k__BackingField;
this->_Data_k__BackingField = _Data_k__BackingField;
this->_AllowDelayedDelivery_k__BackingField = _AllowDelayedDelivery_k__BackingField;
this->_Reliability_k__BackingField = _Reliability_k__BackingField;
this->_DisableAutoAcceptConnection_k__BackingField = _DisableAutoAcceptConnection_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SendPacketOptions::SendPacketOptions()   {
}
