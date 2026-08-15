#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioListenerController.hpp"
#include "GlobalNamespace/zzzz__AudioPlayer_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AudioListenerController_def.hpp"
#include "GlobalNamespace/zzzz__AudioCullingJobScheduler_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__CustomCullingGroup_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.get_Listener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioListener> (::GlobalNamespace::AudioListenerController::*)()>(&::GlobalNamespace::AudioListenerController::get_Listener)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"get_Listener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioListenerController::*)()>(&::GlobalNamespace::AudioListenerController::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.get_RandomPointsCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::AudioListenerController::*)()>(&::GlobalNamespace::AudioListenerController::get_RandomPointsCenter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"get_RandomPointsCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.set_RandomPointsCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::AudioListenerController::set_RandomPointsCenter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"set_RandomPointsCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.add_OnMovingTooFast0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::AudioListenerController::add_OnMovingTooFast0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18047c6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"add_OnMovingTooFast0", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.remove_OnMovingTooFast0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::AudioListenerController::remove_OnMovingTooFast0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18047c8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"remove_OnMovingTooFast0", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.add_OnMovingTooFast1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::AudioListenerController::add_OnMovingTooFast1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18047c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"add_OnMovingTooFast1", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.remove_OnMovingTooFast1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::AudioListenerController::remove_OnMovingTooFast1)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18047c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"remove_OnMovingTooFast1", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.add_OnMovingTooFast2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::AudioListenerController::add_OnMovingTooFast2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18047c800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"add_OnMovingTooFast2", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.remove_OnMovingTooFast2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(&::GlobalNamespace::AudioListenerController::remove_OnMovingTooFast2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18047c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"remove_OnMovingTooFast2", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)()>(&::GlobalNamespace::AudioListenerController::OnDestroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18047c0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(bool, float_t, int32_t)>(&::GlobalNamespace::AudioListenerController::Initialize)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18047bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.UpdateListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)()>(&::GlobalNamespace::AudioListenerController::UpdateListener)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x18047c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"UpdateListener", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.RegisterStaticAudioPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::GlobalNamespace::AudioPlayer*)>(&::GlobalNamespace::AudioListenerController::RegisterStaticAudioPlayer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18047c130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"RegisterStaticAudioPlayer", {}, {::i2c::type_of<::GlobalNamespace::AudioPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.DeregisterStaticAudioPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(::GlobalNamespace::AudioPlayer*)>(&::GlobalNamespace::AudioListenerController::DeregisterStaticAudioPlayer)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18047bbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"DeregisterStaticAudioPlayer", {}, {::i2c::type_of<::GlobalNamespace::AudioPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController.EraseSwapBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)(int32_t)>(&::GlobalNamespace::AudioListenerController::EraseSwapBack)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18047bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"EraseSwapBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioListenerController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioListenerController::*)()>(&::GlobalNamespace::AudioListenerController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioListener>& GlobalNamespace::AudioListenerController::__cordl_internal_get__listener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listener;
}
constexpr ::UnityW<::UnityEngine::AudioListener> const& GlobalNamespace::AudioListenerController::__cordl_internal_get__listener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listener;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__listener(::UnityW<::UnityEngine::AudioListener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____listener = value;
}
constexpr bool& GlobalNamespace::AudioListenerController::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::AudioListenerController::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr bool& GlobalNamespace::AudioListenerController::__cordl_internal_get__followMainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followMainCamera;
}
constexpr bool const& GlobalNamespace::AudioListenerController::__cordl_internal_get__followMainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____followMainCamera;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__followMainCamera(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____followMainCamera = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AudioListenerController::__cordl_internal_get__lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AudioListenerController::__cordl_internal_get__lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPosition;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPosition = value;
}
constexpr float_t& GlobalNamespace::AudioListenerController::__cordl_internal_get__cullingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingDistance;
}
constexpr float_t const& GlobalNamespace::AudioListenerController::__cordl_internal_get__cullingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingDistance;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__cullingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cullingDistance = value;
}
constexpr ::GlobalNamespace::CustomCullingGroup*& GlobalNamespace::AudioListenerController::__cordl_internal_get__cullingGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingGroup;
}
constexpr ::GlobalNamespace::CustomCullingGroup* const& GlobalNamespace::AudioListenerController::__cordl_internal_get__cullingGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cullingGroup;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__cullingGroup(::GlobalNamespace::CustomCullingGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cullingGroup = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere>& GlobalNamespace::AudioListenerController::__cordl_internal_get__spheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& GlobalNamespace::AudioListenerController::__cordl_internal_get__spheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__spheres(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spheres = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>>& GlobalNamespace::AudioListenerController::__cordl_internal_get__audioPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioPlayers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>> const& GlobalNamespace::AudioListenerController::__cordl_internal_get__audioPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioPlayers;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__audioPlayers(::ArrayW<::UnityW<::GlobalNamespace::AudioPlayer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioPlayers = value;
}
constexpr int32_t& GlobalNamespace::AudioListenerController::__cordl_internal_get__audioPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioPlayerCount;
}
constexpr int32_t const& GlobalNamespace::AudioListenerController::__cordl_internal_get__audioPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioPlayerCount;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__audioPlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioPlayerCount = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::AudioListenerController::__cordl_internal_get__results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____results;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::AudioListenerController::__cordl_internal_get__results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____results;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__results(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____results = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler>& GlobalNamespace::AudioListenerController::__cordl_internal_get__jobScheduler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobScheduler;
}
constexpr ::UnityW<::GlobalNamespace::AudioCullingJobScheduler> const& GlobalNamespace::AudioListenerController::__cordl_internal_get__jobScheduler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobScheduler;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__jobScheduler(::UnityW<::GlobalNamespace::AudioCullingJobScheduler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jobScheduler = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AudioListenerController::__cordl_internal_get__RandomPointsCenter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsCenter_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AudioListenerController::__cordl_internal_get__RandomPointsCenter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RandomPointsCenter_k__BackingField;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set__RandomPointsCenter_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RandomPointsCenter_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>*& GlobalNamespace::AudioListenerController::__cordl_internal_get_OnMovingTooFast0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMovingTooFast0;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>* const& GlobalNamespace::AudioListenerController::__cordl_internal_get_OnMovingTooFast0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMovingTooFast0;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set_OnMovingTooFast0(::System::Action_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMovingTooFast0 = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>*& GlobalNamespace::AudioListenerController::__cordl_internal_get_OnMovingTooFast1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMovingTooFast1;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>* const& GlobalNamespace::AudioListenerController::__cordl_internal_get_OnMovingTooFast1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMovingTooFast1;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set_OnMovingTooFast1(::System::Action_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMovingTooFast1 = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>*& GlobalNamespace::AudioListenerController::__cordl_internal_get_OnMovingTooFast2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMovingTooFast2;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>* const& GlobalNamespace::AudioListenerController::__cordl_internal_get_OnMovingTooFast2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMovingTooFast2;
}
constexpr void GlobalNamespace::AudioListenerController::__cordl_internal_set_OnMovingTooFast2(::System::Action_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMovingTooFast2 = value;
}
inline ::UnityW<::UnityEngine::AudioListener> GlobalNamespace::AudioListenerController::get_Listener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"get_Listener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioListener>>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioListenerController::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::AudioListenerController::get_RandomPointsCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"get_RandomPointsCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::AudioListenerController::set_RandomPointsCenter(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"set_RandomPointsCenter", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioListenerController::add_OnMovingTooFast0(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"add_OnMovingTooFast0", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioListenerController::remove_OnMovingTooFast0(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"remove_OnMovingTooFast0", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioListenerController::add_OnMovingTooFast1(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"add_OnMovingTooFast1", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioListenerController::remove_OnMovingTooFast1(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"remove_OnMovingTooFast1", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioListenerController::add_OnMovingTooFast2(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"add_OnMovingTooFast2", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioListenerController::remove_OnMovingTooFast2(::System::Action_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"remove_OnMovingTooFast2", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioListenerController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioListenerController::Initialize(bool  followMainCamera, float_t  cullingDistance, int32_t  cullingSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"Initialize", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, followMainCamera, cullingDistance, cullingSize);
}
inline void GlobalNamespace::AudioListenerController::UpdateListener()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"UpdateListener", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioListenerController::RegisterStaticAudioPlayer(::GlobalNamespace::AudioPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"RegisterStaticAudioPlayer", {}, {::i2c::type_of<::GlobalNamespace::AudioPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::AudioListenerController::DeregisterStaticAudioPlayer(::GlobalNamespace::AudioPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"DeregisterStaticAudioPlayer", {}, {::i2c::type_of<::GlobalNamespace::AudioPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::AudioListenerController::EraseSwapBack(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {"EraseSwapBack", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::AudioListenerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioListenerController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioListenerController* GlobalNamespace::AudioListenerController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioListenerController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioListenerController::AudioListenerController()   {
}
