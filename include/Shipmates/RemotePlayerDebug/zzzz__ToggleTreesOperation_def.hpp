#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleTreesOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleTreesOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleTreesOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleTreesOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleTreesOperation*, "Shipmates.RemotePlayerDebug", "ToggleTreesOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleTreesOperation
class CORDL_TYPE ToggleTreesOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field _currentTreeEnabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentTreeEnabled, put=__cordl_internal_set__currentTreeEnabled)) bool  _currentTreeEnabled;

/// @brief Method Execute, addr 0x1803b51c0, size 0xf0, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleTreesOperation* New_ctor() ;

constexpr bool const& __cordl_internal_get__currentTreeEnabled() const;

constexpr bool& __cordl_internal_get__currentTreeEnabled() ;

constexpr void __cordl_internal_set__currentTreeEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b52b0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleTreesOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleTreesOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleTreesOperation(ToggleTreesOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleTreesOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleTreesOperation(ToggleTreesOperation const& ) = delete;

/// @brief Field RequestName offset 0xffffffff size 0x8
static constexpr ::ConstString  RequestName{u"toggle-trees"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5748};

/// @brief Field _currentTreeEnabled, offset: 0x10, size: 0x1, def value: None
 bool  ____currentTreeEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleTreesOperation, ____currentTreeEnabled) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleTreesOperation) == 0x18, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
