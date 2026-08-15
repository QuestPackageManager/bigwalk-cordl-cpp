#pragma once
// IWYU pragma private; include "GlobalNamespace/InputEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEvent)
namespace GlobalNamespace {
struct InputEvent_InputEventStruct;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class InputEvent;
}
namespace GlobalNamespace {
struct InputEvent_InputEventStruct;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InputEvent*);
MARK_VAL_T(::GlobalNamespace::InputEvent_InputEventStruct);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputEvent*, "", "InputEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputEvent_InputEventStruct, "", "InputEvent/InputEventStruct");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: InputEvent/InputEventStruct
struct CORDL_TYPE InputEvent_InputEventStruct {
public:
// Declarations
/// @brief Method CheckInputTrigger, addr 0x18037df70, size 0xc0, virtual false, abstract: false, final false
inline void CheckInputTrigger() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputEvent_InputEventStruct() ;

// Ctor Parameters [CppParam { name: "action", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onInputTrigger", ty: "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: None }]
constexpr InputEvent_InputEventStruct(int32_t  action, ::UnityEngine::Events::UnityEvent*  onInputTrigger) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field action, offset: 0x0, size: 0x4, def value: None
 int32_t  action;

/// @brief Field onInputTrigger, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  onInputTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputEvent_InputEventStruct, action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputEvent_InputEventStruct, onInputTrigger) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputEvent_InputEventStruct) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: InputEvent
class CORDL_TYPE InputEvent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InputEventStruct = ::GlobalNamespace::InputEvent_InputEventStruct;

/// @brief Field inputEvents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputEvents, put=__cordl_internal_set_inputEvents)) ::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>*  inputEvents;

static inline ::GlobalNamespace::InputEvent* New_ctor() ;

/// @brief Method Update, addr 0x18037e030, size 0xf0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>* const& __cordl_internal_get_inputEvents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>*& __cordl_internal_get_inputEvents() ;

constexpr void __cordl_internal_set_inputEvents(::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>*  value) ;

/// @brief Method .ctor, addr 0x18037e120, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputEvent(InputEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputEvent(InputEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5541};

/// @brief Field inputEvents, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::InputEvent_InputEventStruct>*  ___inputEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputEvent, ___inputEvents) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputEvent) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
