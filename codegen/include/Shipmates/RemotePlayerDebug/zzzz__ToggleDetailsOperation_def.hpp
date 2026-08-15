#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleDetailsOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__RemotePlayerDebugOperationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleDetailsOperation)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleDetailsOperation;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleDetailsOperation*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleDetailsOperation*, "Shipmates.RemotePlayerDebug", "ToggleDetailsOperation");
// Dependencies Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleDetailsOperation
class CORDL_TYPE ToggleDetailsOperation : public ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field _currentDetailsEnabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__currentDetailsEnabled, put=__cordl_internal_set__currentDetailsEnabled)) bool  _currentDetailsEnabled;

/// @brief Method Execute, addr 0x1803b3ab0, size 0xa0, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleDetailsOperation* New_ctor() ;

constexpr bool const& __cordl_internal_get__currentDetailsEnabled() const;

constexpr bool& __cordl_internal_get__currentDetailsEnabled() ;

constexpr void __cordl_internal_set__currentDetailsEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b3b60, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleDetailsOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleDetailsOperation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleDetailsOperation(ToggleDetailsOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleDetailsOperation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleDetailsOperation(ToggleDetailsOperation const& ) = delete;

/// @brief Field RequestName offset 0xffffffff size 0x8
static constexpr ::ConstString  RequestName{u"toggle-details"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5740};

/// @brief Field _currentDetailsEnabled, offset: 0x10, size: 0x1, def value: None
 bool  ____currentDetailsEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::RemotePlayerDebug::ToggleDetailsOperation, ____currentDetailsEnabled) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleDetailsOperation) == 0x18, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
