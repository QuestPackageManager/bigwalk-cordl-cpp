#pragma once
// IWYU pragma private; include "MA/InternalBridge/UniversalBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalBridge)
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer;
}
// Forward declare root types
namespace MA::InternalBridge {
class UniversalBridge;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::UniversalBridge*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::UniversalBridge*, "MA.InternalBridge", "UniversalBridge");
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.UniversalBridge
class CORDL_TYPE UniversalBridge : public ::System::Object {
public:
// Declarations
/// @brief Method GetActualRenderingPath, addr 0x18254fc50, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::RenderingMode GetActualRenderingPath(::UnityEngine::Rendering::Universal::UniversalRenderer*  renderer) ;

/// @brief Method GetXrCompatibleScreenHeight, addr 0x18254fc70, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetXrCompatibleScreenHeight(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method GetXrCompatibleScreenWidth, addr 0x18254fca0, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetXrCompatibleScreenWidth(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData) ;

/// @brief Method HasDepthPriming, addr 0x18254fcd0, size 0x20, virtual false, abstract: false, final false
static inline bool HasDepthPriming(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalBridge(UniversalBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalBridge(UniversalBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::UniversalBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
