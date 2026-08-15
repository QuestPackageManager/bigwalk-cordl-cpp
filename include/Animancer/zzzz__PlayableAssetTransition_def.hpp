#pragma once
// IWYU pragma private; include "Animancer/PlayableAssetTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransition_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableAssetTransition)
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
class IHasKey;
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
namespace Animancer {
class PlayableAssetState_ITransition;
}
namespace Animancer {
class PlayableAssetState;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Animancer {
class PlayableAssetTransition;
}
// Write type traits
MARK_REF_T(::Animancer::PlayableAssetTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::PlayableAssetTransition*, "Animancer", "PlayableAssetTransition");
// Dependencies Animancer.AnimancerTransition`1<TState>, UnityEngine.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.PlayableAssetTransition
class CORDL_TYPE PlayableAssetTransition : public ::Animancer::AnimancerTransition_1<::Animancer::PlayableAssetState*> {
public:
// Declarations
 __declspec(property(get=get_Asset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  Asset;

 __declspec(property(get=get_Bindings)) ::ArrayW<::UnityW<::UnityEngine::Object>>  Bindings;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

 __declspec(property(get=get_MaximumDuration)) float_t  MaximumDuration;

 __declspec(property(get=get_NormalizedStartTime, put=set_NormalizedStartTime)) float_t  NormalizedStartTime;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

/// @brief Field _Asset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Asset, put=__cordl_internal_set__Asset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _Asset;

/// @brief Field _Bindings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Bindings, put=__cordl_internal_set__Bindings)) ::ArrayW<::UnityW<::UnityEngine::Object>>  _Bindings;

/// @brief Field _NormalizedStartTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__NormalizedStartTime, put=__cordl_internal_set__NormalizedStartTime)) float_t  _NormalizedStartTime;

/// @brief Field _Speed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__Speed, put=__cordl_internal_set__Speed)) float_t  _Speed;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*() noexcept;

/// @brief Convert operator to "::Animancer::PlayableAssetState_ITransition"
constexpr operator  ::Animancer::PlayableAssetState_ITransition*() noexcept;

/// @brief Method Animancer.IAnimationClipCollection.GatherAnimationClips, addr 0x180312f70, size 0x20, virtual true, abstract: false, final true
inline void Animancer_IAnimationClipCollection_GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method Apply, addr 0x180306e80, size 0x40, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CopyFrom, addr 0x180312f90, size 0xb0, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::PlayableAssetTransition*  copyFrom) ;

/// @brief Method CreateState, addr 0x180313040, size 0xd0, virtual true, abstract: false, final false
inline ::Animancer::PlayableAssetState* CreateState() ;

static inline ::Animancer::PlayableAssetTransition* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__Asset() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__Asset() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get__Bindings() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& __cordl_internal_get__Bindings() ;

constexpr float_t const& __cordl_internal_get__NormalizedStartTime() const;

constexpr float_t& __cordl_internal_get__NormalizedStartTime() ;

constexpr float_t const& __cordl_internal_get__Speed() const;

constexpr float_t& __cordl_internal_get__Speed() ;

constexpr void __cordl_internal_set__Asset(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__Bindings(::ArrayW<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set__NormalizedStartTime(float_t  value) ;

constexpr void __cordl_internal_set__Speed(float_t  value) ;

/// @brief Method .ctor, addr 0x180306fd0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Asset, addr 0x180311e20, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::UnityW<::UnityEngine::Playables::PlayableAsset>> get_Asset() ;

/// @brief Method get_Bindings, addr 0x1802f0290, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::ArrayW<::UnityW<::UnityEngine::Object>>> get_Bindings() ;

/// @brief Method get_IsValid, addr 0x180313110, size 0x10, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Key, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* get_Key() ;

/// @brief Method get_MainObject, addr 0x1802d9800, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Method get_MaximumDuration, addr 0x180313120, size 0x50, virtual true, abstract: false, final false
inline float_t get_MaximumDuration() ;

/// @brief Method get_NormalizedStartTime, addr 0x1802e2d80, size 0x10, virtual true, abstract: false, final false
inline float_t get_NormalizedStartTime() ;

/// @brief Method get_Speed, addr 0x1802e2b90, size 0x10, virtual true, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>* i___Animancer__ICopyable_1___Animancer__PlayableAssetTransition__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>* i___Animancer__ITransition_1___Animancer__PlayableAssetState__() noexcept;

/// @brief Convert to "::Animancer::PlayableAssetState_ITransition"
constexpr ::Animancer::PlayableAssetState_ITransition* i___Animancer__PlayableAssetState_ITransition() noexcept;

/// @brief Method set_NormalizedStartTime, addr 0x180307250, size 0x10, virtual true, abstract: false, final false
inline void set_NormalizedStartTime(float_t  value) ;

/// @brief Method set_Speed, addr 0x1802e2f60, size 0x10, virtual true, abstract: false, final false
inline void set_Speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableAssetTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableAssetTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableAssetTransition(PlayableAssetTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableAssetTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableAssetTransition(PlayableAssetTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18240};

/// @brief Field _Asset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____Asset;

/// @brief Field _Speed, offset: 0x40, size: 0x4, def value: None
 float_t  ____Speed;

/// @brief Field _NormalizedStartTime, offset: 0x44, size: 0x4, def value: None
 float_t  ____NormalizedStartTime;

/// @brief Field _Bindings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Object>>  ____Bindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::PlayableAssetTransition, ____Asset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::PlayableAssetTransition, ____Speed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::PlayableAssetTransition, ____NormalizedStartTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Animancer::PlayableAssetTransition, ____Bindings) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::PlayableAssetTransition) == 0x50, "Size mismatch!");

} // namespace end def Animancer
