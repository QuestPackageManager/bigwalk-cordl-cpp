#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckCondition.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__PeckCondition_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckCondition.ConditionMet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckCondition::*)()>(&::GlobalNamespace::PeckCondition::ConditionMet)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180446fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCondition>(),
                        {"ConditionMet", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::PeckCondition::ConditionMet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckCondition>(),
                        {"ConditionMet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "peckSystemReference", ty: "::GlobalNamespace::PeckSystemReference", modifiers: "", def_value: Some("{}") }, CppParam { name: "filter", ty: "::GlobalNamespace::PeckStateFilter", modifiers: "", def_value: Some("{}") }, CppParam { name: "defaultOutcome", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckCondition::PeckCondition(::GlobalNamespace::PeckSystemReference  peckSystemReference, ::GlobalNamespace::PeckStateFilter  filter, bool  defaultOutcome) noexcept  {
this->peckSystemReference = peckSystemReference;
this->filter = filter;
this->defaultOutcome = defaultOutcome;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckCondition::PeckCondition()   {
}
