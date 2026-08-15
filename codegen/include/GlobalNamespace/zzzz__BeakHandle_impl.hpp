#pragma once
// IWYU pragma private; include "GlobalNamespace/BeakHandle.hpp"
#include "GlobalNamespace/zzzz__BeakPostureMask_impl.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_impl.hpp"
#include "GlobalNamespace/zzzz__BeakHandle_def.hpp"
#include "GlobalNamespace/zzzz__BeakPosture_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeakHandle.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeakHandle::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::BeakHandle::DrawGizmos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18037a4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakHandle>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeakHandle.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeakPosture (::GlobalNamespace::BeakHandle::*)(float_t, float_t, float_t)>(&::GlobalNamespace::BeakHandle::GetData)> {
  constexpr static std::size_t size = 0x9e0;
  constexpr static std::size_t addrs = 0x18037a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakHandle>(),
                        {"GetData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeakHandle::DrawGizmos(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakHandle>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prop);
}
inline ::GlobalNamespace::BeakPosture GlobalNamespace::BeakHandle::GetData(float_t  raisedness, float_t  sittingness, float_t  headY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeakHandle>(),
                        {"GetData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeakPosture>(*this, ___internal_method, raisedness, sittingness, headY);
}
// Ctor Parameters [CppParam { name: "lowered", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: Some("{}") }, CppParam { name: "raised", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: Some("{}") }, CppParam { name: "sittingLoweredMask", ty: "::GlobalNamespace::BeakPostureMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "sittingLoweredPosture", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: Some("{}") }, CppParam { name: "useSpecialUpper", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "loweredSpecialUpper", ty: "::GlobalNamespace::BeakPosture", modifiers: "", def_value: Some("{}") }, CppParam { name: "sittingLowerAngleLimit", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeakHandle::BeakHandle(::GlobalNamespace::BeakPosture  lowered, ::GlobalNamespace::BeakPosture  raised, ::GlobalNamespace::BeakPostureMask  sittingLoweredMask, ::GlobalNamespace::BeakPosture  sittingLoweredPosture, bool  useSpecialUpper, ::GlobalNamespace::BeakPosture  loweredSpecialUpper, float_t  sittingLowerAngleLimit) noexcept  {
this->lowered = lowered;
this->raised = raised;
this->sittingLoweredMask = sittingLoweredMask;
this->sittingLoweredPosture = sittingLoweredPosture;
this->useSpecialUpper = useSpecialUpper;
this->loweredSpecialUpper = loweredSpecialUpper;
this->sittingLowerAngleLimit = sittingLowerAngleLimit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeakHandle::BeakHandle()   {
}
