#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroWeatherModule)
namespace Enviro {
class EnviroWeatherModule__InstantTransition_d__18;
}
namespace Enviro {
class EnviroWeatherType;
}
namespace Enviro {
class EnviroWeather;
}
namespace Enviro {
class EnviroZone;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Enviro {
class EnviroWeatherModule;
}
namespace Enviro {
class EnviroWeatherModule__InstantTransition_d__18;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherModule*);
MARK_REF_T(::Enviro::EnviroWeatherModule__InstantTransition_d__18*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherModule*, "Enviro", "EnviroWeatherModule");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherModule__InstantTransition_d__18*, "Enviro", "EnviroWeatherModule/<InstantTransition>d__18");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherModule/<InstantTransition>d__18
class CORDL_TYPE EnviroWeatherModule__InstantTransition_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Enviro::EnviroWeatherModule>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18062abf0, size 0x60, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Enviro::EnviroWeatherModule__InstantTransition_d__18* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Enviro::EnviroWeatherModule> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Enviro::EnviroWeatherModule>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Enviro::EnviroWeatherModule>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherModule__InstantTransition_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherModule__InstantTransition_d__18", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherModule__InstantTransition_d__18(EnviroWeatherModule__InstantTransition_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherModule__InstantTransition_d__18", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherModule__InstantTransition_d__18(EnviroWeatherModule__InstantTransition_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18507};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherModule>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherModule__InstantTransition_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule__InstantTransition_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule__InstantTransition_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherModule__InstantTransition_d__18) == 0x28, "Size mismatch!");

} // namespace end def Enviro
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherModule
class CORDL_TYPE EnviroWeatherModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
using _InstantTransition_d__18 = ::Enviro::EnviroWeatherModule__InstantTransition_d__18;

/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroWeather*  Settings;

/// @brief Field globalAutoWeatherChange, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_globalAutoWeatherChange, put=__cordl_internal_set_globalAutoWeatherChange)) bool  globalAutoWeatherChange;

/// @brief Field instantTransition, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get_instantTransition, put=__cordl_internal_set_instantTransition)) bool  instantTransition;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroWeatherModule>  preset;

/// @brief Field showTransitionControls, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_showTransitionControls, put=__cordl_internal_set_showTransitionControls)) bool  showTransitionControls;

/// @brief Field showWeatherPresetsControls, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_showWeatherPresetsControls, put=__cordl_internal_set_showWeatherPresetsControls)) bool  showWeatherPresetsControls;

/// @brief Field showZoneControls, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_showZoneControls, put=__cordl_internal_set_showZoneControls)) bool  showZoneControls;

/// @brief Field targetWeatherType, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetWeatherType, put=__cordl_internal_set_targetWeatherType)) ::UnityW<::Enviro::EnviroWeatherType>  targetWeatherType;

/// @brief Field triggerCollider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerCollider, put=__cordl_internal_set_triggerCollider)) ::UnityW<::UnityEngine::BoxCollider>  triggerCollider;

/// @brief Field triggerRB, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerRB, put=__cordl_internal_set_triggerRB)) ::UnityW<::UnityEngine::Rigidbody>  triggerRB;

/// @brief Field weatherBlendProgress, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_weatherBlendProgress, put=__cordl_internal_set_weatherBlendProgress)) float_t  weatherBlendProgress;

/// @brief Method BlendAudioOverride, addr 0x180625e70, size 0x4b0, virtual false, abstract: false, final false
inline void BlendAudioOverride(float_t  blendTime) ;

/// @brief Method BlendAuroraOverride, addr 0x180626320, size 0xb0, virtual false, abstract: false, final false
inline void BlendAuroraOverride(float_t  blendTime) ;

/// @brief Method BlendEffectsOverride, addr 0x1806263d0, size 0x2b0, virtual false, abstract: false, final false
inline void BlendEffectsOverride(float_t  blendTime) ;

/// @brief Method BlendEnvironmentOverride, addr 0x180626680, size 0x2d0, virtual false, abstract: false, final false
inline void BlendEnvironmentOverride(float_t  blendTime) ;

/// @brief Method BlendFlatCloudsOverride, addr 0x180626950, size 0x310, virtual false, abstract: false, final false
inline void BlendFlatCloudsOverride(float_t  blendTime) ;

/// @brief Method BlendFogOverride, addr 0x180626c60, size 0x5b0, virtual false, abstract: false, final false
inline void BlendFogOverride(float_t  blendTime) ;

/// @brief Method BlendLightingOverride, addr 0x180627210, size 0x170, virtual false, abstract: false, final false
inline void BlendLightingOverride(float_t  blendTime) ;

/// @brief Method BlendLightningOverride, addr 0x180627380, size 0xe0, virtual false, abstract: false, final false
inline void BlendLightningOverride(float_t  blendTime) ;

/// @brief Method BlendSkyOverride, addr 0x180627460, size 0x1e0, virtual false, abstract: false, final false
inline void BlendSkyOverride(float_t  blendTime) ;

/// @brief Method BlendVolumetricCloudsOverride, addr 0x180627640, size 0xab0, virtual false, abstract: false, final false
inline void BlendVolumetricCloudsOverride(float_t  blendTime, float_t  blendTime2) ;

/// @brief Method ChangeWeather, addr 0x180628900, size 0x1c0, virtual false, abstract: false, final false
inline void ChangeWeather(int32_t  index) ;

/// @brief Method ChangeWeather, addr 0x180628810, size 0xf0, virtual false, abstract: false, final false
inline void ChangeWeather(::Enviro::EnviroWeatherType*  type) ;

/// @brief Method ChangeWeather, addr 0x1806285d0, size 0x240, virtual false, abstract: false, final false
inline void ChangeWeather(::StringW  typeName) ;

/// @brief Method ChangeWeatherInstant, addr 0x1806280f0, size 0x1c0, virtual false, abstract: false, final false
inline void ChangeWeatherInstant(int32_t  index) ;

/// @brief Method ChangeWeatherInstant, addr 0x1806284e0, size 0xf0, virtual false, abstract: false, final false
inline void ChangeWeatherInstant(::Enviro::EnviroWeatherType*  type) ;

/// @brief Method ChangeWeatherInstant, addr 0x1806282b0, size 0x230, virtual false, abstract: false, final false
inline void ChangeWeatherInstant(::StringW  typeName) ;

/// @brief Method ChangeZoneWeather, addr 0x180628ac0, size 0x150, virtual false, abstract: false, final false
inline void ChangeZoneWeather(int32_t  weather, int32_t  zone) ;

/// @brief Method Cleanup, addr 0x180628cb0, size 0x50, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method CleanupList, addr 0x180628c10, size 0xa0, virtual false, abstract: false, final false
inline void CleanupList() ;

/// @brief Method CreateNewWeatherType, addr 0x180628d00, size 0x90, virtual false, abstract: false, final false
inline void CreateNewWeatherType() ;

/// @brief Method Disable, addr 0x180628d90, size 0x70, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x180628e00, size 0xf0, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method InstantTransition, addr 0x180628ef0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* InstantTransition() ;

/// @brief Method LoadModuleValues, addr 0x180628f40, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroWeatherModule* New_ctor() ;

/// @brief Method RegisterZone, addr 0x180628fb0, size 0x80, virtual false, abstract: false, final false
inline void RegisterZone(::Enviro::EnviroZone*  zone) ;

/// @brief Method RemoveWeatherType, addr 0x180629030, size 0x30, virtual false, abstract: false, final false
inline void RemoveWeatherType(::Enviro::EnviroWeatherType*  type) ;

/// @brief Method RemoveZone, addr 0x180629060, size 0x70, virtual false, abstract: false, final false
inline void RemoveZone(::Enviro::EnviroZone*  zone) ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x1806290d0, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroWeatherModule*  _cordl_module) ;

/// @brief Method Setup, addr 0x180629120, size 0x1e0, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateModule, addr 0x180629300, size 0x360, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateWeatherBlendProgress, addr 0x180629660, size 0x60, virtual false, abstract: false, final false
inline void UpdateWeatherBlendProgress(float_t  blendTime) ;

constexpr ::Enviro::EnviroWeather* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroWeather*& __cordl_internal_get_Settings() ;

constexpr bool const& __cordl_internal_get_globalAutoWeatherChange() const;

constexpr bool& __cordl_internal_get_globalAutoWeatherChange() ;

constexpr bool const& __cordl_internal_get_instantTransition() const;

constexpr bool& __cordl_internal_get_instantTransition() ;

constexpr ::UnityW<::Enviro::EnviroWeatherModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroWeatherModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showTransitionControls() const;

constexpr bool& __cordl_internal_get_showTransitionControls() ;

constexpr bool const& __cordl_internal_get_showWeatherPresetsControls() const;

constexpr bool& __cordl_internal_get_showWeatherPresetsControls() ;

constexpr bool const& __cordl_internal_get_showZoneControls() const;

constexpr bool& __cordl_internal_get_showZoneControls() ;

constexpr ::UnityW<::Enviro::EnviroWeatherType> const& __cordl_internal_get_targetWeatherType() const;

constexpr ::UnityW<::Enviro::EnviroWeatherType>& __cordl_internal_get_targetWeatherType() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_triggerCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_triggerCollider() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_triggerRB() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_triggerRB() ;

constexpr float_t const& __cordl_internal_get_weatherBlendProgress() const;

constexpr float_t& __cordl_internal_get_weatherBlendProgress() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroWeather*  value) ;

constexpr void __cordl_internal_set_globalAutoWeatherChange(bool  value) ;

constexpr void __cordl_internal_set_instantTransition(bool  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroWeatherModule>  value) ;

constexpr void __cordl_internal_set_showTransitionControls(bool  value) ;

constexpr void __cordl_internal_set_showWeatherPresetsControls(bool  value) ;

constexpr void __cordl_internal_set_showZoneControls(bool  value) ;

constexpr void __cordl_internal_set_targetWeatherType(::UnityW<::Enviro::EnviroWeatherType>  value) ;

constexpr void __cordl_internal_set_triggerCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_triggerRB(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_weatherBlendProgress(float_t  value) ;

/// @brief Method .ctor, addr 0x1806296c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherModule(EnviroWeatherModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherModule(EnviroWeatherModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18508};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroWeather*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherModule>  ___preset;

/// @brief Field targetWeatherType, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherType>  ___targetWeatherType;

/// @brief Field weatherBlendProgress, offset: 0x38, size: 0x4, def value: None
 float_t  ___weatherBlendProgress;

/// @brief Field globalAutoWeatherChange, offset: 0x3c, size: 0x1, def value: None
 bool  ___globalAutoWeatherChange;

/// @brief Field triggerCollider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___triggerCollider;

/// @brief Field triggerRB, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___triggerRB;

/// @brief Field showWeatherPresetsControls, offset: 0x50, size: 0x1, def value: None
 bool  ___showWeatherPresetsControls;

/// @brief Field showTransitionControls, offset: 0x51, size: 0x1, def value: None
 bool  ___showTransitionControls;

/// @brief Field showZoneControls, offset: 0x52, size: 0x1, def value: None
 bool  ___showZoneControls;

/// @brief Field instantTransition, offset: 0x53, size: 0x1, def value: None
 bool  ___instantTransition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___targetWeatherType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___weatherBlendProgress) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___globalAutoWeatherChange) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___triggerCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___triggerRB) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___showWeatherPresetsControls) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___showTransitionControls) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___showZoneControls) == 0x52, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherModule, ___instantTransition) == 0x53, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherModule) == 0x58, "Size mismatch!");

} // namespace end def Enviro
