#pragma once
// IWYU pragma private; include "GlobalNamespace/VersionDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VersionDisplay)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class VersionDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VersionDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VersionDisplay*, "", "VersionDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VersionDisplay
class CORDL_TYPE VersionDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field textField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

/// @brief Method Awake, addr 0x18042f430, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::VersionDisplay* New_ctor() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionDisplay(VersionDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionDisplay(VersionDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5242};

/// @brief Field textField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VersionDisplay, ___textField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VersionDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
