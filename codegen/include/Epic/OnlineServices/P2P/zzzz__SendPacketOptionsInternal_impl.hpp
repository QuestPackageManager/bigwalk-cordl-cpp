#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SendPacketOptionsInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SendPacketOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SendPacketOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_LocalUserId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180533a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.set_RemoteUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_RemoteUserId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180533a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_RemoteUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.set_Channel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(uint8_t)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_Channel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_Channel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(::System::ArraySegment_1<uint8_t>)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_Data)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805339e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.set_AllowDelayedDelivery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(bool)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_AllowDelayedDelivery)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805339c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_AllowDelayedDelivery", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.set_Reliability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(::Epic::OnlineServices::P2P::PacketReliability)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_Reliability)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_Reliability", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::PacketReliability>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.set_DisableAutoAcceptConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(bool)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_DisableAutoAcceptConnection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180533a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_DisableAutoAcceptConnection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805338a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)(::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::SendPacketOptions>>)>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805336f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::SendPacketOptions>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::SendPacketOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::SendPacketOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::SendPacketOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805000f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_RemoteUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_RemoteUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_Channel(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_Channel", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_Data(::System::ArraySegment_1<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_Data", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_AllowDelayedDelivery(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_AllowDelayedDelivery", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_Reliability(::Epic::OnlineServices::P2P::PacketReliability  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_Reliability", {}, {::i2c::type_of<::Epic::OnlineServices::P2P::PacketReliability>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::set_DisableAutoAcceptConnection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"set_DisableAutoAcceptConnection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::SendPacketOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::Set(::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::SendPacketOptions>>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::Epic::OnlineServices::P2P::SendPacketOptions>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::SendPacketOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::SendPacketOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>"
constexpr  Epic::OnlineServices::P2P::SendPacketOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>* Epic::OnlineServices::P2P::SendPacketOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__SendPacketOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::SendPacketOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::SendPacketOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::SendPacketOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemoteUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Channel", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataLengthBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowDelayedDelivery", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reliability", ty: "::Epic::OnlineServices::P2P::PacketReliability", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisableAutoAcceptConnection", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::SendPacketOptionsInternal::SendPacketOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RemoteUserId, ::System::IntPtr  m_SocketId, uint8_t  m_Channel, uint32_t  m_DataLengthBytes, ::System::IntPtr  m_Data, int32_t  m_AllowDelayedDelivery, ::Epic::OnlineServices::P2P::PacketReliability  m_Reliability, int32_t  m_DisableAutoAcceptConnection) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_RemoteUserId = m_RemoteUserId;
this->m_SocketId = m_SocketId;
this->m_Channel = m_Channel;
this->m_DataLengthBytes = m_DataLengthBytes;
this->m_Data = m_Data;
this->m_AllowDelayedDelivery = m_AllowDelayedDelivery;
this->m_Reliability = m_Reliability;
this->m_DisableAutoAcceptConnection = m_DisableAutoAcceptConnection;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::SendPacketOptionsInternal::SendPacketOptionsInternal()   {
}
