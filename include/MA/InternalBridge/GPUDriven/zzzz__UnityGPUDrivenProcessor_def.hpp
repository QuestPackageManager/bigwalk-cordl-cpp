#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityGPUDrivenProcessor)
namespace MA::InternalBridge::GPUDriven {
class UnityGPUDrivenLODGroupDataCallback;
}
namespace MA::InternalBridge::GPUDriven {
class UnityGPUDrivenProcessor___c__DisplayClass12_0;
}
namespace MA::InternalBridge::GPUDriven {
class UnityGPURendererDataCallback;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace UnityEngine::Rendering {
struct GPUDrivenLODGroupData;
}
namespace UnityEngine::Rendering {
class GPUDrivenProcessor;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
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
namespace MA::InternalBridge::GPUDriven {
class UnityGPUDrivenProcessor;
}
namespace MA::InternalBridge::GPUDriven {
class UnityGPUDrivenProcessor___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*);
MARK_REF_T(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor*, "MA.InternalBridge.GPUDriven", "UnityGPUDrivenProcessor");
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0*, "MA.InternalBridge.GPUDriven", "UnityGPUDrivenProcessor/<>c__DisplayClass12_0");
// Dependencies System.Object
namespace MA::InternalBridge::GPUDriven {
// Is value type: false
// CS Name: MA.InternalBridge.GPUDriven.UnityGPUDrivenProcessor/<>c__DisplayClass12_0
class CORDL_TYPE UnityGPUDrivenProcessor___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*  callback;

static inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <DispatchLODGroupData>b__0, addr 0x181ecdd80, size 0xb0, virtual false, abstract: false, final false
inline void _DispatchLODGroupData_b__0(::by_ref<::UnityEngine::Rendering::GPUDrivenLODGroupData>  lodGroupData) ;

constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback* const& __cordl_internal_get_callback() const;

constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityGPUDrivenProcessor___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityGPUDrivenProcessor___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityGPUDrivenProcessor___c__DisplayClass12_0(UnityGPUDrivenProcessor___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityGPUDrivenProcessor___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityGPUDrivenProcessor___c__DisplayClass12_0(UnityGPUDrivenProcessor___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21134};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0) == 0x18, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
// Dependencies System.Object
namespace MA::InternalBridge::GPUDriven {
// Is value type: false
// CS Name: MA.InternalBridge.GPUDriven.UnityGPUDrivenProcessor
class CORDL_TYPE UnityGPUDrivenProcessor : public ::System::Object {
public:
// Declarations
using __c__DisplayClass12_0 = ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor___c__DisplayClass12_0;

 __declspec(property(get=get_enableMaterialFilters, put=set_enableMaterialFilters)) bool  enableMaterialFilters;

 __declspec(property(get=get_enablePartialRendering, put=set_enablePartialRendering)) bool  enablePartialRendering;

/// @brief Field m_Callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Callback, put=__cordl_internal_set_m_Callback)) ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*  m_Callback;

/// @brief Field m_GPUDrivenProcessor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GPUDrivenProcessor, put=__cordl_internal_set_m_GPUDrivenProcessor)) ::UnityEngine::Rendering::GPUDrivenProcessor*  m_GPUDrivenProcessor;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DisableGPUDrivenRendering, addr 0x181ece170, size 0x30, virtual false, abstract: false, final false
inline void DisableGPUDrivenRendering(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  renderersID) ;

/// @brief Method DispatchLODGroupData, addr 0x181ece1a0, size 0xa0, virtual false, abstract: false, final false
inline void DispatchLODGroupData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  lodGroupID, ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*  callback) ;

/// @brief Method Dispose, addr 0x181ece240, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnableGPUDrivenRenderingAndDispatchRendererData, addr 0x181ece250, size 0x80, virtual false, abstract: false, final false
inline void EnableGPUDrivenRenderingAndDispatchRendererData(::System::ReadOnlySpan_1<::UnityEngine::EntityId>  renderersID, ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*  callback) ;

/// @brief Method IsValid, addr 0x181ece2d0, size 0x10, virtual false, abstract: false, final false
inline bool IsValid() ;

static inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor* New_ctor() ;

/// @brief Method OnRenderGroupDataChanged, addr 0x181ece2e0, size 0xd0, virtual false, abstract: false, final false
inline void OnRenderGroupDataChanged(::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*  materials) ;

constexpr ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback* const& __cordl_internal_get_m_Callback() const;

constexpr ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*& __cordl_internal_get_m_Callback() ;

constexpr ::UnityEngine::Rendering::GPUDrivenProcessor* const& __cordl_internal_get_m_GPUDrivenProcessor() const;

constexpr ::UnityEngine::Rendering::GPUDrivenProcessor*& __cordl_internal_get_m_GPUDrivenProcessor() ;

constexpr void __cordl_internal_set_m_Callback(::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*  value) ;

constexpr void __cordl_internal_set_m_GPUDrivenProcessor(::UnityEngine::Rendering::GPUDrivenProcessor*  value) ;

/// @brief Method .ctor, addr 0x181ece3b0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enableMaterialFilters, addr 0x181ece3f0, size 0x10, virtual false, abstract: false, final false
inline bool get_enableMaterialFilters() ;

/// @brief Method get_enablePartialRendering, addr 0x181ece400, size 0x10, virtual false, abstract: false, final false
inline bool get_enablePartialRendering() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_enableMaterialFilters, addr 0x181ece410, size 0x10, virtual false, abstract: false, final false
inline void set_enableMaterialFilters(bool  value) ;

/// @brief Method set_enablePartialRendering, addr 0x181ece420, size 0x10, virtual false, abstract: false, final false
inline void set_enablePartialRendering(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityGPUDrivenProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityGPUDrivenProcessor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityGPUDrivenProcessor(UnityGPUDrivenProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityGPUDrivenProcessor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityGPUDrivenProcessor(UnityGPUDrivenProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21135};

/// @brief Field m_GPUDrivenProcessor, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::GPUDrivenProcessor*  ___m_GPUDrivenProcessor;

/// @brief Field m_Callback, offset: 0x18, size: 0x8, def value: None
 ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*  ___m_Callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor, ___m_GPUDrivenProcessor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor, ___m_Callback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::InternalBridge::GPUDriven::UnityGPUDrivenProcessor) == 0x20, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
