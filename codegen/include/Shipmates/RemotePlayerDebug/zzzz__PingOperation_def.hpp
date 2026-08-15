#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/PingOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PingOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class PingOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::PingOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::PingOperation*, "Shipmates.RemotePlayerDebug", "PingOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.PingOperation
class CORDL_TYPE PingOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803ab910, size 0x70, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::PingOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803ab980, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PingOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PingOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PingOperation(PingOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PingOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PingOperation(PingOperation const& ) = delete;

/// @brief Field RequestName offset 0xffffffff size 0x8
static constexpr ::ConstString  RequestName{u"ping"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5733};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::PingOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
