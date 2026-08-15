#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionSearchSetParameterOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_impl.hpp"
#include "Epic/OnlineServices/zzzz__ComparisonOp_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionSearchSetParameterOptions_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/zzzz__ComparisonOp_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions.get_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> (::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::get_Parameter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"get_Parameter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions.set_Parameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::*)(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>)>(&::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::set_Parameter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804e6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"set_Parameter", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions.get_ComparisonOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ComparisonOp (::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::get_ComparisonOp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"get_ComparisonOp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions.set_ComparisonOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::*)(::Epic::OnlineServices::ComparisonOp)>(&::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::set_ComparisonOp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"set_ComparisonOp", {}, {::i2c::type_of<::Epic::OnlineServices::ComparisonOp>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::get_Parameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"get_Parameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::set_Parameter(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"set_Parameter", {}, {::i2c::type_of<::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ComparisonOp Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::get_ComparisonOp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"get_ComparisonOp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ComparisonOp>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::set_ComparisonOp(::Epic::OnlineServices::ComparisonOp  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions>(),
                        {"set_ComparisonOp", {}, {::i2c::type_of<::Epic::OnlineServices::ComparisonOp>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Parameter_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ComparisonOp_k__BackingField", ty: "::Epic::OnlineServices::ComparisonOp", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::SessionSearchSetParameterOptions(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _Parameter_k__BackingField, ::Epic::OnlineServices::ComparisonOp  _ComparisonOp_k__BackingField) noexcept  {
this->_Parameter_k__BackingField = _Parameter_k__BackingField;
this->_ComparisonOp_k__BackingField = _ComparisonOp_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionSearchSetParameterOptions::SessionSearchSetParameterOptions()   {
}
