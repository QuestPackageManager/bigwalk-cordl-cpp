#pragma once
// IWYU pragma private; include "Rowlan/Genesis/SplinePainter/SplinePainter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rowlan/Genesis/SplinePainter/zzzz__SplinePainter_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::SplinePainter::SplinePainter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::SplinePainter::SplinePainter::*)()>(&::Rowlan::Genesis::SplinePainter::SplinePainter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abfa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::SplinePainter::SplinePainter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_strokeDeltaThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strokeDeltaThreshold;
}
constexpr float_t const& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_strokeDeltaThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strokeDeltaThreshold;
}
constexpr void Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_set_strokeDeltaThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strokeDeltaThreshold = value;
}
constexpr float_t& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_pointReductionEpsilon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointReductionEpsilon;
}
constexpr float_t const& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_pointReductionEpsilon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointReductionEpsilon;
}
constexpr void Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_set_pointReductionEpsilon(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointReductionEpsilon = value;
}
constexpr float_t& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_splineTension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineTension;
}
constexpr float_t const& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_splineTension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineTension;
}
constexpr void Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_set_splineTension(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineTension = value;
}
constexpr float_t& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_heightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr float_t const& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_heightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr void Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_set_heightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightOffset = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_get_container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr void Rowlan::Genesis::SplinePainter::SplinePainter::__cordl_internal_set_container(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___container = value;
}
inline void Rowlan::Genesis::SplinePainter::SplinePainter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::SplinePainter::SplinePainter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::SplinePainter::SplinePainter* Rowlan::Genesis::SplinePainter::SplinePainter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::SplinePainter::SplinePainter*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::SplinePainter::SplinePainter::SplinePainter()   {
}
