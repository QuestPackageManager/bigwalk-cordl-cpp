#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/RemotePlayerDebugOperationBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemotePlayerDebugOperationBase)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerDebugOperationBase;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase*, "Shipmates.RemotePlayerDebug", "RemotePlayerDebugOperationBase");
// Dependencies System.Object
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.RemotePlayerDebugOperationBase
class CORDL_TYPE RemotePlayerDebugOperationBase : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ResponseName)) ::StringW  ResponseName;

 __declspec(property(get=get_Section)) ::StringW  Section;

/// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ResponseName, addr 0x1803ac300, size 0x30, virtual true, abstract: false, final false
inline ::StringW get_ResponseName() ;

/// @brief Method get_Section, addr 0x1803ac330, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Section() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemotePlayerDebugOperationBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugOperationBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RemotePlayerDebugOperationBase(RemotePlayerDebugOperationBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemotePlayerDebugOperationBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemotePlayerDebugOperationBase(RemotePlayerDebugOperationBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5709};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::RemotePlayerDebugOperationBase) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
