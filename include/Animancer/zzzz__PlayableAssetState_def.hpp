#pragma once
// IWYU pragma private; include "Animancer/PlayableAssetState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableAssetState)
namespace Animancer {
class AnimancerNode;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
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
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Animancer {
class PlayableAssetState;
}
namespace Animancer {
class PlayableAssetState_ITransition;
}
// Write type traits
MARK_REF_T(::Animancer::PlayableAssetState*);
MARK_REF_T(::Animancer::PlayableAssetState_ITransition*);
DEFINE_IL2CPP_CLASS(::Animancer::PlayableAssetState*, "Animancer", "PlayableAssetState");
DEFINE_IL2CPP_CLASS(::Animancer::PlayableAssetState_ITransition*, "Animancer", "PlayableAssetState/ITransition");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.PlayableAssetState/ITransition
class CORDL_TYPE PlayableAssetState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>* i___Animancer__ITransition_1___Animancer__PlayableAssetState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "PlayableAssetState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableAssetState_ITransition(PlayableAssetState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.AnimancerState
namespace Animancer {
// Is value type: false
// CS Name: Animancer.PlayableAssetState
class CORDL_TYPE PlayableAssetState : public ::Animancer::AnimancerState {
public:
// Declarations
using ITransition = ::Animancer::PlayableAssetState_ITransition;

 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_Asset, put=set_Asset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  Asset;

 __declspec(property(get=get_Bindings, put=set_Bindings)) ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*  Bindings;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_MainObject, put=set_MainObject)) ::UnityW<::UnityEngine::Object>  MainObject;

/// @brief Field _Asset, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Asset, put=__cordl_internal_set__Asset)) ::UnityW<::UnityEngine::Playables::PlayableAsset>  _Asset;

/// @brief Field _Bindings, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Bindings, put=__cordl_internal_set__Bindings)) ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*  _Bindings;

/// @brief Field _HasInitializedBindings, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasInitializedBindings, put=__cordl_internal_set__HasInitializedBindings)) bool  _HasInitializedBindings;

/// @brief Field _Length, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length, put=__cordl_internal_set__Length)) float_t  _Length;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>*() noexcept;

/// @brief Method Animancer.ICopyable<Animancer.PlayableAssetState>.CopyFrom, addr 0x180311fb0, size 0x40, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_PlayableAssetState__CopyFrom(::Animancer::PlayableAssetState*  copyFrom) ;

/// @brief Method AppendDetails, addr 0x180311ff0, size 0x240, virtual true, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method Clone, addr 0x180312230, size 0x110, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method CopyIKFlags, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void CopyIKFlags(::Animancer::AnimancerNode*  copyFrom) ;

/// @brief Method CreatePlayable, addr 0x180312340, size 0x190, virtual true, abstract: false, final false
inline void CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable) ;

/// @brief Method Destroy, addr 0x180305cd0, size 0x30, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method GetBindingDetails, addr 0x1803124d0, size 0xa0, virtual false, abstract: false, final false
static inline void GetBindingDetails(::UnityEngine::Playables::PlayableBinding  binding, ::by_ref<::StringW>  name, ::by_ref<::System::Type*>  type, ::by_ref<bool>  isMarkers) ;

/// @brief Method InitializeBindings, addr 0x180312570, size 0x7e0, virtual false, abstract: false, final false
inline void InitializeBindings() ;

static inline ::Animancer::PlayableAssetState* New_ctor(::UnityEngine::Playables::PlayableAsset*  asset) ;

/// @brief Method OnSetIsPlaying, addr 0x180312d50, size 0xc0, virtual true, abstract: false, final false
inline void OnSetIsPlaying() ;

/// @brief Method SetBindings, addr 0x180312e10, size 0x30, virtual false, abstract: false, final false
inline void SetBindings(::ArrayW<::UnityEngine::Object*>  bindings) ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get__Asset() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get__Asset() ;

constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__Bindings() const;

constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__Bindings() ;

constexpr bool const& __cordl_internal_get__HasInitializedBindings() const;

constexpr bool& __cordl_internal_get__HasInitializedBindings() ;

constexpr float_t const& __cordl_internal_get__Length() const;

constexpr float_t& __cordl_internal_get__Length() ;

constexpr void __cordl_internal_set__Asset(::UnityW<::UnityEngine::Playables::PlayableAsset>  value) ;

constexpr void __cordl_internal_set__Bindings(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__HasInitializedBindings(bool  value) ;

constexpr void __cordl_internal_set__Length(float_t  value) ;

/// @brief Method .ctor, addr 0x180312e40, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableAsset*  asset) ;

/// @brief Method get_ApplyAnimatorIK, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyFootIK() ;

/// @brief Method get_Asset, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> get_Asset() ;

/// @brief Method get_Bindings, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>* get_Bindings() ;

/// @brief Method get_Length, addr 0x180312eb0, size 0x10, virtual true, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_MainObject, addr 0x1802ec4c0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_MainObject() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>* i___Animancer__ICopyable_1___Animancer__PlayableAssetState__() noexcept;

/// @brief Method set_ApplyAnimatorIK, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_Asset, addr 0x1802ec7f0, size 0x20, virtual false, abstract: false, final false
inline void set_Asset(::UnityEngine::Playables::PlayableAsset*  value) ;

/// @brief Method set_Bindings, addr 0x180312e10, size 0x30, virtual false, abstract: false, final false
inline void set_Bindings(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method set_MainObject, addr 0x180312ec0, size 0xb0, virtual true, abstract: false, final false
inline void set_MainObject(::UnityEngine::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableAssetState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableAssetState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableAssetState(PlayableAssetState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableAssetState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableAssetState(PlayableAssetState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18116};

/// @brief Field _Asset, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableAsset>  ____Asset;

/// @brief Field _Length, offset: 0x88, size: 0x4, def value: None
 float_t  ____Length;

/// @brief Field _Bindings, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*  ____Bindings;

/// @brief Field _HasInitializedBindings, offset: 0x98, size: 0x1, def value: None
 bool  ____HasInitializedBindings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::PlayableAssetState, ____Asset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Animancer::PlayableAssetState, ____Length) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Animancer::PlayableAssetState, ____Bindings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Animancer::PlayableAssetState, ____HasInitializedBindings) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Animancer::PlayableAssetState) == 0xa0, "Size mismatch!");

} // namespace end def Animancer
