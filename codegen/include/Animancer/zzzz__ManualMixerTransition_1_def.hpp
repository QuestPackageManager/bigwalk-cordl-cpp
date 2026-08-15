#pragma once
// IWYU pragma private; include "Animancer/ManualMixerTransition_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransition_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ManualMixerTransition_1)
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class IAnimationClipCollection;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IMotion;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
template<typename TMixer>
class ManualMixerTransition_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::ManualMixerTransition_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::ManualMixerTransition_1, "Animancer", "ManualMixerTransition`1");
// Dependencies Animancer.AnimancerTransition`1<TState>, UnityEngine.Object
namespace Animancer {
// cpp template
template<typename TMixer>
// Is value type: false
// CS Name: Animancer.ManualMixerTransition`1<TMixer>
class CORDL_TYPE ManualMixerTransition_1 : public ::Animancer::AnimancerTransition_1<TMixer> {
public:
// Declarations
 __declspec(property(get=get_Animations)) ::ArrayW<::UnityW<::UnityEngine::Object>>  Animations;

 __declspec(property(get=get_AverageAngularSpeed)) float_t  AverageAngularSpeed;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_HasSpeeds)) bool  HasSpeeds;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_MaximumDuration)) float_t  MaximumDuration;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

 __declspec(property(get=get_Speeds)) ::ArrayW<float_t>  Speeds;

 __declspec(property(get=get_SynchronizeChildren)) ::ArrayW<bool>  SynchronizeChildren;

/// @brief Field _Animations, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animations, put=__cordl_internal_set__Animations)) ::ArrayW<::UnityW<::UnityEngine::Object>>  _Animations;

/// @brief Field _Speed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__Speed, put=__cordl_internal_set__Speed)) float_t  _Speed;

/// @brief Field _Speeds, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Speeds, put=__cordl_internal_set__Speeds)) ::ArrayW<float_t>  _Speeds;

/// @brief Field _SynchronizeChildren, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__SynchronizeChildren, put=__cordl_internal_set__SynchronizeChildren)) ::ArrayW<bool>  _SynchronizeChildren;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>*() noexcept;

/// @brief Convert operator to "::Animancer::IMotion"
constexpr operator  ::Animancer::IMotion*() noexcept;

/// @brief Method Animancer.IAnimationClipCollection.GatherAnimationClips, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Animancer_IAnimationClipCollection_GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method Apply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::ManualMixerTransition_1<TMixer>*  copyFrom) ;

/// @brief Method InitializeState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeState() ;

static inline ::Animancer::ManualMixerTransition_1<TMixer>* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get__Animations() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& __cordl_internal_get__Animations() ;

constexpr float_t const& __cordl_internal_get__Speed() const;

constexpr float_t& __cordl_internal_get__Speed() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__Speeds() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__Speeds() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__SynchronizeChildren() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__SynchronizeChildren() ;

constexpr void __cordl_internal_set__Animations(::ArrayW<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set__Speed(float_t  value) ;

constexpr void __cordl_internal_set__Speeds(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__SynchronizeChildren(::ArrayW<bool>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<::UnityW<::UnityEngine::Object>>> get_Animations() ;

/// @brief Method get_AverageAngularSpeed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_AverageAngularSpeed() ;

/// @brief Method get_AverageVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_HasSpeeds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasSpeeds() ;

/// @brief Method get_IsLooping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_IsValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_MaximumDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_MaximumDuration() ;

/// @brief Method get_Speed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Method get_Speeds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<float_t>> get_Speeds() ;

/// @brief Method get_SynchronizeChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<bool>> get_SynchronizeChildren() ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>* i___Animancer__ICopyable_1___Animancer__ManualMixerTransition_1_TMixer___() noexcept;

/// @brief Convert to "::Animancer::IMotion"
constexpr ::Animancer::IMotion* i___Animancer__IMotion() noexcept;

/// @brief Method set_Speed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManualMixerTransition_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransition_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManualMixerTransition_1(ManualMixerTransition_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransition_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualMixerTransition_1(ManualMixerTransition_1 const& ) = delete;

/// @brief Field AnimationsField offset 0xffffffff size 0x8
static constexpr ::ConstString  AnimationsField{u"_Animations"};

/// @brief Field SpeedsField offset 0xffffffff size 0x8
static constexpr ::ConstString  SpeedsField{u"_Speeds"};

/// @brief Field SynchronizeChildrenField offset 0xffffffff size 0x8
static constexpr ::ConstString  SynchronizeChildrenField{u"_SynchronizeChildren"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18232};

/// @brief Field _Speed, offset: 0x38, size: 0x4, def value: None
 float_t  ____Speed;

/// @brief Field _Animations, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Object>>  ____Animations;

/// @brief Field _Speeds, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ____Speeds;

/// @brief Field _SynchronizeChildren, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<bool>  ____SynchronizeChildren;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
