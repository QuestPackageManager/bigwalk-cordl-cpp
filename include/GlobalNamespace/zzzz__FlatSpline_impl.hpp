#pragma once
// IWYU pragma private; include "GlobalNamespace/FlatSpline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FlatSpline_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlatSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlatSpline::*)()>(&::GlobalNamespace::FlatSpline::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlatSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::FlatSpline::__cordl_internal_get_Points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::FlatSpline::__cordl_internal_get_Points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr void GlobalNamespace::FlatSpline::__cordl_internal_set_Points(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Points = value;
}
inline void GlobalNamespace::FlatSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlatSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlatSpline* GlobalNamespace::FlatSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlatSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlatSpline::FlatSpline()   {
}
