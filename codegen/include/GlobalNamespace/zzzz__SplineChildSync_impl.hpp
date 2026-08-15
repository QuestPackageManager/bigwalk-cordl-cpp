#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineChildSync.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SplineChildSync_def.hpp"
#include "GlobalNamespace/zzzz__SplineChildSync_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SplineChildSync_DataPoint::SplineChildSync_DataPoint(::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  offset, float_t  t) noexcept  {
this->transform = transform;
this->offset = offset;
this->t = t;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineChildSync_DataPoint::SplineChildSync_DataPoint()   {
}
//  Writing Method size for method: ::GlobalNamespace::SplineChildSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineChildSync::*)()>(&::GlobalNamespace::SplineChildSync::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineChildSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GlobalNamespace::SplineChildSync::__cordl_internal_get_splineContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GlobalNamespace::SplineChildSync::__cordl_internal_get_splineContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr void GlobalNamespace::SplineChildSync::__cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineContainer = value;
}
constexpr ::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint>& GlobalNamespace::SplineChildSync::__cordl_internal_get_dataPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataPoints;
}
constexpr ::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint> const& GlobalNamespace::SplineChildSync::__cordl_internal_get_dataPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dataPoints;
}
constexpr void GlobalNamespace::SplineChildSync::__cordl_internal_set_dataPoints(::ArrayW<::GlobalNamespace::SplineChildSync_DataPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dataPoints = value;
}
inline void GlobalNamespace::SplineChildSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineChildSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineChildSync* GlobalNamespace::SplineChildSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SplineChildSync*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineChildSync::SplineChildSync()   {
}
