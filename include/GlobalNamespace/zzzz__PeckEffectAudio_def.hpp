#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__PeckTransformReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PeckEffectAudio)
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckEffectAudioAction_ActionItem;
}
namespace GlobalNamespace {
class PeckEffectAudioAction;
}
namespace GlobalNamespace {
struct PeckEffectAudio_PeckAudioOutcome;
}
namespace GlobalNamespace {
class PeckEffectAudio___c__DisplayClass9_0;
}
namespace GlobalNamespace {
class PeckEffectAudio___c__DisplayClass9_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectAudio;
}
namespace GlobalNamespace {
class PeckEffectAudio___c__DisplayClass9_0;
}
namespace GlobalNamespace {
class PeckEffectAudio___c__DisplayClass9_1;
}
namespace GlobalNamespace {
struct PeckEffectAudio_PeckAudioOutcome;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectAudio*);
MARK_REF_T(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*);
MARK_REF_T(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*);
MARK_VAL_T(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAudio*, "", "PeckEffectAudio");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*, "", "PeckEffectAudio/<>c__DisplayClass9_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1*, "", "PeckEffectAudio/<>c__DisplayClass9_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome, "", "PeckEffectAudio/PeckAudioOutcome");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectAudio/PeckAudioOutcome
struct CORDL_TYPE PeckEffectAudio_PeckAudioOutcome {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAudio_PeckAudioOutcome() ;

// Ctor Parameters [CppParam { name: "audioAction", ty: "::UnityW<::GlobalNamespace::PeckEffectAudioAction>", modifiers: "", def_value: None }, CppParam { name: "turnOnBehaviours", ty: "::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>", modifiers: "", def_value: None }, CppParam { name: "turnOffBehaviours", ty: "::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>", modifiers: "", def_value: None }]
constexpr PeckEffectAudio_PeckAudioOutcome(::UnityW<::GlobalNamespace::PeckEffectAudioAction>  audioAction, ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  turnOnBehaviours, ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  turnOffBehaviours) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field audioAction, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectAudioAction>  audioAction;

/// @brief Field turnOnBehaviours, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  turnOnBehaviours;

/// @brief Field turnOffBehaviours, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>>  turnOffBehaviours;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome, audioAction) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome, turnOnBehaviours) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome, turnOffBehaviours) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectAudio::PeckAudioOutcome, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAudio/<>c__DisplayClass9_0
class CORDL_TYPE PeckEffectAudio___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PeckEffectAudio>  __4__this;

/// @brief Field outcomeForThisState, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_outcomeForThisState, put=__cordl_internal_set_outcomeForThisState)) ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome  outcomeForThisState;

/// @brief Field targetTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransform, put=__cordl_internal_set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

static inline ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectAudio>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome const& __cordl_internal_get_outcomeForThisState() const;

constexpr ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome& __cordl_internal_get_outcomeForThisState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetTransform() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PeckEffectAudio>  value) ;

constexpr void __cordl_internal_set_outcomeForThisState(::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome  value) ;

constexpr void __cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAudio___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudio___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAudio___c__DisplayClass9_0(PeckEffectAudio___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudio___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAudio___c__DisplayClass9_0(PeckEffectAudio___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5366};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectAudio>  _____4__this;

/// @brief Field outcomeForThisState, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome  ___outcomeForThisState;

/// @brief Field targetTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0, ___outcomeForThisState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0, ___targetTransform) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAudio/<>c__DisplayClass9_1
class CORDL_TYPE PeckEffectAudio___c__DisplayClass9_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*  CS$__8__locals1;

/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::GlobalNamespace::PeckEffectAudioAction_ActionItem*  action;

static inline ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1* New_ctor() ;

/// @brief Method <Peck>b__0, addr 0x18045a480, size 0x60, virtual false, abstract: false, final false
inline void _Peck_b__0(double_t  t) ;

/// @brief Method <Peck>b__1, addr 0x18045a4e0, size 0x90, virtual false, abstract: false, final false
inline void _Peck_b__1(double_t  t) ;

constexpr ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::GlobalNamespace::PeckEffectAudioAction_ActionItem* const& __cordl_internal_get_action() const;

constexpr ::GlobalNamespace::PeckEffectAudioAction_ActionItem*& __cordl_internal_get_action() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*  value) ;

constexpr void __cordl_internal_set_action(::GlobalNamespace::PeckEffectAudioAction_ActionItem*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAudio___c__DisplayClass9_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudio___c__DisplayClass9_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAudio___c__DisplayClass9_1(PeckEffectAudio___c__DisplayClass9_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudio___c__DisplayClass9_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAudio___c__DisplayClass9_1(PeckEffectAudio___c__DisplayClass9_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5367};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::PeckEffectAudioAction_ActionItem*  ___action;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1, ___action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PeckEffectAudio::PeckAudioOutcome, PeckSystemReference, PeckTransformReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectAudio
class CORDL_TYPE PeckEffectAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PeckAudioOutcome = ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome;

using __c__DisplayClass9_0 = ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_0;

using __c__DisplayClass9_1 = ::GlobalNamespace::PeckEffectAudio___c__DisplayClass9_1;

 __declspec(property(get=get_AudioEvent)) ::GlobalNamespace::AudioEvent*  AudioEvent;

/// @brief Field _event, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__event, put=__cordl_internal_set__event)) ::GlobalNamespace::AudioEvent*  _event;

/// @brief Field logVerbose, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field outcomesPerState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_outcomesPerState, put=__cordl_internal_set_outcomesPerState)) ::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>  outcomesPerState;

/// @brief Field systemReference, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field transformReference, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_transformReference, put=__cordl_internal_set_transformReference)) ::GlobalNamespace::PeckTransformReference  transformReference;

/// @brief Method Awake, addr 0x180447d40, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PeckEffectAudio* New_ctor() ;

/// @brief Method Peck, addr 0x180447de0, size 0x490, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method PlayAction, addr 0x180448270, size 0x3e0, virtual false, abstract: false, final false
inline void PlayAction(::GlobalNamespace::PeckEffectAudioAction_ActionItem*  action, ::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome  outcome, ::UnityEngine::Transform*  targetTransform) ;

/// @brief Method StopAction, addr 0x180448650, size 0x70, virtual false, abstract: false, final false
inline void StopAction(::GlobalNamespace::PeckEffectAudioAction_ActionItem*  action) ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__event() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__event() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome> const& __cordl_internal_get_outcomesPerState() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>& __cordl_internal_get_outcomesPerState() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::GlobalNamespace::PeckTransformReference const& __cordl_internal_get_transformReference() const;

constexpr ::GlobalNamespace::PeckTransformReference& __cordl_internal_get_transformReference() ;

constexpr void __cordl_internal_set__event(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_outcomesPerState(::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_transformReference(::GlobalNamespace::PeckTransformReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioEvent, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent* get_AudioEvent() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectAudio(PeckEffectAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectAudio(PeckEffectAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5368};

/// @brief Field systemReference, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field outcomesPerState, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectAudio_PeckAudioOutcome>  ___outcomesPerState;

/// @brief Field transformReference, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::PeckTransformReference  ___transformReference;

/// @brief Field logVerbose, offset: 0x60, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _event, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____event;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectAudio, ___systemReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio, ___outcomesPerState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio, ___transformReference) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio, ___logVerbose) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectAudio, ____event) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectAudio) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
