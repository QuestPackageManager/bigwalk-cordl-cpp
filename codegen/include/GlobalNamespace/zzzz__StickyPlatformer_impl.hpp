#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyPlatformer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StickyPlatformer_def.hpp"
#include "GlobalNamespace/zzzz__StickyPlatform_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformer.get_platformTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::StickyPlatformer::*)()>(&::GlobalNamespace::StickyPlatformer::get_platformTransform)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180416f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"get_platformTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformer::*)()>(&::GlobalNamespace::StickyPlatformer::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180416dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformer.SetPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformer::*)(::GlobalNamespace::StickyPlatform*)>(&::GlobalNamespace::StickyPlatformer::SetPlatform)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180416de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformer.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformer::*)()>(&::GlobalNamespace::StickyPlatformer::FixedUpdate)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x180416860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyPlatformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyPlatformer::*)()>(&::GlobalNamespace::StickyPlatformer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::StickyPlatformer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform>& GlobalNamespace::StickyPlatformer::__cordl_internal_get_platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr ::UnityW<::GlobalNamespace::StickyPlatform> const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platform;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_platform(::UnityW<::GlobalNamespace::StickyPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platform = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::StickyPlatformer::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyPlatformer::__cordl_internal_get_storedPlatformPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_storedPlatformPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformPosition;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_storedPlatformPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedPlatformPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::StickyPlatformer::__cordl_internal_get_storedPlatformRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_storedPlatformRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPlatformRotation;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_storedPlatformRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedPlatformRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyPlatformer::__cordl_internal_get_storedPositionRelativeToPlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPositionRelativeToPlatform;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_storedPositionRelativeToPlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedPositionRelativeToPlatform;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_storedPositionRelativeToPlatform(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedPositionRelativeToPlatform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyPlatformer::__cordl_internal_get_positionMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMovement;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_positionMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMovement;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_positionMovement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionMovement = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::StickyPlatformer::__cordl_internal_get_rotationMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationMovement;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::StickyPlatformer::__cordl_internal_get_rotationMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationMovement;
}
constexpr void GlobalNamespace::StickyPlatformer::__cordl_internal_set_rotationMovement(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationMovement = value;
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::StickyPlatformer::get_platformTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"get_platformTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::StickyPlatformer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyPlatformer::SetPlatform(::GlobalNamespace::StickyPlatform*  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"SetPlatform", {}, {::i2c::type_of<::GlobalNamespace::StickyPlatform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform);
}
inline void GlobalNamespace::StickyPlatformer::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyPlatformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyPlatformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StickyPlatformer* GlobalNamespace::StickyPlatformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StickyPlatformer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StickyPlatformer::StickyPlatformer()   {
}
