#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnDisplaySettingsUpdatedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>)>(&::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804dc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>"
constexpr  Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>* Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UI__OnDisplaySettingsUpdatedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsVisible", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsExclusiveInput", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::OnDisplaySettingsUpdatedCallbackInfoInternal(::System::IntPtr  m_ClientData, int32_t  m_IsVisible, int32_t  m_IsExclusiveInput) noexcept  {
this->m_ClientData = m_ClientData;
this->m_IsVisible = m_IsVisible;
this->m_IsExclusiveInput = m_IsExclusiveInput;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal::OnDisplaySettingsUpdatedCallbackInfoInternal()   {
}
