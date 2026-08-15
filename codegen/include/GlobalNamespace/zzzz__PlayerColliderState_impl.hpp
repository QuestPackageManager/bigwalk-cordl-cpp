#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerColliderState.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerColliderState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerColliderState.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerColliderState (*)(::GlobalNamespace::PlayerColliderState, ::GlobalNamespace::PlayerColliderState, float_t)>(&::GlobalNamespace::PlayerColliderState::Lerp)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180360460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColliderState>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::PlayerColliderState>(), ::i2c::type_of<::GlobalNamespace::PlayerColliderState>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlayerColliderState GlobalNamespace::PlayerColliderState::Lerp(::GlobalNamespace::PlayerColliderState  a, ::GlobalNamespace::PlayerColliderState  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerColliderState>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::PlayerColliderState>(), ::i2c::type_of<::GlobalNamespace::PlayerColliderState>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerColliderState>(nullptr, ___internal_method, a, b, t);
}
// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "footColliderCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerColliderState::PlayerColliderState(::UnityEngine::Vector3  center, float_t  height, ::UnityEngine::Vector3  footColliderCenter) noexcept  {
this->center = center;
this->height = height;
this->footColliderCenter = footColliderCenter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerColliderState::PlayerColliderState()   {
}
