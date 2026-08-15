#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Lod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Cascade_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodTextureFormatMode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Lod)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Enum;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Utility {
template<typename T>
class BufferedData_1;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
struct Cascade;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class IQueryable;
}
namespace WaveHarmonic::Crest {
struct LodTextureFormatMode;
}
namespace WaveHarmonic::Crest {
class Lod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class Lod___c;
}
namespace WaveHarmonic::Crest {
class Lod___c__DisplayClass75_0;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class Lod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class Lod___c;
}
namespace WaveHarmonic::Crest {
class Lod___c__DisplayClass75_0;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Lod*);
MARK_REF_T(::WaveHarmonic::Crest::Lod_ShaderIDs*);
MARK_REF_T(::WaveHarmonic::Crest::Lod___c*);
MARK_REF_T(::WaveHarmonic::Crest::Lod___c__DisplayClass75_0*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Lod*, "WaveHarmonic.Crest", "Lod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Lod_ShaderIDs*, "WaveHarmonic.Crest", "Lod/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Lod___c*, "WaveHarmonic.Crest", "Lod/<>c");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Lod___c__DisplayClass75_0*, "WaveHarmonic.Crest", "Lod/<>c__DisplayClass75_0");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Lod/ShaderIDs
class CORDL_TYPE Lod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_LodChange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LodChange, put=setStaticF_s_LodChange)) int32_t  s_LodChange;

/// @brief Field s_LodIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LodIndex, put=setStaticF_s_LodIndex)) int32_t  s_LodIndex;

/// @brief Field s_TemporaryBlurLodTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TemporaryBlurLodTexture, put=setStaticF_s_TemporaryBlurLodTexture)) int32_t  s_TemporaryBlurLodTexture;

static inline int32_t getStaticF_s_LodChange() ;

static inline int32_t getStaticF_s_LodIndex() ;

static inline int32_t getStaticF_s_TemporaryBlurLodTexture() ;

static inline void setStaticF_s_LodChange(int32_t  value) ;

static inline void setStaticF_s_LodIndex(int32_t  value) ;

static inline void setStaticF_s_TemporaryBlurLodTexture(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lod_ShaderIDs(Lod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lod_ShaderIDs(Lod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Lod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Lod/<>c
class CORDL_TYPE Lod___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WaveHarmonic::Crest::Lod___c*  __9;

/// @brief Field <>9__84_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_0, put=setStaticF___9__84_0)) ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  __9__84_0;

/// @brief Field <>9__84_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_1, put=setStaticF___9__84_1)) ::System::Action_1<::ArrayW<::UnityEngine::Vector4>>*  __9__84_1;

/// @brief Field <>9__97_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__97_0, put=setStaticF___9__97_0)) ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  __9__97_0;

static inline ::WaveHarmonic::Crest::Lod___c* New_ctor() ;

/// @brief Method <LoadCameraData>b__97_0, addr 0x182580460, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> _LoadCameraData_b__97_0() ;

/// @brief Method <SetGlobals>b__84_0, addr 0x182580460, size 0x20, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> _SetGlobals_b__84_0() ;

/// @brief Method <SetGlobals>b__84_1, addr 0x182580480, size 0x30, virtual false, abstract: false, final false
inline void _SetGlobals_b__84_1(::ArrayW<::UnityEngine::Vector4>  x) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::WaveHarmonic::Crest::Lod___c* getStaticF___9() ;

static inline ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>* getStaticF___9__84_0() ;

static inline ::System::Action_1<::ArrayW<::UnityEngine::Vector4>>* getStaticF___9__84_1() ;

static inline ::System::Func_1<::ArrayW<::UnityEngine::Vector4>>* getStaticF___9__97_0() ;

static inline void setStaticF___9(::WaveHarmonic::Crest::Lod___c*  value) ;

static inline void setStaticF___9__84_0(::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

static inline void setStaticF___9__84_1(::System::Action_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

static inline void setStaticF___9__97_0(::System::Func_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lod___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lod___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lod___c(Lod___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lod___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lod___c(Lod___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16580};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Lod___c) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Vector3
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Lod/<>c__DisplayClass75_0
class CORDL_TYPE Lod___c__DisplayClass75_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::WaveHarmonic::Crest::Lod*  __4__this;

/// @brief Field newOrigin, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_newOrigin, put=__cordl_internal_set_newOrigin)) ::UnityEngine::Vector3  newOrigin;

static inline ::WaveHarmonic::Crest::Lod___c__DisplayClass75_0* New_ctor() ;

/// @brief Method <SetOrigin>b__0, addr 0x1825804b0, size 0x70, virtual false, abstract: false, final false
inline void _SetOrigin_b__0(::ArrayW<::UnityEngine::Vector4>  data) ;

constexpr ::WaveHarmonic::Crest::Lod* const& __cordl_internal_get___4__this() const;

constexpr ::WaveHarmonic::Crest::Lod*& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_newOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_newOrigin() ;

constexpr void __cordl_internal_set___4__this(::WaveHarmonic::Crest::Lod*  value) ;

constexpr void __cordl_internal_set_newOrigin(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lod___c__DisplayClass75_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lod___c__DisplayClass75_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lod___c__DisplayClass75_0(Lod___c__DisplayClass75_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lod___c__DisplayClass75_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lod___c__DisplayClass75_0(Lod___c__DisplayClass75_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16581};

/// @brief Field newOrigin, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___newOrigin;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Lod*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Lod___c__DisplayClass75_0, ___newOrigin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod___c__DisplayClass75_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Lod___c__DisplayClass75_0) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Matrix4x4, WaveHarmonic.Crest.Cascade, WaveHarmonic.Crest.Internal.Versioned, WaveHarmonic.Crest.LodTextureFormatMode
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Lod
class CORDL_TYPE Lod : public ::WaveHarmonic::Crest::Internal::Versioned {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::Lod_ShaderIDs;

using __c = ::WaveHarmonic::Crest::Lod___c;

using __c__DisplayClass75_0 = ::WaveHarmonic::Crest::Lod___c__DisplayClass75_0;

 __declspec(property(get=get_AlwaysClear)) bool  AlwaysClear;

 __declspec(property(get=get_Blur, put=set_Blur)) bool  Blur;

 __declspec(property(get=get_BlurIterations, put=set_BlurIterations)) int32_t  BlurIterations;

 __declspec(property(get=get_BufferCount)) int32_t  BufferCount;

 __declspec(property(get=get_Cascades)) ::ArrayW<::WaveHarmonic::Crest::Cascade>  Cascades;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_CompatibleTextureFormat, put=set_CompatibleTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  CompatibleTextureFormat;

 __declspec(property(get=get_DataTexture)) ::UnityW<::UnityEngine::RenderTexture>  DataTexture;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_NullTexture)) ::UnityW<::UnityEngine::Texture2DArray>  NullTexture;

 __declspec(property(get=get_OverrideResolution, put=set_OverrideResolution)) bool  OverrideResolution;

 __declspec(property(get=get_Persistent)) bool  Persistent;

 __declspec(property(get=get_Queryable, put=set_Queryable)) ::WaveHarmonic::Crest::IQueryable*  Queryable;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_RequiresClearBorder)) bool  RequiresClearBorder;

 __declspec(property(get=get_Resolution, put=set_Resolution)) int32_t  Resolution;

 __declspec(property(get=get_SafeResolution)) int32_t  SafeResolution;

 __declspec(property(get=get_SkipEndOfFrame)) bool  SkipEndOfFrame;

 __declspec(property(get=get_Slices)) int32_t  Slices;

 __declspec(property(get=get_TextureFormat, put=set_TextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  TextureFormat;

 __declspec(property(get=get_TextureFormatMode, put=set_TextureFormatMode)) ::WaveHarmonic::Crest::LodTextureFormatMode  TextureFormatMode;

 __declspec(property(get=get_Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  Water;

/// @brief Field _AdditionalCameraData, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__AdditionalCameraData, put=__cordl_internal_set__AdditionalCameraData)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>*  _AdditionalCameraData;

/// @brief Field _Blur, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__Blur, put=__cordl_internal_set__Blur)) bool  _Blur;

/// @brief Field _BlurIterations, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__BlurIterations, put=__cordl_internal_set__BlurIterations)) int32_t  _BlurIterations;

/// @brief Field _Cascades, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cascades, put=__cordl_internal_set__Cascades)) ::ArrayW<::WaveHarmonic::Crest::Cascade>  _Cascades;

/// @brief Field <CompatibleTextureFormat>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CompatibleTextureFormat_k__BackingField, put=__cordl_internal_set__CompatibleTextureFormat_k__BackingField)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  _CompatibleTextureFormat_k__BackingField;

/// @brief Field _DataTexture, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__DataTexture, put=__cordl_internal_set__DataTexture)) ::UnityW<::UnityEngine::RenderTexture>  _DataTexture;

/// @brief Field _Enabled, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled, put=__cordl_internal_set__Enabled)) bool  _Enabled;

/// @brief Field _OverrideResolution, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideResolution, put=__cordl_internal_set__OverrideResolution)) bool  _OverrideResolution;

/// @brief Field <Queryable>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Queryable_k__BackingField, put=__cordl_internal_set__Queryable_k__BackingField)) ::WaveHarmonic::Crest::IQueryable*  _Queryable_k__BackingField;

/// @brief Field _ReAllocateTexture, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__ReAllocateTexture, put=__cordl_internal_set__ReAllocateTexture)) bool  _ReAllocateTexture;

/// @brief Field _Resolution, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution, put=__cordl_internal_set__Resolution)) int32_t  _Resolution;

/// @brief Field _SamplingParameters, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__SamplingParameters, put=__cordl_internal_set__SamplingParameters)) ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  _SamplingParameters;

/// @brief Field _SamplingParametersCascadeShaderID, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__SamplingParametersCascadeShaderID, put=__cordl_internal_set__SamplingParametersCascadeShaderID)) int32_t  _SamplingParametersCascadeShaderID;

/// @brief Field _SamplingParametersCascadeSourceShaderID, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SamplingParametersCascadeSourceShaderID, put=__cordl_internal_set__SamplingParametersCascadeSourceShaderID)) int32_t  _SamplingParametersCascadeSourceShaderID;

/// @brief Field _SamplingParametersShaderID, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__SamplingParametersShaderID, put=__cordl_internal_set__SamplingParametersShaderID)) int32_t  _SamplingParametersShaderID;

/// @brief Field _TargetsToClear, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__TargetsToClear, put=__cordl_internal_set__TargetsToClear)) bool  _TargetsToClear;

/// @brief Field _TextureFormat, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__TextureFormat, put=__cordl_internal_set__TextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  _TextureFormat;

/// @brief Field _TextureFormatMode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TextureFormatMode, put=__cordl_internal_set__TextureFormatMode)) ::WaveHarmonic::Crest::LodTextureFormatMode  _TextureFormatMode;

/// @brief Field _TextureName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextureName, put=__cordl_internal_set__TextureName)) ::StringW  _TextureName;

/// @brief Field _TextureShaderID, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__TextureShaderID, put=__cordl_internal_set__TextureShaderID)) int32_t  _TextureShaderID;

/// @brief Field _TextureSourceShaderID, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__TextureSourceShaderID, put=__cordl_internal_set__TextureSourceShaderID)) int32_t  _TextureSourceShaderID;

/// @brief Field _Valid, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__Valid, put=__cordl_internal_set__Valid)) bool  _Valid;

/// @brief Field _ViewMatrices, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ViewMatrices, put=__cordl_internal_set__ViewMatrices)) ::ArrayW<::UnityEngine::Matrix4x4>  _ViewMatrices;

/// @brief Field _Water, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Method AfterExecute, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void AfterExecute() ;

/// @brief Method Allocate, addr 0x182575bb0, size 0x90, virtual true, abstract: false, final false
inline void Allocate() ;

/// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void Bind(T  target) ;

/// @brief Method BuildCommandBuffer, addr 0x182575c40, size 0x4c0, virtual true, abstract: false, final false
inline void BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method Clear, addr 0x182576490, size 0x50, virtual false, abstract: false, final false
inline void Clear(::UnityEngine::RenderTexture*  target) ;

/// @brief Method ClearBorder, addr 0x182576100, size 0x390, virtual false, abstract: false, final false
inline void ClearBorder(::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method CreateLodDataTextures, addr 0x1825764e0, size 0x180, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> CreateLodDataTextures(::StringW  postfix) ;

/// @brief Method Destroy, addr 0x182576660, size 0x50, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x1825766b0, size 0x20, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method FlipBuffers, addr 0x1825766d0, size 0x60, virtual false, abstract: false, final false
inline void FlipBuffers(::UnityEngine::Rendering::CommandBuffer*  commands) ;

/// @brief Method GetEnabled, addr 0x182576730, size 0x10, virtual false, abstract: false, final false
inline bool GetEnabled() ;

/// @brief Method GetResolution, addr 0x182576740, size 0x30, virtual false, abstract: false, final false
inline int32_t GetResolution() ;

/// @brief Method Initialize, addr 0x182576770, size 0x170, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LoadCameraData, addr 0x1825768e0, size 0x1d0, virtual true, abstract: false, final false
inline void LoadCameraData(::UnityEngine::Camera*  camera) ;

static inline ::WaveHarmonic::Crest::Lod* New_ctor() ;

/// @brief Method ReAllocate, addr 0x182576ab0, size 0x210, virtual true, abstract: false, final false
inline void ReAllocate() ;

/// @brief Method RemoveCameraData, addr 0x182576cc0, size 0x60, virtual true, abstract: false, final false
inline void RemoveCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method SetDirty, addr 0x182576d20, size 0x10, virtual false, abstract: false, final false
inline void SetDirty(::System::Enum*  previous, ::System::Enum*  current) ;

/// @brief Method SetDirty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename I>
inline void SetDirty(I  previous, I  current) ;

/// @brief Method SetEnabled, addr 0x182576d30, size 0xd0, virtual false, abstract: false, final false
inline void SetEnabled(bool  previous, bool  current) ;

/// @brief Method SetGlobals, addr 0x182576e00, size 0x250, virtual true, abstract: false, final false
inline void SetGlobals(bool  enable) ;

/// @brief Method SetOrigin, addr 0x182577050, size 0xa0, virtual false, abstract: false, final false
inline void SetOrigin(::UnityEngine::Vector3  newOrigin) ;

/// @brief Method StoreCameraData, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void StoreCameraData(::UnityEngine::Camera*  camera) ;

/// @brief Method SubmitDraws, addr 0x1825770f0, size 0x650, virtual false, abstract: false, final false
inline bool SubmitDraws(::UnityEngine::Rendering::CommandBuffer*  buffer, ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  draws, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, bool  filter) ;

/// @brief Method SuggestIndex, addr 0x1825779c0, size 0x160, virtual false, abstract: false, final false
inline int32_t SuggestIndex(::UnityEngine::Rect  sampleArea) ;

/// @brief Method SuggestIndexForWaves, addr 0x182577990, size 0x30, virtual false, abstract: false, final false
inline int32_t SuggestIndexForWaves(::UnityEngine::Rect  sampleArea) ;

/// @brief Method SuggestIndexForWaves, addr 0x182577740, size 0x250, virtual false, abstract: false, final false
inline int32_t SuggestIndexForWaves(::UnityEngine::Rect  sampleArea, float_t  minimumSpatialLength) ;

/// @brief Method TryBlur, addr 0x182577b20, size 0x400, virtual false, abstract: false, final false
inline void TryBlur(::UnityEngine::Rendering::CommandBuffer*  commands) ;

/// @brief Method UpdateSamplingParameters, addr 0x182577f20, size 0x4c0, virtual false, abstract: false, final false
inline void UpdateSamplingParameters(::UnityEngine::Rendering::CommandBuffer*  commands, bool  initialize) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>* const& __cordl_internal_get__AdditionalCameraData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>*& __cordl_internal_get__AdditionalCameraData() ;

constexpr bool const& __cordl_internal_get__Blur() const;

constexpr bool& __cordl_internal_get__Blur() ;

constexpr int32_t const& __cordl_internal_get__BlurIterations() const;

constexpr int32_t& __cordl_internal_get__BlurIterations() ;

constexpr ::ArrayW<::WaveHarmonic::Crest::Cascade> const& __cordl_internal_get__Cascades() const;

constexpr ::ArrayW<::WaveHarmonic::Crest::Cascade>& __cordl_internal_get__Cascades() ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get__CompatibleTextureFormat_k__BackingField() const;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get__CompatibleTextureFormat_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__DataTexture() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__DataTexture() ;

constexpr bool const& __cordl_internal_get__Enabled() const;

constexpr bool& __cordl_internal_get__Enabled() ;

constexpr bool const& __cordl_internal_get__OverrideResolution() const;

constexpr bool& __cordl_internal_get__OverrideResolution() ;

constexpr ::WaveHarmonic::Crest::IQueryable* const& __cordl_internal_get__Queryable_k__BackingField() const;

constexpr ::WaveHarmonic::Crest::IQueryable*& __cordl_internal_get__Queryable_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ReAllocateTexture() const;

constexpr bool& __cordl_internal_get__ReAllocateTexture() ;

constexpr int32_t const& __cordl_internal_get__Resolution() const;

constexpr int32_t& __cordl_internal_get__Resolution() ;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>* const& __cordl_internal_get__SamplingParameters() const;

constexpr ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*& __cordl_internal_get__SamplingParameters() ;

constexpr int32_t const& __cordl_internal_get__SamplingParametersCascadeShaderID() const;

constexpr int32_t& __cordl_internal_get__SamplingParametersCascadeShaderID() ;

constexpr int32_t const& __cordl_internal_get__SamplingParametersCascadeSourceShaderID() const;

constexpr int32_t& __cordl_internal_get__SamplingParametersCascadeSourceShaderID() ;

constexpr int32_t const& __cordl_internal_get__SamplingParametersShaderID() const;

constexpr int32_t& __cordl_internal_get__SamplingParametersShaderID() ;

constexpr bool const& __cordl_internal_get__TargetsToClear() const;

constexpr bool& __cordl_internal_get__TargetsToClear() ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get__TextureFormat() const;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get__TextureFormat() ;

constexpr ::WaveHarmonic::Crest::LodTextureFormatMode const& __cordl_internal_get__TextureFormatMode() const;

constexpr ::WaveHarmonic::Crest::LodTextureFormatMode& __cordl_internal_get__TextureFormatMode() ;

constexpr ::StringW const& __cordl_internal_get__TextureName() const;

constexpr ::StringW& __cordl_internal_get__TextureName() ;

constexpr int32_t const& __cordl_internal_get__TextureShaderID() const;

constexpr int32_t& __cordl_internal_get__TextureShaderID() ;

constexpr int32_t const& __cordl_internal_get__TextureSourceShaderID() const;

constexpr int32_t& __cordl_internal_get__TextureSourceShaderID() ;

constexpr bool const& __cordl_internal_get__Valid() const;

constexpr bool& __cordl_internal_get__Valid() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get__ViewMatrices() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get__ViewMatrices() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__AdditionalCameraData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>*  value) ;

constexpr void __cordl_internal_set__Blur(bool  value) ;

constexpr void __cordl_internal_set__BlurIterations(int32_t  value) ;

constexpr void __cordl_internal_set__Cascades(::ArrayW<::WaveHarmonic::Crest::Cascade>  value) ;

constexpr void __cordl_internal_set__CompatibleTextureFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

constexpr void __cordl_internal_set__DataTexture(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__Enabled(bool  value) ;

constexpr void __cordl_internal_set__OverrideResolution(bool  value) ;

constexpr void __cordl_internal_set__Queryable_k__BackingField(::WaveHarmonic::Crest::IQueryable*  value) ;

constexpr void __cordl_internal_set__ReAllocateTexture(bool  value) ;

constexpr void __cordl_internal_set__Resolution(int32_t  value) ;

constexpr void __cordl_internal_set__SamplingParameters(::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  value) ;

constexpr void __cordl_internal_set__SamplingParametersCascadeShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__SamplingParametersCascadeSourceShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__SamplingParametersShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__TargetsToClear(bool  value) ;

constexpr void __cordl_internal_set__TextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

constexpr void __cordl_internal_set__TextureFormatMode(::WaveHarmonic::Crest::LodTextureFormatMode  value) ;

constexpr void __cordl_internal_set__TextureName(::StringW  value) ;

constexpr void __cordl_internal_set__TextureShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__TextureSourceShaderID(int32_t  value) ;

constexpr void __cordl_internal_set__Valid(bool  value) ;

constexpr void __cordl_internal_set__ViewMatrices(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x1825783e0, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlwaysClear, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_AlwaysClear() ;

/// @brief Method get_Blur, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_Blur() ;

/// @brief Method get_BlurIterations, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_BlurIterations() ;

/// @brief Method get_BufferCount, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline int32_t get_BufferCount() ;

/// @brief Method get_Cascades, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::WaveHarmonic::Crest::Cascade> get_Cascades() ;

/// @brief Method get_ClearColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_CompatibleTextureFormat, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_CompatibleTextureFormat() ;

/// @brief Method get_DataTexture, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_DataTexture() ;

/// @brief Method get_Enabled, addr 0x182576730, size 0x10, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_GizmoColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x181163ae0, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_NullTexture, addr 0x1825785e0, size 0x80, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2DArray> get_NullTexture() ;

/// @brief Method get_OverrideResolution, addr 0x1814f8710, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideResolution() ;

/// @brief Method get_Persistent, addr 0x182578660, size 0x30, virtual false, abstract: false, final false
inline bool get_Persistent() ;

/// @brief Method get_Queryable, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::IQueryable* get_Queryable() ;

/// @brief Method get_RequestedTextureFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

/// @brief Method get_RequiresClearBorder, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_RequiresClearBorder() ;

/// @brief Method get_Resolution, addr 0x182576740, size 0x30, virtual false, abstract: false, final false
inline int32_t get_Resolution() ;

/// @brief Method get_SafeResolution, addr 0x182578690, size 0x50, virtual false, abstract: false, final false
inline int32_t get_SafeResolution() ;

/// @brief Method get_SkipEndOfFrame, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_SkipEndOfFrame() ;

/// @brief Method get_Slices, addr 0x1825786e0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Slices() ;

/// @brief Method get_TextureFormat, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_TextureFormat() ;

/// @brief Method get_TextureFormatMode, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::LodTextureFormatMode get_TextureFormatMode() ;

/// @brief Method get_Water, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::WaterRenderer> get_Water() ;

/// @brief Method set_Blur, addr 0x182578700, size 0x20, virtual false, abstract: false, final false
inline void set_Blur(bool  value) ;

/// @brief Method set_BlurIterations, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_BlurIterations(int32_t  value) ;

/// @brief Method set_CompatibleTextureFormat, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_CompatibleTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_Enabled, addr 0x182578720, size 0xd0, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_OverrideResolution, addr 0x1825787f0, size 0x20, virtual false, abstract: false, final false
inline void set_OverrideResolution(bool  value) ;

/// @brief Method set_Queryable, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_Queryable(::WaveHarmonic::Crest::IQueryable*  value) ;

/// @brief Method set_Resolution, addr 0x182578810, size 0x20, virtual false, abstract: false, final false
inline void set_Resolution(int32_t  value) ;

/// @brief Method set_TextureFormat, addr 0x1825788a0, size 0x70, virtual false, abstract: false, final false
inline void set_TextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_TextureFormatMode, addr 0x182578830, size 0x70, virtual false, abstract: false, final false
inline void set_TextureFormatMode(::WaveHarmonic::Crest::LodTextureFormatMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Lod(Lod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lod(Lod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16582};

/// @brief Field k_BlurField offset 0xffffffff size 0x8
static constexpr ::ConstString  k_BlurField{u"_Blur"};

/// @brief Field k_MaximumSlices offset 0xffffffff size 0x4
static constexpr int32_t  k_MaximumSlices{static_cast<int32_t>(0xf)};

/// @brief Field k_TextureFormatModeField offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TextureFormatModeField{u"_TextureFormatMode"};

/// @brief Field k_ThreadGroupSize offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSize{static_cast<int32_t>(0x8)};

/// @brief Field k_ThreadGroupSizeX offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSizeX{static_cast<int32_t>(0x8)};

/// @brief Field k_ThreadGroupSizeY offset 0xffffffff size 0x4
static constexpr int32_t  k_ThreadGroupSizeY{static_cast<int32_t>(0x8)};

/// @brief Field _Enabled, offset: 0x14, size: 0x1, def value: None
 bool  ____Enabled;

/// @brief Field _OverrideResolution, offset: 0x15, size: 0x1, def value: None
 bool  ____OverrideResolution;

/// @brief Field _Resolution, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Resolution;

/// @brief Field _TextureFormatMode, offset: 0x1c, size: 0x4, def value: None
 ::WaveHarmonic::Crest::LodTextureFormatMode  ____TextureFormatMode;

/// @brief Field _TextureFormat, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  ____TextureFormat;

/// @brief Field _Blur, offset: 0x24, size: 0x1, def value: None
 bool  ____Blur;

/// @brief Field _BlurIterations, offset: 0x28, size: 0x4, def value: None
 int32_t  ____BlurIterations;

/// @brief Field <CompatibleTextureFormat>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  ____CompatibleTextureFormat_k__BackingField;

/// @brief Field <Queryable>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::WaveHarmonic::Crest::IQueryable*  ____Queryable_k__BackingField;

/// @brief Field _DataTexture, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____DataTexture;

/// @brief Field _ViewMatrices, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ____ViewMatrices;

/// @brief Field _Cascades, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::WaveHarmonic::Crest::Cascade>  ____Cascades;

/// @brief Field _SamplingParameters, offset: 0x50, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*  ____SamplingParameters;

/// @brief Field _Valid, offset: 0x58, size: 0x1, def value: None
 bool  ____Valid;

/// @brief Field _Water, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _TargetsToClear, offset: 0x68, size: 0x1, def value: None
 bool  ____TargetsToClear;

/// @brief Field _TextureShaderID, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____TextureShaderID;

/// @brief Field _TextureSourceShaderID, offset: 0x70, size: 0x4, def value: None
 int32_t  ____TextureSourceShaderID;

/// @brief Field _SamplingParametersShaderID, offset: 0x74, size: 0x4, def value: None
 int32_t  ____SamplingParametersShaderID;

/// @brief Field _SamplingParametersCascadeShaderID, offset: 0x78, size: 0x4, def value: None
 int32_t  ____SamplingParametersCascadeShaderID;

/// @brief Field _SamplingParametersCascadeSourceShaderID, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____SamplingParametersCascadeSourceShaderID;

/// @brief Field _TextureName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____TextureName;

/// @brief Field _AdditionalCameraData, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,::WaveHarmonic::Crest::Utility::BufferedData_1<::ArrayW<::UnityEngine::Vector4>>*>*  ____AdditionalCameraData;

/// @brief Field _ReAllocateTexture, offset: 0x90, size: 0x1, def value: None
 bool  ____ReAllocateTexture;

/// @brief Size padding 0xa0 - 0x98 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____Enabled) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____OverrideResolution) == 0x15, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____Resolution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____TextureFormatMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____TextureFormat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____Blur) == 0x24, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____BlurIterations) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____CompatibleTextureFormat_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____Queryable_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____DataTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____ViewMatrices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____Cascades) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____SamplingParameters) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____Valid) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____Water) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____TargetsToClear) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____TextureShaderID) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____TextureSourceShaderID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____SamplingParametersShaderID) == 0x74, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____SamplingParametersCascadeShaderID) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____SamplingParametersCascadeSourceShaderID) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____TextureName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____AdditionalCameraData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Lod, ____ReAllocateTexture) == 0x90, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Lod) == 0xa0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
