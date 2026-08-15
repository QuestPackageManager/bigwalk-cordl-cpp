#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnMessageToClientCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnMessageToClientCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnMessageToClientCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180528cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>"
constexpr  Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>* Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__AntiCheatCommon__OnMessageToClientCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MessageData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MessageDataSizeBytes", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::OnMessageToClientCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_ClientHandle, ::System::IntPtr  m_MessageData, uint32_t  m_MessageDataSizeBytes) noexcept  {
this->m_ClientData = m_ClientData;
this->m_ClientHandle = m_ClientHandle;
this->m_MessageData = m_MessageData;
this->m_MessageDataSizeBytes = m_MessageDataSizeBytes;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal::OnMessageToClientCallbackInfoInternal()   {
}
