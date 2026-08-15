#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainAudio.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TrainAudio_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusion_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedTrain_def.hpp"
#include "GlobalNamespace/zzzz__StandaloneOcclusion_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrainAudio.get_StandaloneOcclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>* (::GlobalNamespace::TrainAudio::*)()>(&::GlobalNamespace::TrainAudio::get_StandaloneOcclusions)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"get_StandaloneOcclusions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainAudio.set_StandaloneOcclusions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainAudio::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*)>(&::GlobalNamespace::TrainAudio::set_StandaloneOcclusions)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"set_StandaloneOcclusions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainAudio.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainAudio::*)()>(&::GlobalNamespace::TrainAudio::Awake)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1803e0d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainAudio.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainAudio::*)()>(&::GlobalNamespace::TrainAudio::OnEnable)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1803e1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainAudio.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainAudio::*)()>(&::GlobalNamespace::TrainAudio::OnDisable)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1803e1160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrainAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrainAudio::*)()>(&::GlobalNamespace::TrainAudio::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1803e1700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& GlobalNamespace::TrainAudio::__cordl_internal_get_Train()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Train;
}
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& GlobalNamespace::TrainAudio::__cordl_internal_get_Train() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Train;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_Train(::UnityW<::GlobalNamespace::NetworkedTrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Train = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TrainAudio::__cordl_internal_get_Parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TrainAudio::__cordl_internal_get_Parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_Parent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parent = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::TrainAudio::__cordl_internal_get_PeckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeckSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::TrainAudio::__cordl_internal_get_PeckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeckSystem;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_PeckSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PeckSystem = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*& GlobalNamespace::TrainAudio::__cordl_internal_get_TrainLoops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainLoops;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get_TrainLoops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrainLoops;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_TrainLoops(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioAsset>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrainLoops = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TrainAudio::__cordl_internal_get_PlatformDisplayLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformDisplayLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TrainAudio::__cordl_internal_get_PlatformDisplayLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformDisplayLoop;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_PlatformDisplayLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlatformDisplayLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TrainAudio::__cordl_internal_get_CreakSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreakSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TrainAudio::__cordl_internal_get_CreakSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreakSound;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_CreakSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreakSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TrainAudio::__cordl_internal_get_CouplerLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CouplerLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TrainAudio::__cordl_internal_get_CouplerLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CouplerLoop;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_CouplerLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CouplerLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TrainAudio::__cordl_internal_get_TurnLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TrainAudio::__cordl_internal_get_TurnLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnLoop;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_TurnLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TurnLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::TrainAudio::__cordl_internal_get_WhooshSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhooshSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::TrainAudio::__cordl_internal_get_WhooshSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhooshSound;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set_WhooshSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhooshSound = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::TrainAudio::__cordl_internal_get__trainLoopPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trainLoopPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get__trainLoopPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trainLoopPlayers;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set__trainLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trainLoopPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::TrainAudio::__cordl_internal_get__platformDisplayPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformDisplayPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get__platformDisplayPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformDisplayPlayers;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set__platformDisplayPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____platformDisplayPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::TrainAudio::__cordl_internal_get__creakPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____creakPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get__creakPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____creakPlayers;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set__creakPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____creakPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::TrainAudio::__cordl_internal_get__couplerPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____couplerPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get__couplerPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____couplerPlayers;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set__couplerPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____couplerPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::TrainAudio::__cordl_internal_get__turnLoopPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turnLoopPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get__turnLoopPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turnLoopPlayers;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set__turnLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____turnLoopPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*& GlobalNamespace::TrainAudio::__cordl_internal_get__StandaloneOcclusions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StandaloneOcclusions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get__StandaloneOcclusions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StandaloneOcclusions_k__BackingField;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set__StandaloneOcclusions_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StandaloneOcclusions_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>*& GlobalNamespace::TrainAudio::__cordl_internal_get__occlusions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____occlusions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>* const& GlobalNamespace::TrainAudio::__cordl_internal_get__occlusions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____occlusions;
}
constexpr void GlobalNamespace::TrainAudio::__cordl_internal_set__occlusions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioOcclusion>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____occlusions = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>* GlobalNamespace::TrainAudio::get_StandaloneOcclusions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"get_StandaloneOcclusions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*>(this, ___internal_method);
}
inline void GlobalNamespace::TrainAudio::set_StandaloneOcclusions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"set_StandaloneOcclusions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::StandaloneOcclusion>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TrainAudio::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrainAudio::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrainAudio::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TrainAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrainAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TrainAudio* GlobalNamespace::TrainAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TrainAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrainAudio::TrainAudio()   {
}
