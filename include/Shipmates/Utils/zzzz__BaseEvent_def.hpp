#pragma once
// IWYU pragma private; include "Shipmates/Utils/BaseEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseEvent)
// Forward declare root types
namespace Shipmates::Utils {
class BaseEvent;
}
// Write type traits
MARK_REF_T(::Shipmates::Utils::BaseEvent*);
DEFINE_IL2CPP_CLASS(::Shipmates::Utils::BaseEvent*, "Shipmates.Utils", "BaseEvent");
// Dependencies System.Object
namespace Shipmates::Utils {
// Is value type: false
// CS Name: Shipmates.Utils.BaseEvent
class CORDL_TYPE BaseEvent : public ::System::Object {
public:
// Declarations
static inline ::Shipmates::Utils::BaseEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseEvent(BaseEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseEvent(BaseEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21069};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmates::Utils::BaseEvent) == 0x10, "Size mismatch!");

} // namespace end def Shipmates::Utils
