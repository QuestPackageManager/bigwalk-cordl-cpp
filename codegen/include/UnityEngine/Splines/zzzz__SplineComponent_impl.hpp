#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineComponent.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis::SplineComponent_AlignAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis::SplineComponent_AlignAxis()   {
}
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis  UnityEngine::Splines::SplineComponent_AlignAxis::XAxis{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis  UnityEngine::Splines::SplineComponent_AlignAxis::YAxis{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis  UnityEngine::Splines::SplineComponent_AlignAxis::ZAxis{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis  UnityEngine::Splines::SplineComponent_AlignAxis::NegativeXAxis{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis  UnityEngine::Splines::SplineComponent_AlignAxis::NegativeYAxis{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis  UnityEngine::Splines::SplineComponent_AlignAxis::NegativeZAxis{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::UnityEngine::Splines::SplineComponent.GetAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::UnityEngine::Splines::SplineComponent::*)(::UnityEngine::Splines::SplineComponent_AlignAxis)>(&::UnityEngine::Splines::SplineComponent::GetAxis)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216a6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComponent*>(),
                        {"GetAxis", {}, {::i2c::type_of<::UnityEngine::Splines::SplineComponent_AlignAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineComponent::*)()>(&::UnityEngine::Splines::SplineComponent::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18216a700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Unity::Mathematics::float3>& UnityEngine::Splines::SplineComponent::__cordl_internal_get_m_AlignAxisToVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlignAxisToVector;
}
constexpr ::ArrayW<::Unity::Mathematics::float3> const& UnityEngine::Splines::SplineComponent::__cordl_internal_get_m_AlignAxisToVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlignAxisToVector;
}
constexpr void UnityEngine::Splines::SplineComponent::__cordl_internal_set_m_AlignAxisToVector(::ArrayW<::Unity::Mathematics::float3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlignAxisToVector = value;
}
inline ::Unity::Mathematics::float3 UnityEngine::Splines::SplineComponent::GetAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComponent*>(),
                        {"GetAxis", {}, {::i2c::type_of<::UnityEngine::Splines::SplineComponent_AlignAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, axis);
}
inline void UnityEngine::Splines::SplineComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineComponent* UnityEngine::Splines::SplineComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineComponent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineComponent::SplineComponent()   {
}
