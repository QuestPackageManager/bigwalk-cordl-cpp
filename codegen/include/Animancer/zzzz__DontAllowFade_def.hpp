#pragma once
// IWYU pragma private; include "Animancer/DontAllowFade.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__Key_def.hpp"
CORDL_MODULE_EXPORT(DontAllowFade)
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
// Forward declare root types
namespace Animancer {
class DontAllowFade;
}
// Write type traits
MARK_REF_T(::Animancer::DontAllowFade*);
DEFINE_IL2CPP_CLASS(::Animancer::DontAllowFade*, "Animancer", "DontAllowFade");
// Dependencies Animancer.Key
namespace Animancer {
// Is value type: false
// CS Name: Animancer.DontAllowFade
class CORDL_TYPE DontAllowFade : public ::Animancer::Key {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr operator  ::Animancer::IUpdatable*() noexcept;

/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Method Animancer.IUpdatable.Update, addr 0x18030a170, size 0xe0, virtual true, abstract: false, final true
inline void Animancer_IUpdatable_Update() ;

static inline ::Animancer::DontAllowFade* New_ctor() ;

/// @brief Method Validate, addr 0x18030a250, size 0x30, virtual false, abstract: false, final false
static inline void Validate(::Animancer::AnimancerNode*  node) ;

/// @brief Method Assert, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _cordl_Assert(::Animancer::AnimancerPlayable*  animancer) ;

/// @brief Method .ctor, addr 0x18030a280, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* i___Animancer__IUpdatable() noexcept;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DontAllowFade() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DontAllowFade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DontAllowFade(DontAllowFade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DontAllowFade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DontAllowFade(DontAllowFade const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18169};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::DontAllowFade) == 0x18, "Size mismatch!");

} // namespace end def Animancer
