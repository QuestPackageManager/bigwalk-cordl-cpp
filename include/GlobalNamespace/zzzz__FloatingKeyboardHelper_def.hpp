#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatingKeyboardHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FloatingKeyboardHelper)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class FloatingKeyboardHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FloatingKeyboardHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FloatingKeyboardHelper*, "", "FloatingKeyboardHelper");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FloatingKeyboardHelper
class CORDL_TYPE FloatingKeyboardHelper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnChange, put=setStaticF_OnChange)) ::System::Action_1<bool>*  OnChange;

/// @brief Field _inputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputField, put=__cordl_internal_set__inputField)) ::UnityW<::TMPro::TMP_InputField>  _inputField;

/// @brief Field _isFocused, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFocused, put=__cordl_internal_set__isFocused)) bool  _isFocused;

/// @brief Field floatingKeyboardHelpers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_floatingKeyboardHelpers, put=setStaticF_floatingKeyboardHelpers)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>*  floatingKeyboardHelpers;

/// @brief Method Awake, addr 0x180421000, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::FloatingKeyboardHelper* New_ctor() ;

/// @brief Method OnDisable, addr 0x180421030, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method SetFloatingKeyboard, addr 0x180421050, size 0x160, virtual false, abstract: false, final false
static inline void SetFloatingKeyboard(bool  active) ;

/// @brief Method SetFocused, addr 0x1804211b0, size 0x130, virtual false, abstract: false, final false
inline void SetFocused(bool  newIsFocused) ;

/// @brief Method Update, addr 0x1804212e0, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__inputField() ;

constexpr bool const& __cordl_internal_get__isFocused() const;

constexpr bool& __cordl_internal_get__isFocused() ;

constexpr void __cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__isFocused(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<bool>* getStaticF_OnChange() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>* getStaticF_floatingKeyboardHelpers() ;

static inline void setStaticF_OnChange(::System::Action_1<bool>*  value) ;

static inline void setStaticF_floatingKeyboardHelpers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::FloatingKeyboardHelper>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatingKeyboardHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatingKeyboardHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatingKeyboardHelper(FloatingKeyboardHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatingKeyboardHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatingKeyboardHelper(FloatingKeyboardHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5224};

/// @brief Field _inputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____inputField;

/// @brief Field _isFocused, offset: 0x28, size: 0x1, def value: None
 bool  ____isFocused;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FloatingKeyboardHelper, ____inputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FloatingKeyboardHelper, ____isFocused) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FloatingKeyboardHelper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
