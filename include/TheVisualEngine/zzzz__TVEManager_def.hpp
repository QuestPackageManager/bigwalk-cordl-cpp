#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementsOrdering_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementsVisibility_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TVEManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace TheVisualEngine {
class TVEElementBufferData;
}
namespace TheVisualEngine {
class TVEElementRendererData;
}
namespace TheVisualEngine {
class TVEElement;
}
namespace TheVisualEngine {
class TVEGlobalAtmoData;
}
namespace TheVisualEngine {
class TVEGlobalCoatData;
}
namespace TheVisualEngine {
class TVEGlobalFormData;
}
namespace TheVisualEngine {
class TVEGlobalGlowData;
}
namespace TheVisualEngine {
class TVEGlobalPaintData;
}
namespace TheVisualEngine {
class TVEInstanced;
}
namespace TheVisualEngine {
class TVEManager___c;
}
namespace TheVisualEngine {
class TVETerrain;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEManager;
}
namespace TheVisualEngine {
class TVEManager___c;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEManager*);
MARK_REF_T(::TheVisualEngine::TVEManager___c*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEManager*, "TheVisualEngine", "TVEManager");
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEManager___c*, "TheVisualEngine", "TVEManager/<>c");
// Dependencies System.Object
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEManager/<>c
class CORDL_TYPE TVEManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::TheVisualEngine::TVEManager___c*  __9;

/// @brief Field <>9__46_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__46_0, put=setStaticF___9__46_0)) ::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>*  __9__46_0;

static inline ::TheVisualEngine::TVEManager___c* New_ctor() ;

/// @brief Method <SortElementObjects>b__46_0, addr 0x1804b8fb0, size 0x120, virtual false, abstract: false, final false
inline int32_t _SortElementObjects_b__46_0(::TheVisualEngine::TVEElement*  e1, ::TheVisualEngine::TVEElement*  e2) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::TheVisualEngine::TVEManager___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>* getStaticF___9__46_0() ;

static inline void setStaticF___9(::TheVisualEngine::TVEManager___c*  value) ;

static inline void setStaticF___9__46_0(::System::Comparison_1<::UnityW<::TheVisualEngine::TVEElement>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEManager___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEManager___c(TVEManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEManager___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEManager___c(TVEManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TheVisualEngine::TVEManager___c) == 0x10, "Size mismatch!");

} // namespace end def TheVisualEngine
// Dependencies Boxophobic.StyledGUI.StyledMonoBehaviour, TheVisualEngine.TVEElementsOrdering, TheVisualEngine.TVEElementsVisibility, UnityEngine.Matrix4x4
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEManager
class CORDL_TYPE TVEManager : public ::Boxophobic::StyledGUI::StyledMonoBehaviour {
public:
// Declarations
using __c = ::TheVisualEngine::TVEManager___c;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::TheVisualEngine::TVEManager>  Instance;

/// @brief Field autoAssingMainObjects, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoAssingMainObjects, put=__cordl_internal_set_autoAssingMainObjects)) bool  autoAssingMainObjects;

/// @brief Field elementOrdering, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementOrdering, put=__cordl_internal_set_elementOrdering)) ::TheVisualEngine::TVEElementsOrdering  elementOrdering;

/// @brief Field elementRenderer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementRenderer, put=__cordl_internal_set_elementRenderer)) ::TheVisualEngine::TVEElementRendererData*  elementRenderer;

/// @brief Field elementVisibility, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementVisibility, put=__cordl_internal_set_elementVisibility)) ::TheVisualEngine::TVEElementsVisibility  elementVisibility;

/// @brief Field elementVisibilityOld, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_elementVisibilityOld, put=__cordl_internal_set_elementVisibilityOld)) ::TheVisualEngine::TVEElementsVisibility  elementVisibilityOld;

/// @brief Field focusTransform, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusTransform, put=__cordl_internal_set_focusTransform)) ::UnityW<::UnityEngine::Transform>  focusTransform;

/// @brief Field globalAtmoData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalAtmoData, put=__cordl_internal_set_globalAtmoData)) ::TheVisualEngine::TVEGlobalAtmoData*  globalAtmoData;

/// @brief Field globalCoatData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalCoatData, put=__cordl_internal_set_globalCoatData)) ::TheVisualEngine::TVEGlobalCoatData*  globalCoatData;

/// @brief Field globalFormData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalFormData, put=__cordl_internal_set_globalFormData)) ::TheVisualEngine::TVEGlobalFormData*  globalFormData;

/// @brief Field globalGlowData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalGlowData, put=__cordl_internal_set_globalGlowData)) ::TheVisualEngine::TVEGlobalGlowData*  globalGlowData;

/// @brief Field globalPaintData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalPaintData, put=__cordl_internal_set_globalPaintData)) ::TheVisualEngine::TVEGlobalPaintData*  globalPaintData;

/// @brief Field mainCamera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::Camera>  mainCamera;

/// @brief Field mainLight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainLight, put=__cordl_internal_set_mainLight)) ::UnityW<::UnityEngine::Light>  mainLight;

/// @brief Field mainWind, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainWind, put=__cordl_internal_set_mainWind)) ::UnityW<::UnityEngine::GameObject>  mainWind;

/// @brief Field modelViewMatrix, offset 0x118, size 0x40 
 __declspec(property(get=__cordl_internal_get_modelViewMatrix, put=__cordl_internal_set_modelViewMatrix)) ::UnityEngine::Matrix4x4  modelViewMatrix;

/// @brief Field motionControl, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_motionControl, put=__cordl_internal_set_motionControl)) float_t  motionControl;

/// @brief Field playerObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerObject, put=__cordl_internal_set_playerObject)) ::UnityW<::UnityEngine::GameObject>  playerObject;

/// @brief Field playerRadius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerRadius, put=__cordl_internal_set_playerRadius)) float_t  playerRadius;

/// @brief Field projectionMatrix, offset 0xd8, size 0x40 
 __declspec(property(get=__cordl_internal_get_projectionMatrix, put=__cordl_internal_set_projectionMatrix)) ::UnityEngine::Matrix4x4  projectionMatrix;

/// @brief Field propertyBlock, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_propertyBlock, put=__cordl_internal_set_propertyBlock)) ::UnityEngine::MaterialPropertyBlock*  propertyBlock;

/// @brief Field renderDataSet, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderDataSet, put=__cordl_internal_set_renderDataSet)) ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>*  renderDataSet;

/// @brief Field renderElements, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderElements, put=__cordl_internal_set_renderElements)) ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  renderElements;

/// @brief Field renderInstances, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderInstances, put=__cordl_internal_set_renderInstances)) ::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>*  renderInstances;

/// @brief Field sceneTerrains, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneTerrains, put=__cordl_internal_set_sceneTerrains)) ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>*  sceneTerrains;

/// @brief Field seasonControl, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_seasonControl, put=__cordl_internal_set_seasonControl)) float_t  seasonControl;

/// @brief Field sortDirty, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get_sortDirty, put=__cordl_internal_set_sortDirty)) bool  sortDirty;

/// @brief Field styledCameraMessaage, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_styledCameraMessaage, put=__cordl_internal_set_styledCameraMessaage)) bool  styledCameraMessaage;

/// @brief Field useShaderMetaSettings, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_useShaderMetaSettings, put=__cordl_internal_set_useShaderMetaSettings)) bool  useShaderMetaSettings;

/// @brief Method CreateRenderBuffer, addr 0x1804a91d0, size 0x690, virtual false, abstract: false, final false
inline void CreateRenderBuffer(::TheVisualEngine::TVEElementBufferData*  renderData) ;

/// @brief Method CreateRenderData, addr 0x1804a9860, size 0x240, virtual false, abstract: false, final false
inline void CreateRenderData(::StringW  renderName) ;

/// @brief Method DestroyRenderBuffers, addr 0x1804a9aa0, size 0x160, virtual false, abstract: false, final false
inline void DestroyRenderBuffers() ;

/// @brief Method DisableElementsRendering, addr 0x1804a9c00, size 0x220, virtual false, abstract: false, final false
inline void DisableElementsRendering() ;

/// @brief Method DisableElementsVisibility, addr 0x1804a9e20, size 0xb0, virtual false, abstract: false, final false
inline void DisableElementsVisibility() ;

/// @brief Method DisableManager, addr 0x1804a9ed0, size 0x1c0, virtual false, abstract: false, final false
inline void DisableManager() ;

/// @brief Method EnableElementsVisibility, addr 0x1804aa090, size 0xb0, virtual false, abstract: false, final false
inline void EnableElementsVisibility() ;

/// @brief Method EnableManager, addr 0x1804aa140, size 0x110, virtual false, abstract: false, final false
inline void EnableManager() ;

/// @brief Method ExecuteRenderBuffers, addr 0x1804aa250, size 0x4d0, virtual false, abstract: false, final false
inline void ExecuteRenderBuffers(bool  isBase) ;

/// @brief Method GetVolumeCoords, addr 0x1804aa720, size 0x240, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVolumeCoords(::TheVisualEngine::TVEElementBufferData*  renderData, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  scale, bool  isBase) ;

/// @brief Method InitElementsRendering, addr 0x1804aa960, size 0xc0, virtual false, abstract: false, final false
inline void InitElementsRendering() ;

/// @brief Method LateUpdate, addr 0x1804aaa20, size 0x200, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MarkSortDirty, addr 0x1804aac20, size 0x10, virtual false, abstract: false, final false
inline void MarkSortDirty() ;

static inline ::TheVisualEngine::TVEManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1804aac30, size 0x30, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1804aac30, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804aac60, size 0x3e0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetElementsRendering, addr 0x1804ab040, size 0xd0, virtual false, abstract: false, final false
inline void SetElementsRendering(::StringW  renderName, bool  isRendering) ;

/// @brief Method SetElementsVisibility, addr 0x1804ab110, size 0x60, virtual false, abstract: false, final false
inline void SetElementsVisibility() ;

/// @brief Method SetGlobalLightingMainLight, addr 0x1804ab170, size 0xb0, virtual false, abstract: false, final false
inline void SetGlobalLightingMainLight() ;

/// @brief Method SetGlobalShaderProperties, addr 0x1804ab220, size 0xa10, virtual false, abstract: false, final false
inline void SetGlobalShaderProperties() ;

/// @brief Method SortElementObjects, addr 0x1804abc30, size 0xe0, virtual false, abstract: false, final false
inline void SortElementObjects() ;

/// @brief Method SubmitRenderBuffers, addr 0x1804abd10, size 0x820, virtual false, abstract: false, final false
inline void SubmitRenderBuffers() ;

/// @brief Method Update, addr 0x1804ac530, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_autoAssingMainObjects() const;

constexpr bool& __cordl_internal_get_autoAssingMainObjects() ;

constexpr ::TheVisualEngine::TVEElementsOrdering const& __cordl_internal_get_elementOrdering() const;

constexpr ::TheVisualEngine::TVEElementsOrdering& __cordl_internal_get_elementOrdering() ;

constexpr ::TheVisualEngine::TVEElementRendererData* const& __cordl_internal_get_elementRenderer() const;

constexpr ::TheVisualEngine::TVEElementRendererData*& __cordl_internal_get_elementRenderer() ;

constexpr ::TheVisualEngine::TVEElementsVisibility const& __cordl_internal_get_elementVisibility() const;

constexpr ::TheVisualEngine::TVEElementsVisibility& __cordl_internal_get_elementVisibility() ;

constexpr ::TheVisualEngine::TVEElementsVisibility const& __cordl_internal_get_elementVisibilityOld() const;

constexpr ::TheVisualEngine::TVEElementsVisibility& __cordl_internal_get_elementVisibilityOld() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_focusTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_focusTransform() ;

constexpr ::TheVisualEngine::TVEGlobalAtmoData* const& __cordl_internal_get_globalAtmoData() const;

constexpr ::TheVisualEngine::TVEGlobalAtmoData*& __cordl_internal_get_globalAtmoData() ;

constexpr ::TheVisualEngine::TVEGlobalCoatData* const& __cordl_internal_get_globalCoatData() const;

constexpr ::TheVisualEngine::TVEGlobalCoatData*& __cordl_internal_get_globalCoatData() ;

constexpr ::TheVisualEngine::TVEGlobalFormData* const& __cordl_internal_get_globalFormData() const;

constexpr ::TheVisualEngine::TVEGlobalFormData*& __cordl_internal_get_globalFormData() ;

constexpr ::TheVisualEngine::TVEGlobalGlowData* const& __cordl_internal_get_globalGlowData() const;

constexpr ::TheVisualEngine::TVEGlobalGlowData*& __cordl_internal_get_globalGlowData() ;

constexpr ::TheVisualEngine::TVEGlobalPaintData* const& __cordl_internal_get_globalPaintData() const;

constexpr ::TheVisualEngine::TVEGlobalPaintData*& __cordl_internal_get_globalPaintData() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_mainLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_mainLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mainWind() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mainWind() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_modelViewMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_modelViewMatrix() ;

constexpr float_t const& __cordl_internal_get_motionControl() const;

constexpr float_t& __cordl_internal_get_motionControl() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerObject() ;

constexpr float_t const& __cordl_internal_get_playerRadius() const;

constexpr float_t& __cordl_internal_get_playerRadius() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_projectionMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_projectionMatrix() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_propertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_propertyBlock() ;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>* const& __cordl_internal_get_renderDataSet() const;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>*& __cordl_internal_get_renderDataSet() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>* const& __cordl_internal_get_renderElements() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*& __cordl_internal_get_renderElements() ;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>* const& __cordl_internal_get_renderInstances() const;

constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>*& __cordl_internal_get_renderInstances() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>* const& __cordl_internal_get_sceneTerrains() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>*& __cordl_internal_get_sceneTerrains() ;

constexpr float_t const& __cordl_internal_get_seasonControl() const;

constexpr float_t& __cordl_internal_get_seasonControl() ;

constexpr bool const& __cordl_internal_get_sortDirty() const;

constexpr bool& __cordl_internal_get_sortDirty() ;

constexpr bool const& __cordl_internal_get_styledCameraMessaage() const;

constexpr bool& __cordl_internal_get_styledCameraMessaage() ;

constexpr bool const& __cordl_internal_get_useShaderMetaSettings() const;

constexpr bool& __cordl_internal_get_useShaderMetaSettings() ;

constexpr void __cordl_internal_set_autoAssingMainObjects(bool  value) ;

constexpr void __cordl_internal_set_elementOrdering(::TheVisualEngine::TVEElementsOrdering  value) ;

constexpr void __cordl_internal_set_elementRenderer(::TheVisualEngine::TVEElementRendererData*  value) ;

constexpr void __cordl_internal_set_elementVisibility(::TheVisualEngine::TVEElementsVisibility  value) ;

constexpr void __cordl_internal_set_elementVisibilityOld(::TheVisualEngine::TVEElementsVisibility  value) ;

constexpr void __cordl_internal_set_focusTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_globalAtmoData(::TheVisualEngine::TVEGlobalAtmoData*  value) ;

constexpr void __cordl_internal_set_globalCoatData(::TheVisualEngine::TVEGlobalCoatData*  value) ;

constexpr void __cordl_internal_set_globalFormData(::TheVisualEngine::TVEGlobalFormData*  value) ;

constexpr void __cordl_internal_set_globalGlowData(::TheVisualEngine::TVEGlobalGlowData*  value) ;

constexpr void __cordl_internal_set_globalPaintData(::TheVisualEngine::TVEGlobalPaintData*  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_mainLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_mainWind(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_modelViewMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_motionControl(float_t  value) ;

constexpr void __cordl_internal_set_playerObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerRadius(float_t  value) ;

constexpr void __cordl_internal_set_projectionMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_renderDataSet(::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>*  value) ;

constexpr void __cordl_internal_set_renderElements(::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  value) ;

constexpr void __cordl_internal_set_renderInstances(::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>*  value) ;

constexpr void __cordl_internal_set_sceneTerrains(::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value) ;

constexpr void __cordl_internal_set_seasonControl(float_t  value) ;

constexpr void __cordl_internal_set_sortDirty(bool  value) ;

constexpr void __cordl_internal_set_styledCameraMessaage(bool  value) ;

constexpr void __cordl_internal_set_useShaderMetaSettings(bool  value) ;

/// @brief Method .ctor, addr 0x1804ac630, size 0x2e0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::TheVisualEngine::TVEManager> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::TheVisualEngine::TVEManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEManager(TVEManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEManager(TVEManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19575};

/// @brief Field motionControl, offset: 0x20, size: 0x4, def value: None
 float_t  ___motionControl;

/// @brief Field seasonControl, offset: 0x24, size: 0x4, def value: None
 float_t  ___seasonControl;

/// @brief Field styledCameraMessaage, offset: 0x28, size: 0x1, def value: None
 bool  ___styledCameraMessaage;

/// @brief Field mainCamera, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mainCamera;

/// @brief Field mainLight, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___mainLight;

/// @brief Field mainWind, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mainWind;

/// @brief Field autoAssingMainObjects, offset: 0x48, size: 0x1, def value: None
 bool  ___autoAssingMainObjects;

/// @brief Field playerObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerObject;

/// @brief Field playerRadius, offset: 0x58, size: 0x4, def value: None
 float_t  ___playerRadius;

/// @brief Field globalCoatData, offset: 0x60, size: 0x8, def value: None
 ::TheVisualEngine::TVEGlobalCoatData*  ___globalCoatData;

/// @brief Field globalPaintData, offset: 0x68, size: 0x8, def value: None
 ::TheVisualEngine::TVEGlobalPaintData*  ___globalPaintData;

/// @brief Field globalAtmoData, offset: 0x70, size: 0x8, def value: None
 ::TheVisualEngine::TVEGlobalAtmoData*  ___globalAtmoData;

/// @brief Field globalGlowData, offset: 0x78, size: 0x8, def value: None
 ::TheVisualEngine::TVEGlobalGlowData*  ___globalGlowData;

/// @brief Field globalFormData, offset: 0x80, size: 0x8, def value: None
 ::TheVisualEngine::TVEGlobalFormData*  ___globalFormData;

/// @brief Field elementVisibility, offset: 0x88, size: 0x4, def value: None
 ::TheVisualEngine::TVEElementsVisibility  ___elementVisibility;

/// @brief Field elementVisibilityOld, offset: 0x8c, size: 0x4, def value: None
 ::TheVisualEngine::TVEElementsVisibility  ___elementVisibilityOld;

/// @brief Field elementOrdering, offset: 0x90, size: 0x4, def value: None
 ::TheVisualEngine::TVEElementsOrdering  ___elementOrdering;

/// @brief Field elementRenderer, offset: 0x98, size: 0x8, def value: None
 ::TheVisualEngine::TVEElementRendererData*  ___elementRenderer;

/// @brief Field useShaderMetaSettings, offset: 0xa0, size: 0x1, def value: None
 bool  ___useShaderMetaSettings;

/// @brief Field renderDataSet, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementBufferData*>*  ___renderDataSet;

/// @brief Field renderElements, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  ___renderElements;

/// @brief Field renderInstances, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::TheVisualEngine::TVEInstanced*>*  ___renderInstances;

/// @brief Field sceneTerrains, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVETerrain>>*  ___sceneTerrains;

/// @brief Field focusTransform, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___focusTransform;

/// @brief Field propertyBlock, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___propertyBlock;

/// @brief Field projectionMatrix, offset: 0xd8, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___projectionMatrix;

/// @brief Field modelViewMatrix, offset: 0x118, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___modelViewMatrix;

/// @brief Field sortDirty, offset: 0x158, size: 0x1, def value: None
 bool  ___sortDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEManager, ___motionControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___seasonControl) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___styledCameraMessaage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___mainCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___mainLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___mainWind) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___autoAssingMainObjects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___playerObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___playerRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___globalCoatData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___globalPaintData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___globalAtmoData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___globalGlowData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___globalFormData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___elementVisibility) == 0x88, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___elementVisibilityOld) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___elementOrdering) == 0x90, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___elementRenderer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___useShaderMetaSettings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___renderDataSet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___renderElements) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___renderInstances) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___sceneTerrains) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___focusTransform) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___propertyBlock) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___projectionMatrix) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___modelViewMatrix) == 0x118, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEManager, ___sortDirty) == 0x158, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEManager) == 0x160, "Size mismatch!");

} // namespace end def TheVisualEngine
