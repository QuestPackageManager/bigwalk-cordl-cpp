#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTexter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerTexter)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerLookSet_LookColor;
}
namespace GlobalNamespace {
class TextChatSource;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerTexter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerTexter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTexter*, "", "PlayerTexter");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerTexter
class CORDL_TYPE PlayerTexter : public ::System::Object {
public:
// Declarations
/// @brief Field globalTextChatOutput, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalTextChatOutput, put=__cordl_internal_set_globalTextChatOutput)) ::UnityW<::GlobalNamespace::TextChatSource>  globalTextChatOutput;

/// @brief Field hasBeenClosed, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBeenClosed, put=__cordl_internal_set_hasBeenClosed)) bool  hasBeenClosed;

/// @brief Field hasBeenEdit, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBeenEdit, put=__cordl_internal_set_hasBeenEdit)) bool  hasBeenEdit;

/// @brief Field isLocalPlayerTextChatting, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocalPlayerTextChatting, put=__cordl_internal_set_isLocalPlayerTextChatting)) bool  isLocalPlayerTextChatting;

 __declspec(property(get=get_isPlayerTextChatting, put=set_isPlayerTextChatting)) bool  isPlayerTextChatting;

/// @brief Field logVerbose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field messageDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_messageDuration, put=__cordl_internal_set_messageDuration)) float_t  messageDuration;

/// @brief Field opactityCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_opactityCurve, put=__cordl_internal_set_opactityCurve)) ::UnityEngine::AnimationCurve*  opactityCurve;

/// @brief Field playerCharacter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::GlobalNamespace::TextChatSource>  source;

/// @brief Method ActionTextChatStroke, addr 0x180376df0, size 0x120, virtual false, abstract: false, final false
inline void ActionTextChatStroke(bool  isDelete) ;

/// @brief Method CompleteDisplayMessage, addr 0x180376f10, size 0x200, virtual false, abstract: false, final false
inline void CompleteDisplayMessage(::StringW  message) ;

/// @brief Method CompleteInput, addr 0x180377110, size 0x200, virtual false, abstract: false, final false
inline void CompleteInput(::StringW  message, ::by_ref<bool>  messageSent) ;

/// @brief Method DisplayMessage, addr 0x180376f10, size 0x200, virtual false, abstract: false, final false
inline void DisplayMessage(::StringW  message) ;

/// @brief Method GetLookColor, addr 0x180377310, size 0x140, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerLookSet_LookColor GetLookColor() ;

/// @brief Method GetOpacity, addr 0x180377450, size 0x20, virtual false, abstract: false, final false
inline float_t GetOpacity(float_t  audibility) ;

/// @brief Method Initialize, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LateInitialize, addr 0x180377470, size 0x40, virtual false, abstract: false, final false
inline void LateInitialize() ;

static inline ::GlobalNamespace::PlayerTexter* New_ctor() ;

/// @brief Method OnEndEdit, addr 0x1803774b0, size 0x80, virtual false, abstract: false, final false
inline void OnEndEdit(::StringW  msg) ;

/// @brief Method PlayChatCloseSound, addr 0x180377530, size 0x180, virtual false, abstract: false, final false
inline void PlayChatCloseSound() ;

/// @brief Method PlayChatOpenSound, addr 0x1803776b0, size 0x3b0, virtual false, abstract: false, final false
inline void PlayChatOpenSound(bool  local) ;

/// @brief Method PlayChatStrokeSound, addr 0x180377a60, size 0x3d0, virtual false, abstract: false, final false
inline void PlayChatStrokeSound(bool  isDelete) ;

/// @brief Method PlayChatSubmitSound, addr 0x180377e30, size 0x3b0, virtual false, abstract: false, final false
inline void PlayChatSubmitSound(bool  local) ;

/// @brief Method ReceieveMessage, addr 0x1803781e0, size 0x140, virtual false, abstract: false, final false
inline void ReceieveMessage(::StringW  message) ;

/// @brief Method SetIsTextChatting, addr 0x180378320, size 0xa0, virtual false, abstract: false, final false
inline void SetIsTextChatting(bool  isTextChatting) ;

/// @brief Method SetPauseMenuOpen, addr 0x1803783c0, size 0x70, virtual false, abstract: false, final false
inline void SetPauseMenuOpen(bool  hasMenuOpen) ;

/// @brief Method ShowTextChatStroke, addr 0x180378430, size 0xd0, virtual false, abstract: false, final false
inline void ShowTextChatStroke(bool  isDelete) ;

/// @brief Method TextChatCancel, addr 0x180378500, size 0x70, virtual false, abstract: false, final false
inline void TextChatCancel() ;

/// @brief Method TrySendTextChat, addr 0x180378570, size 0xb0, virtual false, abstract: false, final false
inline void TrySendTextChat() ;

/// @brief Method Update, addr 0x180378620, size 0x330, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::GlobalNamespace::TextChatSource> const& __cordl_internal_get_globalTextChatOutput() const;

constexpr ::UnityW<::GlobalNamespace::TextChatSource>& __cordl_internal_get_globalTextChatOutput() ;

constexpr bool const& __cordl_internal_get_hasBeenClosed() const;

constexpr bool& __cordl_internal_get_hasBeenClosed() ;

constexpr bool const& __cordl_internal_get_hasBeenEdit() const;

constexpr bool& __cordl_internal_get_hasBeenEdit() ;

constexpr bool const& __cordl_internal_get_isLocalPlayerTextChatting() const;

constexpr bool& __cordl_internal_get_isLocalPlayerTextChatting() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_messageDuration() const;

constexpr float_t& __cordl_internal_get_messageDuration() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_opactityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_opactityCurve() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr ::UnityW<::GlobalNamespace::TextChatSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::GlobalNamespace::TextChatSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_globalTextChatOutput(::UnityW<::GlobalNamespace::TextChatSource>  value) ;

constexpr void __cordl_internal_set_hasBeenClosed(bool  value) ;

constexpr void __cordl_internal_set_hasBeenEdit(bool  value) ;

constexpr void __cordl_internal_set_isLocalPlayerTextChatting(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_messageDuration(float_t  value) ;

constexpr void __cordl_internal_set_opactityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::GlobalNamespace::TextChatSource>  value) ;

/// @brief Method .ctor, addr 0x180378950, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isPlayerTextChatting, addr 0x180378960, size 0x50, virtual false, abstract: false, final false
inline bool get_isPlayerTextChatting() ;

/// @brief Method set_isPlayerTextChatting, addr 0x1803789b0, size 0x120, virtual false, abstract: false, final false
inline void set_isPlayerTextChatting(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTexter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTexter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTexter(PlayerTexter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTexter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTexter(PlayerTexter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5488};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextChatSource>  ___source;

/// @brief Field globalTextChatOutput, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextChatSource>  ___globalTextChatOutput;

/// @brief Field messageDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___messageDuration;

/// @brief Field opactityCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___opactityCurve;

/// @brief Field logVerbose, offset: 0x30, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field isLocalPlayerTextChatting, offset: 0x40, size: 0x1, def value: None
 bool  ___isLocalPlayerTextChatting;

/// @brief Field hasBeenClosed, offset: 0x41, size: 0x1, def value: None
 bool  ___hasBeenClosed;

/// @brief Field hasBeenEdit, offset: 0x42, size: 0x1, def value: None
 bool  ___hasBeenEdit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___globalTextChatOutput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___messageDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___opactityCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___logVerbose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___playerCharacter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___isLocalPlayerTextChatting) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___hasBeenClosed) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTexter, ___hasBeenEdit) == 0x42, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTexter) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
