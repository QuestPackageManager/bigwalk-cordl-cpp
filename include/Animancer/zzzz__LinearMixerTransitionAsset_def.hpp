#pragma once
// IWYU pragma private; include "Animancer/LinearMixerTransitionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LinearMixerTransitionAsset)
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
class LinearMixerState_ITransition;
}
namespace Animancer {
class LinearMixerState;
}
namespace Animancer {
class LinearMixerTransitionAsset_UnShared;
}
namespace Animancer {
class LinearMixerTransition;
}
// Forward declare root types
namespace Animancer {
class LinearMixerTransitionAsset;
}
namespace Animancer {
class LinearMixerTransitionAsset_UnShared;
}
// Write type traits
MARK_REF_T(::Animancer::LinearMixerTransitionAsset*);
MARK_REF_T(::Animancer::LinearMixerTransitionAsset_UnShared*);
DEFINE_IL2CPP_CLASS(::Animancer::LinearMixerTransitionAsset*, "Animancer", "LinearMixerTransitionAsset");
DEFINE_IL2CPP_CLASS(::Animancer::LinearMixerTransitionAsset_UnShared*, "Animancer", "LinearMixerTransitionAsset/UnShared");
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`3<TAsset, TTransition, TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.LinearMixerTransitionAsset/UnShared
class CORDL_TYPE LinearMixerTransitionAsset_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_3<::UnityW<::Animancer::LinearMixerTransitionAsset>,::Animancer::LinearMixerTransition*,::Animancer::LinearMixerState*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::LinearMixerState*>*() noexcept;

/// @brief Convert operator to "::Animancer::LinearMixerState_ITransition"
constexpr operator  ::Animancer::LinearMixerState_ITransition*() noexcept;

static inline ::Animancer::LinearMixerTransitionAsset_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::LinearMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::LinearMixerState*>* i___Animancer__ITransition_1___Animancer__LinearMixerState__() noexcept;

/// @brief Convert to "::Animancer::LinearMixerState_ITransition"
constexpr ::Animancer::LinearMixerState_ITransition* i___Animancer__LinearMixerState_ITransition() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearMixerTransitionAsset_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerTransitionAsset_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearMixerTransitionAsset_UnShared(LinearMixerTransitionAsset_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerTransitionAsset_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearMixerTransitionAsset_UnShared(LinearMixerTransitionAsset_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::LinearMixerTransitionAsset_UnShared) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.LinearMixerTransitionAsset
class CORDL_TYPE LinearMixerTransitionAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::LinearMixerTransition*> {
public:
// Declarations
using UnShared = ::Animancer::LinearMixerTransitionAsset_UnShared;

static inline ::Animancer::LinearMixerTransitionAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearMixerTransitionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerTransitionAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearMixerTransitionAsset(LinearMixerTransitionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerTransitionAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearMixerTransitionAsset(LinearMixerTransitionAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::LinearMixerTransitionAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
