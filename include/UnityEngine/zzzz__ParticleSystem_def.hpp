#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct ParticleSystemStopBehavior;
}
namespace UnityEngine {
struct ParticleSystem_EmissionModule;
}
namespace UnityEngine {
struct ParticleSystem_EmitParams;
}
namespace UnityEngine {
struct ParticleSystem_MainModule;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxCurveBlittable;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxCurve;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradientBlittable;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct ParticleSystem_EmissionModule;
}
namespace UnityEngine {
struct ParticleSystem_EmitParams;
}
namespace UnityEngine {
struct ParticleSystem_MainModule;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxCurve;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxCurveBlittable;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradient;
}
namespace UnityEngine {
struct ParticleSystem_MinMaxGradientBlittable;
}
namespace UnityEngine {
struct ParticleSystem_Particle;
}
// Write type traits
MARK_REF_T(::UnityEngine::ParticleSystem*);
MARK_VAL_T(::UnityEngine::ParticleSystem_EmissionModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_EmitParams);
MARK_VAL_T(::UnityEngine::ParticleSystem_MainModule);
MARK_VAL_T(::UnityEngine::ParticleSystem_MinMaxCurve);
MARK_VAL_T(::UnityEngine::ParticleSystem_MinMaxCurveBlittable);
MARK_VAL_T(::UnityEngine::ParticleSystem_MinMaxGradient);
MARK_VAL_T(::UnityEngine::ParticleSystem_MinMaxGradientBlittable);
MARK_VAL_T(::UnityEngine::ParticleSystem_Particle);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_MainModule, "UnityEngine", "ParticleSystem/MainModule");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_MinMaxCurveBlittable, "UnityEngine", "ParticleSystem/MinMaxCurveBlittable");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_MinMaxGradientBlittable, "UnityEngine", "ParticleSystem/MinMaxGradientBlittable");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystem_Particle, "UnityEngine", "ParticleSystem/Particle");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MainModule
struct CORDL_TYPE ParticleSystem_MainModule {
public:
// Declarations
 __declspec(property(get=get_maxParticles)) int32_t  maxParticles;

 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::ParticleSystem_MinMaxGradient  startColor;

 __declspec(property(get=get_startColorBlittable, put=set_startColorBlittable)) ::UnityEngine::ParticleSystem_MinMaxGradientBlittable  startColorBlittable;

/// @brief Method .ctor, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_maxParticles, addr 0x1822ee3d0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_maxParticles() ;

/// @brief Method get_startColor, addr 0x1822ee480, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_MinMaxGradient get_startColor() ;

/// @brief Method get_startColorBlittable, addr 0x1822ee400, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_MinMaxGradientBlittable get_startColorBlittable() ;

/// @brief Method get_startColorBlittable_Injected, addr 0x1822ee3f0, size 0x10, virtual false, abstract: false, final false
static inline void get_startColorBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_MainModule>  _unity_self, ::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>  ret) ;

/// @brief Method set_startColor, addr 0x1822ee610, size 0x150, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::ParticleSystem_MinMaxGradient  value) ;

/// @brief Method set_startColorBlittable, addr 0x1822ee5c0, size 0x50, virtual false, abstract: false, final false
inline void set_startColorBlittable(::UnityEngine::ParticleSystem_MinMaxGradientBlittable  value) ;

/// @brief Method set_startColorBlittable_Injected, addr 0x1822ee5b0, size 0x10, virtual false, abstract: false, final false
static inline void set_startColorBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_MainModule>  _unity_self, ::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MainModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
constexpr ParticleSystem_MainModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MainModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_MainModule) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/EmissionModule
struct CORDL_TYPE ParticleSystem_EmissionModule {
public:
// Declarations
 __declspec(property(get=get_rateOverTime, put=set_rateOverTime)) ::UnityEngine::ParticleSystem_MinMaxCurve  rateOverTime;

 __declspec(property(get=get_rateOverTimeBlittable, put=set_rateOverTimeBlittable)) ::UnityEngine::ParticleSystem_MinMaxCurveBlittable  rateOverTimeBlittable;

/// @brief Method .ctor, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ParticleSystem*  particleSystem) ;

/// @brief Method get_rateOverTime, addr 0x1822edf10, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverTime() ;

/// @brief Method get_rateOverTimeBlittable, addr 0x1822edeb0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_MinMaxCurveBlittable get_rateOverTimeBlittable() ;

/// @brief Method get_rateOverTimeBlittable_Injected, addr 0x1822edea0, size 0x10, virtual false, abstract: false, final false
static inline void get_rateOverTimeBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_EmissionModule>  _unity_self, ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>  ret) ;

/// @brief Method set_rateOverTime, addr 0x1822ee080, size 0x350, virtual false, abstract: false, final false
inline void set_rateOverTime(::UnityEngine::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_rateOverTimeBlittable, addr 0x1822ee040, size 0x40, virtual false, abstract: false, final false
inline void set_rateOverTimeBlittable(::UnityEngine::ParticleSystem_MinMaxCurveBlittable  value) ;

/// @brief Method set_rateOverTimeBlittable_Injected, addr 0x1822ee030, size 0x10, virtual false, abstract: false, final false
static inline void set_rateOverTimeBlittable_Injected(::by_ref<::UnityEngine::ParticleSystem_EmissionModule>  _unity_self, ::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_EmissionModule() ;

// Ctor Parameters [CppParam { name: "m_ParticleSystem", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None }]
constexpr ParticleSystem_EmissionModule(::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ParticleSystem, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  m_ParticleSystem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_EmissionModule, m_ParticleSystem) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_EmissionModule) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Color32, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/Particle
struct CORDL_TYPE ParticleSystem_Particle {
public:
// Declarations
 __declspec(property(put=set_angularVelocity3D)) ::UnityEngine::Vector3  angularVelocity3D;

 __declspec(property(put=set_lifetime)) float_t  lifetime;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(put=set_randomSeed)) uint32_t  randomSeed;

 __declspec(property(put=set_remainingLifetime)) float_t  remainingLifetime;

 __declspec(property(put=set_rotation3D)) ::UnityEngine::Vector3  rotation3D;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color32  startColor;

 __declspec(property(put=set_startLifetime)) float_t  startLifetime;

 __declspec(property(put=set_startSize)) float_t  startSize;

 __declspec(property(put=set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method get_position, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method set_angularVelocity3D, addr 0x1822ef470, size 0x80, virtual false, abstract: false, final false
inline void set_angularVelocity3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_lifetime, addr 0x180474c90, size 0x10, virtual false, abstract: false, final false
inline void set_lifetime(float_t  value) ;

/// @brief Method set_position, addr 0x1802d5400, size 0x10, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_randomSeed, addr 0x180de9f50, size 0xe0, virtual false, abstract: false, final false
inline void set_randomSeed(uint32_t  value) ;

/// @brief Method set_remainingLifetime, addr 0x180474c90, size 0x10, virtual false, abstract: false, final false
inline void set_remainingLifetime(float_t  value) ;

/// @brief Method set_rotation3D, addr 0x1822ef4f0, size 0x70, virtual false, abstract: false, final false
inline void set_rotation3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_startColor, addr 0x1804f67b0, size 0x10, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color32  value) ;

/// @brief Method set_startLifetime, addr 0x180474c70, size 0x10, virtual false, abstract: false, final false
inline void set_startLifetime(float_t  value) ;

/// @brief Method set_startSize, addr 0x1822ef560, size 0x2b0, virtual false, abstract: false, final false
inline void set_startSize(float_t  value) ;

/// @brief Method set_velocity, addr 0x1802d5410, size 0x10, virtual false, abstract: false, final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_Particle() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartSize", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ParticleSystem_Particle(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_AnimatedVelocity, ::UnityEngine::Vector3  m_InitialVelocity, ::UnityEngine::Vector3  m_AxisOfRotation, ::UnityEngine::Vector3  m_Rotation, ::UnityEngine::Vector3  m_AngularVelocity, ::UnityEngine::Vector3  m_StartSize, ::UnityEngine::Color32  m_StartColor, uint32_t  m_RandomSeed, uint32_t  m_ParentRandomSeed, float_t  m_Lifetime, float_t  m_StartLifetime, int32_t  m_MeshIndex, float_t  m_EmitAccumulator0, float_t  m_EmitAccumulator1, uint32_t  m_Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

/// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Velocity, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_AnimatedVelocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AnimatedVelocity;

/// @brief Field m_InitialVelocity, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_InitialVelocity;

/// @brief Field m_AxisOfRotation, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AxisOfRotation;

/// @brief Field m_Rotation, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Rotation;

/// @brief Field m_AngularVelocity, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AngularVelocity;

/// @brief Field m_StartSize, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_StartSize;

/// @brief Field m_StartColor, offset: 0x60, size: 0x4, def value: None
 ::UnityEngine::Color32  m_StartColor;

/// @brief Field m_RandomSeed, offset: 0x64, size: 0x4, def value: None
 uint32_t  m_RandomSeed;

/// @brief Field m_ParentRandomSeed, offset: 0x68, size: 0x4, def value: None
 uint32_t  m_ParentRandomSeed;

/// @brief Field m_Lifetime, offset: 0x6c, size: 0x4, def value: None
 float_t  m_Lifetime;

/// @brief Field m_StartLifetime, offset: 0x70, size: 0x4, def value: None
 float_t  m_StartLifetime;

/// @brief Field m_MeshIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  m_MeshIndex;

/// @brief Field m_EmitAccumulator0, offset: 0x78, size: 0x4, def value: None
 float_t  m_EmitAccumulator0;

/// @brief Field m_EmitAccumulator1, offset: 0x7c, size: 0x4, def value: None
 float_t  m_EmitAccumulator1;

/// @brief Field m_Flags, offset: 0x80, size: 0x4, def value: None
 uint32_t  m_Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Velocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AnimatedVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_InitialVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AxisOfRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_AngularVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_RandomSeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_ParentRandomSeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Lifetime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_StartLifetime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_MeshIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_EmitAccumulator0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_EmitAccumulator1) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_Particle, m_Flags) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_Particle) == 0x84, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.ParticleSystemCurveMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxCurve
struct CORDL_TYPE ParticleSystem_MinMaxCurve {
public:
// Declarations
 __declspec(property(get=get_constantMax, put=set_constantMax)) float_t  constantMax;

/// @brief Method get_constantMax, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_constantMax() ;

/// @brief Method set_constantMax, addr 0x1802f80f0, size 0x10, virtual false, abstract: false, final false
inline void set_constantMax(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxCurve() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CurveMin", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value: None }]
constexpr ParticleSystem_MinMaxCurve(::UnityEngine::ParticleSystemCurveMode  m_Mode, float_t  m_CurveMultiplier, ::UnityEngine::AnimationCurve*  m_CurveMin, ::UnityEngine::AnimationCurve*  m_CurveMax, float_t  m_ConstantMin, float_t  m_ConstantMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemCurveMode  m_Mode;

/// @brief Field m_CurveMultiplier, offset: 0x4, size: 0x4, def value: None
 float_t  m_CurveMultiplier;

/// @brief Field m_CurveMin, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  m_CurveMin;

/// @brief Field m_CurveMax, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  m_CurveMax;

/// @brief Field m_ConstantMin, offset: 0x18, size: 0x4, def value: None
 float_t  m_ConstantMin;

/// @brief Field m_ConstantMax, offset: 0x1c, size: 0x4, def value: None
 float_t  m_ConstantMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_CurveMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_CurveMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_CurveMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_ConstantMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurve, m_ConstantMax) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_MinMaxCurve) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, UnityEngine.ParticleSystemCurveMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxCurveBlittable
struct CORDL_TYPE ParticleSystem_MinMaxCurveBlittable {
public:
// Declarations
/// @brief Method FromMixMaxCurve, addr 0x1822ee760, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxCurveBlittable FromMixMaxCurve(::by_ref<::UnityEngine::ParticleSystem_MinMaxCurve>  minMaxCurve) ;

/// @brief Method ToMinMaxCurve, addr 0x1822ee7f0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxCurve ToMinMaxCurve(::by_ref<::UnityEngine::ParticleSystem_MinMaxCurveBlittable>  minMaxCurveBlittable) ;

/// @brief Method op_Implicit, addr 0x1822ee8c0, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxCurve op_Implicit___UnityEngine__ParticleSystem_MinMaxCurve(::UnityEngine::ParticleSystem_MinMaxCurveBlittable  minMaxCurveBlittable) ;

/// @brief Method op_Implicit, addr 0x1822ee760, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxCurveBlittable op_Implicit___UnityEngine__ParticleSystem_MinMaxCurveBlittable(::UnityEngine::ParticleSystem_MinMaxCurve  minMaxCurve) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxCurveBlittable() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemCurveMode", modifiers: "", def_value: None }, CppParam { name: "m_CurveMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_CurveMin", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_CurveMax", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ConstantMax", ty: "float_t", modifiers: "", def_value: None }]
constexpr ParticleSystem_MinMaxCurveBlittable(::UnityEngine::ParticleSystemCurveMode  m_Mode, float_t  m_CurveMultiplier, ::System::IntPtr  m_CurveMin, ::System::IntPtr  m_CurveMax, float_t  m_ConstantMin, float_t  m_ConstantMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21145};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemCurveMode  m_Mode;

/// @brief Field m_CurveMultiplier, offset: 0x4, size: 0x4, def value: None
 float_t  m_CurveMultiplier;

/// @brief Field m_CurveMin, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_CurveMin;

/// @brief Field m_CurveMax, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_CurveMax;

/// @brief Field m_ConstantMin, offset: 0x18, size: 0x4, def value: None
 float_t  m_ConstantMin;

/// @brief Field m_ConstantMax, offset: 0x1c, size: 0x4, def value: None
 float_t  m_ConstantMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurveBlittable, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurveBlittable, m_CurveMultiplier) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurveBlittable, m_CurveMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurveBlittable, m_CurveMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurveBlittable, m_ConstantMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxCurveBlittable, m_ConstantMax) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_MinMaxCurveBlittable) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Color, UnityEngine.ParticleSystemGradientMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxGradient
struct CORDL_TYPE ParticleSystem_MinMaxGradient {
public:
// Declarations
 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

/// @brief Method .ctor, addr 0x1822eecb0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  color) ;

/// @brief Method get_color, addr 0x180a26490, size 0x12a0, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method op_Implicit, addr 0x1822eed30, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient(::UnityEngine::Color  color) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxGradient() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystemGradientMode  m_Mode, ::UnityEngine::Gradient*  m_GradientMin, ::UnityEngine::Gradient*  m_GradientMax, ::UnityEngine::Color  m_ColorMin, ::UnityEngine::Color  m_ColorMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21146};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemGradientMode  m_Mode;

/// @brief Field m_GradientMin, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Gradient*  m_GradientMin;

/// @brief Field m_GradientMax, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Gradient*  m_GradientMax;

/// @brief Field m_ColorMin, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMin;

/// @brief Field m_ColorMax, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_GradientMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_GradientMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_ColorMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradient, m_ColorMax) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_MinMaxGradient) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, UnityEngine.Color, UnityEngine.ParticleSystemGradientMode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/MinMaxGradientBlittable
struct CORDL_TYPE ParticleSystem_MinMaxGradientBlittable {
public:
// Declarations
/// @brief Method FromMixMaxGradient, addr 0x1822eeaa0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxGradientBlittable FromMixMaxGradient(::by_ref<::UnityEngine::ParticleSystem_MinMaxGradient>  minMaxGradient) ;

/// @brief Method ToMinMaxGradient, addr 0x1822eeb20, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxGradient ToMinMaxGradient(::by_ref<::UnityEngine::ParticleSystem_MinMaxGradientBlittable>  minMaxGradientBlittable) ;

/// @brief Method op_Implicit, addr 0x1822eebf0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxGradient op_Implicit___UnityEngine__ParticleSystem_MinMaxGradient(::UnityEngine::ParticleSystem_MinMaxGradientBlittable  minMaxGradientBlittable) ;

/// @brief Method op_Implicit, addr 0x1822eeaa0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::ParticleSystem_MinMaxGradientBlittable op_Implicit___UnityEngine__ParticleSystem_MinMaxGradientBlittable(::UnityEngine::ParticleSystem_MinMaxGradient  minMaxGradient) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_MinMaxGradientBlittable() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::ParticleSystemGradientMode", modifiers: "", def_value: None }, CppParam { name: "m_GradientMin", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_GradientMax", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ColorMin", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_ColorMax", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr ParticleSystem_MinMaxGradientBlittable(::UnityEngine::ParticleSystemGradientMode  m_Mode, ::System::IntPtr  m_GradientMin, ::System::IntPtr  m_GradientMax, ::UnityEngine::Color  m_ColorMin, ::UnityEngine::Color  m_ColorMax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21147};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::ParticleSystemGradientMode  m_Mode;

/// @brief Field m_GradientMin, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_GradientMin;

/// @brief Field m_GradientMax, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_GradientMax;

/// @brief Field m_ColorMin, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMin;

/// @brief Field m_ColorMax, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  m_ColorMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradientBlittable, m_Mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradientBlittable, m_GradientMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradientBlittable, m_GradientMax) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradientBlittable, m_ColorMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_MinMaxGradientBlittable, m_ColorMax) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_MinMaxGradientBlittable) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.ParticleSystem::Particle
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/EmitParams
struct CORDL_TYPE ParticleSystem_EmitParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_EmitParams() ;

// Ctor Parameters [CppParam { name: "m_Particle", ty: "::UnityEngine::ParticleSystem_Particle", modifiers: "", def_value: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None }]
constexpr ParticleSystem_EmitParams(::UnityEngine::ParticleSystem_Particle  m_Particle, bool  m_PositionSet, bool  m_VelocitySet, bool  m_AxisOfRotationSet, bool  m_RotationSet, bool  m_AngularVelocitySet, bool  m_StartSizeSet, bool  m_StartColorSet, bool  m_RandomSeedSet, bool  m_StartLifetimeSet, bool  m_MeshIndexSet, bool  m_ApplyShapeToPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field m_Particle, offset: 0x0, size: 0x84, def value: None
 ::UnityEngine::ParticleSystem_Particle  m_Particle;

/// @brief Field m_PositionSet, offset: 0x84, size: 0x1, def value: None
 bool  m_PositionSet;

/// @brief Field m_VelocitySet, offset: 0x85, size: 0x1, def value: None
 bool  m_VelocitySet;

/// @brief Field m_AxisOfRotationSet, offset: 0x86, size: 0x1, def value: None
 bool  m_AxisOfRotationSet;

/// @brief Field m_RotationSet, offset: 0x87, size: 0x1, def value: None
 bool  m_RotationSet;

/// @brief Field m_AngularVelocitySet, offset: 0x88, size: 0x1, def value: None
 bool  m_AngularVelocitySet;

/// @brief Field m_StartSizeSet, offset: 0x89, size: 0x1, def value: None
 bool  m_StartSizeSet;

/// @brief Field m_StartColorSet, offset: 0x8a, size: 0x1, def value: None
 bool  m_StartColorSet;

/// @brief Field m_RandomSeedSet, offset: 0x8b, size: 0x1, def value: None
 bool  m_RandomSeedSet;

/// @brief Field m_StartLifetimeSet, offset: 0x8c, size: 0x1, def value: None
 bool  m_StartLifetimeSet;

/// @brief Field m_MeshIndexSet, offset: 0x8d, size: 0x1, def value: None
 bool  m_MeshIndexSet;

/// @brief Field m_ApplyShapeToPosition, offset: 0x8e, size: 0x1, def value: None
 bool  m_ApplyShapeToPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_Particle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_PositionSet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_VelocitySet) == 0x85, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_AxisOfRotationSet) == 0x86, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_RotationSet) == 0x87, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_AngularVelocitySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartSizeSet) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartColorSet) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_RandomSeedSet) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_StartLifetimeSet) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_MeshIndexSet) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystem_EmitParams, m_ApplyShapeToPosition) == 0x8e, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystem_EmitParams) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystem
class CORDL_TYPE ParticleSystem : public ::UnityEngine::Component {
public:
// Declarations
using EmissionModule = ::UnityEngine::ParticleSystem_EmissionModule;

using EmitParams = ::UnityEngine::ParticleSystem_EmitParams;

using MainModule = ::UnityEngine::ParticleSystem_MainModule;

using MinMaxCurve = ::UnityEngine::ParticleSystem_MinMaxCurve;

using MinMaxCurveBlittable = ::UnityEngine::ParticleSystem_MinMaxCurveBlittable;

using MinMaxGradient = ::UnityEngine::ParticleSystem_MinMaxGradient;

using MinMaxGradientBlittable = ::UnityEngine::ParticleSystem_MinMaxGradientBlittable;

using Particle = ::UnityEngine::ParticleSystem_Particle;

 __declspec(property(get=get_emission)) ::UnityEngine::ParticleSystem_EmissionModule  emission;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_main)) ::UnityEngine::ParticleSystem_MainModule  main;

 __declspec(property(get=get_particleCount)) int32_t  particleCount;

/// @brief Method Clear, addr 0x1822eef60, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clear, addr 0x1822eef30, size 0x30, virtual false, abstract: false, final false
inline void Clear(bool  withChildren) ;

/// @brief Method Clear_Injected, addr 0x1822eef20, size 0x10, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self, bool  withChildren) ;

/// @brief Method Emit, addr 0x1822eeff0, size 0x30, virtual false, abstract: false, final false
inline void Emit(int32_t  count) ;

/// @brief Method Emit, addr 0x1822ef120, size 0x40, virtual false, abstract: false, final false
inline void Emit(::UnityEngine::ParticleSystem_EmitParams  emitParams, int32_t  count) ;

/// @brief Method Emit, addr 0x1822ef0f0, size 0x30, virtual false, abstract: false, final false
inline void Emit(::UnityEngine::ParticleSystem_Particle  particle) ;

/// @brief Method Emit, addr 0x1822ef020, size 0xd0, virtual false, abstract: false, final false
inline void Emit(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, float_t  size, float_t  lifetime, ::UnityEngine::Color32  color) ;

/// @brief Method EmitOld_Internal, addr 0x1822eefa0, size 0x30, virtual false, abstract: false, final false
inline void EmitOld_Internal(::by_ref<::UnityEngine::ParticleSystem_Particle>  particle) ;

/// @brief Method EmitOld_Internal_Injected, addr 0x1822eef90, size 0x10, virtual false, abstract: false, final false
static inline void EmitOld_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::ParticleSystem_Particle>  particle) ;

/// @brief Method Emit_Injected, addr 0x1822eefd0, size 0x10, virtual false, abstract: false, final false
static inline void Emit_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::ParticleSystem_EmitParams>  emitParams, int32_t  count) ;

/// @brief Method Emit_Internal, addr 0x1822eeff0, size 0x30, virtual false, abstract: false, final false
inline void Emit_Internal(int32_t  count) ;

/// @brief Method Emit_Internal_Injected, addr 0x1822eefe0, size 0x10, virtual false, abstract: false, final false
static inline void Emit_Internal_Injected(::System::IntPtr  _unity_self, int32_t  count) ;

/// @brief Method GetParticles, addr 0x1822ef170, size 0x20, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>  particles) ;

/// @brief Method GetParticles, addr 0x1822ef290, size 0x20, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>  particles, int32_t  size) ;

/// @brief Method GetParticles, addr 0x1822ef190, size 0x100, virtual false, abstract: false, final false
inline int32_t GetParticles(::by_ref<::ArrayW<::UnityEngine::ParticleSystem_Particle>>  particles, int32_t  size, int32_t  offset) ;

/// @brief Method GetParticles_Injected, addr 0x1822ef160, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetParticles_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  particles, int32_t  size, int32_t  offset) ;

static inline ::UnityEngine::ParticleSystem* New_ctor() ;

/// @brief Method Play, addr 0x1822ef2f0, size 0x30, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x1822ef2c0, size 0x30, virtual false, abstract: false, final false
inline void Play(bool  withChildren) ;

/// @brief Method Play_Injected, addr 0x1822ef2b0, size 0x10, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self, bool  withChildren) ;

/// @brief Method Stop, addr 0x1822ef330, size 0x40, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop, addr 0x1822ef370, size 0x40, virtual false, abstract: false, final false
inline void Stop(bool  withChildren) ;

/// @brief Method Stop, addr 0x1822ef3b0, size 0x40, virtual false, abstract: false, final false
inline void Stop(bool  withChildren, ::UnityEngine::ParticleSystemStopBehavior  stopBehavior) ;

/// @brief Method Stop_Injected, addr 0x1822ef320, size 0x10, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self, bool  withChildren, ::UnityEngine::ParticleSystemStopBehavior  stopBehavior) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_emission, addr 0x180e3aed0, size 0x3780, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_EmissionModule get_emission() ;

/// @brief Method get_isPlaying, addr 0x1822ef400, size 0x30, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPlaying_Injected, addr 0x1822ef3f0, size 0x10, virtual false, abstract: false, final false
static inline bool get_isPlaying_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_main, addr 0x180e3aed0, size 0x3780, virtual false, abstract: false, final false
inline ::UnityEngine::ParticleSystem_MainModule get_main() ;

/// @brief Method get_particleCount, addr 0x1822ef440, size 0x30, virtual false, abstract: false, final false
inline int32_t get_particleCount() ;

/// @brief Method get_particleCount_Injected, addr 0x1822ef430, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_particleCount_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystem(ParticleSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystem(ParticleSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21149};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticleSystem) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
