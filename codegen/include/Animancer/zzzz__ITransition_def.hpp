#pragma once
// IWYU pragma private; include "Animancer/ITransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ITransition)
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
struct FadeMode;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPolymorphic;
}
// Forward declare root types
namespace Animancer {
class ITransition;
}
// Write type traits
MARK_REF_T(::Animancer::ITransition*);
DEFINE_IL2CPP_CLASS(::Animancer::ITransition*, "Animancer", "ITransition");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ITransition
class CORDL_TYPE ITransition {
public:
// Declarations
 __declspec(property(get=get_FadeDuration)) float_t  FadeDuration;

 __declspec(property(get=get_FadeMode)) ::Animancer::FadeMode  FadeMode;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Method Apply, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Apply(::Animancer::AnimancerState*  state) ;

/// @brief Method CreateState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* CreateState() ;

/// @brief Method get_FadeDuration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_FadeDuration() ;

/// @brief Method get_FadeMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::FadeMode get_FadeMode() ;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransition(ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
