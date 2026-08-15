#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MeshStamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshStamp)
namespace JBooth::MicroVerseCore {
class FalloffFilter;
}
namespace JBooth::MicroVerseCore {
class HeightmapData;
}
namespace JBooth::MicroVerseCore {
class IHeightModifier;
}
namespace JBooth::MicroVerseCore {
class IModifier;
}
namespace JBooth::MicroVerseCore {
struct MeshStamp_BlendMode;
}
namespace JBooth::MicroVerseCore {
struct MeshStamp_Resolution;
}
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct MeshStamp_BlendMode;
}
namespace JBooth::MicroVerseCore {
struct MeshStamp_Resolution;
}
namespace JBooth::MicroVerseCore {
class MeshStamp;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::MeshStamp_BlendMode);
MARK_VAL_T(::JBooth::MicroVerseCore::MeshStamp_Resolution);
MARK_REF_T(::JBooth::MicroVerseCore::MeshStamp*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MeshStamp_BlendMode, "JBooth.MicroVerseCore", "MeshStamp/BlendMode");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MeshStamp_Resolution, "JBooth.MicroVerseCore", "MeshStamp/Resolution");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::MeshStamp*, "JBooth.MicroVerseCore", "MeshStamp");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.MeshStamp/Resolution
struct CORDL_TYPE MeshStamp_Resolution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshStamp_Resolution_Unwrapped
enum struct __MeshStamp_Resolution_Unwrapped : int32_t {
__E_k32 = static_cast<int32_t>(0x20),
__E_k64 = static_cast<int32_t>(0x40),
__E_k128 = static_cast<int32_t>(0x80),
__E_k256 = static_cast<int32_t>(0x100),
__E_k512 = static_cast<int32_t>(0x200),
__E_k1024 = static_cast<int32_t>(0x400),
__E_k2048 = static_cast<int32_t>(0x800),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshStamp_Resolution_Unwrapped () const noexcept {
return static_cast<__MeshStamp_Resolution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MeshStamp_Resolution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshStamp_Resolution(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k1024 value: I32(1024)
static ::JBooth::MicroVerseCore::MeshStamp_Resolution const k1024;

/// @brief Field k128 value: I32(128)
static ::JBooth::MicroVerseCore::MeshStamp_Resolution const k128;

/// @brief Field k2048 value: I32(2048)
static ::JBooth::MicroVerseCore::MeshStamp_Resolution const k2048;

/// @brief Field k256 value: I32(256)
static ::JBooth::MicroVerseCore::MeshStamp_Resolution const k256;

/// @brief Field k32 value: I32(32)
static ::JBooth::MicroVerseCore::MeshStamp_Resolution const k32;

/// @brief Field k512 value: I32(512)
static ::JBooth::MicroVerseCore::MeshStamp_Resolution const k512;

/// @brief Field k64 value: I32(64)
static ::JBooth::MicroVerseCore::MeshStamp_Resolution const k64;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp_Resolution, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MeshStamp_Resolution) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.MeshStamp/BlendMode
struct CORDL_TYPE MeshStamp_BlendMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshStamp_BlendMode_Unwrapped
enum struct __MeshStamp_BlendMode_Unwrapped : int32_t {
__E_Add = static_cast<int32_t>(0x0),
__E_Subtract = static_cast<int32_t>(0x1),
__E_Fillaround = static_cast<int32_t>(0x2),
__E_Connect = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshStamp_BlendMode_Unwrapped () const noexcept {
return static_cast<__MeshStamp_BlendMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MeshStamp_BlendMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshStamp_BlendMode(int32_t  value__) noexcept;

/// @brief Field Add value: I32(0)
static ::JBooth::MicroVerseCore::MeshStamp_BlendMode const Add;

/// @brief Field Connect value: I32(3)
static ::JBooth::MicroVerseCore::MeshStamp_BlendMode const Connect;

/// @brief Field Fillaround value: I32(2)
static ::JBooth::MicroVerseCore::MeshStamp_BlendMode const Fillaround;

/// @brief Field Subtract value: I32(1)
static ::JBooth::MicroVerseCore::MeshStamp_BlendMode const Subtract;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp_BlendMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MeshStamp_BlendMode) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.MeshStamp::BlendMode, JBooth.MicroVerseCore.MeshStamp::Resolution, JBooth.MicroVerseCore.Stamp, UnityEngine.Vector2
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.MeshStamp
class CORDL_TYPE MeshStamp : public ::JBooth::MicroVerseCore::Stamp {
public:
// Declarations
using BlendMode = ::JBooth::MicroVerseCore::MeshStamp_BlendMode;

using Resolution = ::JBooth::MicroVerseCore::MeshStamp_Resolution;

/// @brief Field _AlphaMapSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaMapSize, put=setStaticF__AlphaMapSize)) int32_t  _AlphaMapSize;

/// @brief Field _ConnectHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ConnectHeight, put=setStaticF__ConnectHeight)) int32_t  _ConnectHeight;

/// @brief Field _HeightScaleClamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightScaleClamp, put=setStaticF__HeightScaleClamp)) int32_t  _HeightScaleClamp;

/// @brief Field _NoiseUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseUV, put=setStaticF__NoiseUV)) int32_t  _NoiseUV;

/// @brief Field _RealSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealSize, put=setStaticF__RealSize)) int32_t  _RealSize;

/// @brief Field _StampBounds, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StampBounds, put=setStaticF__StampBounds)) int32_t  _StampBounds;

/// @brief Field _StampTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StampTex, put=setStaticF__StampTex)) int32_t  _StampTex;

/// @brief Field _Transform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Transform, put=setStaticF__Transform)) int32_t  _Transform;

/// @brief Field _YBounds, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__YBounds, put=setStaticF__YBounds)) int32_t  _YBounds;

/// @brief Field <targetDepthTexture>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetDepthTexture_k__BackingField, put=__cordl_internal_set__targetDepthTexture_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>  _targetDepthTexture_k__BackingField;

/// @brief Field blendMode, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendMode, put=__cordl_internal_set_blendMode)) ::JBooth::MicroVerseCore::MeshStamp_BlendMode  blendMode;

/// @brief Field blur, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_blur, put=__cordl_internal_set_blur)) float_t  blur;

/// @brief Field cam, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cam, put=setStaticF_cam)) ::UnityW<::UnityEngine::Camera>  cam;

/// @brief Field connectHeight, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectHeight, put=__cordl_internal_set_connectHeight)) float_t  connectHeight;

/// @brief Field falloff, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_falloff, put=__cordl_internal_set_falloff)) ::JBooth::MicroVerseCore::FalloffFilter*  falloff;

/// @brief Field heightClamp, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightClamp, put=__cordl_internal_set_heightClamp)) ::UnityEngine::Vector2  heightClamp;

/// @brief Field heightScale, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightScale, put=__cordl_internal_set_heightScale)) float_t  heightScale;

/// @brief Field hideRenderers, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideRenderers, put=__cordl_internal_set_hideRenderers)) bool  hideRenderers;

/// @brief Field material, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_material, put=__cordl_internal_set_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field meshShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_meshShader, put=setStaticF_meshShader)) ::UnityW<::UnityEngine::Shader>  meshShader;

/// @brief Field offset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) float_t  offset;

/// @brief Field resolution, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_resolution, put=__cordl_internal_set_resolution)) ::JBooth::MicroVerseCore::MeshStamp_Resolution  resolution;

/// @brief Field squash, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_squash, put=__cordl_internal_set_squash)) float_t  squash;

/// @brief Field squeeze, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_squeeze, put=__cordl_internal_set_squeeze)) float_t  squeeze;

/// @brief Field squeezeMaterial, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_squeezeMaterial, put=__cordl_internal_set_squeezeMaterial)) ::UnityW<::UnityEngine::Material>  squeezeMaterial;

/// @brief Field squeezeShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_squeezeShader, put=setStaticF_squeezeShader)) ::UnityW<::UnityEngine::Shader>  squeezeShader;

 __declspec(property(get=get_targetDepthTexture, put=set_targetDepthTexture)) ::UnityW<::UnityEngine::RenderTexture>  targetDepthTexture;

/// @brief Field targetObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetObject, put=__cordl_internal_set_targetObject)) ::UnityW<::UnityEngine::GameObject>  targetObject;

/// @brief Field tempFilters, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempFilters, put=__cordl_internal_set_tempFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  tempFilters;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr operator  ::JBooth::MicroVerseCore::IHeightModifier*() noexcept;

/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr operator  ::JBooth::MicroVerseCore::IModifier*() noexcept;

/// @brief Method ApplyHeightStamp, addr 0x181442aa0, size 0x710, virtual true, abstract: false, final true
inline bool ApplyHeightStamp(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  dest, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::JBooth::MicroVerseCore::OcclusionData*  od) ;

/// @brief Method Capture, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> Capture() ;

/// @brief Method ComputeStampMatrix, addr 0x1814431b0, size 0x520, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 ComputeStampMatrix(::UnityEngine::Terrain*  terrain, ::UnityEngine::Bounds  bounds) ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FitCameraToTarget, addr 0x1814436d0, size 0x1e0, virtual false, abstract: false, final false
inline void FitCameraToTarget(::UnityEngine::Camera*  cam, ::UnityEngine::Bounds  bounds) ;

/// @brief Method GetBounds, addr 0x1814438b0, size 0x1f0, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetPrefabBounds, addr 0x181443aa0, size 0x470, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetPrefabBounds(::UnityEngine::GameObject*  go) ;

/// @brief Method Initialize, addr 0x181443f10, size 0x120, virtual true, abstract: false, final true
inline void Initialize() ;

static inline ::JBooth::MicroVerseCore::MeshStamp* New_ctor() ;

/// @brief Method OnDestroy, addr 0x181444030, size 0x50, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmosSelected, addr 0x181444080, size 0x110, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method PrepareMaterial, addr 0x181444190, size 0x1d0, virtual false, abstract: false, final false
inline void PrepareMaterial(::UnityEngine::Material*  material, ::JBooth::MicroVerseCore::HeightmapData*  heightmapData, ::System::Collections::Generic::List_1<::StringW>*  keywords) ;

/// @brief Method RenderCamera, addr 0x181444360, size 0x3f0, virtual false, abstract: false, final false
inline void RenderCamera(::UnityEngine::Camera*  cam, ::UnityEngine::RenderTexture*  texture) ;

/// @brief Method ScanMeshFilters, addr 0x181444750, size 0x2e0, virtual false, abstract: false, final false
inline void ScanMeshFilters(::UnityEngine::GameObject*  go) ;

/// @brief Method SetHideRenderers, addr 0x181444a30, size 0x90, virtual false, abstract: false, final false
inline void SetHideRenderers(::UnityEngine::GameObject*  go, bool  enabled) ;

/// @brief Method StripInBuild, addr 0x181444ac0, size 0x60, virtual true, abstract: false, final false
inline void StripInBuild() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__targetDepthTexture_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__targetDepthTexture_k__BackingField() ;

constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode const& __cordl_internal_get_blendMode() const;

constexpr ::JBooth::MicroVerseCore::MeshStamp_BlendMode& __cordl_internal_get_blendMode() ;

constexpr float_t const& __cordl_internal_get_blur() const;

constexpr float_t& __cordl_internal_get_blur() ;

constexpr float_t const& __cordl_internal_get_connectHeight() const;

constexpr float_t& __cordl_internal_get_connectHeight() ;

constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& __cordl_internal_get_falloff() const;

constexpr ::JBooth::MicroVerseCore::FalloffFilter*& __cordl_internal_get_falloff() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_heightClamp() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_heightClamp() ;

constexpr float_t const& __cordl_internal_get_heightScale() const;

constexpr float_t& __cordl_internal_get_heightScale() ;

constexpr bool const& __cordl_internal_get_hideRenderers() const;

constexpr bool& __cordl_internal_get_hideRenderers() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material() ;

constexpr float_t const& __cordl_internal_get_offset() const;

constexpr float_t& __cordl_internal_get_offset() ;

constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution const& __cordl_internal_get_resolution() const;

constexpr ::JBooth::MicroVerseCore::MeshStamp_Resolution& __cordl_internal_get_resolution() ;

constexpr float_t const& __cordl_internal_get_squash() const;

constexpr float_t& __cordl_internal_get_squash() ;

constexpr float_t const& __cordl_internal_get_squeeze() const;

constexpr float_t& __cordl_internal_get_squeeze() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_squeezeMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_squeezeMaterial() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetObject() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const& __cordl_internal_get_tempFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& __cordl_internal_get_tempFilters() ;

constexpr void __cordl_internal_set__targetDepthTexture_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_blendMode(::JBooth::MicroVerseCore::MeshStamp_BlendMode  value) ;

constexpr void __cordl_internal_set_blur(float_t  value) ;

constexpr void __cordl_internal_set_connectHeight(float_t  value) ;

constexpr void __cordl_internal_set_falloff(::JBooth::MicroVerseCore::FalloffFilter*  value) ;

constexpr void __cordl_internal_set_heightClamp(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_heightScale(float_t  value) ;

constexpr void __cordl_internal_set_hideRenderers(bool  value) ;

constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_offset(float_t  value) ;

constexpr void __cordl_internal_set_resolution(::JBooth::MicroVerseCore::MeshStamp_Resolution  value) ;

constexpr void __cordl_internal_set_squash(float_t  value) ;

constexpr void __cordl_internal_set_squeeze(float_t  value) ;

constexpr void __cordl_internal_set_squeezeMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_targetObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tempFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value) ;

/// @brief Method .ctor, addr 0x181444c50, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__AlphaMapSize() ;

static inline int32_t getStaticF__ConnectHeight() ;

static inline int32_t getStaticF__HeightScaleClamp() ;

static inline int32_t getStaticF__NoiseUV() ;

static inline int32_t getStaticF__RealSize() ;

static inline int32_t getStaticF__StampBounds() ;

static inline int32_t getStaticF__StampTex() ;

static inline int32_t getStaticF__Transform() ;

static inline int32_t getStaticF__YBounds() ;

static inline ::UnityW<::UnityEngine::Camera> getStaticF_cam() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_meshShader() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_squeezeShader() ;

/// @brief Method get_targetDepthTexture, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_targetDepthTexture() ;

/// @brief Convert to "::JBooth::MicroVerseCore::IHeightModifier"
constexpr ::JBooth::MicroVerseCore::IHeightModifier* i___JBooth__MicroVerseCore__IHeightModifier() noexcept;

/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* i___JBooth__MicroVerseCore__IModifier() noexcept;

static inline void setStaticF__AlphaMapSize(int32_t  value) ;

static inline void setStaticF__ConnectHeight(int32_t  value) ;

static inline void setStaticF__HeightScaleClamp(int32_t  value) ;

static inline void setStaticF__NoiseUV(int32_t  value) ;

static inline void setStaticF__RealSize(int32_t  value) ;

static inline void setStaticF__StampBounds(int32_t  value) ;

static inline void setStaticF__StampTex(int32_t  value) ;

static inline void setStaticF__Transform(int32_t  value) ;

static inline void setStaticF__YBounds(int32_t  value) ;

static inline void setStaticF_cam(::UnityW<::UnityEngine::Camera>  value) ;

static inline void setStaticF_meshShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_squeezeShader(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method set_targetDepthTexture, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_targetDepthTexture(::UnityEngine::RenderTexture*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshStamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshStamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshStamp(MeshStamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshStamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshStamp(MeshStamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18049};

/// @brief Field targetObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetObject;

/// @brief Field hideRenderers, offset: 0x38, size: 0x1, def value: None
 bool  ___hideRenderers;

/// @brief Field offset, offset: 0x3c, size: 0x4, def value: None
 float_t  ___offset;

/// @brief Field heightScale, offset: 0x40, size: 0x4, def value: None
 float_t  ___heightScale;

/// @brief Field heightClamp, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___heightClamp;

/// @brief Field resolution, offset: 0x4c, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::MeshStamp_Resolution  ___resolution;

/// @brief Field <targetDepthTexture>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____targetDepthTexture_k__BackingField;

/// @brief Field falloff, offset: 0x58, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::FalloffFilter*  ___falloff;

/// @brief Field blur, offset: 0x60, size: 0x4, def value: None
 float_t  ___blur;

/// @brief Field blendMode, offset: 0x64, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::MeshStamp_BlendMode  ___blendMode;

/// @brief Field connectHeight, offset: 0x68, size: 0x4, def value: None
 float_t  ___connectHeight;

/// @brief Field material, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___material;

/// @brief Field squeeze, offset: 0x78, size: 0x4, def value: None
 float_t  ___squeeze;

/// @brief Field squash, offset: 0x7c, size: 0x4, def value: None
 float_t  ___squash;

/// @brief Field squeezeMaterial, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___squeezeMaterial;

/// @brief Field tempFilters, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  ___tempFilters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___targetObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___hideRenderers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___offset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___heightScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___heightClamp) == 0x44, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___resolution) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ____targetDepthTexture_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___falloff) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___blur) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___blendMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___connectHeight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___material) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___squeeze) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___squash) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___squeezeMaterial) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::MeshStamp, ___tempFilters) == 0x88, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::MeshStamp) == 0x90, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
