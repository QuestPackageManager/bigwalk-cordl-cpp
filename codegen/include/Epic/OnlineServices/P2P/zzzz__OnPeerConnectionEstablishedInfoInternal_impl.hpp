#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnPeerConnectionEstablishedInfoInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ConnectionEstablishedType_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NetworkConnectionType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedInfoInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnPeerConnectionEstablishedInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::*)()>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::*)(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>)>(&::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::Get)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180530570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::Get(::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>"
constexpr  Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>* Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__OnPeerConnectionEstablishedInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemoteUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ConnectionType", ty: "::Epic::OnlineServices::P2P::ConnectionEstablishedType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NetworkType", ty: "::Epic::OnlineServices::P2P::NetworkConnectionType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::OnPeerConnectionEstablishedInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RemoteUserId, ::System::IntPtr  m_SocketId, ::Epic::OnlineServices::P2P::ConnectionEstablishedType  m_ConnectionType, ::Epic::OnlineServices::P2P::NetworkConnectionType  m_NetworkType) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_RemoteUserId = m_RemoteUserId;
this->m_SocketId = m_SocketId;
this->m_ConnectionType = m_ConnectionType;
this->m_NetworkType = m_NetworkType;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedInfoInternal::OnPeerConnectionEstablishedInfoInternal()   {
}
