#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineHeightGizmo.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SplineHeightGizmo_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineHeightGizmo.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineHeightGizmo::*)()>(&::GlobalNamespace::SplineHeightGizmo::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x180415310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineHeightGizmo*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineHeightGizmo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineHeightGizmo::*)()>(&::GlobalNamespace::SplineHeightGizmo::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804157c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineHeightGizmo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& GlobalNamespace::SplineHeightGizmo::__cordl_internal_get_splineContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& GlobalNamespace::SplineHeightGizmo::__cordl_internal_get_splineContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr void GlobalNamespace::SplineHeightGizmo::__cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineContainer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SplineHeightGizmo::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SplineHeightGizmo::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::SplineHeightGizmo::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr int32_t& GlobalNamespace::SplineHeightGizmo::__cordl_internal_get_iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterations;
}
constexpr int32_t const& GlobalNamespace::SplineHeightGizmo::__cordl_internal_get_iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterations;
}
constexpr void GlobalNamespace::SplineHeightGizmo::__cordl_internal_set_iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iterations = value;
}
inline void GlobalNamespace::SplineHeightGizmo::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineHeightGizmo*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplineHeightGizmo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineHeightGizmo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineHeightGizmo* GlobalNamespace::SplineHeightGizmo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SplineHeightGizmo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineHeightGizmo::SplineHeightGizmo()   {
}
