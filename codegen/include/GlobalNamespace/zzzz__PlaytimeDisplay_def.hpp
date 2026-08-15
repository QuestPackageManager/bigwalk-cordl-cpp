#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaytimeDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlaytimeDisplay)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaytimeDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlaytimeDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaytimeDisplay*, "", "PlaytimeDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlaytimeDisplay
class CORDL_TYPE PlaytimeDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lastPlaytime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPlaytime, put=__cordl_internal_set_lastPlaytime)) int32_t  lastPlaytime;

/// @brief Field textField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

static inline ::GlobalNamespace::PlaytimeDisplay* New_ctor() ;

/// @brief Method Update, addr 0x180439620, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_lastPlaytime() const;

constexpr int32_t& __cordl_internal_get_lastPlaytime() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_lastPlaytime(int32_t  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlaytimeDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlaytimeDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaytimeDisplay(PlaytimeDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaytimeDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaytimeDisplay(PlaytimeDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5252};

/// @brief Field textField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

/// @brief Field lastPlaytime, offset: 0x28, size: 0x4, def value: None
 int32_t  ___lastPlaytime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaytimeDisplay, ___textField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaytimeDisplay, ___lastPlaytime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaytimeDisplay) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
