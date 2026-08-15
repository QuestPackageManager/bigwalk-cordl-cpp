#pragma once
// IWYU pragma private; include "GlobalNamespace/PulseFlasherGizmo.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PulseFlasherGizmo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PulseFlasherGizmo.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseFlasherGizmo::*)()>(&::GlobalNamespace::PulseFlasherGizmo::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180407700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseFlasherGizmo*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PulseFlasherGizmo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PulseFlasherGizmo::*)()>(&::GlobalNamespace::PulseFlasherGizmo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseFlasherGizmo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PulseFlasherGizmo::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseFlasherGizmo*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PulseFlasherGizmo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PulseFlasherGizmo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PulseFlasherGizmo* GlobalNamespace::PulseFlasherGizmo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PulseFlasherGizmo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PulseFlasherGizmo::PulseFlasherGizmo()   {
}
