#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationPlayerCardButtons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModerationPlayerCardButtons)
namespace GlobalNamespace {
class LocalizedText;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ModerationPlayerCardButtons;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ModerationPlayerCardButtons*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModerationPlayerCardButtons*, "", "ModerationPlayerCardButtons");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModerationPlayerCardButtons
class CORDL_TYPE ModerationPlayerCardButtons : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field blockedContent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockedContent, put=__cordl_internal_set_blockedContent)) ::UnityW<::UnityEngine::Transform>  blockedContent;

/// @brief Field kickButtonToggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_kickButtonToggle, put=__cordl_internal_set_kickButtonToggle)) ::UnityW<::UnityEngine::Transform>  kickButtonToggle;

/// @brief Field muteText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteText, put=__cordl_internal_set_muteText)) ::UnityW<::GlobalNamespace::LocalizedText>  muteText;

/// @brief Field unblockedContent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_unblockedContent, put=__cordl_internal_set_unblockedContent)) ::UnityW<::UnityEngine::Transform>  unblockedContent;

static inline ::GlobalNamespace::ModerationPlayerCardButtons* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_blockedContent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_blockedContent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_kickButtonToggle() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_kickButtonToggle() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_muteText() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_muteText() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_unblockedContent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_unblockedContent() ;

constexpr void __cordl_internal_set_blockedContent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_kickButtonToggle(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_muteText(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set_unblockedContent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModerationPlayerCardButtons() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModerationPlayerCardButtons", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ModerationPlayerCardButtons(ModerationPlayerCardButtons && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModerationPlayerCardButtons", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModerationPlayerCardButtons(ModerationPlayerCardButtons const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5265};

/// @brief Field muteText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___muteText;

/// @brief Field kickButtonToggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___kickButtonToggle;

/// @brief Field blockedContent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___blockedContent;

/// @brief Field unblockedContent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___unblockedContent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModerationPlayerCardButtons, ___muteText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCardButtons, ___kickButtonToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCardButtons, ___blockedContent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModerationPlayerCardButtons, ___unblockedContent) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModerationPlayerCardButtons) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
