#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenProcessor)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataCallback;
}
namespace UnityEngine::Rendering {
class GPUDrivenLODGroupDataNativeCallback;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupDataNative;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor___c;
}
namespace UnityEngine::Rendering {
class GPUDrivenRendererDataCallback;
}
namespace UnityEngine::Rendering {
class GPUDrivenRendererDataNativeCallback;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupDataNative;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUDrivenProcessor;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUDrivenProcessor*);
MARK_REF_T(::UnityEngine::Rendering::GPUDrivenProcessor_BindingsMarshaller*);
MARK_REF_T(::UnityEngine::Rendering::GPUDrivenProcessor___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenProcessor*, "UnityEngine.Rendering", "GPUDrivenProcessor");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenProcessor_BindingsMarshaller*, "UnityEngine.Rendering", "GPUDrivenProcessor/BindingsMarshaller");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUDrivenProcessor___c*, "UnityEngine.Rendering", "GPUDrivenProcessor/<>c");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenProcessor/BindingsMarshaller
class CORDL_TYPE GPUDrivenProcessor_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::GPUDrivenProcessor*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUDrivenProcessor_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUDrivenProcessor_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUDrivenProcessor_BindingsMarshaller(GPUDrivenProcessor_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUDrivenProcessor_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUDrivenProcessor_BindingsMarshaller(GPUDrivenProcessor_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11215};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenProcessor_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenProcessor/<>c
class CORDL_TYPE GPUDrivenProcessor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::GPUDrivenProcessor___c*  __9;

static inline ::UnityEngine::Rendering::GPUDrivenProcessor___c* New_ctor() ;

/// @brief Method <.cctor>b__34_0, addr 0x1822a3460, size 0x680, virtual false, abstract: false, final false
inline void __cctor_b__34_0(::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative>  nativeData, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*  callback) ;

/// @brief Method <.cctor>b__34_1, addr 0x1822a3ae0, size 0x2c0, virtual false, abstract: false, final false
inline void __cctor_b__34_1(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupDataNative>  nativeData, ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*  callback) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::GPUDrivenProcessor___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Rendering::GPUDrivenProcessor___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUDrivenProcessor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUDrivenProcessor___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUDrivenProcessor___c(GPUDrivenProcessor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUDrivenProcessor___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUDrivenProcessor___c(GPUDrivenProcessor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenProcessor___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUDrivenProcessor
class CORDL_TYPE GPUDrivenProcessor : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Rendering::GPUDrivenProcessor_BindingsMarshaller;

using __c = ::UnityEngine::Rendering::GPUDrivenProcessor___c;

/// @brief Field <scratchMaterials>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__scratchMaterials_k__BackingField, put=__cordl_internal_set__scratchMaterials_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  _scratchMaterials_k__BackingField;

/// @brief Field <scratchMeshes>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__scratchMeshes_k__BackingField, put=__cordl_internal_set__scratchMeshes_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  _scratchMeshes_k__BackingField;

 __declspec(property(get=get_enableMaterialFilters, put=set_enableMaterialFilters)) bool  enableMaterialFilters;

 __declspec(property(get=get_enablePartialRendering, put=set_enablePartialRendering)) bool  enablePartialRendering;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

/// @brief Field s_NativeLODGroupCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NativeLODGroupCallback, put=setStaticF_s_NativeLODGroupCallback)) ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*  s_NativeLODGroupCallback;

/// @brief Field s_NativeRendererCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NativeRendererCallback, put=setStaticF_s_NativeRendererCallback)) ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*  s_NativeRendererCallback;

 __declspec(property(get=get_scratchMaterials, put=set_scratchMaterials)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  scratchMaterials;

 __declspec(property(get=get_scratchMeshes, put=set_scratchMeshes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  scratchMeshes;

/// @brief Method ClassifyMaterials, addr 0x18229f600, size 0x160, virtual false, abstract: false, final false
static inline int32_t ClassifyMaterials(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  unsupportedMaterialIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  supportedMaterialIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  supportedPackedMaterialDatas) ;

/// @brief Method ClassifyMaterialsImpl, addr 0x18229f4f0, size 0x110, virtual false, abstract: false, final false
static inline int32_t ClassifyMaterialsImpl(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  materialIDs, ::System::Span_1<::UnityEngine::EntityId>  unsupportedMaterialIDs, ::System::Span_1<::UnityEngine::EntityId>  supportedMaterialIDs, ::System::Span_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  supportedPackedMaterialDatas) ;

/// @brief Method ClassifyMaterialsImpl_Injected, addr 0x18229f4e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t ClassifyMaterialsImpl_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  materialIDs, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  unsupportedMaterialIDs, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  supportedMaterialIDs, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  supportedPackedMaterialDatas) ;

/// @brief Method ClearMaterialFilters, addr 0x18229f770, size 0x30, virtual false, abstract: false, final false
inline void ClearMaterialFilters() ;

/// @brief Method ClearMaterialFilters_Injected, addr 0x18229f760, size 0x10, virtual false, abstract: false, final false
static inline void ClearMaterialFilters_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Destroy, addr 0x18229f7a0, size 0x30, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method DisableGPUDrivenRendering, addr 0x18229f7e0, size 0x70, virtual false, abstract: false, final false
inline void DisableGPUDrivenRendering(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  renderersID) ;

/// @brief Method DisableGPUDrivenRendering_Injected, addr 0x18229f7d0, size 0x10, virtual false, abstract: false, final false
static inline void DisableGPUDrivenRendering_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  renderersID) ;

/// @brief Method DispatchLODGroupData, addr 0x18229f8f0, size 0xe0, virtual false, abstract: false, final false
inline void DispatchLODGroupData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  lodGroupID, ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*  callback) ;

/// @brief Method DispatchLODGroupData, addr 0x18229f860, size 0x90, virtual false, abstract: false, final false
inline void DispatchLODGroupData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  lodGroupID, ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*  callback, ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*  param) ;

/// @brief Method DispatchLODGroupData_Injected, addr 0x18229f850, size 0x10, virtual false, abstract: false, final false
static inline void DispatchLODGroupData_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  lodGroupID, ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*  callback, ::UnityEngine::Rendering::GPUDrivenLODGroupDataCallback*  param) ;

/// @brief Method Dispose, addr 0x18229f9d0, size 0x60, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnableGPUDrivenRenderingAndDispatchRendererData, addr 0x18229fa40, size 0x130, virtual false, abstract: false, final false
inline void EnableGPUDrivenRenderingAndDispatchRendererData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  renderersID, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*  callback, bool  materialUpdateOnly) ;

/// @brief Method EnableGPUDrivenRenderingAndDispatchRendererData, addr 0x18229fb70, size 0xc0, virtual false, abstract: false, final false
inline void EnableGPUDrivenRenderingAndDispatchRendererData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  renderersID, ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*  callback, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*  param, bool  materialUpdateOnly) ;

/// @brief Method EnableGPUDrivenRenderingAndDispatchRendererData_Injected, addr 0x18229fa30, size 0x10, virtual false, abstract: false, final false
static inline void EnableGPUDrivenRenderingAndDispatchRendererData_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  renderersID, ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*  callback, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials, ::UnityEngine::Rendering::GPUDrivenRendererDataCallback*  param, bool  materialUpdateOnly) ;

/// @brief Method Finalize, addr 0x18229f7a0, size 0x30, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Internal_Create, addr 0x18229fc30, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Create() ;

/// @brief Method Internal_Destroy, addr 0x18229fc40, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  ptr) ;

static inline ::UnityEngine::Rendering::GPUDrivenProcessor* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get__scratchMaterials_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get__scratchMaterials_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& __cordl_internal_get__scratchMeshes_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& __cordl_internal_get__scratchMeshes_k__BackingField() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set__scratchMaterials_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set__scratchMeshes_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x18229fea0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback* getStaticF_s_NativeLODGroupCallback() ;

static inline ::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback* getStaticF_s_NativeRendererCallback() ;

/// @brief Method get_enableMaterialFilters, addr 0x18229ff30, size 0x30, virtual false, abstract: false, final false
inline bool get_enableMaterialFilters() ;

/// @brief Method get_enableMaterialFilters_Injected, addr 0x18229ff20, size 0x10, virtual false, abstract: false, final false
static inline bool get_enableMaterialFilters_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enablePartialRendering, addr 0x18229ff70, size 0x30, virtual false, abstract: false, final false
inline bool get_enablePartialRendering() ;

/// @brief Method get_enablePartialRendering_Injected, addr 0x18229ff60, size 0x10, virtual false, abstract: false, final false
static inline bool get_enablePartialRendering_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_scratchMaterials, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* get_scratchMaterials() ;

/// @brief Method get_scratchMeshes, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* get_scratchMeshes() ;

static inline void setStaticF_s_NativeLODGroupCallback(::UnityEngine::Rendering::GPUDrivenLODGroupDataNativeCallback*  value) ;

static inline void setStaticF_s_NativeRendererCallback(::UnityEngine::Rendering::GPUDrivenRendererDataNativeCallback*  value) ;

/// @brief Method set_enableMaterialFilters, addr 0x18229ffb0, size 0x30, virtual false, abstract: false, final false
inline void set_enableMaterialFilters(bool  value) ;

/// @brief Method set_enableMaterialFilters_Injected, addr 0x18229ffa0, size 0x10, virtual false, abstract: false, final false
static inline void set_enableMaterialFilters_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_enablePartialRendering, addr 0x18229fff0, size 0x40, virtual false, abstract: false, final false
inline void set_enablePartialRendering(bool  value) ;

/// @brief Method set_enablePartialRendering_Injected, addr 0x18229ffe0, size 0x10, virtual false, abstract: false, final false
static inline void set_enablePartialRendering_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_scratchMaterials, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_scratchMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

/// @brief Method set_scratchMeshes, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_scratchMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUDrivenProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUDrivenProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUDrivenProcessor(GPUDrivenProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUDrivenProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUDrivenProcessor(GPUDrivenProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11217};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

/// @brief Field <scratchMeshes>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  ____scratchMeshes_k__BackingField;

/// @brief Field <scratchMaterials>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ____scratchMaterials_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenProcessor, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenProcessor, ____scratchMeshes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenProcessor, ____scratchMaterials_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUDrivenProcessor) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
