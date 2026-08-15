#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SphereWaterInteraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SphereWaterInteraction)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class SampleFlowHelper;
}
namespace WaveHarmonic::Crest {
class SphereWaterInteraction_Input;
}
namespace WaveHarmonic::Crest {
class SphereWaterInteraction_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class SphereWaterInteraction;
}
namespace WaveHarmonic::Crest {
class SphereWaterInteraction_Input;
}
namespace WaveHarmonic::Crest {
class SphereWaterInteraction_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::SphereWaterInteraction*);
MARK_REF_T(::WaveHarmonic::Crest::SphereWaterInteraction_Input*);
MARK_REF_T(::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SphereWaterInteraction*, "WaveHarmonic.Crest", "SphereWaterInteraction");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SphereWaterInteraction_Input*, "WaveHarmonic.Crest", "SphereWaterInteraction/Input");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs*, "WaveHarmonic.Crest", "SphereWaterInteraction/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SphereWaterInteraction/ShaderIDs
class CORDL_TYPE SphereWaterInteraction_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_InnerSphereMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InnerSphereMultiplier, put=setStaticF_s_InnerSphereMultiplier)) int32_t  s_InnerSphereMultiplier;

/// @brief Field s_InnerSphereOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InnerSphereOffset, put=setStaticF_s_InnerSphereOffset)) int32_t  s_InnerSphereOffset;

/// @brief Field s_LargeWaveMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LargeWaveMultiplier, put=setStaticF_s_LargeWaveMultiplier)) int32_t  s_LargeWaveMultiplier;

/// @brief Field s_Radius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Radius, put=setStaticF_s_Radius)) int32_t  s_Radius;

/// @brief Field s_Velocity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Velocity, put=setStaticF_s_Velocity)) int32_t  s_Velocity;

/// @brief Field s_Weight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Weight, put=setStaticF_s_Weight)) int32_t  s_Weight;

static inline int32_t getStaticF_s_InnerSphereMultiplier() ;

static inline int32_t getStaticF_s_InnerSphereOffset() ;

static inline int32_t getStaticF_s_LargeWaveMultiplier() ;

static inline int32_t getStaticF_s_Radius() ;

static inline int32_t getStaticF_s_Velocity() ;

static inline int32_t getStaticF_s_Weight() ;

static inline void setStaticF_s_InnerSphereMultiplier(int32_t  value) ;

static inline void setStaticF_s_InnerSphereOffset(int32_t  value) ;

static inline void setStaticF_s_LargeWaveMultiplier(int32_t  value) ;

static inline void setStaticF_s_Radius(int32_t  value) ;

static inline void setStaticF_s_Velocity(int32_t  value) ;

static inline void setStaticF_s_Weight(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereWaterInteraction_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereWaterInteraction_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereWaterInteraction_ShaderIDs(SphereWaterInteraction_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereWaterInteraction_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereWaterInteraction_ShaderIDs(SphereWaterInteraction_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16567};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SphereWaterInteraction/Input
class CORDL_TYPE SphereWaterInteraction_Input : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _Input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction>  _Input;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x182575a10, size 0x70, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::SphereWaterInteraction_Input* New_ctor(::WaveHarmonic::Crest::SphereWaterInteraction*  input) ;

constexpr ::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction>& __cordl_internal_get__Input() ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::SphereWaterInteraction*  input) ;

/// @brief Method get_Component, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_Enabled, addr 0x182575a80, size 0x20, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_IsCompute, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x182575aa0, size 0x110, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereWaterInteraction_Input() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereWaterInteraction_Input", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereWaterInteraction_Input(SphereWaterInteraction_Input && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereWaterInteraction_Input", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereWaterInteraction_Input(SphereWaterInteraction_Input const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16568};

/// @brief Field _Input, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::SphereWaterInteraction>  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction_Input, ____Input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SphereWaterInteraction_Input) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Vector3, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SphereWaterInteraction
class CORDL_TYPE SphereWaterInteraction : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using Input = ::WaveHarmonic::Crest::SphereWaterInteraction_Input;

using ShaderIDs = ::WaveHarmonic::Crest::SphereWaterInteraction_ShaderIDs;

 __declspec(property(get=get_BoostLargeWaves, put=set_BoostLargeWaves)) bool  BoostLargeWaves;

 __declspec(property(get=get_CompensateForWaveMotion, put=set_CompensateForWaveMotion)) float_t  CompensateForWaveMotion;

 __declspec(property(get=get_InnerSphereMultiplier, put=set_InnerSphereMultiplier)) float_t  InnerSphereMultiplier;

 __declspec(property(get=get_InnerSphereOffset, put=set_InnerSphereOffset)) float_t  InnerSphereOffset;

 __declspec(property(get=get_MaximumSpeed, put=set_MaximumSpeed)) float_t  MaximumSpeed;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_TeleportSpeed, put=set_TeleportSpeed)) float_t  TeleportSpeed;

 __declspec(property(get=get_VelocityOffset, put=set_VelocityOffset)) float_t  VelocityOffset;

 __declspec(property(get=get_WarnOnSpeedClamp, put=set_WarnOnSpeedClamp)) bool  WarnOnSpeedClamp;

 __declspec(property(get=get_WarnOnTeleport, put=set_WarnOnTeleport)) bool  WarnOnTeleport;

 __declspec(property(get=get_Weight, put=set_Weight)) float_t  Weight;

 __declspec(property(get=get_WeightVerticalMultiplier, put=set_WeightVerticalMultiplier)) float_t  WeightVerticalMultiplier;

/// @brief Field _BoostLargeWaves, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__BoostLargeWaves, put=__cordl_internal_set__BoostLargeWaves)) bool  _BoostLargeWaves;

/// @brief Field _CompensateForWaveMotion, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__CompensateForWaveMotion, put=__cordl_internal_set__CompensateForWaveMotion)) float_t  _CompensateForWaveMotion;

/// @brief Field _DebugSubsteps, offset 0x7d, size 0x1 
 __declspec(property(get=__cordl_internal_get__DebugSubsteps, put=__cordl_internal_set__DebugSubsteps)) bool  _DebugSubsteps;

/// @brief Field _Displacement, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get__Displacement, put=__cordl_internal_set__Displacement)) ::UnityEngine::Vector3  _Displacement;

/// @brief Field _InnerSphereMultiplier, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__InnerSphereMultiplier, put=__cordl_internal_set__InnerSphereMultiplier)) float_t  _InnerSphereMultiplier;

/// @brief Field _InnerSphereOffset, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__InnerSphereOffset, put=__cordl_internal_set__InnerSphereOffset)) float_t  _InnerSphereOffset;

/// @brief Field _Input, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::WaveHarmonic::Crest::SphereWaterInteraction_Input*  _Input;

/// @brief Field _MaximumSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumSpeed, put=__cordl_internal_set__MaximumSpeed)) float_t  _MaximumSpeed;

/// @brief Field _PreviousPosition, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get__PreviousPosition, put=__cordl_internal_set__PreviousPosition)) ::UnityEngine::Vector3  _PreviousPosition;

/// @brief Field _Radius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Radius, put=__cordl_internal_set__Radius)) float_t  _Radius;

/// @brief Field _RelativeVelocity, offset 0xa4, size 0xc 
 __declspec(property(get=__cordl_internal_get__RelativeVelocity, put=__cordl_internal_set__RelativeVelocity)) ::UnityEngine::Vector3  _RelativeVelocity;

/// @brief Field _SampleFlowHelper, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleFlowHelper, put=__cordl_internal_set__SampleFlowHelper)) ::WaveHarmonic::Crest::SampleFlowHelper*  _SampleFlowHelper;

/// @brief Field _SampleHeightHelper, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleHeightHelper, put=__cordl_internal_set__SampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleHeightHelper;

/// @brief Field _TeleportSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__TeleportSpeed, put=__cordl_internal_set__TeleportSpeed)) float_t  _TeleportSpeed;

/// @brief Field _Velocity, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get__Velocity, put=__cordl_internal_set__Velocity)) ::UnityEngine::Vector3  _Velocity;

/// @brief Field _VelocityClamped, offset 0x8c, size 0xc 
 __declspec(property(get=__cordl_internal_get__VelocityClamped, put=__cordl_internal_set__VelocityClamped)) ::UnityEngine::Vector3  _VelocityClamped;

/// @brief Field _VelocityOffset, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__VelocityOffset, put=__cordl_internal_set__VelocityOffset)) float_t  _VelocityOffset;

/// @brief Field _WarnOnSpeedClamp, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__WarnOnSpeedClamp, put=__cordl_internal_set__WarnOnSpeedClamp)) bool  _WarnOnSpeedClamp;

/// @brief Field _WarnOnTeleport, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get__WarnOnTeleport, put=__cordl_internal_set__WarnOnTeleport)) bool  _WarnOnTeleport;

/// @brief Field _Weight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

/// @brief Field _WeightThisFrame, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__WeightThisFrame, put=__cordl_internal_set__WeightThisFrame)) float_t  _WeightThisFrame;

/// @brief Field _WeightVerticalMultiplier, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__WeightVerticalMultiplier, put=__cordl_internal_set__WeightVerticalMultiplier)) float_t  _WeightVerticalMultiplier;

/// @brief Method Draw, addr 0x18257ed80, size 0x420, virtual false, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices) ;

/// @brief Method Initialize, addr 0x18257f1a0, size 0xd0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LateUpdateComputeVel, addr 0x18257f270, size 0x320, virtual false, abstract: false, final false
inline void LateUpdateComputeVel(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method LateUpdateSphereWeight, addr 0x18257f590, size 0xd0, virtual false, abstract: false, final false
inline void LateUpdateSphereWeight(float_t  waterHeight, ::by_ref<float_t>  weight) ;

static inline ::WaveHarmonic::Crest::SphereWaterInteraction* New_ctor() ;

/// @brief Method OnDisable, addr 0x18257f660, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnUpdate, addr 0x18257f6c0, size 0x390, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

constexpr bool const& __cordl_internal_get__BoostLargeWaves() const;

constexpr bool& __cordl_internal_get__BoostLargeWaves() ;

constexpr float_t const& __cordl_internal_get__CompensateForWaveMotion() const;

constexpr float_t& __cordl_internal_get__CompensateForWaveMotion() ;

constexpr bool const& __cordl_internal_get__DebugSubsteps() const;

constexpr bool& __cordl_internal_get__DebugSubsteps() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Displacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Displacement() ;

constexpr float_t const& __cordl_internal_get__InnerSphereMultiplier() const;

constexpr float_t& __cordl_internal_get__InnerSphereMultiplier() ;

constexpr float_t const& __cordl_internal_get__InnerSphereOffset() const;

constexpr float_t& __cordl_internal_get__InnerSphereOffset() ;

constexpr ::WaveHarmonic::Crest::SphereWaterInteraction_Input* const& __cordl_internal_get__Input() const;

constexpr ::WaveHarmonic::Crest::SphereWaterInteraction_Input*& __cordl_internal_get__Input() ;

constexpr float_t const& __cordl_internal_get__MaximumSpeed() const;

constexpr float_t& __cordl_internal_get__MaximumSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__PreviousPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__PreviousPosition() ;

constexpr float_t const& __cordl_internal_get__Radius() const;

constexpr float_t& __cordl_internal_get__Radius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__RelativeVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__RelativeVelocity() ;

constexpr ::WaveHarmonic::Crest::SampleFlowHelper* const& __cordl_internal_get__SampleFlowHelper() const;

constexpr ::WaveHarmonic::Crest::SampleFlowHelper*& __cordl_internal_get__SampleFlowHelper() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleHeightHelper() ;

constexpr float_t const& __cordl_internal_get__TeleportSpeed() const;

constexpr float_t& __cordl_internal_get__TeleportSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Velocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__VelocityClamped() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__VelocityClamped() ;

constexpr float_t const& __cordl_internal_get__VelocityOffset() const;

constexpr float_t& __cordl_internal_get__VelocityOffset() ;

constexpr bool const& __cordl_internal_get__WarnOnSpeedClamp() const;

constexpr bool& __cordl_internal_get__WarnOnSpeedClamp() ;

constexpr bool const& __cordl_internal_get__WarnOnTeleport() const;

constexpr bool& __cordl_internal_get__WarnOnTeleport() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr float_t const& __cordl_internal_get__WeightThisFrame() const;

constexpr float_t& __cordl_internal_get__WeightThisFrame() ;

constexpr float_t const& __cordl_internal_get__WeightVerticalMultiplier() const;

constexpr float_t& __cordl_internal_get__WeightVerticalMultiplier() ;

constexpr void __cordl_internal_set__BoostLargeWaves(bool  value) ;

constexpr void __cordl_internal_set__CompensateForWaveMotion(float_t  value) ;

constexpr void __cordl_internal_set__DebugSubsteps(bool  value) ;

constexpr void __cordl_internal_set__Displacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__InnerSphereMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__InnerSphereOffset(float_t  value) ;

constexpr void __cordl_internal_set__Input(::WaveHarmonic::Crest::SphereWaterInteraction_Input*  value) ;

constexpr void __cordl_internal_set__MaximumSpeed(float_t  value) ;

constexpr void __cordl_internal_set__PreviousPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Radius(float_t  value) ;

constexpr void __cordl_internal_set__RelativeVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__SampleFlowHelper(::WaveHarmonic::Crest::SampleFlowHelper*  value) ;

constexpr void __cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__TeleportSpeed(float_t  value) ;

constexpr void __cordl_internal_set__Velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__VelocityClamped(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__VelocityOffset(float_t  value) ;

constexpr void __cordl_internal_set__WarnOnSpeedClamp(bool  value) ;

constexpr void __cordl_internal_set__WarnOnTeleport(bool  value) ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

constexpr void __cordl_internal_set__WeightThisFrame(float_t  value) ;

constexpr void __cordl_internal_set__WeightVerticalMultiplier(float_t  value) ;

/// @brief Method .ctor, addr 0x18257fa50, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BoostLargeWaves, addr 0x180407540, size 0x10, virtual false, abstract: false, final false
inline bool get_BoostLargeWaves() ;

/// @brief Method get_CompensateForWaveMotion, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_CompensateForWaveMotion() ;

/// @brief Method get_ComputeShader, addr 0x18257fb70, size 0x70, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::ComputeShader> get_ComputeShader() ;

/// @brief Method get_InnerSphereMultiplier, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_InnerSphereMultiplier() ;

/// @brief Method get_InnerSphereOffset, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_InnerSphereOffset() ;

/// @brief Method get_MaximumSpeed, addr 0x180403860, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumSpeed() ;

/// @brief Method get_OnUpdateMethod, addr 0x18257fbe0, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

/// @brief Method get_Radius, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Rect, addr 0x18257fc20, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_TeleportSpeed, addr 0x1802e58b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TeleportSpeed() ;

/// @brief Method get_VelocityOffset, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_VelocityOffset() ;

/// @brief Method get_WarnOnSpeedClamp, addr 0x1813ece20, size 0x10, virtual false, abstract: false, final false
inline bool get_WarnOnSpeedClamp() ;

/// @brief Method get_WarnOnTeleport, addr 0x1802e5840, size 0x10, virtual false, abstract: false, final false
inline bool get_WarnOnTeleport() ;

/// @brief Method get_Weight, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_Weight() ;

/// @brief Method get_WeightVerticalMultiplier, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_WeightVerticalMultiplier() ;

/// @brief Method set_BoostLargeWaves, addr 0x18257fd20, size 0x10, virtual false, abstract: false, final false
inline void set_BoostLargeWaves(bool  value) ;

/// @brief Method set_CompensateForWaveMotion, addr 0x180474c80, size 0x10, virtual false, abstract: false, final false
inline void set_CompensateForWaveMotion(float_t  value) ;

/// @brief Method set_InnerSphereMultiplier, addr 0x18046fb50, size 0x10, virtual false, abstract: false, final false
inline void set_InnerSphereMultiplier(float_t  value) ;

/// @brief Method set_InnerSphereOffset, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_InnerSphereOffset(float_t  value) ;

/// @brief Method set_MaximumSpeed, addr 0x18230ec50, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumSpeed(float_t  value) ;

/// @brief Method set_Radius, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_TeleportSpeed, addr 0x180474c70, size 0x10, virtual false, abstract: false, final false
inline void set_TeleportSpeed(float_t  value) ;

/// @brief Method set_VelocityOffset, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_VelocityOffset(float_t  value) ;

/// @brief Method set_WarnOnSpeedClamp, addr 0x1813ec690, size 0x10, virtual false, abstract: false, final false
inline void set_WarnOnSpeedClamp(bool  value) ;

/// @brief Method set_WarnOnTeleport, addr 0x181fcacb0, size 0x10, virtual false, abstract: false, final false
inline void set_WarnOnTeleport(bool  value) ;

/// @brief Method set_Weight, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_Weight(float_t  value) ;

/// @brief Method set_WeightVerticalMultiplier, addr 0x18046fb40, size 0x10, virtual false, abstract: false, final false
inline void set_WeightVerticalMultiplier(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereWaterInteraction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereWaterInteraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereWaterInteraction(SphereWaterInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereWaterInteraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereWaterInteraction(SphereWaterInteraction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16569};

/// @brief Field _Radius, offset: 0x50, size: 0x4, def value: None
 float_t  ____Radius;

/// @brief Field _Weight, offset: 0x54, size: 0x4, def value: None
 float_t  ____Weight;

/// @brief Field _WeightVerticalMultiplier, offset: 0x58, size: 0x4, def value: None
 float_t  ____WeightVerticalMultiplier;

/// @brief Field _InnerSphereMultiplier, offset: 0x5c, size: 0x4, def value: None
 float_t  ____InnerSphereMultiplier;

/// @brief Field _InnerSphereOffset, offset: 0x60, size: 0x4, def value: None
 float_t  ____InnerSphereOffset;

/// @brief Field _VelocityOffset, offset: 0x64, size: 0x4, def value: None
 float_t  ____VelocityOffset;

/// @brief Field _CompensateForWaveMotion, offset: 0x68, size: 0x4, def value: None
 float_t  ____CompensateForWaveMotion;

/// @brief Field _BoostLargeWaves, offset: 0x6c, size: 0x1, def value: None
 bool  ____BoostLargeWaves;

/// @brief Field _TeleportSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ____TeleportSpeed;

/// @brief Field _WarnOnTeleport, offset: 0x74, size: 0x1, def value: None
 bool  ____WarnOnTeleport;

/// @brief Field _MaximumSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ____MaximumSpeed;

/// @brief Field _WarnOnSpeedClamp, offset: 0x7c, size: 0x1, def value: None
 bool  ____WarnOnSpeedClamp;

/// @brief Field _DebugSubsteps, offset: 0x7d, size: 0x1, def value: None
 bool  ____DebugSubsteps;

/// @brief Field _Velocity, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Velocity;

/// @brief Field _VelocityClamped, offset: 0x8c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____VelocityClamped;

/// @brief Field _PreviousPosition, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____PreviousPosition;

/// @brief Field _RelativeVelocity, offset: 0xa4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____RelativeVelocity;

/// @brief Field _Displacement, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Displacement;

/// @brief Field _WeightThisFrame, offset: 0xbc, size: 0x4, def value: None
 float_t  ____WeightThisFrame;

/// @brief Field _SampleHeightHelper, offset: 0xc0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleHeightHelper;

/// @brief Field _SampleFlowHelper, offset: 0xc8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleFlowHelper*  ____SampleFlowHelper;

/// @brief Field _Input, offset: 0xd0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SphereWaterInteraction_Input*  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____Radius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____Weight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____WeightVerticalMultiplier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____InnerSphereMultiplier) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____InnerSphereOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____VelocityOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____CompensateForWaveMotion) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____BoostLargeWaves) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____TeleportSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____WarnOnTeleport) == 0x74, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____MaximumSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____WarnOnSpeedClamp) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____DebugSubsteps) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____Velocity) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____VelocityClamped) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____PreviousPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____RelativeVelocity) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____Displacement) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____WeightThisFrame) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____SampleHeightHelper) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____SampleFlowHelper) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SphereWaterInteraction, ____Input) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SphereWaterInteraction) == 0xd8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
