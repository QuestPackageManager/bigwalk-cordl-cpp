#pragma once
// IWYU pragma private; include "Animancer/CustomFade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__Key_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomFade)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class AnimancerLayer;
}
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
struct CustomFade_NodeWeight;
}
namespace Animancer {
struct Easing_Function;
}
namespace Animancer {
class IUpdatable;
}
namespace Animancer {
class Key_IListItem;
}
namespace GlobalNamespace {
class CustomFade_Curve;
}
namespace GlobalNamespace {
class CustomFade_Delegate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Animancer {
class CustomFade;
}
namespace Animancer {
struct CustomFade_NodeWeight;
}
// Write type traits
MARK_REF_T(::Animancer::CustomFade*);
MARK_VAL_T(::Animancer::CustomFade_NodeWeight);
DEFINE_IL2CPP_CLASS(::Animancer::CustomFade*, "Animancer", "CustomFade");
DEFINE_IL2CPP_CLASS(::Animancer::CustomFade_NodeWeight, "Animancer", "CustomFade/NodeWeight");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.CustomFade/NodeWeight
struct CORDL_TYPE CustomFade_NodeWeight {
public:
// Declarations
/// @brief Method .ctor, addr 0x180311f10, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerNode*  node) ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomFade_NodeWeight() ;

// Ctor Parameters [CppParam { name: "Node", ty: "::Animancer::AnimancerNode*", modifiers: "", def_value: None }, CppParam { name: "StartingWeight", ty: "float_t", modifiers: "", def_value: None }]
constexpr CustomFade_NodeWeight(::Animancer::AnimancerNode*  Node, float_t  StartingWeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18167};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Node, offset: 0x0, size: 0x8, def value: None
 ::Animancer::AnimancerNode*  Node;

/// @brief Field StartingWeight, offset: 0x8, size: 0x4, def value: None
 float_t  StartingWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::CustomFade_NodeWeight, Node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::CustomFade_NodeWeight, StartingWeight) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Animancer::CustomFade_NodeWeight) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.CustomFade::NodeWeight, Animancer.Key
namespace Animancer {
// Is value type: false
// CS Name: Animancer.CustomFade
class CORDL_TYPE CustomFade : public ::Animancer::Key {
public:
// Declarations
using NodeWeight = ::Animancer::CustomFade_NodeWeight;

using Curve = ::GlobalNamespace::CustomFade_Curve;

using Delegate = ::GlobalNamespace::CustomFade_Delegate;

/// @brief Field FadeOutNodes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_FadeOutNodes, put=__cordl_internal_set_FadeOutNodes)) ::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>*  FadeOutNodes;

/// @brief Field _CommandCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__CommandCount, put=__cordl_internal_set__CommandCount)) int32_t  _CommandCount;

/// @brief Field _FadeSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__FadeSpeed, put=__cordl_internal_set__FadeSpeed)) float_t  _FadeSpeed;

/// @brief Field _Layer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) ::Animancer::AnimancerLayer*  _Layer;

/// @brief Field _Target, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__Target, put=__cordl_internal_set__Target)) ::Animancer::CustomFade_NodeWeight  _Target;

/// @brief Field _Time, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Time, put=__cordl_internal_set__Time)) float_t  _Time;

/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr operator  ::Animancer::IUpdatable*() noexcept;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Method Animancer.IUpdatable.Update, addr 0x1803077a0, size 0x310, virtual true, abstract: false, final true
inline void Animancer_IUpdatable_Update() ;

/// @brief Method Apply, addr 0x180308210, size 0xa0, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerComponent*  animancer, ::System::Func_2<float_t,float_t>*  calculateWeight) ;

/// @brief Method Apply, addr 0x180307ab0, size 0xa0, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerComponent*  animancer, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method Apply, addr 0x180307b50, size 0x40, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerComponent*  animancer, ::Animancer::Easing_Function  function) ;

/// @brief Method Apply, addr 0x180307f40, size 0x90, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerPlayable*  animancer, ::System::Func_2<float_t,float_t>*  calculateWeight) ;

/// @brief Method Apply, addr 0x180307c10, size 0x90, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerPlayable*  animancer, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method Apply, addr 0x180307fd0, size 0x40, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerPlayable*  animancer, ::Animancer::Easing_Function  function) ;

/// @brief Method Apply, addr 0x1803082b0, size 0xf0, virtual false, abstract: false, final false
inline void Apply(::Animancer::AnimancerNode*  node) ;

/// @brief Method Apply, addr 0x180307b90, size 0x80, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerNode*  node, ::System::Func_2<float_t,float_t>*  calculateWeight) ;

/// @brief Method Apply, addr 0x180307d30, size 0x80, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerNode*  node, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method Apply, addr 0x180307e30, size 0x90, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerNode*  node, ::Animancer::Easing_Function  function) ;

/// @brief Method Apply, addr 0x180308010, size 0x200, virtual false, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method Apply, addr 0x180307db0, size 0x80, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerState*  state, ::System::Func_2<float_t,float_t>*  calculateWeight) ;

/// @brief Method Apply, addr 0x180307ec0, size 0x80, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerState*  state, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method Apply, addr 0x180307ca0, size 0x90, virtual false, abstract: false, final false
static inline void Apply(::Animancer::AnimancerState*  state, ::Animancer::Easing_Function  function) ;

/// @brief Method CalculateWeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t CalculateWeight(float_t  progress) ;

/// @brief Method ForceFinishFade, addr 0x1803083a0, size 0x70, virtual false, abstract: false, final false
static inline void ForceFinishFade(::Animancer::AnimancerNode*  node) ;

static inline ::Animancer::CustomFade* New_ctor() ;

/// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Release() ;

constexpr ::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>* const& __cordl_internal_get_FadeOutNodes() const;

constexpr ::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>*& __cordl_internal_get_FadeOutNodes() ;

constexpr int32_t const& __cordl_internal_get__CommandCount() const;

constexpr int32_t& __cordl_internal_get__CommandCount() ;

constexpr float_t const& __cordl_internal_get__FadeSpeed() const;

constexpr float_t& __cordl_internal_get__FadeSpeed() ;

constexpr ::Animancer::AnimancerLayer* const& __cordl_internal_get__Layer() const;

constexpr ::Animancer::AnimancerLayer*& __cordl_internal_get__Layer() ;

constexpr ::Animancer::CustomFade_NodeWeight const& __cordl_internal_get__Target() const;

constexpr ::Animancer::CustomFade_NodeWeight& __cordl_internal_get__Target() ;

constexpr float_t const& __cordl_internal_get__Time() const;

constexpr float_t& __cordl_internal_get__Time() ;

constexpr void __cordl_internal_set_FadeOutNodes(::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>*  value) ;

constexpr void __cordl_internal_set__CommandCount(int32_t  value) ;

constexpr void __cordl_internal_set__FadeSpeed(float_t  value) ;

constexpr void __cordl_internal_set__Layer(::Animancer::AnimancerLayer*  value) ;

constexpr void __cordl_internal_set__Target(::Animancer::CustomFade_NodeWeight  value) ;

constexpr void __cordl_internal_set__Time(float_t  value) ;

/// @brief Method .ctor, addr 0x180307750, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* i___Animancer__IUpdatable() noexcept;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomFade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomFade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomFade(CustomFade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomFade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomFade(CustomFade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18168};

/// @brief Field _Time, offset: 0x14, size: 0x4, def value: None
 float_t  ____Time;

/// @brief Field _FadeSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ____FadeSpeed;

/// @brief Field _Target, offset: 0x20, size: 0x10, def value: None
 ::Animancer::CustomFade_NodeWeight  ____Target;

/// @brief Field _Layer, offset: 0x30, size: 0x8, def value: None
 ::Animancer::AnimancerLayer*  ____Layer;

/// @brief Field _CommandCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____CommandCount;

/// @brief Field FadeOutNodes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Animancer::CustomFade_NodeWeight>*  ___FadeOutNodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::CustomFade, ____Time) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Animancer::CustomFade, ____FadeSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::CustomFade, ____Target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::CustomFade, ____Layer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::CustomFade, ____CommandCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::CustomFade, ___FadeOutNodes) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::CustomFade) == 0x48, "Size mismatch!");

} // namespace end def Animancer
