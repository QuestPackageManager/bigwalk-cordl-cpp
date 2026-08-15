#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationConfirmedMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModerationConfirmedMenu)
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ModerationConfirmedMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModerationConfirmedMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationConfirmedMenu*, "", "ModerationConfirmedMenu");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModerationConfirmedMenu
class CORDL_TYPE ModerationConfirmedMenu : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field encounteredGroup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_encounteredGroup, put=__cordl_internal_set_encounteredGroup)) ::UnityW<::UnityEngine::Transform>  encounteredGroup;

 __declspec(property(put=set_isEncountered)) bool  isEncountered;

 __declspec(property(put=set_playerName)) ::StringW  playerName;

/// @brief Field playerNameText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameText, put=__cordl_internal_set_playerNameText)) ::UnityW<::GlobalNamespace::LocalizedText>  playerNameText;

/// @brief Field unencounteredGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_unencounteredGroup, put=__cordl_internal_set_unencounteredGroup)) ::UnityW<::UnityEngine::Transform>  unencounteredGroup;

/// @brief Method ActionContinue, addr 0x180437000, size 0x70, virtual false, abstract: false, final false
inline void ActionContinue() ;

static inline ::GlobalNamespace::ModerationConfirmedMenu* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_encounteredGroup() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_encounteredGroup() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_playerNameText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_playerNameText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_unencounteredGroup() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_unencounteredGroup() ;

constexpr void __cordl_internal_set_encounteredGroup(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playerNameText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_unencounteredGroup(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_isEncountered, addr 0x180437070, size 0x90, virtual false, abstract: false, final false
inline void set_isEncountered(bool  value) ;

/// @brief Method set_playerName, addr 0x180437100, size 0x20, virtual false, abstract: false, final false
inline void set_playerName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModerationConfirmedMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModerationConfirmedMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModerationConfirmedMenu(ModerationConfirmedMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModerationConfirmedMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModerationConfirmedMenu(ModerationConfirmedMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5260};

/// @brief Field playerNameText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___playerNameText;

/// @brief Field encounteredGroup, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___encounteredGroup;

/// @brief Field unencounteredGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___unencounteredGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationConfirmedMenu, ___playerNameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationConfirmedMenu, ___encounteredGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationConfirmedMenu, ___unencounteredGroup) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationConfirmedMenu) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
