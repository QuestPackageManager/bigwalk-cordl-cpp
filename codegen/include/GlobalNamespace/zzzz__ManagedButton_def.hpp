#pragma once
// IWYU pragma private; include "GlobalNamespace/ManagedButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ManagedButton)
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ManagedButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ManagedButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedButton*, "", "ManagedButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ManagedButton
class CORDL_TYPE ManagedButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inputField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputField, put=__cordl_internal_set_inputField)) ::UnityW<::TMPro::TMP_InputField>  inputField;

/// @brief Field isDefaultSelection, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDefaultSelection, put=__cordl_internal_set_isDefaultSelection)) bool  isDefaultSelection;

 __declspec(property(get=get_isImportant)) bool  isImportant;

/// @brief Field onLeft, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLeft, put=__cordl_internal_set_onLeft)) ::UnityEngine::Events::UnityEvent*  onLeft;

/// @brief Field onRight, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRight, put=__cordl_internal_set_onRight)) ::UnityEngine::Events::UnityEvent*  onRight;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr operator  ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Method Awake, addr 0x1804243c0, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ManagedButton* New_ctor() ;

/// @brief Method NoCurrentActiveSelection, addr 0x1804243f0, size 0x50, virtual false, abstract: false, final false
static inline bool NoCurrentActiveSelection() ;

/// @brief Method OnDeselect, addr 0x180424440, size 0x40, virtual true, abstract: false, final true
inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnEnable, addr 0x180424480, size 0x70, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPointerEnter, addr 0x1804244f0, size 0xb0, virtual true, abstract: false, final true
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0x1804245a0, size 0x70, virtual true, abstract: false, final true
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method SetNavagitationTargets, addr 0x180424610, size 0x190, virtual false, abstract: false, final false
inline void SetNavagitationTargets(::UnityEngine::GameObject*  up, ::UnityEngine::GameObject*  down, ::UnityEngine::GameObject*  left, ::UnityEngine::GameObject*  right) ;

/// @brief Method Start, addr 0x180424480, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1804247a0, size 0x2c0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_inputField() ;

constexpr bool const& __cordl_internal_get_isDefaultSelection() const;

constexpr bool& __cordl_internal_get_isDefaultSelection() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onLeft() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onLeft() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRight() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRight() ;

constexpr void __cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_isDefaultSelection(bool  value) ;

constexpr void __cordl_internal_set_onLeft(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onRight(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentlySelectedIsImportant, addr 0x180424a60, size 0x90, virtual false, abstract: false, final false
static inline bool get_currentlySelectedIsImportant() ;

/// @brief Method get_isImportant, addr 0x180424af0, size 0x40, virtual false, abstract: false, final false
inline bool get_isImportant() ;

/// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManagedButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManagedButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManagedButton(ManagedButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManagedButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManagedButton(ManagedButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5231};

/// @brief Field onLeft, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onLeft;

/// @brief Field onRight, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRight;

/// @brief Field isDefaultSelection, offset: 0x30, size: 0x1, def value: None
 bool  ___isDefaultSelection;

/// @brief Field inputField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___inputField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManagedButton, ___onLeft) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedButton, ___onRight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedButton, ___isDefaultSelection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedButton, ___inputField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManagedButton) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
