#pragma once
// IWYU pragma private; include "Shipmates/Events/ShowErrorMessageEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
#include "Shipmates/Utils/zzzz__BaseEvent_def.hpp"
CORDL_MODULE_EXPORT(ShowErrorMessageEvent)
namespace GlobalNamespace {
struct ErrorUtils_ErrorType;
}
// Forward declare root types
namespace Shipmates::Events {
class ShowErrorMessageEvent;
}
// Write type traits
MARK_REF_T(::Shipmates::Events::ShowErrorMessageEvent*);
DEFINE_IL2CPP_CLASS(::Shipmates::Events::ShowErrorMessageEvent*, "Shipmates.Events", "ShowErrorMessageEvent");
// Dependencies ErrorUtils::ErrorType, Shipmates.Utils.BaseEvent
namespace Shipmates::Events {
// Is value type: false
// CS Name: Shipmates.Events.ShowErrorMessageEvent
class CORDL_TYPE ShowErrorMessageEvent : public ::Shipmates::Utils::BaseEvent {
public:
// Declarations
/// @brief Field _error, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__error, put=__cordl_internal_set__error)) ::GlobalNamespace::ErrorUtils_ErrorType  _error;

/// @brief Method GetErrorType, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::ErrorUtils_ErrorType GetErrorType() ;

static inline ::Shipmates::Events::ShowErrorMessageEvent* New_ctor(::GlobalNamespace::ErrorUtils_ErrorType  error) ;

constexpr ::GlobalNamespace::ErrorUtils_ErrorType const& __cordl_internal_get__error() const;

constexpr ::GlobalNamespace::ErrorUtils_ErrorType& __cordl_internal_get__error() ;

constexpr void __cordl_internal_set__error(::GlobalNamespace::ErrorUtils_ErrorType  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ErrorUtils_ErrorType  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShowErrorMessageEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShowErrorMessageEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShowErrorMessageEvent(ShowErrorMessageEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShowErrorMessageEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShowErrorMessageEvent(ShowErrorMessageEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21071};

/// @brief Field _error, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ErrorUtils_ErrorType  ____error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Shipmates::Events::ShowErrorMessageEvent, ____error) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Shipmates::Events::ShowErrorMessageEvent) == 0x18, "Size mismatch!");

} // namespace end def Shipmates::Events
