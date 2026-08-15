#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/OnRemoteConnectionClosedInfoInternal.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ConnectionClosedReason_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedInfoInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__OnRemoteConnectionClosedInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::*)()>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::*)(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>)>(&::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::Get)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180531420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::Get(::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>"
constexpr  Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>* Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__P2P__OnRemoteConnectionClosedInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemoteUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reason", ty: "::Epic::OnlineServices::P2P::ConnectionClosedReason", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::OnRemoteConnectionClosedInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RemoteUserId, ::System::IntPtr  m_SocketId, ::Epic::OnlineServices::P2P::ConnectionClosedReason  m_Reason) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_RemoteUserId = m_RemoteUserId;
this->m_SocketId = m_SocketId;
this->m_Reason = m_Reason;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedInfoInternal::OnRemoteConnectionClosedInfoInternal()   {
}
