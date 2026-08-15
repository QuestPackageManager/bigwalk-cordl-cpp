#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyPlatformerOld.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StickyPlatformerOld_def.hpp"
#include "GlobalNamespace/zzzz__StickyPlatform_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformerOld.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformerOld::*)()>(&::GlobalNamespace::StickyPlatformerOld::FixedUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180416750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformerOld.SetPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformerOld::*)(::GlobalNamespace::StickyPlatform*)>(&::GlobalNamespace::StickyPlatformerOld::SetPlatform)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180416790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformerOld.ApplyFrameMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformerOld::*)(::GlobalNamespace::StickyPlatform*)>(&::GlobalNamespace::StickyPlatformerOld::ApplyFrameMovement)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1804163a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {"ApplyFrameMovement", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformerOld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformerOld::*)()>(&::GlobalNamespace::StickyPlatformerOld::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_applyMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyMovement;
}
constexpr bool const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_applyMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyMovement;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_applyMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyMovement = value;
}
constexpr bool& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_applyRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyRotation;
}
constexpr bool const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_applyRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyRotation;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_applyRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyRotation = value;
}
constexpr bool& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_includeRotationBasedMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeRotationBasedMovement;
}
constexpr bool const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_includeRotationBasedMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeRotationBasedMovement;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_includeRotationBasedMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeRotationBasedMovement = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_platform(::UnityW<::GlobalNamespace::StickyPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_storedPlatformPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_storedPlatformPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformPosition;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_storedPlatformPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedPlatformPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_storedPlatformRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_storedPlatformRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformRotation;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_storedPlatformRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedPlatformRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_positionMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMovement;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_positionMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMovement;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_positionMovement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionMovement = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_rotationMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationMovement;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::StickyPlatformerOld::__cordl_internal_get_rotationMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationMovement;
}
constexpr void GlobalNamespace::StickyPlatformerOld::__cordl_internal_set_rotationMovement(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationMovement = value;
}
inline void GlobalNamespace::StickyPlatformerOld::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyPlatformerOld::SetPlatform(::GlobalNamespace::StickyPlatform*  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform);
}
inline void GlobalNamespace::StickyPlatformerOld::ApplyFrameMovement(::GlobalNamespace::StickyPlatform*  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {"ApplyFrameMovement", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform);
}
inline void GlobalNamespace::StickyPlatformerOld::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformerOld*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StickyPlatformerOld* GlobalNamespace::StickyPlatformerOld::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StickyPlatformerOld*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StickyPlatformerOld::StickyPlatformerOld()   {
}
