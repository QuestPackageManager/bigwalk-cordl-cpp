#pragma once
// IWYU pragma private; include "GlobalNamespace/HostMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HostMenu)
namespace GlobalNamespace {
class GameSlotCard;
}
namespace GlobalNamespace {
class HostMenu___c;
}
namespace GlobalNamespace {
class SaveData;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HostMenu;
}
namespace GlobalNamespace {
class HostMenu___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HostMenu*);
MARK_REF_T(::GlobalNamespace::HostMenu___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenu*, "", "HostMenu");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HostMenu___c*, "", "HostMenu/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HostMenu/<>c
class CORDL_TYPE HostMenu___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::HostMenu___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Comparison_1<::GlobalNamespace::SaveData*>*  __9__7_0;

static inline ::GlobalNamespace::HostMenu___c* New_ctor() ;

/// @brief Method <FillWithSlotCards>b__7_0, addr 0x1804444b0, size 0x30, virtual false, abstract: false, final false
inline int32_t _FillWithSlotCards_b__7_0(::GlobalNamespace::SaveData*  a, ::GlobalNamespace::SaveData*  b) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::HostMenu___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::SaveData*>* getStaticF___9__7_0() ;

static inline void setStaticF___9(::GlobalNamespace::HostMenu___c*  value) ;

static inline void setStaticF___9__7_0(::System::Comparison_1<::GlobalNamespace::SaveData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMenu___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMenu___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMenu___c(HostMenu___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMenu___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMenu___c(HostMenu___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5282};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::HostMenu___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HostMenu
class CORDL_TYPE HostMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::HostMenu___c;

/// @brief Field slotCardParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotCardParent, put=__cordl_internal_set_slotCardParent)) ::UnityW<::UnityEngine::Transform>  slotCardParent;

/// @brief Field slotCardPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotCardPrefab, put=__cordl_internal_set_slotCardPrefab)) ::UnityW<::UnityEngine::GameObject>  slotCardPrefab;

/// @brief Field tempCard, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempCard, put=__cordl_internal_set_tempCard)) ::UnityW<::GlobalNamespace::GameSlotCard>  tempCard;

/// @brief Method AddGameSlotCard, addr 0x180433740, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameSlotCard> AddGameSlotCard() ;

/// @brief Method Back, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void Back() ;

/// @brief Method FillWithSlotCards, addr 0x180433eb0, size 0x180, virtual false, abstract: false, final false
inline void FillWithSlotCards() ;

/// @brief Method GoToLoadingMenu, addr 0x180431440, size 0x70, virtual false, abstract: false, final false
inline void GoToLoadingMenu() ;

/// @brief Method GoToTitleMenu, addr 0x180431150, size 0x70, virtual false, abstract: false, final false
inline void GoToTitleMenu() ;

static inline ::GlobalNamespace::HostMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x180434030, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Start, addr 0x180433eb0, size 0x180, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartNewGame, addr 0x1804340a0, size 0x90, virtual false, abstract: false, final false
inline void StartNewGame() ;

/// @brief Method TidyTempCard, addr 0x180434030, size 0x70, virtual false, abstract: false, final false
inline void TidyTempCard() ;

/// @brief Method Update, addr 0x1804334e0, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_slotCardParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_slotCardParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_slotCardPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_slotCardPrefab() ;

constexpr ::UnityW<::GlobalNamespace::GameSlotCard> const& __cordl_internal_get_tempCard() const;

constexpr ::UnityW<::GlobalNamespace::GameSlotCard>& __cordl_internal_get_tempCard() ;

constexpr void __cordl_internal_set_slotCardParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_slotCardPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tempCard(::UnityW<::GlobalNamespace::GameSlotCard>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HostMenu(HostMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostMenu(HostMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5283};

/// @brief Field slotCardPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___slotCardPrefab;

/// @brief Field slotCardParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___slotCardParent;

/// @brief Field tempCard, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameSlotCard>  ___tempCard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HostMenu, ___slotCardPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenu, ___slotCardParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HostMenu, ___tempCard) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HostMenu) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
