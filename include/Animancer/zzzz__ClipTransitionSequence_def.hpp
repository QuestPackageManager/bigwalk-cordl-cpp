#pragma once
// IWYU pragma private; include "Animancer/ClipTransitionSequence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClipTransitionSequence)
namespace Animancer {
struct AnimancerEvent;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class ClipTransitionSequence___c__DisplayClass6_0;
}
namespace Animancer {
class ClipTransition;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class ClipTransitionSequence;
}
namespace Animancer {
class ClipTransitionSequence___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Animancer::ClipTransitionSequence*);
MARK_REF_T(::Animancer::ClipTransitionSequence___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Animancer::ClipTransitionSequence*, "Animancer", "ClipTransitionSequence");
DEFINE_IL2CPP_CLASS(::Animancer::ClipTransitionSequence___c__DisplayClass6_0*, "Animancer", "ClipTransitionSequence/<>c__DisplayClass6_0");
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ClipTransitionSequence/<>c__DisplayClass6_0
class CORDL_TYPE ClipTransitionSequence___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field next, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Animancer::ClipTransition*  next;

static inline ::Animancer::ClipTransitionSequence___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize>b__0, addr 0x180316050, size 0x70, virtual false, abstract: false, final false
inline void _UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_b__0() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get_next() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get_next() ;

constexpr void __cordl_internal_set_next(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipTransitionSequence___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionSequence___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipTransitionSequence___c__DisplayClass6_0(ClipTransitionSequence___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionSequence___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipTransitionSequence___c__DisplayClass6_0(ClipTransitionSequence___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18211};

/// @brief Field next, offset: 0x10, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ___next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ClipTransitionSequence___c__DisplayClass6_0, ___next) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Animancer::ClipTransitionSequence___c__DisplayClass6_0) == 0x18, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.ClipTransition
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ClipTransitionSequence
class CORDL_TYPE ClipTransitionSequence : public ::Animancer::ClipTransition {
public:
// Declarations
using __c__DisplayClass6_0 = ::Animancer::ClipTransitionSequence___c__DisplayClass6_0;

 __declspec(property(get=get_AverageAngularSpeed)) float_t  AverageAngularSpeed;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_EndEvent, put=set_EndEvent)) ::Animancer::AnimancerEvent  EndEvent;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_LastTransition)) ::Animancer::ClipTransition*  LastTransition;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_MaximumDuration)) float_t  MaximumDuration;

 __declspec(property(get=get_Others)) ::ArrayW<::Animancer::ClipTransition*>  Others;

/// @brief Field _OnEnd, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnEnd, put=__cordl_internal_set__OnEnd)) ::System::Action*  _OnEnd;

/// @brief Field _Others, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Others, put=__cordl_internal_set__Others)) ::ArrayW<::Animancer::ClipTransition*>  _Others;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddEvent, addr 0x180305fa0, size 0x160, virtual false, abstract: false, final false
inline void AddEvent(float_t  time, bool  normalized, ::System::Action*  callback) ;

/// @brief Method AddEvent, addr 0x180306100, size 0xc0, virtual false, abstract: false, final false
static inline void AddEvent(::Animancer::ClipTransition*  transition, float_t  time, ::System::Action*  callback) ;

/// @brief Method Apply, addr 0x1803061c0, size 0x160, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CopyFrom, addr 0x180306320, size 0xb0, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::ClipTransitionSequence*  copyFrom) ;

/// @brief Method GatherAnimationClips, addr 0x1803063d0, size 0xa0, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

static inline ::Animancer::ClipTransitionSequence* New_ctor() ;

/// @brief Method TryAddEvent, addr 0x180306470, size 0xe0, virtual false, abstract: false, final false
static inline bool TryAddEvent(::Animancer::ClipTransition*  transition, float_t  length, ::by_ref<float_t>  time, ::System::Action*  callback) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x1803065d0, size 0x110, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method <Apply>b__8_0, addr 0x180306550, size 0x80, virtual false, abstract: false, final false
inline void _Apply_b__8_0() ;

constexpr ::System::Action* const& __cordl_internal_get__OnEnd() const;

constexpr ::System::Action*& __cordl_internal_get__OnEnd() ;

constexpr ::ArrayW<::Animancer::ClipTransition*> const& __cordl_internal_get__Others() const;

constexpr ::ArrayW<::Animancer::ClipTransition*>& __cordl_internal_get__Others() ;

constexpr void __cordl_internal_set__OnEnd(::System::Action*  value) ;

constexpr void __cordl_internal_set__Others(::ArrayW<::Animancer::ClipTransition*>  value) ;

/// @brief Method .ctor, addr 0x1803066e0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AverageAngularSpeed, addr 0x180306770, size 0x170, virtual true, abstract: false, final false
inline float_t get_AverageAngularSpeed() ;

/// @brief Method get_AverageVelocity, addr 0x1803068e0, size 0x210, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_EndEvent, addr 0x180306af0, size 0x60, virtual false, abstract: false, final false
inline ::Animancer::AnimancerEvent get_EndEvent() ;

/// @brief Method get_IsLooping, addr 0x180306b50, size 0x80, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_IsValid, addr 0x180306bd0, size 0xc0, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_LastTransition, addr 0x180306c90, size 0x40, virtual false, abstract: false, final false
inline ::Animancer::ClipTransition* get_LastTransition() ;

/// @brief Method get_Length, addr 0x180306cd0, size 0xa0, virtual true, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_MaximumDuration, addr 0x180306d70, size 0xc0, virtual true, abstract: false, final false
inline float_t get_MaximumDuration() ;

/// @brief Method get_Others, addr 0x1802f0290, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<::Animancer::ClipTransition*>> get_Others() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ClipTransitionSequence*>* i___Animancer__ICopyable_1___Animancer__ClipTransitionSequence__() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_EndEvent, addr 0x180306e30, size 0x50, virtual false, abstract: false, final false
inline void set_EndEvent(::Animancer::AnimancerEvent  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipTransitionSequence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionSequence", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipTransitionSequence(ClipTransitionSequence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionSequence", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipTransitionSequence(ClipTransitionSequence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18212};

/// @brief Field _Others, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Animancer::ClipTransition*>  ____Others;

/// @brief Field _OnEnd, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ____OnEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ClipTransitionSequence, ____Others) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::ClipTransitionSequence, ____OnEnd) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::ClipTransitionSequence) == 0x58, "Size mismatch!");

} // namespace end def Animancer
