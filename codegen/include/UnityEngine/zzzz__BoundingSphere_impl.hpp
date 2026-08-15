#pragma once
// IWYU pragma private; include "UnityEngine/BoundingSphere.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::BoundingSphere._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::BoundingSphere::*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::BoundingSphere::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803255b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::BoundingSphere>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::BoundingSphere::_ctor(::UnityEngine::Vector3  pos, float_t  rad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::BoundingSphere>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos, rad);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BoundingSphere::BoundingSphere(::UnityEngine::Vector3  position, float_t  radius) noexcept  {
this->position = position;
this->radius = radius;
}
// Ctor Parameters []
constexpr ::UnityEngine::BoundingSphere::BoundingSphere()   {
}
