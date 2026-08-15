#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectHighlightElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SelectHighlightElement)
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectHighlightElement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SelectHighlightElement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SelectHighlightElement*, "", "SelectHighlightElement");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectHighlightElement
class CORDL_TYPE SelectHighlightElement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _inputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputField, put=__cordl_internal_set__inputField)) ::UnityW<::TMPro::TMP_InputField>  _inputField;

/// @brief Field targetElement, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetElement, put=__cordl_internal_set_targetElement)) ::UnityW<::UnityEngine::GameObject>  targetElement;

/// @brief Method Awake, addr 0x180428760, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SelectHighlightElement* New_ctor() ;

/// @brief Method Update, addr 0x1804287b0, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__inputField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetElement() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetElement() ;

constexpr void __cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_targetElement(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectHighlightElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectHighlightElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectHighlightElement(SelectHighlightElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectHighlightElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectHighlightElement(SelectHighlightElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5240};

/// @brief Field _inputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____inputField;

/// @brief Field targetElement, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectHighlightElement, ____inputField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectHighlightElement, ___targetElement) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SelectHighlightElement) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
