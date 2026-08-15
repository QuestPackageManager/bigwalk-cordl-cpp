#pragma once
// IWYU pragma private; include "GlobalNamespace/InputSelfSelecter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputSelfSelecter)
namespace TMPro {
class TMP_InputField;
}
// Forward declare root types
namespace GlobalNamespace {
class InputSelfSelecter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InputSelfSelecter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputSelfSelecter*, "", "InputSelfSelecter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: InputSelfSelecter
class CORDL_TYPE InputSelfSelecter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field inputField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputField, put=__cordl_internal_set_inputField)) ::UnityW<::TMPro::TMP_InputField>  inputField;

/// @brief Method Awake, addr 0x180421000, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::InputSelfSelecter* New_ctor() ;

/// @brief Method Update, addr 0x1804234e0, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_inputField() ;

constexpr void __cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSelfSelecter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSelfSelecter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSelfSelecter(InputSelfSelecter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSelfSelecter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSelfSelecter(InputSelfSelecter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5228};

/// @brief Field inputField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___inputField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputSelfSelecter, ___inputField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputSelfSelecter) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
