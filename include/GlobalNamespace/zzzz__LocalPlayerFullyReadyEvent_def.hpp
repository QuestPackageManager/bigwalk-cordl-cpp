#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalPlayerFullyReadyEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmates/Utils/zzzz__BaseEvent_def.hpp"
CORDL_MODULE_EXPORT(LocalPlayerFullyReadyEvent)
// Forward declare root types
namespace GlobalNamespace {
class LocalPlayerFullyReadyEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalPlayerFullyReadyEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalPlayerFullyReadyEvent*, "", "LocalPlayerFullyReadyEvent");
// Dependencies Shipmates.Utils.BaseEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalPlayerFullyReadyEvent
class CORDL_TYPE LocalPlayerFullyReadyEvent : public ::Shipmates::Utils::BaseEvent {
public:
// Declarations
static inline ::GlobalNamespace::LocalPlayerFullyReadyEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalPlayerFullyReadyEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalPlayerFullyReadyEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalPlayerFullyReadyEvent(LocalPlayerFullyReadyEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalPlayerFullyReadyEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalPlayerFullyReadyEvent(LocalPlayerFullyReadyEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5211};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LocalPlayerFullyReadyEvent) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
