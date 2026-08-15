#pragma once
// IWYU pragma private; include "GlobalNamespace/TerrainAlignerSpline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TerrainAlignerSpline_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TerrainAlignerSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TerrainAlignerSpline::*)()>(&::GlobalNamespace::TerrainAlignerSpline::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAlignerSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GlobalNamespace::TerrainAlignerSpline::__cordl_internal_get_SplineContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineContainer;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GlobalNamespace::TerrainAlignerSpline::__cordl_internal_get_SplineContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineContainer;
}
constexpr void GlobalNamespace::TerrainAlignerSpline::__cordl_internal_set_SplineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplineContainer = value;
}
constexpr float_t& GlobalNamespace::TerrainAlignerSpline::__cordl_internal_get_downhillOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downhillOffset;
}
constexpr float_t const& GlobalNamespace::TerrainAlignerSpline::__cordl_internal_get_downhillOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downhillOffset;
}
constexpr void GlobalNamespace::TerrainAlignerSpline::__cordl_internal_set_downhillOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downhillOffset = value;
}
inline void GlobalNamespace::TerrainAlignerSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TerrainAlignerSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TerrainAlignerSpline* GlobalNamespace::TerrainAlignerSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TerrainAlignerSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TerrainAlignerSpline::TerrainAlignerSpline()   {
}
