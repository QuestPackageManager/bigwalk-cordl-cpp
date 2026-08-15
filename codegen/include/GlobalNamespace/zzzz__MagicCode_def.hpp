#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MagicCode)
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MagicCode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MagicCode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCode*, "", "MagicCode");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicCode
class CORDL_TYPE MagicCode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field codeField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_codeField, put=__cordl_internal_set_codeField)) ::UnityW<::TMPro::TMP_InputField>  codeField;

/// @brief Field connectingUI, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectingUI, put=__cordl_internal_set_connectingUI)) ::UnityW<::UnityEngine::GameObject>  connectingUI;

/// @brief Field useHostCode, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useHostCode, put=__cordl_internal_set_useHostCode)) bool  useHostCode;

/// @brief Method CopyCode, addr 0x180423fc0, size 0x30, virtual false, abstract: false, final false
inline void CopyCode() ;

static inline ::GlobalNamespace::MagicCode* New_ctor() ;

/// @brief Method OnDisable, addr 0x180423ff0, size 0xe0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1804240d0, size 0x1c0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSessionCreated, addr 0x180424290, size 0x70, virtual false, abstract: false, final false
inline void OnSessionCreated() ;

/// @brief Method Start, addr 0x180424300, size 0xc0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get_codeField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get_codeField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_connectingUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_connectingUI() ;

constexpr bool const& __cordl_internal_get_useHostCode() const;

constexpr bool& __cordl_internal_get_useHostCode() ;

constexpr void __cordl_internal_set_codeField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set_connectingUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_useHostCode(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicCode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicCode(MagicCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicCode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicCode(MagicCode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5230};

/// @brief Field codeField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ___codeField;

/// @brief Field useHostCode, offset: 0x28, size: 0x1, def value: None
 bool  ___useHostCode;

/// @brief Field connectingUI, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___connectingUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCode, ___codeField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCode, ___useHostCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCode, ___connectingUI) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCode) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
