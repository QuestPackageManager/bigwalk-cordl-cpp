#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/AddNotifyPeerConnectionRequestOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionRequestOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionRequestOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>)>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18052ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>"
constexpr  Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>* Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__AddNotifyPeerConnectionRequestOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::AddNotifyPeerConnectionRequestOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_SocketId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_SocketId = m_SocketId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptionsInternal::AddNotifyPeerConnectionRequestOptionsInternal()   {
}
