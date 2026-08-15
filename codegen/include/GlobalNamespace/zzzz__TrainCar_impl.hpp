#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainCar.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrainCar_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedTrain_def.hpp"
#include "GlobalNamespace/zzzz__PlatformingBody_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrainCar.get_colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (::GlobalNamespace::TrainCar::*)()>(&::GlobalNamespace::TrainCar::get_colliders)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180419f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {"get_colliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainCar.UpdateCullState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TrainCar*, ::Unity::Mathematics::float3, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*, ::GlobalNamespace::NetworkedTrain_CullMode)>(&::GlobalNamespace::TrainCar::UpdateCullState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180419e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {"UpdateCullState", {}, {::i2c::type_of<::GlobalNamespace::TrainCar*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::GlobalNamespace::NetworkedTrain_CullMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainCar.SetCullState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TrainCar*, bool, ::GlobalNamespace::NetworkedTrain_CullMode)>(&::GlobalNamespace::TrainCar::SetCullState)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x180419ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {"SetCullState", {}, {::i2c::type_of<::GlobalNamespace::TrainCar*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NetworkedTrain_CullMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainCar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainCar::*)()>(&::GlobalNamespace::TrainCar::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TrainCar::__cordl_internal_get_useProxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProxy;
}
constexpr bool const& GlobalNamespace::TrainCar::__cordl_internal_get_useProxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProxy;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set_useProxy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useProxy = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::TrainCar::__cordl_internal_get_mainBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::TrainCar::__cordl_internal_get_mainBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainBody;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set_mainBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainBody = value;
}
constexpr ::UnityW<::GlobalNamespace::PlatformingBody>& GlobalNamespace::TrainCar::__cordl_internal_get_platformingBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformingBody;
}
constexpr ::UnityW<::GlobalNamespace::PlatformingBody> const& GlobalNamespace::TrainCar::__cordl_internal_get_platformingBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformingBody;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set_platformingBody(::UnityW<::GlobalNamespace::PlatformingBody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformingBody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TrainCar::__cordl_internal_get_proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TrainCar::__cordl_internal_get_proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proxy;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set_proxy(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proxy = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TrainCar::__cordl_internal_get_grip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grip;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TrainCar::__cordl_internal_get_grip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grip;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set_grip(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grip = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::TrainCar::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::TrainCar::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr float_t& GlobalNamespace::TrainCar::__cordl_internal_get_gap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gap;
}
constexpr float_t const& GlobalNamespace::TrainCar::__cordl_internal_get_gap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gap;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set_gap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gap = value;
}
constexpr bool& GlobalNamespace::TrainCar::__cordl_internal_get_cullState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullState;
}
constexpr bool const& GlobalNamespace::TrainCar::__cordl_internal_get_cullState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullState;
}
constexpr void GlobalNamespace::TrainCar::__cordl_internal_set_cullState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cullState = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* GlobalNamespace::TrainCar::get_colliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {"get_colliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(this, ___internal_method);
}
inline void GlobalNamespace::TrainCar::UpdateCullState(::GlobalNamespace::TrainCar*  trainCar, ::Unity::Mathematics::float3  position, ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  playerPositions, ::GlobalNamespace::NetworkedTrain_CullMode  cullMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {"UpdateCullState", {}, {::i2c::type_of<::GlobalNamespace::TrainCar*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::GlobalNamespace::NetworkedTrain_CullMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trainCar, position, playerPositions, cullMode);
}
inline void GlobalNamespace::TrainCar::SetCullState(::GlobalNamespace::TrainCar*  trainCar, bool  isCulled, ::GlobalNamespace::NetworkedTrain_CullMode  cullMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {"SetCullState", {}, {::i2c::type_of<::GlobalNamespace::TrainCar*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NetworkedTrain_CullMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trainCar, isCulled, cullMode);
}
inline void GlobalNamespace::TrainCar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainCar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrainCar* GlobalNamespace::TrainCar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrainCar*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrainCar::TrainCar()   {
}
