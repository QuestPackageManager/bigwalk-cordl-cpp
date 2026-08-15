#pragma once
// IWYU pragma private; include "Animancer/ExitEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__Key_def.hpp"
CORDL_MODULE_EXPORT(ExitEvent)
namespace Animancer {
class AnimancerNode;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class IUpdatable;
}
namespace Animancer {
class Key_IListItem;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Animancer {
class ExitEvent;
}
// Write type traits
MARK_REF_T(::Animancer::ExitEvent*);
DEFINE_IL2CPP_CLASS(::Animancer::ExitEvent*, "Animancer", "ExitEvent");
// Dependencies Animancer.Key
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ExitEvent
class CORDL_TYPE ExitEvent : public ::Animancer::Key {
public:
// Declarations
/// @brief Field _Callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Callback, put=__cordl_internal_set__Callback)) ::System::Action*  _Callback;

/// @brief Field _Node, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Node, put=__cordl_internal_set__Node)) ::Animancer::AnimancerNode*  _Node;

/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr operator  ::Animancer::IUpdatable*() noexcept;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Method Animancer.IUpdatable.Update, addr 0x18030c000, size 0xb0, virtual true, abstract: false, final true
inline void Animancer_IUpdatable_Update() ;

static inline ::Animancer::ExitEvent* New_ctor() ;

/// @brief Method Register, addr 0x18030c0b0, size 0x80, virtual false, abstract: false, final false
static inline void Register(::Animancer::AnimancerNode*  node, ::System::Action*  callback) ;

/// @brief Method Release, addr 0x18030c130, size 0x50, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Unregister, addr 0x18030c180, size 0xc0, virtual false, abstract: false, final false
static inline bool Unregister(::Animancer::AnimancerPlayable*  animancer) ;

/// @brief Method Unregister, addr 0x18030c240, size 0xd0, virtual false, abstract: false, final false
static inline bool Unregister(::Animancer::AnimancerNode*  node) ;

constexpr ::System::Action* const& __cordl_internal_get__Callback() const;

constexpr ::System::Action*& __cordl_internal_get__Callback() ;

constexpr ::Animancer::AnimancerNode* const& __cordl_internal_get__Node() const;

constexpr ::Animancer::AnimancerNode*& __cordl_internal_get__Node() ;

constexpr void __cordl_internal_set__Callback(::System::Action*  value) ;

constexpr void __cordl_internal_set__Node(::Animancer::AnimancerNode*  value) ;

/// @brief Method .ctor, addr 0x18030a280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* i___Animancer__IUpdatable() noexcept;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExitEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExitEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExitEvent(ExitEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExitEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExitEvent(ExitEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18192};

/// @brief Field _Callback, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ____Callback;

/// @brief Field _Node, offset: 0x20, size: 0x8, def value: None
 ::Animancer::AnimancerNode*  ____Node;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ExitEvent, ____Callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::ExitEvent, ____Node) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::ExitEvent) == 0x28, "Size mismatch!");

} // namespace end def Animancer
