#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/OcclusionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "JBooth/MicroVerseCore/zzzz__StampData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionData)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class OcclusionData;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::OcclusionData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::OcclusionData*, "JBooth.MicroVerseCore", "OcclusionData");
// Dependencies JBooth.MicroVerseCore.StampData
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.OcclusionData
class CORDL_TYPE OcclusionData : public ::JBooth::MicroVerseCore::StampData {
public:
// Declarations
/// @brief Field combineSDFShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_combineSDFShader, put=setStaticF_combineSDFShader)) ::UnityW<::UnityEngine::Shader>  combineSDFShader;

/// @brief Field currentObjectMask, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObjectMask, put=__cordl_internal_set_currentObjectMask)) ::UnityW<::UnityEngine::RenderTexture>  currentObjectMask;

/// @brief Field currentObjectSDF, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentObjectSDF, put=__cordl_internal_set_currentObjectSDF)) ::UnityW<::UnityEngine::RenderTexture>  currentObjectSDF;

/// @brief Field currentTreeMask, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTreeMask, put=__cordl_internal_set_currentTreeMask)) ::UnityW<::UnityEngine::RenderTexture>  currentTreeMask;

/// @brief Field currentTreeSDF, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTreeSDF, put=__cordl_internal_set_currentTreeSDF)) ::UnityW<::UnityEngine::RenderTexture>  currentTreeSDF;

/// @brief Field objectMask, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectMask, put=__cordl_internal_set_objectMask)) ::UnityW<::UnityEngine::RenderTexture>  objectMask;

/// @brief Field objectSDF, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectSDF, put=__cordl_internal_set_objectSDF)) ::UnityW<::UnityEngine::RenderTexture>  objectSDF;

/// @brief Field terrainMask, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainMask, put=__cordl_internal_set_terrainMask)) ::UnityW<::UnityEngine::RenderTexture>  terrainMask;

/// @brief Field treeSDF, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeSDF, put=__cordl_internal_set_treeSDF)) ::UnityW<::UnityEngine::RenderTexture>  treeSDF;

/// @brief Method Dispose, addr 0x181444cf0, size 0x160, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::JBooth::MicroVerseCore::OcclusionData* New_ctor(::UnityEngine::Terrain*  terrain, int32_t  maskSize) ;

/// @brief Method RenderObjectSDF, addr 0x181444e50, size 0x2a0, virtual false, abstract: false, final false
inline void RenderObjectSDF(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  ods, bool  others) ;

/// @brief Method RenderTreeSDF, addr 0x1814450f0, size 0x2c0, virtual false, abstract: false, final false
inline void RenderTreeSDF(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  ods, bool  others) ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_currentObjectMask() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_currentObjectMask() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_currentObjectSDF() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_currentObjectSDF() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_currentTreeMask() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_currentTreeMask() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_currentTreeSDF() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_currentTreeSDF() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_objectMask() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_objectMask() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_objectSDF() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_objectSDF() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_terrainMask() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_terrainMask() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_treeSDF() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_treeSDF() ;

constexpr void __cordl_internal_set_currentObjectMask(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_currentObjectSDF(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_currentTreeMask(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_currentTreeSDF(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_objectMask(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_objectSDF(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_terrainMask(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_treeSDF(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x1814453b0, size 0x200, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain, int32_t  maskSize) ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_combineSDFShader() ;

static inline void setStaticF_combineSDFShader(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OcclusionData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OcclusionData(OcclusionData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OcclusionData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OcclusionData(OcclusionData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18051};

/// @brief Field terrainMask, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___terrainMask;

/// @brief Field treeSDF, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___treeSDF;

/// @brief Field currentTreeMask, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___currentTreeMask;

/// @brief Field currentTreeSDF, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___currentTreeSDF;

/// @brief Field objectSDF, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___objectSDF;

/// @brief Field currentObjectMask, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___currentObjectMask;

/// @brief Field currentObjectSDF, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___currentObjectSDF;

/// @brief Field objectMask, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___objectMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___terrainMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___treeSDF) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___currentTreeMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___currentTreeSDF) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___objectSDF) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___currentObjectMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___currentObjectSDF) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::OcclusionData, ___objectMask) == 0x50, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::OcclusionData) == 0x58, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
