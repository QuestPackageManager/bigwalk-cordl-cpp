#pragma once
// IWYU pragma private; include "Steamworks/CallbackIdentities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackIdentities)
namespace System {
class Type;
}
// Forward declare root types
namespace Steamworks {
class CallbackIdentities;
}
// Write type traits
MARK_REF_T(::Steamworks::CallbackIdentities*);
DEFINE_IL2CPP_CLASS(::Steamworks::CallbackIdentities*, "Steamworks", "CallbackIdentities");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CallbackIdentities
class CORDL_TYPE CallbackIdentities : public ::System::Object {
public:
// Declarations
/// @brief Method GetCallbackIdentity, addr 0x18054e380, size 0xcb0, virtual false, abstract: false, final false
static inline int32_t GetCallbackIdentity(::System::Type*  callbackStruct) ;

static inline ::Steamworks::CallbackIdentities* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackIdentities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackIdentities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackIdentities(CallbackIdentities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackIdentities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackIdentities(CallbackIdentities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15980};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::CallbackIdentities) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
