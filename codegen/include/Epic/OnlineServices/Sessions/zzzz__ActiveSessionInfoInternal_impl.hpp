#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionInfoInternal.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionState_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__ActiveSessionInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionInfo>)>(&::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal::Get)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1804bdc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::ActiveSessionInfoInternal::Get(::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::ActiveSessionInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>"
constexpr  Epic::OnlineServices::Sessions::ActiveSessionInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>* Epic::OnlineServices::Sessions::ActiveSessionInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__ActiveSessionInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::ActiveSessionInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_State", ty: "::Epic::OnlineServices::Sessions::OnlineSessionState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionDetails", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal::ActiveSessionInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::Sessions::OnlineSessionState  m_State, ::System::IntPtr  m_SessionDetails) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionName = m_SessionName;
this->m_LocalUserId = m_LocalUserId;
this->m_State = m_State;
this->m_SessionDetails = m_SessionDetails;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::ActiveSessionInfoInternal::ActiveSessionInfoInternal()   {
}
