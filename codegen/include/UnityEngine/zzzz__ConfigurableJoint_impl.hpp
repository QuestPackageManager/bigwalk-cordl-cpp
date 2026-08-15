#pragma once
// IWYU pragma private; include "UnityEngine/ConfigurableJoint.hpp"
#include "UnityEngine/zzzz__Joint_impl.hpp"
#include "UnityEngine/zzzz__ConfigurableJoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ConfigurableJoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ConfigurableJoint::*)()>(&::UnityEngine::ConfigurableJoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ConfigurableJoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ConfigurableJoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ConfigurableJoint* UnityEngine::ConfigurableJoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ConfigurableJoint*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ConfigurableJoint::ConfigurableJoint()   {
}
