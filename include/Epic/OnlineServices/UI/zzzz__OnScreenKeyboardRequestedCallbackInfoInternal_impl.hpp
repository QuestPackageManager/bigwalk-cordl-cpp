#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardRequestedCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1804dea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>"
constexpr  Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UI__OnScreenKeyboardRequestedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Type", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardType", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::OnScreenKeyboardRequestedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::Epic::OnlineServices::UI::OnScreenKeyboardType  m_Type) noexcept  {
this->m_ClientData = m_ClientData;
this->m_Type = m_Type;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal::OnScreenKeyboardRequestedCallbackInfoInternal()   {
}
