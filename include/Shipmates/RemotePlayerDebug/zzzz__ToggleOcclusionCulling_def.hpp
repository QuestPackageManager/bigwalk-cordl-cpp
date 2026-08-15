#pragma once
// IWYU pragma private; include "Shipmates/RemotePlayerDebug/ToggleOcclusionCulling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/RemotePlayerDebug/zzzz__BaseJSRemoteDebuggingOperation_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ToggleOcclusionCulling)
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerRequest;
}
namespace Shipmates::RemotePlayerDebug {
class RemotePlayerResponse;
}
// Forward declare root types
namespace Shipmates::RemotePlayerDebug {
class ToggleOcclusionCulling;
}
// Write type traits
MARK_REF_T(::Shipmates::RemotePlayerDebug::ToggleOcclusionCulling*);
DEFINE_IL2CPP_CLASS(::Shipmates::RemotePlayerDebug::ToggleOcclusionCulling*, "Shipmates.RemotePlayerDebug", "ToggleOcclusionCulling");
// Dependencies Shipmates.RemotePlayerDebug.BaseJSRemoteDebuggingOperation
namespace Shipmates::RemotePlayerDebug {
// Is value type: false
// CS Name: Shipmates.RemotePlayerDebug.ToggleOcclusionCulling
class CORDL_TYPE ToggleOcclusionCulling : public ::Shipmates::RemotePlayerDebug::BaseJSRemoteDebuggingOperation {
public:
// Declarations
 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method Execute, addr 0x1803b4260, size 0xd0, virtual true, abstract: false, final false
inline ::Shipmates::RemotePlayerDebug::RemotePlayerResponse* Execute(::Shipmates::RemotePlayerDebug::RemotePlayerRequest*  request) ;

static inline ::Shipmates::RemotePlayerDebug::ToggleOcclusionCulling* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Name, addr 0x1803b4330, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToggleOcclusionCulling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToggleOcclusionCulling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ToggleOcclusionCulling(ToggleOcclusionCulling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToggleOcclusionCulling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToggleOcclusionCulling(ToggleOcclusionCulling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5724};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::RemotePlayerDebug::ToggleOcclusionCulling) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::RemotePlayerDebug
