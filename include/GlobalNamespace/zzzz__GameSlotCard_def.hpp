#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSlotCard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameSlotCard)
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
class ManagedButton;
}
namespace GlobalNamespace {
class SaveData;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class GameSlotCard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameSlotCard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSlotCard*, "", "GameSlotCard");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Sprite
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameSlotCard
class CORDL_TYPE GameSlotCard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field highlightImage, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_highlightImage, put=__cordl_internal_set_highlightImage)) ::UnityW<::UnityEngine::UI::Image>  highlightImage;

/// @brief Field saveData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveData, put=__cordl_internal_set_saveData)) ::GlobalNamespace::SaveData*  saveData;

/// @brief Field selectable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectable, put=__cordl_internal_set_selectable)) ::UnityW<::GlobalNamespace::ManagedButton>  selectable;

/// @brief Field slotNameField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotNameField, put=__cordl_internal_set_slotNameField)) ::UnityW<::GlobalNamespace::LocalizedText>  slotNameField;

/// @brief Field sprites, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_sprites, put=__cordl_internal_set_sprites)) ::ArrayW<::UnityW<::UnityEngine::Sprite>>  sprites;

/// @brief Field timeLabel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeLabel, put=__cordl_internal_set_timeLabel)) ::UnityW<::TMPro::TMP_Text>  timeLabel;

static inline ::GlobalNamespace::GameSlotCard* New_ctor() ;

/// @brief Method PlaySlot, addr 0x1804329f0, size 0xd0, virtual false, abstract: false, final false
inline void PlaySlot() ;

/// @brief Method SetHightlightImage, addr 0x180432ac0, size 0x40, virtual false, abstract: false, final false
inline void SetHightlightImage(int32_t  index) ;

/// @brief Method SetSaveData, addr 0x180432b00, size 0x130, virtual false, abstract: false, final false
inline void SetSaveData(::GlobalNamespace::SaveData*  saveData) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_highlightImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_highlightImage() ;

constexpr ::GlobalNamespace::SaveData* const& __cordl_internal_get_saveData() const;

constexpr ::GlobalNamespace::SaveData*& __cordl_internal_get_saveData() ;

constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& __cordl_internal_get_selectable() const;

constexpr ::UnityW<::GlobalNamespace::ManagedButton>& __cordl_internal_get_selectable() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_slotNameField() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_slotNameField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& __cordl_internal_get_sprites() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& __cordl_internal_get_sprites() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_timeLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_timeLabel() ;

constexpr void __cordl_internal_set_highlightImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_saveData(::GlobalNamespace::SaveData*  value) ;

constexpr void __cordl_internal_set_selectable(::UnityW<::GlobalNamespace::ManagedButton>  value) ;

constexpr void __cordl_internal_set_slotNameField(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_sprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value) ;

constexpr void __cordl_internal_set_timeLabel(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameSlotCard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameSlotCard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameSlotCard(GameSlotCard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameSlotCard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameSlotCard(GameSlotCard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5281};

/// @brief Field slotNameField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___slotNameField;

/// @brief Field timeLabel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___timeLabel;

/// @brief Field saveData, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::SaveData*  ___saveData;

/// @brief Field selectable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ManagedButton>  ___selectable;

/// @brief Field highlightImage, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___highlightImage;

/// @brief Field sprites, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Sprite>>  ___sprites;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSlotCard, ___slotNameField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSlotCard, ___timeLabel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSlotCard, ___saveData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSlotCard, ___selectable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSlotCard, ___highlightImage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSlotCard, ___sprites) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSlotCard) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
