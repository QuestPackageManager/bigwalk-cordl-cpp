#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OptionInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OptionInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__Option_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OptionInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTC::OptionInternal::*)(::by_ref<::Epic::OnlineServices::RTC::Option>)>(&::Epic::OnlineServices::RTC::OptionInternal::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804f6fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OptionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::Option>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OptionInternal::Get(::by_ref<::Epic::OnlineServices::RTC::Option>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OptionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::Option>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::Option>"
constexpr  Epic::OnlineServices::RTC::OptionInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::Option>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::Option>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::Option>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::Option>* Epic::OnlineServices::RTC::OptionInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTC__Option_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTC::Option>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Key", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::OptionInternal::OptionInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Key, ::System::IntPtr  m_Value) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Key = m_Key;
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OptionInternal::OptionInternal()   {
}
