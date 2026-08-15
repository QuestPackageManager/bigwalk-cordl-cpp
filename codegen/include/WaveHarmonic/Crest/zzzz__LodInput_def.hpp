#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputBlend_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LodInput)
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
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class IReportWaveDisplacement;
}
namespace WaveHarmonic::Crest {
class IReportsDisplacement;
}
namespace WaveHarmonic::Crest {
class IReportsHeight;
}
namespace WaveHarmonic::Crest {
struct LodInputBlend;
}
namespace WaveHarmonic::Crest {
class LodInputData;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
namespace WaveHarmonic::Crest {
class LodInput_Input;
}
namespace WaveHarmonic::Crest {
class LodInput_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class LodInput;
}
namespace WaveHarmonic::Crest {
class LodInput_Input;
}
namespace WaveHarmonic::Crest {
class LodInput_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LodInput*);
MARK_REF_T(::WaveHarmonic::Crest::LodInput_Input*);
MARK_REF_T(::WaveHarmonic::Crest::LodInput_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LodInput*, "WaveHarmonic.Crest", "LodInput");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LodInput_Input*, "WaveHarmonic.Crest", "LodInput/Input");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LodInput_ShaderIDs*, "WaveHarmonic.Crest", "LodInput/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LodInput/ShaderIDs
class CORDL_TYPE LodInput_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_BlendOperation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BlendOperation, put=setStaticF_s_BlendOperation)) int32_t  s_BlendOperation;

/// @brief Field s_BlendSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BlendSource, put=setStaticF_s_BlendSource)) int32_t  s_BlendSource;

/// @brief Field s_BlendTarget, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BlendTarget, put=setStaticF_s_BlendTarget)) int32_t  s_BlendTarget;

/// @brief Field s_DisplacementAtInputPosition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DisplacementAtInputPosition, put=setStaticF_s_DisplacementAtInputPosition)) int32_t  s_DisplacementAtInputPosition;

/// @brief Field s_Weight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Weight, put=setStaticF_s_Weight)) int32_t  s_Weight;

static inline int32_t getStaticF_s_BlendOperation() ;

static inline int32_t getStaticF_s_BlendSource() ;

static inline int32_t getStaticF_s_BlendTarget() ;

static inline int32_t getStaticF_s_DisplacementAtInputPosition() ;

static inline int32_t getStaticF_s_Weight() ;

static inline void setStaticF_s_BlendOperation(int32_t  value) ;

static inline void setStaticF_s_BlendSource(int32_t  value) ;

static inline void setStaticF_s_BlendTarget(int32_t  value) ;

static inline void setStaticF_s_DisplacementAtInputPosition(int32_t  value) ;

static inline void setStaticF_s_Weight(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LodInput_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LodInput_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LodInput_ShaderIDs(LodInput_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LodInput_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LodInput_ShaderIDs(LodInput_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16554};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::LodInput_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LodInput/Input
class CORDL_TYPE LodInput_Input : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_DisplacementReporter)) ::WaveHarmonic::Crest::IReportsDisplacement*  DisplacementReporter;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_HeightReporter)) ::WaveHarmonic::Crest::IReportsHeight*  HeightReporter;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_WaveDisplacementReporter)) ::WaveHarmonic::Crest::IReportWaveDisplacement*  WaveDisplacementReporter;

/// @brief Field _Input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::LodInput>  _Input;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x182559af0, size 0x80, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Filter, addr 0x182559b70, size 0x30, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::LodInput_Input* New_ctor(::WaveHarmonic::Crest::LodInput*  input) ;

constexpr ::UnityW<::WaveHarmonic::Crest::LodInput> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::LodInput>& __cordl_internal_get__Input() ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::LodInput>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::LodInput*  input) ;

/// @brief Method get_Component, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_DisplacementReporter, addr 0x182559ba0, size 0x20, virtual true, abstract: false, final true
inline ::WaveHarmonic::Crest::IReportsDisplacement* get_DisplacementReporter() ;

/// @brief Method get_Enabled, addr 0x182559c20, size 0x30, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_HeightReporter, addr 0x1817fe360, size 0x40, virtual true, abstract: false, final true
inline ::WaveHarmonic::Crest::IReportsHeight* get_HeightReporter() ;

/// @brief Method get_IsCompute, addr 0x182559c50, size 0x40, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x182559c90, size 0x30, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x182559cc0, size 0x20, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x182559ea0, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_WaveDisplacementReporter, addr 0x182559ee0, size 0x20, virtual true, abstract: false, final true
inline ::WaveHarmonic::Crest::IReportWaveDisplacement* get_WaveDisplacementReporter() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LodInput_Input() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LodInput_Input", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LodInput_Input(LodInput_Input && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LodInput_Input", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LodInput_Input(LodInput_Input const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16555};

/// @brief Field _Input, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::LodInput>  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LodInput_Input, ____Input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LodInput_Input) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Vector3, WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>, WaveHarmonic.Crest.LodInputBlend, WaveHarmonic.Crest.LodInputMode
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LodInput
class CORDL_TYPE LodInput : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using Input = ::WaveHarmonic::Crest::LodInput_Input;

using ShaderIDs = ::WaveHarmonic::Crest::LodInput_ShaderIDs;

 __declspec(property(get=get_Blend, put=set_Blend)) ::WaveHarmonic::Crest::LodInputBlend  Blend;

 __declspec(property(get=get_Data, put=set_Data)) ::WaveHarmonic::Crest::LodInputData*  Data;

 __declspec(property(get=get_DefaultMode)) ::WaveHarmonic::Crest::LodInputMode  DefaultMode;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_FeatherWidth, put=set_FeatherWidth)) float_t  FeatherWidth;

 __declspec(property(get=get_FollowHorizontalMotion)) bool  FollowHorizontalMotion;

 __declspec(property(get=get_FollowHorizontalWaveMotion, put=set_FollowHorizontalWaveMotion)) bool  FollowHorizontalWaveMotion;

 __declspec(property(get=get_ForceRenderingOff, put=set_ForceRenderingOff)) bool  ForceRenderingOff;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Mode)) ::WaveHarmonic::Crest::LodInputMode  Mode;

 __declspec(property(get=get_OnLateUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnLateUpdateMethod;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue, put=set_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

 __declspec(property(get=get_Weight, put=set_Weight)) float_t  Weight;

/// @brief Field _Blend, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Blend, put=__cordl_internal_set__Blend)) ::WaveHarmonic::Crest::LodInputBlend  _Blend;

/// @brief Field _Data, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::WaveHarmonic::Crest::LodInputData*  _Data;

/// @brief Field _Displacement, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get__Displacement, put=__cordl_internal_set__Displacement)) ::UnityEngine::Vector3  _Displacement;

/// @brief Field _DisplacementReporter, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisplacementReporter, put=__cordl_internal_set__DisplacementReporter)) ::WaveHarmonic::Crest::IReportsDisplacement*  _DisplacementReporter;

/// @brief Field _DrawBounds, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawBounds, put=__cordl_internal_set__DrawBounds)) bool  _DrawBounds;

/// @brief Field _FeatherWidth, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__FeatherWidth, put=__cordl_internal_set__FeatherWidth)) float_t  _FeatherWidth;

/// @brief Field _FollowHorizontalWaveMotion, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get__FollowHorizontalWaveMotion, put=__cordl_internal_set__FollowHorizontalWaveMotion)) bool  _FollowHorizontalWaveMotion;

/// @brief Field <ForceRenderingOff>k__BackingField, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceRenderingOff_k__BackingField, put=__cordl_internal_set__ForceRenderingOff_k__BackingField)) bool  _ForceRenderingOff_k__BackingField;

/// @brief Field _HeightReporter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__HeightReporter, put=__cordl_internal_set__HeightReporter)) ::WaveHarmonic::Crest::IReportsHeight*  _HeightReporter;

/// @brief Field _Input, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::WaveHarmonic::Crest::LodInput_Input*  _Input;

/// @brief Field _Mode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Mode, put=__cordl_internal_set__Mode)) ::WaveHarmonic::Crest::LodInputMode  _Mode;

/// @brief Field _Queue, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__Queue, put=__cordl_internal_set__Queue)) int32_t  _Queue;

/// @brief Field _RecalculateBounds, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__RecalculateBounds, put=__cordl_internal_set__RecalculateBounds)) bool  _RecalculateBounds;

/// @brief Field _SampleHeightHelper, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleHeightHelper, put=__cordl_internal_set__SampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SampleHeightHelper;

/// @brief Field _WaveDisplacementReporter, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaveDisplacementReporter, put=__cordl_internal_set__WaveDisplacementReporter)) ::WaveHarmonic::Crest::IReportWaveDisplacement*  _WaveDisplacementReporter;

/// @brief Field _Weight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

/// @brief Method Attach, addr 0x18255a7e0, size 0xc0, virtual true, abstract: false, final false
inline void Attach() ;

/// @brief Method Detach, addr 0x18255a8a0, size 0x40, virtual true, abstract: false, final false
inline void Detach() ;

/// @brief Method Draw, addr 0x18255a8e0, size 0x150, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final false
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

/// @brief Method GetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetData() ;

/// @brief Method InferBlend, addr 0x181c9c1b0, size 0x10, virtual true, abstract: false, final false
inline void InferBlend() ;

/// @brief Method Initialize, addr 0x18255aa30, size 0x50, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::LodInput* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18255aa80, size 0x40, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18255aac0, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnLateUpdate, addr 0x18255ab20, size 0x50, virtual true, abstract: false, final false
inline void OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method OnUpdate, addr 0x18255ab70, size 0xf0, virtual true, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SetBlendFromPreset, addr 0x18255ac60, size 0xe0, virtual false, abstract: false, final false
static inline void SetBlendFromPreset(::UnityEngine::Material*  material, ::WaveHarmonic::Crest::LodInputBlend  preset) ;

/// @brief Method SetQueue, addr 0x18255ad40, size 0x40, virtual false, abstract: false, final false
inline void SetQueue(int32_t  previous, int32_t  current) ;

constexpr ::WaveHarmonic::Crest::LodInputBlend const& __cordl_internal_get__Blend() const;

constexpr ::WaveHarmonic::Crest::LodInputBlend& __cordl_internal_get__Blend() ;

constexpr ::WaveHarmonic::Crest::LodInputData* const& __cordl_internal_get__Data() const;

constexpr ::WaveHarmonic::Crest::LodInputData*& __cordl_internal_get__Data() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Displacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Displacement() ;

constexpr ::WaveHarmonic::Crest::IReportsDisplacement* const& __cordl_internal_get__DisplacementReporter() const;

constexpr ::WaveHarmonic::Crest::IReportsDisplacement*& __cordl_internal_get__DisplacementReporter() ;

constexpr bool const& __cordl_internal_get__DrawBounds() const;

constexpr bool& __cordl_internal_get__DrawBounds() ;

constexpr float_t const& __cordl_internal_get__FeatherWidth() const;

constexpr float_t& __cordl_internal_get__FeatherWidth() ;

constexpr bool const& __cordl_internal_get__FollowHorizontalWaveMotion() const;

constexpr bool& __cordl_internal_get__FollowHorizontalWaveMotion() ;

constexpr bool const& __cordl_internal_get__ForceRenderingOff_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceRenderingOff_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::IReportsHeight* const& __cordl_internal_get__HeightReporter() const;

constexpr ::WaveHarmonic::Crest::IReportsHeight*& __cordl_internal_get__HeightReporter() ;

constexpr ::WaveHarmonic::Crest::LodInput_Input* const& __cordl_internal_get__Input() const;

constexpr ::WaveHarmonic::Crest::LodInput_Input*& __cordl_internal_get__Input() ;

constexpr ::WaveHarmonic::Crest::LodInputMode const& __cordl_internal_get__Mode() const;

constexpr ::WaveHarmonic::Crest::LodInputMode& __cordl_internal_get__Mode() ;

constexpr int32_t const& __cordl_internal_get__Queue() const;

constexpr int32_t& __cordl_internal_get__Queue() ;

constexpr bool const& __cordl_internal_get__RecalculateBounds() const;

constexpr bool& __cordl_internal_get__RecalculateBounds() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SampleHeightHelper() ;

constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement* const& __cordl_internal_get__WaveDisplacementReporter() const;

constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement*& __cordl_internal_get__WaveDisplacementReporter() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr void __cordl_internal_set__Blend(::WaveHarmonic::Crest::LodInputBlend  value) ;

constexpr void __cordl_internal_set__Data(::WaveHarmonic::Crest::LodInputData*  value) ;

constexpr void __cordl_internal_set__Displacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__DisplacementReporter(::WaveHarmonic::Crest::IReportsDisplacement*  value) ;

constexpr void __cordl_internal_set__DrawBounds(bool  value) ;

constexpr void __cordl_internal_set__FeatherWidth(float_t  value) ;

constexpr void __cordl_internal_set__FollowHorizontalWaveMotion(bool  value) ;

constexpr void __cordl_internal_set__ForceRenderingOff_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__HeightReporter(::WaveHarmonic::Crest::IReportsHeight*  value) ;

constexpr void __cordl_internal_set__Input(::WaveHarmonic::Crest::LodInput_Input*  value) ;

constexpr void __cordl_internal_set__Mode(::WaveHarmonic::Crest::LodInputMode  value) ;

constexpr void __cordl_internal_set__Queue(int32_t  value) ;

constexpr void __cordl_internal_set__RecalculateBounds(bool  value) ;

constexpr void __cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__WaveDisplacementReporter(::WaveHarmonic::Crest::IReportWaveDisplacement*  value) ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

/// @brief Method .ctor, addr 0x18254fcf0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Blend, addr 0x180503b40, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputBlend get_Blend() ;

/// @brief Method get_Data, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputData* get_Data() ;

/// @brief Method get_DefaultMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_DefaultMode() ;

/// @brief Method get_Enabled, addr 0x18255ad80, size 0x70, virtual true, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_FeatherWidth, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_FeatherWidth() ;

/// @brief Method get_FollowHorizontalMotion, addr 0x18255adf0, size 0x20, virtual true, abstract: false, final false
inline bool get_FollowHorizontalMotion() ;

/// @brief Method get_FollowHorizontalWaveMotion, addr 0x182152290, size 0x10, virtual false, abstract: false, final false
inline bool get_FollowHorizontalWaveMotion() ;

/// @brief Method get_ForceRenderingOff, addr 0x180352a90, size 0x10, virtual false, abstract: false, final false
inline bool get_ForceRenderingOff() ;

/// @brief Method get_GizmoColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_Inputs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_IsCompute, addr 0x18255ae10, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCompute() ;

/// @brief Method get_Mode, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_Mode() ;

/// @brief Method get_OnLateUpdateMethod, addr 0x18255ae30, size 0x50, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnLateUpdateMethod() ;

/// @brief Method get_OnUpdateMethod, addr 0x18255ae80, size 0x50, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

/// @brief Method get_Pass, addr 0x180393450, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x18255aed0, size 0x140, virtual true, abstract: false, final false
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Method get_Weight, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_Weight() ;

/// @brief Method set_Blend, addr 0x180503ba0, size 0x10, virtual false, abstract: false, final false
inline void set_Blend(::WaveHarmonic::Crest::LodInputBlend  value) ;

/// @brief Method set_Data, addr 0x1802e5a20, size 0x10, virtual false, abstract: false, final false
inline void set_Data(::WaveHarmonic::Crest::LodInputData*  value) ;

/// @brief Method set_FeatherWidth, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_FeatherWidth(float_t  value) ;

/// @brief Method set_FollowHorizontalWaveMotion, addr 0x1821522c0, size 0x10, virtual false, abstract: false, final false
inline void set_FollowHorizontalWaveMotion(bool  value) ;

/// @brief Method set_ForceRenderingOff, addr 0x180352b30, size 0x10, virtual false, abstract: false, final false
inline void set_ForceRenderingOff(bool  value) ;

/// @brief Method set_Queue, addr 0x18255b010, size 0x40, virtual false, abstract: false, final false
inline void set_Queue(int32_t  value) ;

/// @brief Method set_Weight, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_Weight(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LodInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LodInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LodInput(LodInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LodInput(LodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16556};

/// @brief Field k_DebugGroupOrder offset 0xffffffff size 0x4
static constexpr int32_t  k_DebugGroupOrder{static_cast<int32_t>(0xa)};

/// @brief Field _Mode, offset: 0x50, size: 0x4, def value: None
 ::WaveHarmonic::Crest::LodInputMode  ____Mode;

/// @brief Field _Weight, offset: 0x54, size: 0x4, def value: None
 float_t  ____Weight;

/// @brief Field _Queue, offset: 0x58, size: 0x4, def value: None
 int32_t  ____Queue;

/// @brief Field _Blend, offset: 0x5c, size: 0x4, def value: None
 ::WaveHarmonic::Crest::LodInputBlend  ____Blend;

/// @brief Field _FeatherWidth, offset: 0x60, size: 0x4, def value: None
 float_t  ____FeatherWidth;

/// @brief Field _FollowHorizontalWaveMotion, offset: 0x64, size: 0x1, def value: None
 bool  ____FollowHorizontalWaveMotion;

/// @brief Field _Data, offset: 0x68, size: 0x8, def value: None
 ::WaveHarmonic::Crest::LodInputData*  ____Data;

/// @brief Field _DrawBounds, offset: 0x70, size: 0x1, def value: None
 bool  ____DrawBounds;

/// @brief Field <ForceRenderingOff>k__BackingField, offset: 0x71, size: 0x1, def value: None
 bool  ____ForceRenderingOff_k__BackingField;

/// @brief Field _SampleHeightHelper, offset: 0x78, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SampleHeightHelper;

/// @brief Field _Displacement, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Displacement;

/// @brief Field _RecalculateBounds, offset: 0x8c, size: 0x1, def value: None
 bool  ____RecalculateBounds;

/// @brief Field _Input, offset: 0x90, size: 0x8, def value: None
 ::WaveHarmonic::Crest::LodInput_Input*  ____Input;

/// @brief Field _HeightReporter, offset: 0x98, size: 0x8, def value: None
 ::WaveHarmonic::Crest::IReportsHeight*  ____HeightReporter;

/// @brief Field _DisplacementReporter, offset: 0xa0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::IReportsDisplacement*  ____DisplacementReporter;

/// @brief Field _WaveDisplacementReporter, offset: 0xa8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::IReportWaveDisplacement*  ____WaveDisplacementReporter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____Mode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____Weight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____Queue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____Blend) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____FeatherWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____FollowHorizontalWaveMotion) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____Data) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____DrawBounds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____ForceRenderingOff_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____SampleHeightHelper) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____Displacement) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____RecalculateBounds) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____Input) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____HeightReporter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____DisplacementReporter) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LodInput, ____WaveDisplacementReporter) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LodInput) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
