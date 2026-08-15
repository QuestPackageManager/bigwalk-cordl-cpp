#pragma once
// IWYU pragma private; include "GlobalNamespace/TunnelSpline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TunnelSpline_def.hpp"
#include "GlobalNamespace/zzzz__SnapAnchor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TunnelSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TunnelSpline::*)()>(&::GlobalNamespace::TunnelSpline::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TunnelSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TunnelSpline::__cordl_internal_get_alignerDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignerDistance;
}
constexpr float_t const& GlobalNamespace::TunnelSpline::__cordl_internal_get_alignerDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignerDistance;
}
constexpr void GlobalNamespace::TunnelSpline::__cordl_internal_set_alignerDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignerDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::SnapAnchor>& GlobalNamespace::TunnelSpline::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityW<::GlobalNamespace::SnapAnchor> const& GlobalNamespace::TunnelSpline::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void GlobalNamespace::TunnelSpline::__cordl_internal_set_start(::UnityW<::GlobalNamespace::SnapAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityW<::GlobalNamespace::SnapAnchor>& GlobalNamespace::TunnelSpline::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityW<::GlobalNamespace::SnapAnchor> const& GlobalNamespace::TunnelSpline::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void GlobalNamespace::TunnelSpline::__cordl_internal_set_end(::UnityW<::GlobalNamespace::SnapAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
inline void GlobalNamespace::TunnelSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TunnelSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TunnelSpline* GlobalNamespace::TunnelSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TunnelSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TunnelSpline::TunnelSpline()   {
}
