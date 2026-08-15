#pragma once
// IWYU pragma private; include "GlobalNamespace/BeakPostureMask.hpp"
#include "GlobalNamespace/zzzz__BeakPostureMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeakPostureMask.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeakPostureMask (*)(::GlobalNamespace::BeakPostureMask, float_t)>(&::GlobalNamespace::BeakPostureMask::op_Multiply)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18037af10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPostureMask>(),
                        {"op_Multiply", {}, {::i2c::type_of<::GlobalNamespace::BeakPostureMask>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeakPostureMask GlobalNamespace::BeakPostureMask::op_Multiply(::GlobalNamespace::BeakPostureMask  mask, float_t  scalar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakPostureMask>(),
                        {"op_Multiply", {}, {::i2c::type_of<::GlobalNamespace::BeakPostureMask>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeakPostureMask>(nullptr, ___internal_method, mask, scalar);
}
// Ctor Parameters [CppParam { name: "propPositionWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "propRotationWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "grasperPositionWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "upperAngleLimitWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowerAngleLimitWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftGripPositionWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightGripPositionWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeakPostureMask::BeakPostureMask(float_t  propPositionWeight, float_t  propRotationWeight, float_t  grasperPositionWeight, float_t  upperAngleLimitWeight, float_t  lowerAngleLimitWeight, float_t  leftGripPositionWeight, float_t  rightGripPositionWeight) noexcept  {
this->propPositionWeight = propPositionWeight;
this->propRotationWeight = propRotationWeight;
this->grasperPositionWeight = grasperPositionWeight;
this->upperAngleLimitWeight = upperAngleLimitWeight;
this->lowerAngleLimitWeight = lowerAngleLimitWeight;
this->leftGripPositionWeight = leftGripPositionWeight;
this->rightGripPositionWeight = rightGripPositionWeight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeakPostureMask::BeakPostureMask()   {
}
