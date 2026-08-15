#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/IncreaseNormalBiasOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IncreaseNormalBiasOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class IncreaseNormalBiasOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::IncreaseNormalBiasOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::IncreaseNormalBiasOperation*, "Shipmates.RemotePlayerDebug", "IncreaseNormalBiasOperation");
// Dependencies Shipmates.RemotePlayerDebug.BaseJSRemoteDebuggingOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.IncreaseNormalBiasOperation
class CORDL_TYPE IncreaseNormalBiasOperation : public ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803aa910, size 0x110, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::IncreaseNormalBiasOperation* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803aaa20, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IncreaseNormalBiasOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IncreaseNormalBiasOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IncreaseNormalBiasOperation(IncreaseNormalBiasOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncreaseNormalBiasOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncreaseNormalBiasOperation(IncreaseNormalBiasOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5719};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::IncreaseNormalBiasOperation) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
