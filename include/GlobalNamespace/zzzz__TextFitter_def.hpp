#pragma once
// IWYU pragma private; include "GlobalNamespace/TextFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextFitter)
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TextFitter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextFitter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextFitter*, "", "TextFitter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextFitter
class CORDL_TYPE TextFitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _inputField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputField, put=__cordl_internal_set__inputField)) ::UnityW<::TMPro::TMP_InputField>  _inputField;

/// @brief Field ignoreWhenCheating, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreWhenCheating, put=__cordl_internal_set_ignoreWhenCheating)) bool  ignoreWhenCheating;

/// @brief Method Awake, addr 0x180440c10, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MessageWillFit, addr 0x180440ce0, size 0xb0, virtual false, abstract: false, final false
static inline bool MessageWillFit(::TMPro::TMP_Text*  text, ::StringW  message) ;

static inline ::GlobalNamespace::TextFitter* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180440d90, size 0xb0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidateInput, addr 0x180440e40, size 0x150, virtual false, abstract: false, final false
inline char16_t OnValidateInput(::StringW  text, int32_t  charIndex, char16_t  addedChar) ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__inputField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__inputField() ;

constexpr bool const& __cordl_internal_get_ignoreWhenCheating() const;

constexpr bool& __cordl_internal_get_ignoreWhenCheating() ;

constexpr void __cordl_internal_set__inputField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_ignoreWhenCheating(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextFitter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextFitter(TextFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextFitter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextFitter(TextFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5257};

/// @brief Field ignoreWhenCheating, offset: 0x20, size: 0x1, def value: None
 bool  ___ignoreWhenCheating;

/// @brief Field _inputField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____inputField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextFitter, ___ignoreWhenCheating) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFitter, ____inputField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextFitter) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
