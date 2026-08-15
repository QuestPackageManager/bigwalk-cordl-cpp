#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckStateFilter.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckStateFilter_FilterType::PeckStateFilter_FilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckStateFilter_FilterType::PeckStateFilter_FilterType()   {
}
constexpr ::GlobalNamespace::PeckStateFilter_FilterType  GlobalNamespace::PeckStateFilter_FilterType::Always{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PeckStateFilter_FilterType  GlobalNamespace::PeckStateFilter_FilterType::OnSpecificStates{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::PeckStateFilter.ShouldPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckStateFilter::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckStateFilter::ShouldPeck)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180453b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckStateFilter>(),
                        {"ShouldPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PeckStateFilter::ShouldPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckStateFilter>(),
                        {"ShouldPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, peckContext);
}
// Ctor Parameters [CppParam { name: "filterType", ty: "::GlobalNamespace::PeckStateFilter_FilterType", modifiers: "", def_value: Some("{}") }, CppParam { name: "specificStates", ty: "::ArrayW<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckStateFilter::PeckStateFilter(::GlobalNamespace::PeckStateFilter_FilterType  filterType, ::ArrayW<bool>  specificStates) noexcept  {
this->filterType = filterType;
this->specificStates = specificStates;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckStateFilter::PeckStateFilter()   {
}
