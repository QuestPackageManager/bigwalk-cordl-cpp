#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "GlobalNamespace/zzzz__TextChatHud_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextChatSource)
namespace GlobalNamespace {
class AudioOcclusionBase;
}
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class IAudioRTPCXProvider;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct TextChatHud_BlipIcon;
}
namespace GlobalNamespace {
struct TextChatMessage;
}
namespace GlobalNamespace {
struct TextChatSource__DelaySetBigBounds_d__39;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TextChatSource;
}
namespace GlobalNamespace {
struct TextChatSource__DelaySetBigBounds_d__39;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TextChatSource*);
MARK_VAL_T(::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatSource*, "", "TextChatSource");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39, "", "TextChatSource/<DelaySetBigBounds>d__39");
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextChatSource/<DelaySetBigBounds>d__39
struct CORDL_TYPE TextChatSource__DelaySetBigBounds_d__39 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x180459ff0, size 0x290, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x18038a820, size 0x20, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TextChatSource__DelaySetBigBounds_d__39() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None }]
constexpr TextChatSource__DelaySetBigBounds_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::TMPro::TMP_Text>  textComponent, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field textComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  textComponent;

/// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
 ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39, textComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerLookSet::LookColor, TextChatHud::BlipIcon, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextChatSource
class CORDL_TYPE TextChatSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DelaySetBigBounds_d__39 = ::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39;

 __declspec(property(get=get_XProviderIdentifier)) ::StringW  XProviderIdentifier;

/// @brief Field _isTyping, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTyping, put=__cordl_internal_set__isTyping)) bool  _isTyping;

/// @brief Field <isVisible>k__BackingField, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isVisible_k__BackingField, put=__cordl_internal_set__isVisible_k__BackingField)) bool  _isVisible_k__BackingField;

/// @brief Field activeMessages, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeMessages, put=__cordl_internal_set_activeMessages)) ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>*  activeMessages;

/// @brief Field activeSources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeSources, put=setStaticF_activeSources)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*  activeSources;

/// @brief Field allCaps, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_allCaps, put=__cordl_internal_set_allCaps)) bool  allCaps;

/// @brief Field audibility, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_audibility, put=__cordl_internal_set_audibility)) float_t  audibility;

/// @brief Field blipColor, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get_blipColor, put=__cordl_internal_set_blipColor)) ::GlobalNamespace::PlayerLookSet_LookColor  blipColor;

/// @brief Field customAimTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_customAimTransform, put=__cordl_internal_set_customAimTransform)) ::UnityW<::UnityEngine::Transform>  customAimTransform;

/// @brief Field dampTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampTime, put=__cordl_internal_set_dampTime)) float_t  dampTime;

/// @brief Field dampedTransform, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_dampedTransform, put=__cordl_internal_set_dampedTransform)) ::UnityW<::UnityEngine::Transform>  dampedTransform;

/// @brief Field distanceScalar, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceScalar, put=__cordl_internal_set_distanceScalar)) float_t  distanceScalar;

/// @brief Field iconType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_iconType, put=__cordl_internal_set_iconType)) ::GlobalNamespace::TextChatHud_BlipIcon  iconType;

 __declspec(property(get=get_iconTypeForBlips)) ::GlobalNamespace::TextChatHud_BlipIcon  iconTypeForBlips;

/// @brief Field isLocalPlayer, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocalPlayer, put=__cordl_internal_set_isLocalPlayer)) bool  isLocalPlayer;

 __declspec(property(get=get_isTyping, put=set_isTyping)) bool  isTyping;

 __declspec(property(get=get_isVisible, put=set_isVisible)) bool  isVisible;

/// @brief Field logVerbose, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field materialForDarkColors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialForDarkColors, put=__cordl_internal_set_materialForDarkColors)) ::UnityW<::UnityEngine::Material>  materialForDarkColors;

 __declspec(property(get=get_mostRecentMessage)) ::GlobalNamespace::TextChatMessage  mostRecentMessage;

/// @brief Field occlusion, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusion, put=__cordl_internal_set_occlusion)) ::UnityW<::GlobalNamespace::AudioOcclusionBase>  occlusion;

/// @brief Field occlusionConfig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusionConfig, put=__cordl_internal_set_occlusionConfig)) ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  occlusionConfig;

/// @brief Field occlusionConfigSpeechless, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusionConfigSpeechless, put=__cordl_internal_set_occlusionConfigSpeechless)) ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  occlusionConfigSpeechless;

/// @brief Field opacityCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_opacityCurve, put=__cordl_internal_set_opacityCurve)) ::UnityEngine::AnimationCurve*  opacityCurve;

/// @brief Field showAudibility, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAudibility, put=__cordl_internal_set_showAudibility)) bool  showAudibility;

/// @brief Field smoothDampedPosition, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_smoothDampedPosition, put=__cordl_internal_set_smoothDampedPosition)) ::UnityEngine::Vector3  smoothDampedPosition;

/// @brief Field smoothDampedVelocity, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_smoothDampedVelocity, put=__cordl_internal_set_smoothDampedVelocity)) ::UnityEngine::Vector3  smoothDampedVelocity;

/// @brief Field textField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::TMPro::TMP_Text>  textField;

/// @brief Field textScalar, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_textScalar, put=__cordl_internal_set_textScalar)) float_t  textScalar;

/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr operator  ::GlobalNamespace::IAudioRTPCXProvider*() noexcept;

/// @brief Method Activate, addr 0x180456eb0, size 0x50, virtual false, abstract: false, final false
inline void Activate(bool  inaudible) ;

/// @brief Method AddMessage, addr 0x180456f00, size 0x200, virtual false, abstract: false, final false
inline void AddMessage(::GlobalNamespace::TextChatMessage  message, bool  inaudible) ;

/// @brief Method ClearMesssages, addr 0x180457100, size 0x40, virtual false, abstract: false, final false
inline void ClearMesssages() ;

/// @brief Method DelaySetBigBounds, addr 0x180457140, size 0x90, virtual false, abstract: false, final false
static inline void DelaySetBigBounds(::TMPro::TMP_Text*  textComponent) ;

/// @brief Method GetActiveMessages, addr 0x1804571d0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>* GetActiveMessages() ;

/// @brief Method GetCombinedString, addr 0x180457230, size 0x150, virtual false, abstract: false, final false
inline ::StringW GetCombinedString() ;

/// @brief Method GetOcclusionFromAudioSystem, addr 0x180457380, size 0xf0, virtual false, abstract: false, final false
inline float_t GetOcclusionFromAudioSystem() ;

/// @brief Method GetX, addr 0x180457470, size 0x100, virtual true, abstract: false, final true
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method HasReadableMessageFromPlayer, addr 0x180457570, size 0xf0, virtual false, abstract: false, final false
inline bool HasReadableMessageFromPlayer(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method Initialize, addr 0x180457660, size 0x50, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsPlayerTextLocallyReadable, addr 0x1804576b0, size 0x170, virtual false, abstract: false, final false
static inline bool IsPlayerTextLocallyReadable(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method LateUpdate, addr 0x180457820, size 0x1b0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TextChatSource* New_ctor() ;

/// @brief Method OnDisable, addr 0x1804579d0, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180457a10, size 0x140, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTransformParentChanged, addr 0x180457b50, size 0x10, virtual false, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method RefreshOpacityAndRotation, addr 0x180457b60, size 0x720, virtual false, abstract: false, final false
inline void RefreshOpacityAndRotation() ;

/// @brief Method SetAllMessagesBroadcasted, addr 0x180458280, size 0x170, virtual false, abstract: false, final false
inline void SetAllMessagesBroadcasted() ;

/// @brief Method SetBigBounds, addr 0x1804583f0, size 0x140, virtual false, abstract: false, final false
static inline void SetBigBounds(::TMPro::TMP_Text*  textComponent) ;

/// @brief Method SetDisplayActive, addr 0x180458530, size 0x330, virtual false, abstract: false, final false
inline void SetDisplayActive(bool  active, bool  inaudible) ;

/// @brief Method SetOutput, addr 0x180458860, size 0x90, virtual false, abstract: false, final false
inline void SetOutput(::StringW  text) ;

constexpr bool const& __cordl_internal_get__isTyping() const;

constexpr bool& __cordl_internal_get__isTyping() ;

constexpr bool const& __cordl_internal_get__isVisible_k__BackingField() const;

constexpr bool& __cordl_internal_get__isVisible_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>* const& __cordl_internal_get_activeMessages() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>*& __cordl_internal_get_activeMessages() ;

constexpr bool const& __cordl_internal_get_allCaps() const;

constexpr bool& __cordl_internal_get_allCaps() ;

constexpr float_t const& __cordl_internal_get_audibility() const;

constexpr float_t& __cordl_internal_get_audibility() ;

constexpr ::GlobalNamespace::PlayerLookSet_LookColor const& __cordl_internal_get_blipColor() const;

constexpr ::GlobalNamespace::PlayerLookSet_LookColor& __cordl_internal_get_blipColor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_customAimTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_customAimTransform() ;

constexpr float_t const& __cordl_internal_get_dampTime() const;

constexpr float_t& __cordl_internal_get_dampTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dampedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dampedTransform() ;

constexpr float_t const& __cordl_internal_get_distanceScalar() const;

constexpr float_t& __cordl_internal_get_distanceScalar() ;

constexpr ::GlobalNamespace::TextChatHud_BlipIcon const& __cordl_internal_get_iconType() const;

constexpr ::GlobalNamespace::TextChatHud_BlipIcon& __cordl_internal_get_iconType() ;

constexpr bool const& __cordl_internal_get_isLocalPlayer() const;

constexpr bool& __cordl_internal_get_isLocalPlayer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_materialForDarkColors() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_materialForDarkColors() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase> const& __cordl_internal_get_occlusion() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase>& __cordl_internal_get_occlusion() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& __cordl_internal_get_occlusionConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& __cordl_internal_get_occlusionConfig() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& __cordl_internal_get_occlusionConfigSpeechless() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& __cordl_internal_get_occlusionConfigSpeechless() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_opacityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_opacityCurve() ;

constexpr bool const& __cordl_internal_get_showAudibility() const;

constexpr bool& __cordl_internal_get_showAudibility() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_smoothDampedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_smoothDampedPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_smoothDampedVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_smoothDampedVelocity() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_textField() ;

constexpr float_t const& __cordl_internal_get_textScalar() const;

constexpr float_t& __cordl_internal_get_textScalar() ;

constexpr void __cordl_internal_set__isTyping(bool  value) ;

constexpr void __cordl_internal_set__isVisible_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeMessages(::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>*  value) ;

constexpr void __cordl_internal_set_allCaps(bool  value) ;

constexpr void __cordl_internal_set_audibility(float_t  value) ;

constexpr void __cordl_internal_set_blipColor(::GlobalNamespace::PlayerLookSet_LookColor  value) ;

constexpr void __cordl_internal_set_customAimTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_dampTime(float_t  value) ;

constexpr void __cordl_internal_set_dampedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_distanceScalar(float_t  value) ;

constexpr void __cordl_internal_set_iconType(::GlobalNamespace::TextChatHud_BlipIcon  value) ;

constexpr void __cordl_internal_set_isLocalPlayer(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_materialForDarkColors(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_occlusion(::UnityW<::GlobalNamespace::AudioOcclusionBase>  value) ;

constexpr void __cordl_internal_set_occlusionConfig(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value) ;

constexpr void __cordl_internal_set_occlusionConfigSpeechless(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value) ;

constexpr void __cordl_internal_set_opacityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_showAudibility(bool  value) ;

constexpr void __cordl_internal_set_smoothDampedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_smoothDampedVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_textScalar(float_t  value) ;

/// @brief Method .ctor, addr 0x1804588f0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>* getStaticF_activeSources() ;

/// @brief Method get_XProviderIdentifier, addr 0x180458910, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_XProviderIdentifier() ;

/// @brief Method get_iconTypeForBlips, addr 0x180458920, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextChatHud_BlipIcon get_iconTypeForBlips() ;

/// @brief Method get_isTyping, addr 0x1803115f0, size 0x10, virtual false, abstract: false, final false
inline bool get_isTyping() ;

/// @brief Method get_isVisible, addr 0x180458940, size 0x10, virtual false, abstract: false, final false
inline bool get_isVisible() ;

/// @brief Method get_mostRecentMessage, addr 0x180458950, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextChatMessage get_mostRecentMessage() ;

/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* i___GlobalNamespace__IAudioRTPCXProvider() noexcept;

static inline void setStaticF_activeSources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*  value) ;

/// @brief Method set_isTyping, addr 0x1804589a0, size 0x100, virtual false, abstract: false, final false
inline void set_isTyping(bool  value) ;

/// @brief Method set_isVisible, addr 0x180458aa0, size 0x10, virtual false, abstract: false, final false
inline void set_isVisible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextChatSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextChatSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextChatSource(TextChatSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextChatSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextChatSource(TextChatSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5332};

/// @brief Field iconType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::TextChatHud_BlipIcon  ___iconType;

/// @brief Field materialForDarkColors, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___materialForDarkColors;

/// @brief Field activeMessages, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>*  ___activeMessages;

/// @brief Field occlusionConfig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  ___occlusionConfig;

/// @brief Field occlusionConfigSpeechless, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  ___occlusionConfigSpeechless;

/// @brief Field opacityCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___opacityCurve;

/// @brief Field textField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___textField;

/// @brief Field dampedTransform, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___dampedTransform;

/// @brief Field isLocalPlayer, offset: 0x60, size: 0x1, def value: None
 bool  ___isLocalPlayer;

/// @brief Field allCaps, offset: 0x61, size: 0x1, def value: None
 bool  ___allCaps;

/// @brief Field dampTime, offset: 0x64, size: 0x4, def value: None
 float_t  ___dampTime;

/// @brief Field distanceScalar, offset: 0x68, size: 0x4, def value: None
 float_t  ___distanceScalar;

/// @brief Field textScalar, offset: 0x6c, size: 0x4, def value: None
 float_t  ___textScalar;

/// @brief Field customAimTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___customAimTransform;

/// @brief Field logVerbose, offset: 0x78, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field showAudibility, offset: 0x79, size: 0x1, def value: None
 bool  ___showAudibility;

/// @brief Field occlusion, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionBase>  ___occlusion;

/// @brief Field audibility, offset: 0x88, size: 0x4, def value: None
 float_t  ___audibility;

/// @brief Field _isTyping, offset: 0x8c, size: 0x1, def value: None
 bool  ____isTyping;

/// @brief Field <isVisible>k__BackingField, offset: 0x8d, size: 0x1, def value: None
 bool  ____isVisible_k__BackingField;

/// @brief Field smoothDampedPosition, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___smoothDampedPosition;

/// @brief Field smoothDampedVelocity, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___smoothDampedVelocity;

/// @brief Field blipColor, offset: 0xa8, size: 0x18, def value: None
 ::GlobalNamespace::PlayerLookSet_LookColor  ___blipColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextChatSource, ___iconType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___materialForDarkColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___activeMessages) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___occlusionConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___occlusionConfigSpeechless) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___opacityCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___textField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___dampedTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___isLocalPlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___allCaps) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___dampTime) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___distanceScalar) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___textScalar) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___customAimTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___logVerbose) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___showAudibility) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___occlusion) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___audibility) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ____isTyping) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ____isVisible_k__BackingField) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___smoothDampedPosition) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___smoothDampedVelocity) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextChatSource, ___blipColor) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextChatSource) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
