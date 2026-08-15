#pragma once
// IWYU pragma private; include "Animancer/ManualMixerTransitionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(ManualMixerTransitionAsset)
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
namespace Animancer {
class ManualMixerTransitionAsset_UnShared;
}
namespace Animancer {
class ManualMixerTransition;
}
// Forward declare root types
namespace Animancer {
class ManualMixerTransitionAsset;
}
namespace Animancer {
class ManualMixerTransitionAsset_UnShared;
}
// Write type traits
MARK_REF_T(::Animancer::ManualMixerTransitionAsset*);
MARK_REF_T(::Animancer::ManualMixerTransitionAsset_UnShared*);
DEFINE_IL2CPP_CLASS(::Animancer::ManualMixerTransitionAsset*, "Animancer", "ManualMixerTransitionAsset");
DEFINE_IL2CPP_CLASS(::Animancer::ManualMixerTransitionAsset_UnShared*, "Animancer", "ManualMixerTransitionAsset/UnShared");
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`3<TAsset, TTransition, TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ManualMixerTransitionAsset/UnShared
class CORDL_TYPE ManualMixerTransitionAsset_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_3<::UnityW<::Animancer::ManualMixerTransitionAsset>,::Animancer::ManualMixerTransition*,::Animancer::ManualMixerState*> {
public:
// Declarations
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

static inline ::Animancer::ManualMixerTransitionAsset_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

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
constexpr ManualMixerTransitionAsset_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransitionAsset_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManualMixerTransitionAsset_UnShared(ManualMixerTransitionAsset_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransitionAsset_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualMixerTransitionAsset_UnShared(ManualMixerTransitionAsset_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ManualMixerTransitionAsset_UnShared) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ManualMixerTransitionAsset
class CORDL_TYPE ManualMixerTransitionAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::ManualMixerTransition*> {
public:
// Declarations
using UnShared = ::Animancer::ManualMixerTransitionAsset_UnShared;

static inline ::Animancer::ManualMixerTransitionAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManualMixerTransitionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransitionAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManualMixerTransitionAsset(ManualMixerTransitionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerTransitionAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualMixerTransitionAsset(ManualMixerTransitionAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ManualMixerTransitionAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
