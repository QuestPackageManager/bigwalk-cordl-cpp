#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/GeometryLodInputData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__LodInputData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryLodInputData)
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
namespace WaveHarmonic::Crest {
class Lod;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class GeometryLodInputData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::GeometryLodInputData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::GeometryLodInputData*, "WaveHarmonic.Crest", "GeometryLodInputData");
// Dependencies WaveHarmonic.Crest.LodInputData
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.GeometryLodInputData
class CORDL_TYPE GeometryLodInputData : public ::WaveHarmonic::Crest::LodInputData {
public:
// Declarations
 __declspec(property(get=get_Geometry, put=set_Geometry)) ::UnityW<::UnityEngine::Mesh>  Geometry;

 __declspec(property(get=get_GeometryShader)) ::UnityW<::UnityEngine::Shader>  GeometryShader;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

/// @brief Field _Geometry, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Geometry, put=__cordl_internal_set__Geometry)) ::UnityW<::UnityEngine::Mesh>  _Geometry;

/// @brief Field _Material, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Material, put=__cordl_internal_set__Material)) ::UnityW<::UnityEngine::Material>  _Material;

/// @brief Method Draw, addr 0x182559090, size 0xa0, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Component*  component, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  slices) ;

static inline ::WaveHarmonic::Crest::GeometryLodInputData* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182559130, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x182559140, size 0x160, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RecalculateBounds, addr 0x1825592a0, size 0x90, virtual true, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateRect, addr 0x182559330, size 0x60, virtual true, abstract: false, final false
inline void RecalculateRect() ;

/// @brief Method SetGeometry, addr 0x182559390, size 0x30, virtual false, abstract: false, final false
inline void SetGeometry(::UnityEngine::Mesh*  previous, ::UnityEngine::Mesh*  current) ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__Geometry() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__Geometry() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__Material() ;

constexpr void __cordl_internal_set__Geometry(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x182553b60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Geometry, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_Geometry() ;

/// @brief Method get_GeometryShader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Shader> get_GeometryShader() ;

/// @brief Method get_IsEnabled, addr 0x1805f3820, size 0x10, virtual true, abstract: false, final false
inline bool get_IsEnabled() ;

/// @brief Method set_Geometry, addr 0x1825593c0, size 0x50, virtual false, abstract: false, final false
inline void set_Geometry(::UnityEngine::Mesh*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeometryLodInputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeometryLodInputData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeometryLodInputData(GeometryLodInputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeometryLodInputData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeometryLodInputData(GeometryLodInputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16550};

/// @brief Field _Geometry, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ____Geometry;

/// @brief Field _Material, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____Material;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::GeometryLodInputData, ____Geometry) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::GeometryLodInputData, ____Material) == 0x58, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::GeometryLodInputData) == 0x60, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
