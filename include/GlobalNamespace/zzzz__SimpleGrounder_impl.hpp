#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleGrounder.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleGrounder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleGrounder.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleGrounder::*)()>(&::GlobalNamespace::SimpleGrounder::LateUpdate)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1803efff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleGrounder*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleGrounder.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleGrounder::*)()>(&::GlobalNamespace::SimpleGrounder::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803f0390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleGrounder*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleGrounder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleGrounder::*)()>(&::GlobalNamespace::SimpleGrounder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleGrounder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SimpleGrounder::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr float_t& GlobalNamespace::SimpleGrounder::__cordl_internal_get_rayCastOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastOffset;
}
constexpr float_t const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_rayCastOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastOffset;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_rayCastOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastOffset = value;
}
constexpr float_t& GlobalNamespace::SimpleGrounder::__cordl_internal_get_rayCastLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastLength;
}
constexpr float_t const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_rayCastLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastLength;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_rayCastLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastLength = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::SimpleGrounder::__cordl_internal_get_hit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_hit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_hit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hit = value;
}
constexpr float_t& GlobalNamespace::SimpleGrounder::__cordl_internal_get_maxRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotation;
}
constexpr float_t const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_maxRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotation;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_maxRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRotation = value;
}
constexpr float_t& GlobalNamespace::SimpleGrounder::__cordl_internal_get_maxTranslation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTranslation;
}
constexpr float_t const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_maxTranslation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTranslation;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_maxTranslation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTranslation = value;
}
constexpr bool& GlobalNamespace::SimpleGrounder::__cordl_internal_get_rotateFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateFoot;
}
constexpr bool const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_rotateFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateFoot;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_rotateFoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateFoot = value;
}
constexpr bool& GlobalNamespace::SimpleGrounder::__cordl_internal_get_translateFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translateFoot;
}
constexpr bool const& GlobalNamespace::SimpleGrounder::__cordl_internal_get_translateFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translateFoot;
}
constexpr void GlobalNamespace::SimpleGrounder::__cordl_internal_set_translateFoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___translateFoot = value;
}
inline void GlobalNamespace::SimpleGrounder::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleGrounder*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleGrounder::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleGrounder*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleGrounder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleGrounder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleGrounder* GlobalNamespace::SimpleGrounder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleGrounder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleGrounder::SimpleGrounder()   {
}
