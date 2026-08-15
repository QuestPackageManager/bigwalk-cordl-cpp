#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/BaseJSRemoteDebuggingOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BaseJSRemoteDebuggingOperation)
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class BaseJSRemoteDebuggingOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation*, "Shipmates.RemotePlayerDebug", "BaseJSRemoteDebuggingOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.BaseJSRemoteDebuggingOperation
class CORDL_TYPE BaseJSRemoteDebuggingOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Section)) ::StringW  Section;

static inline ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Section, addr 0x1803a8db0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Section() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseJSRemoteDebuggingOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseJSRemoteDebuggingOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseJSRemoteDebuggingOperation(BaseJSRemoteDebuggingOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseJSRemoteDebuggingOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseJSRemoteDebuggingOperation(BaseJSRemoteDebuggingOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5711};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
