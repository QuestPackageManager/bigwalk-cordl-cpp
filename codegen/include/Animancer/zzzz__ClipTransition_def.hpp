#pragma once
// IWYU pragma private; include "Animancer/ClipTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransition_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClipTransition)
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class ClipState_ITransition;
}
namespace Animancer {
class ClipState;
}
namespace Animancer {
struct FadeMode;
}
namespace Animancer {
class IAnimationClipCollection;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IMotion;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
template<typename TState>
class ITransition_1;
}
namespace Animancer {
class ITransition;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class ClipTransition;
}
// Write type traits
MARK_REF_T(::Animancer::ClipTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::ClipTransition*, "Animancer", "ClipTransition");
// Dependencies Animancer.AnimancerTransition`1<TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ClipTransition
class CORDL_TYPE ClipTransition : public ::Animancer::AnimancerTransition_1<::Animancer::ClipState*> {
public:
// Declarations
 __declspec(property(get=get_AverageAngularSpeed)) float_t  AverageAngularSpeed;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_Clip, put=set_Clip)) ::UnityW<::UnityEngine::AnimationClip>  Clip;

 __declspec(property(get=get_FadeMode)) ::Animancer::FadeMode  FadeMode;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

 __declspec(property(get=get_MaximumDuration)) float_t  MaximumDuration;

 __declspec(property(get=get_NormalizedStartTime, put=set_NormalizedStartTime)) float_t  NormalizedStartTime;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

/// @brief Field _Clip, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Clip, put=__cordl_internal_set__Clip)) ::UnityW<::UnityEngine::AnimationClip>  _Clip;

/// @brief Field _NormalizedStartTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__NormalizedStartTime, put=__cordl_internal_set__NormalizedStartTime)) float_t  _NormalizedStartTime;

/// @brief Field _Speed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__Speed, put=__cordl_internal_set__Speed)) float_t  _Speed;

/// @brief Convert operator to "::Animancer::ClipState_ITransition"
constexpr operator  ::Animancer::ClipState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ClipTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ClipTransition*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IMotion"
constexpr operator  ::Animancer::IMotion*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ClipState*>*() noexcept;

/// @brief Method Apply, addr 0x180306e80, size 0x40, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CopyFrom, addr 0x180306ec0, size 0x80, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::ClipTransition*  copyFrom) ;

/// @brief Method CreateState, addr 0x180306f40, size 0x70, virtual true, abstract: false, final false
inline ::Animancer::ClipState* CreateState() ;

/// @brief Method GatherAnimationClips, addr 0x180306fb0, size 0x20, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

static inline ::Animancer::ClipTransition* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Clip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Clip() ;

constexpr float_t const& __cordl_internal_get__NormalizedStartTime() const;

constexpr float_t& __cordl_internal_get__NormalizedStartTime() ;

constexpr float_t const& __cordl_internal_get__Speed() const;

constexpr float_t& __cordl_internal_get__Speed() ;

constexpr void __cordl_internal_set__Clip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__NormalizedStartTime(float_t  value) ;

constexpr void __cordl_internal_set__Speed(float_t  value) ;

/// @brief Method .ctor, addr 0x180306fd0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AverageAngularSpeed, addr 0x180306ff0, size 0x40, virtual true, abstract: false, final false
inline float_t get_AverageAngularSpeed() ;

/// @brief Method get_AverageVelocity, addr 0x180307030, size 0x70, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_Clip, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Clip() ;

/// @brief Method get_FadeMode, addr 0x1803070a0, size 0x20, virtual true, abstract: false, final false
inline ::Animancer::FadeMode get_FadeMode() ;

/// @brief Method get_IsLooping, addr 0x1803070c0, size 0x40, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_IsValid, addr 0x180307100, size 0x40, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Key, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* get_Key() ;

/// @brief Method get_Length, addr 0x180307140, size 0xd0, virtual true, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_MainObject, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Method get_MaximumDuration, addr 0x180307210, size 0x40, virtual true, abstract: false, final false
inline float_t get_MaximumDuration() ;

/// @brief Method get_NormalizedStartTime, addr 0x1802e2d80, size 0x10, virtual true, abstract: false, final false
inline float_t get_NormalizedStartTime() ;

/// @brief Method get_Speed, addr 0x1802e2b90, size 0x10, virtual true, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Convert to "::Animancer::ClipState_ITransition"
constexpr ::Animancer::ClipState_ITransition* i___Animancer__ClipState_ITransition() noexcept;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ClipTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ClipTransition*>* i___Animancer__ICopyable_1___Animancer__ClipTransition__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IMotion"
constexpr ::Animancer::IMotion* i___Animancer__IMotion() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ClipState*>* i___Animancer__ITransition_1___Animancer__ClipState__() noexcept;

/// @brief Method set_Clip, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_Clip(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_NormalizedStartTime, addr 0x180307250, size 0x10, virtual true, abstract: false, final false
inline void set_NormalizedStartTime(float_t  value) ;

/// @brief Method set_Speed, addr 0x1802e2f60, size 0x10, virtual true, abstract: false, final false
inline void set_Speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipTransition(ClipTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipTransition(ClipTransition const& ) = delete;

/// @brief Field ClipFieldName offset 0xffffffff size 0x8
static constexpr ::ConstString  ClipFieldName{u"_Clip"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18210};

/// @brief Field _Clip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Clip;

/// @brief Field _Speed, offset: 0x40, size: 0x4, def value: None
 float_t  ____Speed;

/// @brief Field _NormalizedStartTime, offset: 0x44, size: 0x4, def value: None
 float_t  ____NormalizedStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ClipTransition, ____Clip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::ClipTransition, ____Speed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::ClipTransition, ____NormalizedStartTime) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Animancer::ClipTransition) == 0x48, "Size mismatch!");

} // namespace end def Animancer
