#pragma once
// IWYU pragma private; include "Animancer/IUpdatable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IUpdatable)
namespace Animancer {
class Key_IListItem;
}
// Forward declare root types
namespace Animancer {
class IUpdatable;
}
// Write type traits
MARK_REF_T(::Animancer::IUpdatable*);
DEFINE_IL2CPP_CLASS(::Animancer::IUpdatable*, "Animancer", "IUpdatable");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IUpdatable
class CORDL_TYPE IUpdatable {
public:
// Declarations
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr operator  ::Animancer::Key_IListItem*() noexcept;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* i___Animancer__Key_IListItem() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IUpdatable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IUpdatable(IUpdatable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
