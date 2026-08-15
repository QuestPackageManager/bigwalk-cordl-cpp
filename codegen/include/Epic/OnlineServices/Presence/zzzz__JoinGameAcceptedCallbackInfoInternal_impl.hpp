#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/JoinGameAcceptedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__JoinGameAcceptedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__JoinGameAcceptedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>)>(&::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f7e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>"
constexpr  Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>* Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Presence__JoinGameAcceptedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_JoinInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UiEventId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::JoinGameAcceptedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_JoinInfo, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, uint64_t  m_UiEventId) noexcept  {
this->m_ClientData = m_ClientData;
this->m_JoinInfo = m_JoinInfo;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
this->m_UiEventId = m_UiEventId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfoInternal::JoinGameAcceptedCallbackInfoInternal()   {
}
