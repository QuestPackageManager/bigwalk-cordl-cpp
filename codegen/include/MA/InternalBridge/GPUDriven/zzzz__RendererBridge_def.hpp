#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/RendererBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RendererBridge)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace MA::InternalBridge::GPUDriven {
class RendererBridge;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::GPUDriven::RendererBridge*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::GPUDriven::RendererBridge*, "MA.InternalBridge.GPUDriven", "RendererBridge");
// Dependencies System.Object
namespace MA::InternalBridge::GPUDriven {
// Is value type: false
// CS Name: MA.InternalBridge.GPUDriven.RendererBridge
class CORDL_TYPE RendererBridge : public ::System::Object {
public:
// Declarations
/// @brief Method HasSmallMeshCulling, addr 0x181eccc60, size 0x10, virtual false, abstract: false, final false
static inline bool HasSmallMeshCulling(::UnityEngine::Renderer*  renderer) ;

/// @brief Method SetAllowGPUDrivenRendering, addr 0x181eccc70, size 0x10, virtual false, abstract: false, final false
static inline void SetAllowGPUDrivenRendering(::UnityEngine::Renderer*  renderer, bool  value) ;

/// @brief Method SetSmallMeshCulling, addr 0x181eccc80, size 0x10, virtual false, abstract: false, final false
static inline void SetSmallMeshCulling(::UnityEngine::Renderer*  renderer, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendererBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendererBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RendererBridge(RendererBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendererBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendererBridge(RendererBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::GPUDriven::RendererBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge::GPUDriven
