#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/IntegratedPlatformOptionsContainerAddOptions.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__Options_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformOptionsContainerAddOptions_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__Options_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options> (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::*)()>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::get_Options)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805115a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions.set_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::*)(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>)>(&::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::set_Options)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805115c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>(),
                        {"set_Options", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options> Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::set_Options(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions>(),
                        {"set_Options", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Options_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::IntegratedPlatformOptionsContainerAddOptions(::System::Nullable_1<::Epic::OnlineServices::IntegratedPlatform::Options>  _Options_k__BackingField) noexcept  {
this->_Options_k__BackingField = _Options_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformOptionsContainerAddOptions::IntegratedPlatformOptionsContainerAddOptions()   {
}
