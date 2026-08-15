#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
CORDL_MODULE_EXPORT(ContextualMenuManipulator)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class KeyUpEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuManipulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ContextualMenuManipulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ContextualMenuManipulator*, "UnityEngine.UIElements", "ContextualMenuManipulator");
// Dependencies UnityEngine.UIElements.PointerManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextualMenuManipulator
class CORDL_TYPE ContextualMenuManipulator : public ::UnityEngine::UIElements::PointerManipulator {
public:
// Declarations
/// @brief Field m_MenuBuilder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MenuBuilder, put=__cordl_internal_set_m_MenuBuilder)) ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*  m_MenuBuilder;

/// @brief Method DoDisplayMenu, addr 0x1823960d0, size 0xc0, virtual false, abstract: false, final false
inline void DoDisplayMenu(::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method IsOSXContextualMenuPlatform, addr 0x182396190, size 0x10, virtual false, abstract: false, final false
inline bool IsOSXContextualMenuPlatform() ;

static inline ::UnityEngine::UIElements::ContextualMenuManipulator* New_ctor(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*  menuBuilder) ;

/// @brief Method OnContextualMenuEvent, addr 0x181acb8c0, size 0x20, virtual false, abstract: false, final false
inline void OnContextualMenuEvent(::UnityEngine::UIElements::ContextualMenuPopulateEvent*  evt) ;

/// @brief Method OnKeyUpEvent, addr 0x1823961a0, size 0x20, virtual false, abstract: false, final false
inline void OnKeyUpEvent(::UnityEngine::UIElements::KeyUpEvent*  evt) ;

/// @brief Method OnPointerDownEventOSX, addr 0x1823961c0, size 0x80, virtual false, abstract: false, final false
inline void OnPointerDownEventOSX(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method OnPointerMoveEvent, addr 0x182396300, size 0x90, virtual false, abstract: false, final false
inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent*  evt) ;

/// @brief Method OnPointerMoveEventOSX, addr 0x182396240, size 0xc0, virtual false, abstract: false, final false
inline void OnPointerMoveEventOSX(::UnityEngine::UIElements::PointerMoveEvent*  evt) ;

/// @brief Method OnPointerUpEvent, addr 0x1823961c0, size 0x80, virtual false, abstract: false, final false
inline void OnPointerUpEvent(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method OnPointerUpEventOSX, addr 0x182396390, size 0xa0, virtual false, abstract: false, final false
inline void OnPointerUpEventOSX(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method ProcessPointerEvent, addr 0x1823961c0, size 0x80, virtual false, abstract: false, final false
inline void ProcessPointerEvent(::UnityEngine::UIElements::IPointerEvent*  evt) ;

/// @brief Method RegisterCallbacksOnTarget, addr 0x182396430, size 0x1f0, virtual true, abstract: false, final false
inline void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget, addr 0x182396620, size 0x1f0, virtual true, abstract: false, final false
inline void UnregisterCallbacksFromTarget() ;

constexpr ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* const& __cordl_internal_get_m_MenuBuilder() const;

constexpr ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*& __cordl_internal_get_m_MenuBuilder() ;

constexpr void __cordl_internal_set_m_MenuBuilder(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*  value) ;

/// @brief Method .ctor, addr 0x182396810, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*  menuBuilder) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextualMenuManipulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManipulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextualMenuManipulator(ContextualMenuManipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManipulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextualMenuManipulator(ContextualMenuManipulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3221};

/// @brief Field m_MenuBuilder, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*  ___m_MenuBuilder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuManipulator, ___m_MenuBuilder) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ContextualMenuManipulator) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
