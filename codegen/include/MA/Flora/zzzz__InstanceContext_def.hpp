#pragma once
// IWYU pragma private; include "MA/Flora/InstanceContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__DrawManager_def.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__NativeData_1_def.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_def.hpp"
#include "MA/Flora/zzzz__TemplateManager_def.hpp"
#include "MA/Flora/zzzz__TerrainManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InstanceContext)
namespace MA::Flora {
struct CullingGrid;
}
namespace MA::Flora {
struct DrawManager;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct InstanceBuffer;
}
namespace MA::Flora {
struct InstanceManager;
}
namespace MA::Flora {
template<typename T>
struct NativeDataReference_1;
}
namespace MA::Flora {
struct StreamingSphereManager;
}
namespace MA::Flora {
struct TemplateManager;
}
namespace MA::Flora {
struct TerrainManager;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace MA::Flora {
struct InstanceContext;
}
// Write type traits
MARK_VAL_T(::MA::Flora::InstanceContext);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceContext, "MA.Flora", "InstanceContext");
// Dependencies MA.Flora.CullingGrid, MA.Flora.DrawManager, MA.Flora.InstanceBuffer, MA.Flora.InstanceManager, MA.Flora.NativeData`1<T>, MA.Flora.StreamingSphereManager, MA.Flora.TemplateManager, MA.Flora.TerrainManager
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceContext
struct CORDL_TYPE InstanceContext {
public:
// Declarations
 __declspec(property(get=get_CullingGrid)) ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  CullingGrid;

 __declspec(property(get=get_DrawManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  DrawManager;

 __declspec(property(get=get_InstanceBuffer)) ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  InstanceBuffer;

 __declspec(property(get=get_InstanceManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  InstanceManager;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_StreamingManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  StreamingManager;

 __declspec(property(get=get_TemplateManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager>  TemplateManager;

 __declspec(property(get=get_TerrainManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::TerrainManager>  TerrainManager;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x181481c00, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x181481c70, size 0x2b0, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::FloraRuntimeResources*  resources) ;

/// @brief Method get_CullingGrid, addr 0x181481f20, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> get_CullingGrid() ;

/// @brief Method get_DrawManager, addr 0x181481f60, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager> get_DrawManager() ;

/// @brief Method get_InstanceBuffer, addr 0x181481fa0, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer> get_InstanceBuffer() ;

/// @brief Method get_InstanceManager, addr 0x181481fe0, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> get_InstanceManager() ;

/// @brief Method get_IsCreated, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_StreamingManager, addr 0x181482020, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager> get_StreamingManager() ;

/// @brief Method get_TemplateManager, addr 0x181482060, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::TemplateManager> get_TemplateManager() ;

/// @brief Method get_TerrainManager, addr 0x1814820a0, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::NativeDataReference_1<::MA::Flora::TerrainManager> get_TerrainManager() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceContext() ;

// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: None }, CppParam { name: "m_CullingGrid", ty: "::MA::Flora::NativeData_1<::MA::Flora::CullingGrid>", modifiers: "", def_value: None }, CppParam { name: "m_DrawManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::DrawManager>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::TemplateManager>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceBuffer", ty: "::MA::Flora::NativeData_1<::MA::Flora::InstanceBuffer>", modifiers: "", def_value: None }, CppParam { name: "m_StreamingManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::StreamingSphereManager>", modifiers: "", def_value: None }, CppParam { name: "m_TerrainManager", ty: "::MA::Flora::NativeData_1<::MA::Flora::TerrainManager>", modifiers: "", def_value: None }]
constexpr InstanceContext(::MA::Flora::NativeData_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeData_1<::MA::Flora::CullingGrid>  m_CullingGrid, ::MA::Flora::NativeData_1<::MA::Flora::DrawManager>  m_DrawManager, ::MA::Flora::NativeData_1<::MA::Flora::TemplateManager>  m_TemplateManager, ::MA::Flora::NativeData_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer, ::MA::Flora::NativeData_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager, ::MA::Flora::NativeData_1<::MA::Flora::TerrainManager>  m_TerrainManager) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12925};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field m_InstanceManager, offset: 0x0, size: 0x10, def value: None
 ::MA::Flora::NativeData_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_CullingGrid, offset: 0x10, size: 0x10, def value: None
 ::MA::Flora::NativeData_1<::MA::Flora::CullingGrid>  m_CullingGrid;

/// @brief Field m_DrawManager, offset: 0x20, size: 0x10, def value: None
 ::MA::Flora::NativeData_1<::MA::Flora::DrawManager>  m_DrawManager;

/// @brief Field m_TemplateManager, offset: 0x30, size: 0x10, def value: None
 ::MA::Flora::NativeData_1<::MA::Flora::TemplateManager>  m_TemplateManager;

/// @brief Field m_InstanceBuffer, offset: 0x40, size: 0x10, def value: None
 ::MA::Flora::NativeData_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer;

/// @brief Field m_StreamingManager, offset: 0x50, size: 0x10, def value: None
 ::MA::Flora::NativeData_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager;

/// @brief Field m_TerrainManager, offset: 0x60, size: 0x10, def value: None
 ::MA::Flora::NativeData_1<::MA::Flora::TerrainManager>  m_TerrainManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceContext, m_InstanceManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceContext, m_CullingGrid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceContext, m_DrawManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceContext, m_TemplateManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceContext, m_InstanceBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceContext, m_StreamingManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceContext, m_TerrainManager) == 0x60, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceContext) == 0x70, "Size mismatch!");

} // namespace end def MA::Flora
