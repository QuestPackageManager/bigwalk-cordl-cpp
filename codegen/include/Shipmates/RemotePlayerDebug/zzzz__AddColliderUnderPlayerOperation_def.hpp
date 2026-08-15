#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/AddColliderUnderPlayerOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddColliderUnderPlayerOperation)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class AddColliderUnderPlayerOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation*, "Shipmates.RemotePlayerDebug", "AddColliderUnderPlayerOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.AddColliderUnderPlayerOperation
class CORDL_TYPE AddColliderUnderPlayerOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803a88e0, size 0x430, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

/// @brief Method GetLocalPlayer, addr 0x1803a8d10, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GetLocalPlayer() ;

static inline ::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803a8d90, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddColliderUnderPlayerOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddColliderUnderPlayerOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddColliderUnderPlayerOperation(AddColliderUnderPlayerOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddColliderUnderPlayerOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddColliderUnderPlayerOperation(AddColliderUnderPlayerOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5708};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::AddColliderUnderPlayerOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
