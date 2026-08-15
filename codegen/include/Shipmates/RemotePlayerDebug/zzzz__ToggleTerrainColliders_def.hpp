#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleTerrainColliders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleTerrainColliders)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleTerrainColliders;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleTerrainColliders*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleTerrainColliders*, "Shipmates.RemotePlayerDebug", "ToggleTerrainColliders");
// Dependencies Shipmates.RemotePlayerDebug.BaseJSRemoteDebuggingOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleTerrainColliders
class CORDL_TYPE ToggleTerrainColliders : public ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803b4f90, size 0x120, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleTerrainColliders* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b50b0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleTerrainColliders() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleTerrainColliders", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleTerrainColliders(ToggleTerrainColliders && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleTerrainColliders", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleTerrainColliders(ToggleTerrainColliders const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5712};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleTerrainColliders) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
