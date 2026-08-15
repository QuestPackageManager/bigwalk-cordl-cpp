#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplineLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineLodInputData)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
namespace WaveHarmonic::Crest::Splines {
class IReceiveSplineChangeMessages;
}
namespace WaveHarmonic::Crest::Splines {
class Spline;
}
namespace WaveHarmonic::Crest {
class Lod;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class SplineLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::SplineLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::SplineLodInputData*, "WaveHarmonic.Crest.Splines", "SplineLodInputData");
// Dependencies UnityEngine.Vector3, WaveHarmonic.Crest.LodInputData
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.SplineLodInputData
class CORDL_TYPE SplineLodInputData : public ::WaveHarmonic::Crest::LodInputData {
public:
// Declarations
 __declspec(property(get=get_DefaultCustomSplineData)) ::UnityEngine::Vector4  DefaultCustomSplineData;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_Mesh)) ::UnityW<::UnityEngine::Mesh>  Mesh;

 __declspec(property(get=get_OverrideRadius, put=set_OverrideRadius)) bool  OverrideRadius;

 __declspec(property(get=get_OverrideSplineSettings, put=set_OverrideSplineSettings)) bool  OverrideSplineSettings;

 __declspec(property(get=get_OverrideSubdivisions, put=set_OverrideSubdivisions)) bool  OverrideSubdivisions;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Spline, put=set_Spline)) ::UnityW<::WaveHarmonic::Crest::Splines::Spline>  Spline;

 __declspec(property(get=get_SplineShader)) ::UnityW<::UnityEngine::Shader>  SplineShader;

 __declspec(property(get=get_Subdivisions, put=set_Subdivisions)) int32_t  Subdivisions;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _IsDirty, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDirty, put=__cordl_internal_set__IsDirty)) bool  _IsDirty;

/// @brief Field _Material, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Material, put=__cordl_internal_set__Material)) ::UnityW<::UnityEngine::Material>  _Material;

/// @brief Field _Mesh, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mesh, put=__cordl_internal_set__Mesh)) ::UnityW<::UnityEngine::Mesh>  _Mesh;

/// @brief Field _OverrideRadius, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideRadius, put=__cordl_internal_set__OverrideRadius)) bool  _OverrideRadius;

/// @brief Field _OverrideSplineSettings, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideSplineSettings, put=__cordl_internal_set__OverrideSplineSettings)) bool  _OverrideSplineSettings;

/// @brief Field _OverrideSubdivisions, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideSubdivisions, put=__cordl_internal_set__OverrideSubdivisions)) bool  _OverrideSubdivisions;

/// @brief Field _Radius, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Radius, put=__cordl_internal_set__Radius)) float_t  _Radius;

/// @brief Field _Spline, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Spline, put=__cordl_internal_set__Spline)) ::UnityW<::WaveHarmonic::Crest::Splines::Spline>  _Spline;

/// @brief Field _SplineBoundingPoints, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__SplineBoundingPoints, put=__cordl_internal_set__SplineBoundingPoints)) ::ArrayW<::UnityEngine::Vector3>  _SplineBoundingPoints;

/// @brief Field _Subdivisions, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__Subdivisions, put=__cordl_internal_set__Subdivisions)) int32_t  _Subdivisions;

/// @brief Convert operator to "::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages"
constexpr operator  ::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*() noexcept;

/// @brief Method CreateOrUpdateSplineMesh, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CreateOrUpdateSplineMesh() ;

/// @brief Method Draw, addr 0x18256f820, size 0x120, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Component*  component, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  slice) ;

/// @brief Method GetRadius, addr 0x18256f940, size 0x50, virtual false, abstract: false, final false
inline float_t GetRadius() ;

/// @brief Method GetSubdivisions, addr 0x18256f990, size 0x50, virtual false, abstract: false, final false
inline int32_t GetSubdivisions() ;

static inline ::WaveHarmonic::Crest::Splines::SplineLodInputData* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18256f9e0, size 0x30, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1815f45f0, size 0x20, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMigrate, addr 0x18256fa10, size 0x20, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method OnUpdate, addr 0x18256fa30, size 0x90, virtual true, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method RecalculateBounds, addr 0x18256fac0, size 0xb0, virtual true, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateRect, addr 0x18256fb70, size 0xd0, virtual true, abstract: false, final false
inline void RecalculateRect() ;

/// @brief Method SetOverrideSplineSettings, addr 0x18256fc40, size 0x20, virtual false, abstract: false, final false
inline void SetOverrideSplineSettings(bool  previous, bool  current, bool  force) ;

/// @brief Method WaveHarmonic.Crest.Splines.IReceiveSplineChangeMessages.OnSplineChange, addr 0x1804353c0, size 0x10, virtual true, abstract: false, final true
inline void WaveHarmonic_Crest_Splines_IReceiveSplineChangeMessages_OnSplineChange() ;

constexpr bool const& __cordl_internal_get__IsDirty() const;

constexpr bool& __cordl_internal_get__IsDirty() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__Material() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__Mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__Mesh() ;

constexpr bool const& __cordl_internal_get__OverrideRadius() const;

constexpr bool& __cordl_internal_get__OverrideRadius() ;

constexpr bool const& __cordl_internal_get__OverrideSplineSettings() const;

constexpr bool& __cordl_internal_get__OverrideSplineSettings() ;

constexpr bool const& __cordl_internal_get__OverrideSubdivisions() const;

constexpr bool& __cordl_internal_get__OverrideSubdivisions() ;

constexpr float_t const& __cordl_internal_get__Radius() const;

constexpr float_t& __cordl_internal_get__Radius() ;

constexpr ::UnityW<::WaveHarmonic::Crest::Splines::Spline> const& __cordl_internal_get__Spline() const;

constexpr ::UnityW<::WaveHarmonic::Crest::Splines::Spline>& __cordl_internal_get__Spline() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__SplineBoundingPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__SplineBoundingPoints() ;

constexpr int32_t const& __cordl_internal_get__Subdivisions() const;

constexpr int32_t& __cordl_internal_get__Subdivisions() ;

constexpr void __cordl_internal_set__IsDirty(bool  value) ;

constexpr void __cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__OverrideRadius(bool  value) ;

constexpr void __cordl_internal_set__OverrideSplineSettings(bool  value) ;

constexpr void __cordl_internal_set__OverrideSubdivisions(bool  value) ;

constexpr void __cordl_internal_set__Radius(float_t  value) ;

constexpr void __cordl_internal_set__Spline(::UnityW<::WaveHarmonic::Crest::Splines::Spline>  value) ;

constexpr void __cordl_internal_set__SplineBoundingPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__Subdivisions(int32_t  value) ;

/// @brief Method .ctor, addr 0x18256fc60, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCustomSplineData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector4 get_DefaultCustomSplineData() ;

/// @brief Method get_IsEnabled, addr 0x18256fcb0, size 0x40, virtual true, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method get_Mesh, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Mesh() ;

/// @brief Method get_OverrideRadius, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideRadius() ;

/// @brief Method get_OverrideSplineSettings, addr 0x1802e56b0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideSplineSettings() ;

/// @brief Method get_OverrideSubdivisions, addr 0x1802e75b0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideSubdivisions() ;

/// @brief Method get_Radius, addr 0x18256f940, size 0x50, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Spline, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::Splines::Spline> get_Spline() ;

/// @brief Method get_SplineShader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_SplineShader() ;

/// @brief Method get_Subdivisions, addr 0x18256f990, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Subdivisions() ;

/// @brief Method get_Version, addr 0x182550980, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Convert to "::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages"
constexpr ::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages* i___WaveHarmonic__Crest__Splines__IReceiveSplineChangeMessages() noexcept;

/// @brief Method set_OverrideRadius, addr 0x1803de5b0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideRadius(bool  value) ;

/// @brief Method set_OverrideSplineSettings, addr 0x18256fcf0, size 0x20, virtual false, abstract: false, final false
inline void set_OverrideSplineSettings(bool  value) ;

/// @brief Method set_OverrideSubdivisions, addr 0x1803ac420, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideSubdivisions(bool  value) ;

/// @brief Method set_Radius, addr 0x18046fb50, size 0x10, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_Spline, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_Spline(::WaveHarmonic::Crest::Splines::Spline*  value) ;

/// @brief Method set_Subdivisions, addr 0x180de9f50, size 0xe0, virtual false, abstract: false, final false
inline void set_Subdivisions(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineLodInputData(SplineLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineLodInputData(SplineLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21090};

/// @brief Field _Spline, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::Splines::Spline>  ____Spline;

/// @brief Field _OverrideRadius, offset: 0x58, size: 0x1, def value: None
 bool  ____OverrideRadius;

/// @brief Field _Radius, offset: 0x5c, size: 0x4, def value: None
 float_t  ____Radius;

/// @brief Field _OverrideSubdivisions, offset: 0x60, size: 0x1, def value: None
 bool  ____OverrideSubdivisions;

/// @brief Field _Subdivisions, offset: 0x64, size: 0x4, def value: None
 int32_t  ____Subdivisions;

/// @brief Field _Mesh, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____Mesh;

/// @brief Field _SplineBoundingPoints, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____SplineBoundingPoints;

/// @brief Field _Material, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____Material;

/// @brief Field _IsDirty, offset: 0x80, size: 0x1, def value: None
 bool  ____IsDirty;

/// @brief Field _OverrideSplineSettings, offset: 0x81, size: 0x1, def value: None
 bool  ____OverrideSplineSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____Spline) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____OverrideRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____Radius) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____OverrideSubdivisions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____Subdivisions) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____Mesh) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____SplineBoundingPoints) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____Material) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____IsDirty) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::SplineLodInputData, ____OverrideSplineSettings) == 0x81, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::SplineLodInputData) == 0x88, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
