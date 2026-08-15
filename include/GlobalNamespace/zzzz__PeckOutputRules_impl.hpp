#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckOutputRules.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_impl.hpp"
#include "GlobalNamespace/zzzz__PeckOutputRules_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckOutputRules.GetOutputState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PeckOutputRules::*)(int32_t)>(&::GlobalNamespace::PeckOutputRules::GetOutputState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180452bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckOutputRules>(),
                        {"GetOutputState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::PeckOutputRules::GetOutputState(int32_t  inputState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckOutputRules>(),
                        {"GetOutputState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, inputState);
}
// Ctor Parameters [CppParam { name: "stateMode", ty: "::GlobalNamespace::PeckSwitch_StateMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "specificState", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mapStates", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PeckOutputRules::PeckOutputRules(::GlobalNamespace::PeckSwitch_StateMode  stateMode, int32_t  specificState, ::ArrayW<int32_t>  mapStates) noexcept  {
this->stateMode = stateMode;
this->specificState = specificState;
this->mapStates = mapStates;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckOutputRules::PeckOutputRules()   {
}
