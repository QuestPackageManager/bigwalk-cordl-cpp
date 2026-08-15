#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnClientIntegrityViolatedCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientViolationType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18052f1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>"
constexpr  Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__AntiCheatClient__OnClientIntegrityViolatedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ViolationType", ty: "::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ViolationMessage", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::OnClientIntegrityViolatedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  m_ViolationType, ::System::IntPtr  m_ViolationMessage) noexcept  {
this->m_ClientData = m_ClientData;
this->m_ViolationType = m_ViolationType;
this->m_ViolationMessage = m_ViolationMessage;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfoInternal::OnClientIntegrityViolatedCallbackInfoInternal()   {
}
