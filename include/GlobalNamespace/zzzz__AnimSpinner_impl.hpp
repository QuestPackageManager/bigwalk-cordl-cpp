#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimSpinner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AnimSpinner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimSpinner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimSpinner::*)()>(&::GlobalNamespace::AnimSpinner::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803f7790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimSpinner.OnBecameVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimSpinner::*)()>(&::GlobalNamespace::AnimSpinner::OnBecameVisible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f7690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"OnBecameVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimSpinner.OnBecameInvisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimSpinner::*)()>(&::GlobalNamespace::AnimSpinner::OnBecameInvisible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f7680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"OnBecameInvisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimSpinner.SetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimSpinner::*)(int32_t)>(&::GlobalNamespace::AnimSpinner::SetRotation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803f76e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"SetRotation", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimSpinner.RefreshEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimSpinner::*)()>(&::GlobalNamespace::AnimSpinner::RefreshEnabled)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803f76b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"RefreshEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimSpinner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimSpinner::*)()>(&::GlobalNamespace::AnimSpinner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::AnimSpinner::__cordl_internal_get_rotationVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AnimSpinner::__cordl_internal_get_rotationVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationVelocity;
}
constexpr void GlobalNamespace::AnimSpinner::__cordl_internal_set_rotationVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationVelocity = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::AnimSpinner::__cordl_internal_get_roationSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roationSettings;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::AnimSpinner::__cordl_internal_get_roationSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roationSettings;
}
constexpr void GlobalNamespace::AnimSpinner::__cordl_internal_set_roationSettings(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roationSettings = value;
}
constexpr bool& GlobalNamespace::AnimSpinner::__cordl_internal_get_isRotating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRotating;
}
constexpr bool const& GlobalNamespace::AnimSpinner::__cordl_internal_get_isRotating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRotating;
}
constexpr void GlobalNamespace::AnimSpinner::__cordl_internal_set_isRotating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRotating = value;
}
constexpr bool& GlobalNamespace::AnimSpinner::__cordl_internal_get_isVisible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr bool const& GlobalNamespace::AnimSpinner::__cordl_internal_get_isVisible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isVisible;
}
constexpr void GlobalNamespace::AnimSpinner::__cordl_internal_set_isVisible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isVisible = value;
}
inline void GlobalNamespace::AnimSpinner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimSpinner::OnBecameVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"OnBecameVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimSpinner::OnBecameInvisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"OnBecameInvisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimSpinner::SetRotation(int32_t  settingsIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"SetRotation", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsIndex);
}
inline void GlobalNamespace::AnimSpinner::RefreshEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {"RefreshEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimSpinner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AnimSpinner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimSpinner* GlobalNamespace::AnimSpinner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimSpinner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimSpinner::AnimSpinner()   {
}
