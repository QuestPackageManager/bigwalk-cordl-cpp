#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/AddNotifyPeerConnectionRequestOptions.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionRequestOptions_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__SocketId_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::*)()>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions.get_SocketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::*)()>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::get_SocketId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18052c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"get_SocketId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions.set_SocketId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::*)(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>)>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::set_SocketId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18052c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"set_SocketId", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId> Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::get_SocketId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"get_SocketId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::set_SocketId(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>(),
                        {"set_SocketId", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_SocketId_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::AddNotifyPeerConnectionRequestOptions(::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketId>  _SocketId_k__BackingField) noexcept  {
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
this->_SocketId_k__BackingField = _SocketId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions::AddNotifyPeerConnectionRequestOptions()   {
}
