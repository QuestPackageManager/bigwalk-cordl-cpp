#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShaderIDs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderIDs)
namespace WaveHarmonic::Crest {
class ShaderIDs_Unity;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ShaderIDs_Unity;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ShaderIDs*);
MARK_REF_T(::WaveHarmonic::Crest::ShaderIDs_Unity*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShaderIDs*, "WaveHarmonic.Crest", "ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShaderIDs_Unity*, "WaveHarmonic.Crest", "ShaderIDs/Unity");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShaderIDs/Unity
class CORDL_TYPE ShaderIDs_Unity : public ::System::Object {
public:
// Declarations
/// @brief Field s_CameraDepthTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CameraDepthTexture, put=setStaticF_s_CameraDepthTexture)) int32_t  s_CameraDepthTexture;

/// @brief Field s_CameraOpaqueTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CameraOpaqueTexture, put=setStaticF_s_CameraOpaqueTexture)) int32_t  s_CameraOpaqueTexture;

/// @brief Field s_CameraToWorld, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CameraToWorld, put=setStaticF_s_CameraToWorld)) int32_t  s_CameraToWorld;

/// @brief Field s_DstBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DstBlend, put=setStaticF_s_DstBlend)) int32_t  s_DstBlend;

/// @brief Field s_GlossyEnvironmentCubeMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_GlossyEnvironmentCubeMap, put=setStaticF_s_GlossyEnvironmentCubeMap)) int32_t  s_GlossyEnvironmentCubeMap;

/// @brief Field s_LightColor0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LightColor0, put=setStaticF_s_LightColor0)) int32_t  s_LightColor0;

/// @brief Field s_MatrixPreviousM, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MatrixPreviousM, put=setStaticF_s_MatrixPreviousM)) int32_t  s_MatrixPreviousM;

/// @brief Field s_ShaderVariablesGlobal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShaderVariablesGlobal, put=setStaticF_s_ShaderVariablesGlobal)) int32_t  s_ShaderVariablesGlobal;

/// @brief Field s_ShadowMapTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ShadowMapTexture, put=setStaticF_s_ShadowMapTexture)) int32_t  s_ShadowMapTexture;

/// @brief Field s_SpecCube0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SpecCube0, put=setStaticF_s_SpecCube0)) int32_t  s_SpecCube0;

/// @brief Field s_SrcBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SrcBlend, put=setStaticF_s_SrcBlend)) int32_t  s_SrcBlend;

/// @brief Field s_Surface, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Surface, put=setStaticF_s_Surface)) int32_t  s_Surface;

/// @brief Field s_Time, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Time, put=setStaticF_s_Time)) int32_t  s_Time;

/// @brief Field s_WorldSpaceLightPos0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WorldSpaceLightPos0, put=setStaticF_s_WorldSpaceLightPos0)) int32_t  s_WorldSpaceLightPos0;

static inline int32_t getStaticF_s_CameraDepthTexture() ;

static inline int32_t getStaticF_s_CameraOpaqueTexture() ;

static inline int32_t getStaticF_s_CameraToWorld() ;

static inline int32_t getStaticF_s_DstBlend() ;

static inline int32_t getStaticF_s_GlossyEnvironmentCubeMap() ;

static inline int32_t getStaticF_s_LightColor0() ;

static inline int32_t getStaticF_s_MatrixPreviousM() ;

static inline int32_t getStaticF_s_ShaderVariablesGlobal() ;

static inline int32_t getStaticF_s_ShadowMapTexture() ;

static inline int32_t getStaticF_s_SpecCube0() ;

static inline int32_t getStaticF_s_SrcBlend() ;

static inline int32_t getStaticF_s_Surface() ;

static inline int32_t getStaticF_s_Time() ;

static inline int32_t getStaticF_s_WorldSpaceLightPos0() ;

static inline void setStaticF_s_CameraDepthTexture(int32_t  value) ;

static inline void setStaticF_s_CameraOpaqueTexture(int32_t  value) ;

static inline void setStaticF_s_CameraToWorld(int32_t  value) ;

static inline void setStaticF_s_DstBlend(int32_t  value) ;

static inline void setStaticF_s_GlossyEnvironmentCubeMap(int32_t  value) ;

static inline void setStaticF_s_LightColor0(int32_t  value) ;

static inline void setStaticF_s_MatrixPreviousM(int32_t  value) ;

static inline void setStaticF_s_ShaderVariablesGlobal(int32_t  value) ;

static inline void setStaticF_s_ShadowMapTexture(int32_t  value) ;

static inline void setStaticF_s_SpecCube0(int32_t  value) ;

static inline void setStaticF_s_SrcBlend(int32_t  value) ;

static inline void setStaticF_s_Surface(int32_t  value) ;

static inline void setStaticF_s_Time(int32_t  value) ;

static inline void setStaticF_s_WorldSpaceLightPos0(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderIDs_Unity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs_Unity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderIDs_Unity(ShaderIDs_Unity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs_Unity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderIDs_Unity(ShaderIDs_Unity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16702};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShaderIDs_Unity) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShaderIDs
class CORDL_TYPE ShaderIDs : public ::System::Object {
public:
// Declarations
using Unity = ::WaveHarmonic::Crest::ShaderIDs_Unity;

/// @brief Field s_Blend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Blend, put=setStaticF_s_Blend)) int32_t  s_Blend;

/// @brief Field s_BoundaryXZ, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_BoundaryXZ, put=setStaticF_s_BoundaryXZ)) int32_t  s_BoundaryXZ;

/// @brief Field s_ClearColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ClearColor, put=setStaticF_s_ClearColor)) int32_t  s_ClearColor;

/// @brief Field s_ClearMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ClearMask, put=setStaticF_s_ClearMask)) int32_t  s_ClearMask;

/// @brief Field s_Diameter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Diameter, put=setStaticF_s_Diameter)) int32_t  s_Diameter;

/// @brief Field s_DrawBoundaryXZ, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DrawBoundaryXZ, put=setStaticF_s_DrawBoundaryXZ)) int32_t  s_DrawBoundaryXZ;

/// @brief Field s_FeatherWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FeatherWidth, put=setStaticF_s_FeatherWidth)) int32_t  s_FeatherWidth;

/// @brief Field s_Matrix, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Matrix, put=setStaticF_s_Matrix)) int32_t  s_Matrix;

/// @brief Field s_Multiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Multiplier, put=setStaticF_s_Multiplier)) int32_t  s_Multiplier;

/// @brief Field s_NegativeValues, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_NegativeValues, put=setStaticF_s_NegativeValues)) int32_t  s_NegativeValues;

/// @brief Field s_Position, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Position, put=setStaticF_s_Position)) int32_t  s_Position;

/// @brief Field s_Resolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Resolution, put=setStaticF_s_Resolution)) int32_t  s_Resolution;

/// @brief Field s_Source, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Source, put=setStaticF_s_Source)) int32_t  s_Source;

/// @brief Field s_Target, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Target, put=setStaticF_s_Target)) int32_t  s_Target;

/// @brief Field s_TargetSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TargetSlice, put=setStaticF_s_TargetSlice)) int32_t  s_TargetSlice;

/// @brief Field s_Texture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Texture, put=setStaticF_s_Texture)) int32_t  s_Texture;

/// @brief Field s_TexturePosition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TexturePosition, put=setStaticF_s_TexturePosition)) int32_t  s_TexturePosition;

/// @brief Field s_TextureResolution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TextureResolution, put=setStaticF_s_TextureResolution)) int32_t  s_TextureResolution;

/// @brief Field s_TextureRotation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TextureRotation, put=setStaticF_s_TextureRotation)) int32_t  s_TextureRotation;

/// @brief Field s_TextureSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TextureSize, put=setStaticF_s_TextureSize)) int32_t  s_TextureSize;

static inline int32_t getStaticF_s_Blend() ;

static inline int32_t getStaticF_s_BoundaryXZ() ;

static inline int32_t getStaticF_s_ClearColor() ;

static inline int32_t getStaticF_s_ClearMask() ;

static inline int32_t getStaticF_s_Diameter() ;

static inline int32_t getStaticF_s_DrawBoundaryXZ() ;

static inline int32_t getStaticF_s_FeatherWidth() ;

static inline int32_t getStaticF_s_Matrix() ;

static inline int32_t getStaticF_s_Multiplier() ;

static inline int32_t getStaticF_s_NegativeValues() ;

static inline int32_t getStaticF_s_Position() ;

static inline int32_t getStaticF_s_Resolution() ;

static inline int32_t getStaticF_s_Source() ;

static inline int32_t getStaticF_s_Target() ;

static inline int32_t getStaticF_s_TargetSlice() ;

static inline int32_t getStaticF_s_Texture() ;

static inline int32_t getStaticF_s_TexturePosition() ;

static inline int32_t getStaticF_s_TextureResolution() ;

static inline int32_t getStaticF_s_TextureRotation() ;

static inline int32_t getStaticF_s_TextureSize() ;

static inline void setStaticF_s_Blend(int32_t  value) ;

static inline void setStaticF_s_BoundaryXZ(int32_t  value) ;

static inline void setStaticF_s_ClearColor(int32_t  value) ;

static inline void setStaticF_s_ClearMask(int32_t  value) ;

static inline void setStaticF_s_Diameter(int32_t  value) ;

static inline void setStaticF_s_DrawBoundaryXZ(int32_t  value) ;

static inline void setStaticF_s_FeatherWidth(int32_t  value) ;

static inline void setStaticF_s_Matrix(int32_t  value) ;

static inline void setStaticF_s_Multiplier(int32_t  value) ;

static inline void setStaticF_s_NegativeValues(int32_t  value) ;

static inline void setStaticF_s_Position(int32_t  value) ;

static inline void setStaticF_s_Resolution(int32_t  value) ;

static inline void setStaticF_s_Source(int32_t  value) ;

static inline void setStaticF_s_Target(int32_t  value) ;

static inline void setStaticF_s_TargetSlice(int32_t  value) ;

static inline void setStaticF_s_Texture(int32_t  value) ;

static inline void setStaticF_s_TexturePosition(int32_t  value) ;

static inline void setStaticF_s_TextureResolution(int32_t  value) ;

static inline void setStaticF_s_TextureRotation(int32_t  value) ;

static inline void setStaticF_s_TextureSize(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderIDs(ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderIDs(ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16703};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
