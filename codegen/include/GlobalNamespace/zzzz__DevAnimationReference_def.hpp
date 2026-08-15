#pragma once
// IWYU pragma private; include "GlobalNamespace/DevAnimationReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(DevAnimationReference)
// Forward declare root types
namespace GlobalNamespace {
class DevAnimationReference;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DevAnimationReference*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DevAnimationReference*, "", "DevAnimationReference");
// Dependencies UnityEngine.AnimationClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DevAnimationReference
class CORDL_TYPE DevAnimationReference : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field clips, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_clips, put=__cordl_internal_set_clips)) ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  clips;

static inline ::GlobalNamespace::DevAnimationReference* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>> const& __cordl_internal_get_clips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>& __cordl_internal_get_clips() ;

constexpr void __cordl_internal_set_clips(::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DevAnimationReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DevAnimationReference", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DevAnimationReference(DevAnimationReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DevAnimationReference", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DevAnimationReference(DevAnimationReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4898};

/// @brief Field clips, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AnimationClip>>  ___clips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DevAnimationReference, ___clips) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DevAnimationReference) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
