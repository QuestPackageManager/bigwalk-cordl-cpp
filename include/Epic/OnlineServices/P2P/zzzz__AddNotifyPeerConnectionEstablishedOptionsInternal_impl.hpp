#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/AddNotifyPeerConnectionEstablishedOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionEstablishedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/P2P/zzzz__AddNotifyPeerConnectionEstablishedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>)>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18052ddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::*)()>(&::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>"
constexpr  Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>* Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__P2P__AddNotifyPeerConnectionEstablishedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SocketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::AddNotifyPeerConnectionEstablishedOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_SocketId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_SocketId = m_SocketId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptionsInternal::AddNotifyPeerConnectionEstablishedOptionsInternal()   {
}
