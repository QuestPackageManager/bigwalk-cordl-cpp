#pragma once
// IWYU pragma private; include "Mirror/HostMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HostMode)
// Forward declare root types
namespace Mirror {
class HostMode;
}
// Write type traits
MARK_REF_T(::Mirror::HostMode*);
DEFINE_IL2CPP_CLASS(::Mirror::HostMode*, "Mirror", "HostMode");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.HostMode
class CORDL_TYPE HostMode : public ::System::Object {
public:
// Declarations
/// @brief Method ActivateHostScene, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ActivateHostScene() ;

/// @brief Method InvokeOnConnected, addr 0x181536290, size 0x180, virtual false, abstract: false, final false
static inline void InvokeOnConnected() ;

/// @brief Method SetupConnections, addr 0x181536410, size 0xf0, virtual false, abstract: false, final false
static inline void SetupConnections() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMode(HostMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMode(HostMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::HostMode) == 0x10, "Size mismatch!");

} // namespace end def Mirror
