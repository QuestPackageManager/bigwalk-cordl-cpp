#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleEnviroRendererFeatureOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__ToggleRendererFeatureOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleEnviroRendererFeatureOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleEnviroRendererFeatureOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleEnviroRendererFeatureOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleEnviroRendererFeatureOperation*, "Shipmates.RemotePlayerDebug", "ToggleEnviroRendererFeatureOperation");
// Dependencies Shipmates.RemotePlayerDebug.ToggleRendererFeatureOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleEnviroRendererFeatureOperation
class CORDL_TYPE ToggleEnviroRendererFeatureOperation : public ::Shipmates::RemotePlayerDebug::ToggleRendererFeatureOperation {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803b3b70, size 0xa0, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleEnviroRendererFeatureOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b3c10, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleEnviroRendererFeatureOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleEnviroRendererFeatureOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleEnviroRendererFeatureOperation(ToggleEnviroRendererFeatureOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleEnviroRendererFeatureOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleEnviroRendererFeatureOperation(ToggleEnviroRendererFeatureOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleEnviroRendererFeatureOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
