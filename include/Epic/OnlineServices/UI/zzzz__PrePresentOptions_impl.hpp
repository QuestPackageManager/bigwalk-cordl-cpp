#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/PrePresentOptions.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__PrePresentOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::PrePresentOptions.get_PlatformSpecificData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::UI::PrePresentOptions::*)()>(&::Epic::OnlineServices::UI::PrePresentOptions::get_PlatformSpecificData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PrePresentOptions>(),
                        {"get_PlatformSpecificData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::PrePresentOptions.set_PlatformSpecificData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::PrePresentOptions::*)(::System::IntPtr)>(&::Epic::OnlineServices::UI::PrePresentOptions::set_PlatformSpecificData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PrePresentOptions>(),
                        {"set_PlatformSpecificData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::UI::PrePresentOptions::get_PlatformSpecificData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PrePresentOptions>(),
                        {"get_PlatformSpecificData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::PrePresentOptions::set_PlatformSpecificData(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PrePresentOptions>(),
                        {"set_PlatformSpecificData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PlatformSpecificData_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::PrePresentOptions::PrePresentOptions(::System::IntPtr  _PlatformSpecificData_k__BackingField) noexcept  {
this->_PlatformSpecificData_k__BackingField = _PlatformSpecificData_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::PrePresentOptions::PrePresentOptions()   {
}
