#pragma once
// IWYU pragma private; include "Animancer/ITransition_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITransition_1)
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
template<typename TState>
class ITransition_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::ITransition_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::ITransition_1, "Animancer", "ITransition`1");
// Dependencies 
namespace Animancer {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.ITransition`1<TState>
class CORDL_TYPE ITransition_1 {
public:
// Declarations
 __declspec(property(get=get_State)) TState  State;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Method CreateState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TState CreateState() ;

/// @brief Method get_State, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TState get_State() ;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ITransition_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransition_1(ITransition_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
