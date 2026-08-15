#pragma once
// IWYU pragma private; include "GlobalNamespace/InputNavigationHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputNavigationHelper)
namespace System::Reflection {
class FieldInfo;
}
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class InputNavigationHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InputNavigationHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputNavigationHelper*, "", "InputNavigationHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: InputNavigationHelper
class CORDL_TYPE InputNavigationHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ShouldActivateField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ShouldActivateField, put=setStaticF_ShouldActivateField)) ::System::Reflection::FieldInfo*  ShouldActivateField;

/// @brief Field inputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputField, put=__cordl_internal_set_inputField)) ::UnityW<::TMPro::TMP_InputField>  inputField;

/// @brief Field shouldClear, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldClear, put=__cordl_internal_set_shouldClear)) bool  shouldClear;

/// @brief Field unFocusedBack, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_unFocusedBack, put=__cordl_internal_set_unFocusedBack)) ::UnityEngine::Events::UnityEvent*  unFocusedBack;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Method Awake, addr 0x180421000, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x1804232b0, size 0x140, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::InputNavigationHelper* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804233f0, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnSelect, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  baseEventData) ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_inputField() ;

constexpr bool const& __cordl_internal_get_shouldClear() const;

constexpr bool& __cordl_internal_get_shouldClear() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_unFocusedBack() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_unFocusedBack() ;

constexpr void __cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_shouldClear(bool  value) ;

constexpr void __cordl_internal_set_unFocusedBack(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Reflection::FieldInfo* getStaticF_ShouldActivateField() ;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

static inline void setStaticF_ShouldActivateField(::System::Reflection::FieldInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputNavigationHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputNavigationHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputNavigationHelper(InputNavigationHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputNavigationHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputNavigationHelper(InputNavigationHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5227};

/// @brief Field inputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___inputField;

/// @brief Field shouldClear, offset: 0x28, size: 0x1, def value: None
 bool  ___shouldClear;

/// @brief Field unFocusedBack, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___unFocusedBack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputNavigationHelper, ___inputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputNavigationHelper, ___shouldClear) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputNavigationHelper, ___unFocusedBack) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputNavigationHelper) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
