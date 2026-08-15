#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainCarPositioner.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TrainCarPositioner_def.hpp"
#include "GlobalNamespace/zzzz__TrainCar_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrainCarPositioner.PositionOnSpline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainCarPositioner::*)(::GlobalNamespace::TrainCar*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::TrainCarPositioner::PositionOnSpline)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x180419520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCarPositioner>(),
                        {"PositionOnSpline", {}, {::i2c::type_of<::GlobalNamespace::TrainCar*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TrainCarPositioner::PositionOnSpline(::GlobalNamespace::TrainCar*  car, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldRotation, bool  bank)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCarPositioner>(),
                        {"PositionOnSpline", {}, {::i2c::type_of<::GlobalNamespace::TrainCar*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, car, worldPosition, worldRotation, bank);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_smoothRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rotationVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_hasInitialRotation", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TrainCarPositioner::TrainCarPositioner(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  _smoothRotation, ::UnityEngine::Vector3  _rotationVelocity, bool  _hasInitialRotation) noexcept  {
this->position = position;
this->_smoothRotation = _smoothRotation;
this->_rotationVelocity = _rotationVelocity;
this->_hasInitialRotation = _hasInitialRotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrainCarPositioner::TrainCarPositioner()   {
}
