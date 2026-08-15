#pragma once
// IWYU pragma private; include "Animancer/ManualMixerTransition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__ManualMixerTransition_1_def.hpp"
CORDL_MODULE_EXPORT(ManualMixerTransition)
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
class ManualMixerState_ITransition;
}
namespace Animancer {
class ManualMixerState;
}
// Forward declare root types
namespace Animancer {
class ManualMixerTransition;
}
// Write type traits
MARK_REF_T(::Animancer::ManualMixerTransition*);
DEFINE_IL2CPP_CLASS(::Animancer::ManualMixerTransition*, "Animancer", "ManualMixerTransition");
// Dependencies Animancer.ManualMixerTransition`1<TMixer>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ManualMixerTransition
class CORDL_TYPE ManualMixerTransition : public ::Animancer::ManualMixerTransition_1<::Animancer::ManualMixerState*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ManualMixerState*>*() noexcept;

/// @brief Convert operator to "::Animancer::ManualMixerState_ITransition"
constexpr operator  ::Animancer::ManualMixerState_ITransition*() noexcept;

/// @brief Method CopyFrom, addr 0x180311a20, size 0x20, virtual true, abstract: false, final false
inline void CopyFrom(::Animancer::ManualMixerTransition*  copyFrom) ;

/// @brief Method CreateState, addr 0x180311a40, size 0x70, virtual true, abstract: false, final false
inline ::Animancer::ManualMixerState* CreateState() ;

static inline ::Animancer::ManualMixerTransition* New_ctor() ;

/// @brief Method .ctor, addr 0x180311ab0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition*>* i___Animancer__ICopyable_1___Animancer__ManualMixerTransition__() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ManualMixerState*>* i___Animancer__ITransition_1___Animancer__ManualMixerState__() noexcept;

/// @brief Convert to "::Animancer::ManualMixerState_ITransition"
constexpr ::Animancer::ManualMixerState_ITransition* i___Animancer__ManualMixerState_ITransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManualMixerTransition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManualMixerTransition(ManualMixerTransition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualMixerTransition(ManualMixerTransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ManualMixerTransition) == 0x58, "Size mismatch!");

} // namespace end def Animancer
