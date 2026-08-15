#pragma once
// IWYU pragma private; include "GlobalNamespace/FmRadioManager.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FmRadioManager_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__MusicGroup_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FmRadioManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::FmRadioManager> (*)()>(&::GlobalNamespace::FmRadioManager::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803fcb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioManager.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioManager::*)()>(&::GlobalNamespace::FmRadioManager::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1803fc790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioManager::*)()>(&::GlobalNamespace::FmRadioManager::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803fc700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioManager.GetUnlockState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<bool>, ::by_ref<float_t>)>(&::GlobalNamespace::FmRadioManager::GetUnlockState)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1803fc590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"GetUnlockState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioManager.GetIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::MusicGroup*)>(&::GlobalNamespace::FmRadioManager::GetIndex)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803fc4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"GetIndex", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioManager.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MusicGroup*)>(&::GlobalNamespace::FmRadioManager::Unlock)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1803fc8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"Unlock", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FmRadioManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FmRadioManager::*)()>(&::GlobalNamespace::FmRadioManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>& GlobalNamespace::FmRadioManager::__cordl_internal_get_stationTrackGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationTrackGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>> const& GlobalNamespace::FmRadioManager::__cordl_internal_get_stationTrackGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stationTrackGroups;
}
constexpr void GlobalNamespace::FmRadioManager::__cordl_internal_set_stationTrackGroups(::ArrayW<::UnityW<::GlobalNamespace::MusicGroup>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stationTrackGroups = value;
}
constexpr ::ArrayW<bool>& GlobalNamespace::FmRadioManager::__cordl_internal_get__stationStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stationStates;
}
constexpr ::ArrayW<bool> const& GlobalNamespace::FmRadioManager::__cordl_internal_get__stationStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stationStates;
}
constexpr void GlobalNamespace::FmRadioManager::__cordl_internal_set__stationStates(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stationStates = value;
}
constexpr ::ArrayW<double_t>& GlobalNamespace::FmRadioManager::__cordl_internal_get__stationUnlockTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stationUnlockTimes;
}
constexpr ::ArrayW<double_t> const& GlobalNamespace::FmRadioManager::__cordl_internal_get__stationUnlockTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stationUnlockTimes;
}
constexpr void GlobalNamespace::FmRadioManager::__cordl_internal_set__stationUnlockTimes(::ArrayW<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stationUnlockTimes = value;
}
constexpr bool& GlobalNamespace::FmRadioManager::__cordl_internal_get__initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr bool const& GlobalNamespace::FmRadioManager::__cordl_internal_get__initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialized;
}
constexpr void GlobalNamespace::FmRadioManager::__cordl_internal_set__initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialized = value;
}
constexpr float_t& GlobalNamespace::FmRadioManager::__cordl_internal_get_transitionDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionDuration;
}
constexpr float_t const& GlobalNamespace::FmRadioManager::__cordl_internal_get_transitionDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionDuration;
}
constexpr void GlobalNamespace::FmRadioManager::__cordl_internal_set_transitionDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transitionDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FmRadioManager::__cordl_internal_get_emissionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FmRadioManager::__cordl_internal_get_emissionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionCurve;
}
constexpr void GlobalNamespace::FmRadioManager::__cordl_internal_set_emissionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionCurve = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::FmRadioManager::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::FmRadioManager::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::FmRadioManager::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
inline void GlobalNamespace::FmRadioManager::setStaticF_onChange(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onChange", ::GlobalNamespace::FmRadioManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::FmRadioManager::getStaticF_onChange()  {
return ::cordl_internals::getStaticField<::System::Action*, "onChange", ::GlobalNamespace::FmRadioManager*>();
}
inline void GlobalNamespace::FmRadioManager::setStaticF_onUnlock(::System::Action_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<int32_t>*, "onUnlock", ::GlobalNamespace::FmRadioManager*>(std::forward<::System::Action_1<int32_t>*>(value));
}
inline ::System::Action_1<int32_t>* GlobalNamespace::FmRadioManager::getStaticF_onUnlock()  {
return ::cordl_internals::getStaticField<::System::Action_1<int32_t>*, "onUnlock", ::GlobalNamespace::FmRadioManager*>();
}
inline ::UnityW<::GlobalNamespace::FmRadioManager> GlobalNamespace::FmRadioManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FmRadioManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FmRadioManager::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FmRadioManager::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FmRadioManager::GetUnlockState(int32_t  stationIndex, ::by_ref<bool>  isTransitioning, ::by_ref<float_t>  transitionTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"GetUnlockState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stationIndex, isTransitioning, transitionTime);
}
inline int32_t GlobalNamespace::FmRadioManager::GetIndex(::GlobalNamespace::MusicGroup*  musicGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"GetIndex", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, musicGroup);
}
inline void GlobalNamespace::FmRadioManager::Unlock(::GlobalNamespace::MusicGroup*  musicGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {"Unlock", {}, {::i2c::type_of<::GlobalNamespace::MusicGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, musicGroup);
}
inline void GlobalNamespace::FmRadioManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FmRadioManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FmRadioManager* GlobalNamespace::FmRadioManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FmRadioManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::FmRadioManager::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::FmRadioManager::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FmRadioManager::FmRadioManager()   {
}
