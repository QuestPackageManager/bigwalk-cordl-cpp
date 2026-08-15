#pragma once
// IWYU pragma private; include "Animancer/ITransitionWithEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITransitionWithEvents)
namespace Animancer {
class IHasEvents;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
class ITransition;
}
// Forward declare root types
namespace Animancer {
class ITransitionWithEvents;
}
// Write type traits
MARK_REF_T(::Animancer::ITransitionWithEvents*);
DEFINE_IL2CPP_CLASS(::Animancer::ITransitionWithEvents*, "Animancer", "ITransitionWithEvents");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ITransitionWithEvents
class CORDL_TYPE ITransitionWithEvents {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasEvents"
constexpr operator  ::Animancer::IHasEvents*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert to "::Animancer::IHasEvents"
constexpr ::Animancer::IHasEvents* i___Animancer__IHasEvents() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITransitionWithEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransitionWithEvents(ITransitionWithEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18139};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
