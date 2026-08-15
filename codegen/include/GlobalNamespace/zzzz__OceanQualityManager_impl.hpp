#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanQualityManager.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OceanQualityManager_def.hpp"
#include "GlobalNamespace/zzzz__OceanQualityManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ShapeGerstner_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
// Ctor Parameters [CppParam { name: "lodLevels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minLodScale", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "simplifyWater", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "waveResolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableReadbacks", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "beachSplines", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OceanQualityManager_OceanQualitySetting::OceanQualityManager_OceanQualitySetting(int32_t  lodLevels, int32_t  minLodScale, bool  simplifyWater, int32_t  waveResolution, bool  enableReadbacks, bool  beachSplines) noexcept  {
this->lodLevels = lodLevels;
this->minLodScale = minLodScale;
this->simplifyWater = simplifyWater;
this->waveResolution = waveResolution;
this->enableReadbacks = enableReadbacks;
this->beachSplines = beachSplines;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OceanQualityManager_OceanQualitySetting::OceanQualityManager_OceanQualitySetting()   {
}
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::*)()>(&::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18042d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OceanQualityManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "simplifyWater", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "waveResolution", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableReadbacks", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodLevels", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minLodScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::OceanQualityManager__DelayedLodChange_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::OceanQualityManager>  __4__this, bool  simplifyWater, int32_t  waveResolution, bool  enableReadbacks, int32_t  lodLevels, float_t  minLodScale, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->simplifyWater = simplifyWater;
this->waveResolution = waveResolution;
this->enableReadbacks = enableReadbacks;
this->lodLevels = lodLevels;
this->minLodScale = minLodScale;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OceanQualityManager__DelayedLodChange_d__8::OceanQualityManager__DelayedLodChange_d__8()   {
}
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager::*)()>(&::GlobalNamespace::OceanQualityManager::Start)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1804275a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager.ApplyQualityEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager::*)(int32_t)>(&::GlobalNamespace::OceanQualityManager::ApplyQualityEffects)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180427130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager.DelayedLodChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager::*)(int32_t, float_t, bool, bool, int32_t)>(&::GlobalNamespace::OceanQualityManager::DelayedLodChange)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804272e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"DelayedLodChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager::*)()>(&::GlobalNamespace::OceanQualityManager::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804274b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager::*)()>(&::GlobalNamespace::OceanQualityManager::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804273c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanQualityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanQualityManager::*)()>(&::GlobalNamespace::OceanQualityManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting>& GlobalNamespace::OceanQualityManager::__cordl_internal_get_qualitySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qualitySettings;
}
constexpr ::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting> const& GlobalNamespace::OceanQualityManager::__cordl_internal_get_qualitySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qualitySettings;
}
constexpr void GlobalNamespace::OceanQualityManager::__cordl_internal_set_qualitySettings(::ArrayW<::GlobalNamespace::OceanQualityManager_OceanQualitySetting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qualitySettings = value;
}
constexpr ::GlobalNamespace::OceanQualityManager_OceanQualitySetting& GlobalNamespace::OceanQualityManager::__cordl_internal_get__currentSetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSetting;
}
constexpr ::GlobalNamespace::OceanQualityManager_OceanQualitySetting const& GlobalNamespace::OceanQualityManager::__cordl_internal_get__currentSetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSetting;
}
constexpr void GlobalNamespace::OceanQualityManager::__cordl_internal_set__currentSetting(::GlobalNamespace::OceanQualityManager_OceanQualitySetting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSetting = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OceanQualityManager::__cordl_internal_get_beachSplineTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachSplineTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OceanQualityManager::__cordl_internal_get_beachSplineTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachSplineTransform;
}
constexpr void GlobalNamespace::OceanQualityManager::__cordl_internal_set_beachSplineTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beachSplineTransform = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::ShapeGerstner>& GlobalNamespace::OceanQualityManager::__cordl_internal_get_waveSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveSettings;
}
constexpr ::UnityW<::WaveHarmonic::Crest::ShapeGerstner> const& GlobalNamespace::OceanQualityManager::__cordl_internal_get_waveSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveSettings;
}
constexpr void GlobalNamespace::OceanQualityManager::__cordl_internal_set_waveSettings(::UnityW<::WaveHarmonic::Crest::ShapeGerstner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waveSettings = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& GlobalNamespace::OceanQualityManager::__cordl_internal_get_waterRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterRenderer;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& GlobalNamespace::OceanQualityManager::__cordl_internal_get_waterRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterRenderer;
}
constexpr void GlobalNamespace::OceanQualityManager::__cordl_internal_set_waterRenderer(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterRenderer = value;
}
inline void GlobalNamespace::OceanQualityManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanQualityManager::ApplyQualityEffects(int32_t  qualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"ApplyQualityEffects", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityLevel);
}
inline void GlobalNamespace::OceanQualityManager::DelayedLodChange(int32_t  lodLevels, float_t  minLodScale, bool  simplifyWater, bool  enableReadbacks, int32_t  waveResolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"DelayedLodChange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodLevels, minLodScale, simplifyWater, enableReadbacks, waveResolution);
}
inline void GlobalNamespace::OceanQualityManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanQualityManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanQualityManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanQualityManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OceanQualityManager* GlobalNamespace::OceanQualityManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OceanQualityManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OceanQualityManager::OceanQualityManager()   {
}
