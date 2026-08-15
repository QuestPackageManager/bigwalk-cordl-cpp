#pragma once
// IWYU pragma private; include "GlobalNamespace/Launcher.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Launcher_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Launcher.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Launcher::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::Launcher::Launch)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x180445ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Launcher>(),
                        {"Launch", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Launcher::Launch(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Launcher>(),
                        {"Launch", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prop);
}
// Ctor Parameters [CppParam { name: "justDrop", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseStrength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "aim", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "directionRandomOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "torque", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "launchFromHere", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}") }, CppParam { name: "copyRotation", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Launcher::Launcher(bool  justDrop, float_t  baseStrength, ::UnityW<::UnityEngine::Transform>  aim, float_t  directionRandomOffset, ::UnityEngine::Vector3  torque, ::UnityW<::UnityEngine::Transform>  launchFromHere, bool  copyRotation) noexcept  {
this->justDrop = justDrop;
this->baseStrength = baseStrength;
this->aim = aim;
this->directionRandomOffset = directionRandomOffset;
this->torque = torque;
this->launchFromHere = launchFromHere;
this->copyRotation = copyRotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Launcher::Launcher()   {
}
