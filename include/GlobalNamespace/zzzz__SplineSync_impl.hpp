#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineSync.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SplineSync_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineSync.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineSync::*)()>(&::GlobalNamespace::SplineSync::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSync*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineSync.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineSync::*)()>(&::GlobalNamespace::SplineSync::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1803f0960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSync*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineSync._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineSync::*)()>(&::GlobalNamespace::SplineSync::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803f0c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSync*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SplineSync::__cordl_internal_get_startTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SplineSync::__cordl_internal_get_startTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTransform;
}
constexpr void GlobalNamespace::SplineSync::__cordl_internal_set_startTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SplineSync::__cordl_internal_get_handleTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SplineSync::__cordl_internal_get_handleTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleTransform;
}
constexpr void GlobalNamespace::SplineSync::__cordl_internal_set_handleTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SplineSync::__cordl_internal_get_endTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SplineSync::__cordl_internal_get_endTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTransform;
}
constexpr void GlobalNamespace::SplineSync::__cordl_internal_set_endTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTransform = value;
}
constexpr float_t& GlobalNamespace::SplineSync::__cordl_internal_get_tension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tension;
}
constexpr float_t const& GlobalNamespace::SplineSync::__cordl_internal_get_tension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tension;
}
constexpr void GlobalNamespace::SplineSync::__cordl_internal_set_tension(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tension = value;
}
constexpr bool& GlobalNamespace::SplineSync::__cordl_internal_get_autoUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoUpdate;
}
constexpr bool const& GlobalNamespace::SplineSync::__cordl_internal_get_autoUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoUpdate;
}
constexpr void GlobalNamespace::SplineSync::__cordl_internal_set_autoUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoUpdate = value;
}
inline void GlobalNamespace::SplineSync::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSync*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplineSync::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSync*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplineSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSync*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineSync* GlobalNamespace::SplineSync::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SplineSync*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineSync::SplineSync()   {
}
