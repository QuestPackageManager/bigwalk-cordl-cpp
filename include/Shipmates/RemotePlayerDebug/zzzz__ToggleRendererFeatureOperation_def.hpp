#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleRendererFeatureOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleRendererFeatureOperation)
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleRendererFeatureOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation*, "Shipmates.RemotePlayerDebug", "ToggleRendererFeatureOperation");
// Dependencies Shipmates.RemotePlayerDebug.BaseJSRemoteDebuggingOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleRendererFeatureOperation
class CORDL_TYPE ToggleRendererFeatureOperation : public ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation {
public:
// Declarations
/// @brief Method GetFeatureByName, addr 0x1803b4570, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature> GetFeatureByName(::StringW  featureName) ;

/// @brief Method GetRendererData, addr 0x1803b4660, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> GetRendererData() ;

static inline ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation* New_ctor() ;

/// @brief Method ToggleFeatureEnabled, addr 0x1803b46b0, size 0x110, virtual false, abstract: false, final false
inline bool ToggleFeatureEnabled(::StringW  featureName) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleRendererFeatureOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleRendererFeatureOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleRendererFeatureOperation(ToggleRendererFeatureOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleRendererFeatureOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleRendererFeatureOperation(ToggleRendererFeatureOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5725};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
