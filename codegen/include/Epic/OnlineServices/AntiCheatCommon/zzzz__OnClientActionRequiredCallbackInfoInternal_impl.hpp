#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnClientActionRequiredCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientActionReason_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAction_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientActionRequiredCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientActionRequiredCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180526ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>"
constexpr  Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>* Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__AntiCheatCommon__OnClientActionRequiredCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientAction", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ActionReasonCode", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ActionReasonDetailsString", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::OnClientActionRequiredCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_ClientHandle, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction  m_ClientAction, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  m_ActionReasonCode, ::System::IntPtr  m_ActionReasonDetailsString) noexcept  {
this->m_ClientData = m_ClientData;
this->m_ClientHandle = m_ClientHandle;
this->m_ClientAction = m_ClientAction;
this->m_ActionReasonCode = m_ActionReasonCode;
this->m_ActionReasonDetailsString = m_ActionReasonDetailsString;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal::OnClientActionRequiredCallbackInfoInternal()   {
}
