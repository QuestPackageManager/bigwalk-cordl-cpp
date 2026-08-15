#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnFriendsUpdateInfoInternal.hpp"
#include "Epic/OnlineServices/Friends/zzzz__FriendsStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnFriendsUpdateInfoInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnFriendsUpdateInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::*)()>(&::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::*)(::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>)>(&::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180519ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::Get(::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>"
constexpr  Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>* Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Friends__OnFriendsUpdateInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PreviousStatus", ty: "::Epic::OnlineServices::Friends::FriendsStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentStatus", ty: "::Epic::OnlineServices::Friends::FriendsStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::OnFriendsUpdateInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, ::Epic::OnlineServices::Friends::FriendsStatus  m_PreviousStatus, ::Epic::OnlineServices::Friends::FriendsStatus  m_CurrentStatus) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
this->m_PreviousStatus = m_PreviousStatus;
this->m_CurrentStatus = m_CurrentStatus;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal::OnFriendsUpdateInfoInternal()   {
}
