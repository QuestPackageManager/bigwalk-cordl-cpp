#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Cameras/PivotBasedCameraRig.hpp"
#include "Rowlan/UnityStandardAssets/Cameras/zzzz__AbstractTargetFollower_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rowlan/UnityStandardAssets/Cameras/zzzz__PivotBasedCameraRig_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::*)()>(&::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abf730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*>(),
                    {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::*)()>(&::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_get_m_Cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cam;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_get_m_Cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cam;
}
constexpr void Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_set_m_Cam(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cam = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_get_m_Pivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pivot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_get_m_Pivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pivot;
}
constexpr void Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_set_m_Pivot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pivot = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_get_m_LastTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_get_m_LastTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetPosition;
}
constexpr void Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::__cordl_internal_set_m_LastTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTargetPosition = value;
}
inline void Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig* Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig*>());
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::Cameras::PivotBasedCameraRig::PivotBasedCameraRig()   {
}
