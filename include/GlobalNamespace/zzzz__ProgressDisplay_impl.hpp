#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressDisplay_def.hpp"
#include "GlobalNamespace/zzzz__DotMatrixSharedData_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__ProgressDisplay_def.hpp"
#include "GlobalNamespace/zzzz__ProgressTracker_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState::ProgressDisplay_ProgressBarState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState::ProgressDisplay_ProgressBarState()   {
}
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState  GlobalNamespace::ProgressDisplay_ProgressBarState::Standard{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState  GlobalNamespace::ProgressDisplay_ProgressBarState::Failure{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState  GlobalNamespace::ProgressDisplay_ProgressBarState::Increment{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState  GlobalNamespace::ProgressDisplay_ProgressBarState::Victory{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.SetMaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)(float_t, ::GlobalNamespace::ProgressDisplay_ProgressBarState)>(&::GlobalNamespace::ProgressDisplay::SetMaterialProperties)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180411150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetMaterialProperties", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ProgressDisplay_ProgressBarState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)()>(&::GlobalNamespace::ProgressDisplay::Awake)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180410870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.DoTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)(float_t, ::GlobalNamespace::ProgressDisplay_ProgressBarState)>(&::GlobalNamespace::ProgressDisplay::DoTransition)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180410ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"DoTransition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ProgressDisplay_ProgressBarState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)()>(&::GlobalNamespace::ProgressDisplay::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180410de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)()>(&::GlobalNamespace::ProgressDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180411140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressDisplay::*)()>(&::GlobalNamespace::ProgressDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DotMatrixSharedData>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_sharedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedData;
}
constexpr ::UnityW<::GlobalNamespace::DotMatrixSharedData> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_sharedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedData;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_sharedData(::UnityW<::GlobalNamespace::DotMatrixSharedData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedData = value;
}
constexpr ::UnityW<::GlobalNamespace::ProgressTracker>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_progressTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressTracker;
}
constexpr ::UnityW<::GlobalNamespace::ProgressTracker> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_progressTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressTracker;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_progressTracker(::UnityW<::GlobalNamespace::ProgressTracker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressTracker = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr int32_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_submeshIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIndex;
}
constexpr int32_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_submeshIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submeshIndex;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_submeshIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submeshIndex = value;
}
constexpr int32_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_gridSizeX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeX;
}
constexpr int32_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_gridSizeX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeX;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_gridSizeX(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridSizeX = value;
}
constexpr int32_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_gridSizeY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeY;
}
constexpr int32_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_gridSizeY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridSizeY;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_gridSizeY(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridSizeY = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ProgressDisplay::__cordl_internal_get_audioPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_audioPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioPosition;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_audioPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioPosition = value;
}
constexpr bool& GlobalNamespace::ProgressDisplay::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ProgressDisplay::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ProgressDisplay::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
constexpr float_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_dampedProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedProgress;
}
constexpr float_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_dampedProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedProgress;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_dampedProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampedProgress = value;
}
constexpr float_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_dampedProgressVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedProgressVel;
}
constexpr float_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_dampedProgressVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedProgressVel;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_dampedProgressVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampedProgressVel = value;
}
constexpr float_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_aimProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimProgress;
}
constexpr float_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_aimProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aimProgress;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_aimProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aimProgress = value;
}
constexpr float_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_dampedProgressAtChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedProgressAtChange;
}
constexpr float_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_dampedProgressAtChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedProgressAtChange;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_dampedProgressAtChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampedProgressAtChange = value;
}
constexpr float_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_timeAtChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtChange;
}
constexpr float_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_timeAtChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtChange;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_timeAtChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtChange = value;
}
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState& GlobalNamespace::ProgressDisplay::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::ProgressDisplay_ProgressBarState const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_currentState(::GlobalNamespace::ProgressDisplay_ProgressBarState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr int32_t& GlobalNamespace::ProgressDisplay::__cordl_internal_get_incrementCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementCount;
}
constexpr int32_t const& GlobalNamespace::ProgressDisplay::__cordl_internal_get_incrementCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incrementCount;
}
constexpr void GlobalNamespace::ProgressDisplay::__cordl_internal_set_incrementCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incrementCount = value;
}
inline void GlobalNamespace::ProgressDisplay::SetMaterialProperties(float_t  normalizedValue, ::GlobalNamespace::ProgressDisplay_ProgressBarState  progressBarColors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"SetMaterialProperties", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ProgressDisplay_ProgressBarState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normalizedValue, progressBarColors);
}
inline void GlobalNamespace::ProgressDisplay::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressDisplay::DoTransition(float_t  newNormalizedValue, ::GlobalNamespace::ProgressDisplay_ProgressBarState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"DoTransition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ProgressDisplay_ProgressBarState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newNormalizedValue, newState);
}
inline void GlobalNamespace::ProgressDisplay::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressDisplay* GlobalNamespace::ProgressDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressDisplay*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::ProgressDisplay::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::ProgressDisplay::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressDisplay::ProgressDisplay()   {
}
