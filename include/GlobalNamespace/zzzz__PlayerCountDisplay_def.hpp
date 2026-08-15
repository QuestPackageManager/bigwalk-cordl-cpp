#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCountDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerCountDisplay)
namespace GlobalNamespace {
class LocalizedText;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerCountDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerCountDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerCountDisplay*, "", "PlayerCountDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerCountDisplay
class CORDL_TYPE PlayerCountDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field textField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::GlobalNamespace::LocalizedText>  textField;

static inline ::GlobalNamespace::PlayerCountDisplay* New_ctor() ;

/// @brief Method OnEnable, addr 0x180439300, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerCountDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerCountDisplay(PlayerCountDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerCountDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerCountDisplay(PlayerCountDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5271};

/// @brief Field textField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___textField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerCountDisplay, ___textField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerCountDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
