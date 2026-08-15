#pragma once
// IWYU pragma private; include "Animancer/DirectionalClipTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalClipTransition)
namespace Animancer {
struct DirectionalAnimationSet8_Direction;
}
namespace Animancer {
struct DirectionalAnimationSet_Direction;
}
namespace Animancer {
class DirectionalAnimationSet;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
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
struct Vector2;
}
// Forward declare root types
namespace Animancer {
class DirectionalClipTransition;
}
// Write type traits
MARK_REF_T(::Animancer::DirectionalClipTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::DirectionalClipTransition*, "Animancer", "DirectionalClipTransition");
// Dependencies Animancer.ClipTransition
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DirectionalClipTransition
class CORDL_TYPE DirectionalClipTransition : public ::Animancer::ClipTransition {
public:
// Declarations
 __declspec(property(get=get_AnimationSet)) ::UnityW<::Animancer::DirectionalAnimationSet>  AnimationSet;

 __declspec(property(get=get_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

/// @brief Field _AnimationSet, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnimationSet, put=__cordl_internal_set__AnimationSet)) ::UnityW<::Animancer::DirectionalAnimationSet>  _AnimationSet;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>*() noexcept;

/// @brief Method CopyFrom, addr 0x180309590, size 0xa0, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::DirectionalClipTransition*  copyFrom) ;

/// @brief Method GatherAnimationClips, addr 0x180309630, size 0x40, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

static inline ::Animancer::DirectionalClipTransition* New_ctor() ;

/// @brief Method SetDirection, addr 0x180309670, size 0x40, virtual false, abstract: false, final false
inline void SetDirection(::Animancer::DirectionalAnimationSet8_Direction  direction) ;

/// @brief Method SetDirection, addr 0x1803096b0, size 0xb0, virtual false, abstract: false, final false
inline void SetDirection(::Animancer::DirectionalAnimationSet_Direction  direction) ;

/// @brief Method SetDirection, addr 0x180309760, size 0x40, virtual false, abstract: false, final false
inline void SetDirection(::UnityEngine::Vector2  direction) ;

/// @brief Method SetDirection, addr 0x180309670, size 0x40, virtual false, abstract: false, final false
inline void SetDirection(int32_t  direction) ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__AnimationSet() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__AnimationSet() ;

constexpr void __cordl_internal_set__AnimationSet(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

/// @brief Method .ctor, addr 0x180306fd0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AnimationSet, addr 0x1802f0290, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::UnityW<::Animancer::DirectionalAnimationSet>> get_AnimationSet() ;

/// @brief Method get_MainObject, addr 0x1802e58c0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>* i___Animancer__ICopyable_1___Animancer__DirectionalClipTransition__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalClipTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalClipTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalClipTransition(DirectionalClipTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalClipTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalClipTransition(DirectionalClipTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18191};

/// @brief Field _AnimationSet, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____AnimationSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::DirectionalClipTransition, ____AnimationSet) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::DirectionalClipTransition) == 0x50, "Size mismatch!");

} // namespace end def Animancer
