#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnBlockedUsersUpdateInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnBlockedUsersUpdateInfoInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnBlockedUsersUpdateInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::*)()>(&::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::*)(::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>)>(&::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::Get)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180518fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::Get(::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>"
constexpr  Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>* Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Friends__OnBlockedUsersUpdateInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Blocked", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::OnBlockedUsersUpdateInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, int32_t  m_Blocked) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
this->m_Blocked = m_Blocked;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::OnBlockedUsersUpdateInfoInternal::OnBlockedUsersUpdateInfoInternal()   {
}
