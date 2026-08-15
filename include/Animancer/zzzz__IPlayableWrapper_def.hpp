#pragma once
// IWYU pragma private; include "Animancer/IPlayableWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPlayableWrapper)
namespace Animancer {
class AnimancerNode;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace Animancer {
class IPlayableWrapper;
}
// Write type traits
MARK_REF_T(::Animancer::IPlayableWrapper*);
DEFINE_IL2CPP_CLASS(::Animancer::IPlayableWrapper*, "Animancer", "IPlayableWrapper");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IPlayableWrapper
class CORDL_TYPE IPlayableWrapper {
public:
// Declarations
 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_ChildCount)) int32_t  ChildCount;

 __declspec(property(get=get_KeepChildrenConnected)) bool  KeepChildrenConnected;

 __declspec(property(get=get_Parent)) ::Animancer::IPlayableWrapper*  Parent;

 __declspec(property(get=get_Playable)) ::UnityEngine::Playables::Playable  Playable;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

 __declspec(property(get=get_Weight)) float_t  Weight;

/// @brief Method GetChild, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::AnimancerNode* GetChild(int32_t  index) ;

/// @brief Method get_ApplyAnimatorIK, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_ApplyFootIK() ;

/// @brief Method get_ChildCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_ChildCount() ;

/// @brief Method get_KeepChildrenConnected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_KeepChildrenConnected() ;

/// @brief Method get_Parent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::IPlayableWrapper* get_Parent() ;

/// @brief Method get_Playable, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Playables::Playable get_Playable() ;

/// @brief Method get_Speed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Method get_Weight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Weight() ;

/// @brief Method set_ApplyAnimatorIK, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_Speed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Speed(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IPlayableWrapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlayableWrapper(IPlayableWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
