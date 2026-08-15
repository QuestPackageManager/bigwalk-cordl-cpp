#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/DecreaseShadowCachingMaxUpdatesOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__BaseShadowCachingOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DecreaseShadowCachingMaxUpdatesOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class DecreaseShadowCachingMaxUpdatesOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::DecreaseShadowCachingMaxUpdatesOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::DecreaseShadowCachingMaxUpdatesOperation*, "Shipmates.RemotePlayerDebug", "DecreaseShadowCachingMaxUpdatesOperation");
// Dependencies Shipmates.RemotePlayerDebug.BaseShadowCachingOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.DecreaseShadowCachingMaxUpdatesOperation
class CORDL_TYPE DecreaseShadowCachingMaxUpdatesOperation : public ::Shipmates::RemotePlayerDebug::BaseShadowCachingOperation {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803aa020, size 0x190, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::DecreaseShadowCachingMaxUpdatesOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803aa1b0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecreaseShadowCachingMaxUpdatesOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecreaseShadowCachingMaxUpdatesOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecreaseShadowCachingMaxUpdatesOperation(DecreaseShadowCachingMaxUpdatesOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecreaseShadowCachingMaxUpdatesOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecreaseShadowCachingMaxUpdatesOperation(DecreaseShadowCachingMaxUpdatesOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5737};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::DecreaseShadowCachingMaxUpdatesOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
