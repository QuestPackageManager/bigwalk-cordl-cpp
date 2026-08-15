#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/MouseDrag.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/InverseKinematics/zzzz__MouseDrag_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::MouseDrag.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::MouseDrag::*)()>(&::Animancer::Examples::InverseKinematics::MouseDrag::Update)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1802fea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::MouseDrag*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::InverseKinematics::MouseDrag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::InverseKinematics::MouseDrag::*)()>(&::Animancer::Examples::InverseKinematics::MouseDrag::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::MouseDrag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Animancer::Examples::InverseKinematics::MouseDrag::__cordl_internal_get__Dragging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dragging;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Animancer::Examples::InverseKinematics::MouseDrag::__cordl_internal_get__Dragging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Dragging;
}
constexpr void Animancer::Examples::InverseKinematics::MouseDrag::__cordl_internal_set__Dragging(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Dragging = value;
}
constexpr float_t& Animancer::Examples::InverseKinematics::MouseDrag::__cordl_internal_get__Distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Distance;
}
constexpr float_t const& Animancer::Examples::InverseKinematics::MouseDrag::__cordl_internal_get__Distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Distance;
}
constexpr void Animancer::Examples::InverseKinematics::MouseDrag::__cordl_internal_set__Distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Distance = value;
}
inline void Animancer::Examples::InverseKinematics::MouseDrag::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::MouseDrag*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::InverseKinematics::MouseDrag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::InverseKinematics::MouseDrag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::InverseKinematics::MouseDrag* Animancer::Examples::InverseKinematics::MouseDrag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::InverseKinematics::MouseDrag*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::InverseKinematics::MouseDrag::MouseDrag()   {
}
