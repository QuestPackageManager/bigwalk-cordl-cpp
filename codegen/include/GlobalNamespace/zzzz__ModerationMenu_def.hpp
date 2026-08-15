#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModerationMenu)
namespace GlobalNamespace {
class ModerationPlayerCard;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ModerationMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModerationMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationMenu*, "", "ModerationMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModerationMenu
class CORDL_TYPE ModerationMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field encounteredIdentifiers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_encounteredIdentifiers, put=__cordl_internal_set_encounteredIdentifiers)) ::System::Collections::Generic::HashSet_1<::StringW>*  encounteredIdentifiers;

/// @brief Field moderationPlayerCards, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationPlayerCards, put=__cordl_internal_set_moderationPlayerCards)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>*  moderationPlayerCards;

/// @brief Field silencedIdentifiers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_silencedIdentifiers, put=__cordl_internal_set_silencedIdentifiers)) ::System::Collections::Generic::HashSet_1<::StringW>*  silencedIdentifiers;

/// @brief Method ActionBack, addr 0x180435490, size 0xb0, virtual false, abstract: false, final false
inline void ActionBack() ;

/// @brief Method GetIsEncounteredByIdentifier, addr 0x180437430, size 0x60, virtual false, abstract: false, final false
static inline bool GetIsEncounteredByIdentifier(::StringW  identifier) ;

/// @brief Method GetIsSilencedByIdentifier, addr 0x180437490, size 0x60, virtual false, abstract: false, final false
static inline bool GetIsSilencedByIdentifier(::StringW  identifier) ;

static inline ::GlobalNamespace::ModerationMenu* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804374f0, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180437520, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshCards, addr 0x180437530, size 0x840, virtual false, abstract: false, final false
inline void RefreshCards() ;

/// @brief Method SetEncounteredIdentifier, addr 0x180437d70, size 0xa0, virtual false, abstract: false, final false
static inline void SetEncounteredIdentifier(::StringW  identifier, bool  active) ;

/// @brief Method SetSilencedIdentifier, addr 0x180437e10, size 0xa0, virtual false, abstract: false, final false
static inline void SetSilencedIdentifier(::StringW  identifier, bool  active) ;

/// @brief Method Update, addr 0x180437520, size 0x10, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_encounteredIdentifiers() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_encounteredIdentifiers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>* const& __cordl_internal_get_moderationPlayerCards() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>*& __cordl_internal_get_moderationPlayerCards() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_silencedIdentifiers() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_silencedIdentifiers() ;

constexpr void __cordl_internal_set_encounteredIdentifiers(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_moderationPlayerCards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>*  value) ;

constexpr void __cordl_internal_set_silencedIdentifiers(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x180437eb0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_instance, addr 0x180437f30, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ModerationMenu> get_instance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModerationMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModerationMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModerationMenu(ModerationMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModerationMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModerationMenu(ModerationMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5262};

/// @brief Field moderationPlayerCards, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ModerationPlayerCard>>*  ___moderationPlayerCards;

/// @brief Field silencedIdentifiers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___silencedIdentifiers;

/// @brief Field encounteredIdentifiers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___encounteredIdentifiers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationMenu, ___moderationPlayerCards) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationMenu, ___silencedIdentifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationMenu, ___encounteredIdentifiers) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationMenu) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
