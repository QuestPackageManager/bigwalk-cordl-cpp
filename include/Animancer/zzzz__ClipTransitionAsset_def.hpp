#pragma once
// IWYU pragma private; include "Animancer/ClipTransitionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(ClipTransitionAsset)
namespace Animancer {
class ClipState_ITransition;
}
namespace Animancer {
class ClipState;
}
namespace Animancer {
class ClipTransitionAsset_UnShared;
}
namespace Animancer {
class ClipTransition;
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
// Forward declare root types
namespace Animancer {
class ClipTransitionAsset;
}
namespace Animancer {
class ClipTransitionAsset_UnShared;
}
// Write type traits
MARK_REF_T(::Animancer::ClipTransitionAsset*);
MARK_REF_T(::Animancer::ClipTransitionAsset_UnShared*);
DEFINE_IL2CPP_CLASS(::Animancer::ClipTransitionAsset*, "Animancer", "ClipTransitionAsset");
DEFINE_IL2CPP_CLASS(::Animancer::ClipTransitionAsset_UnShared*, "Animancer", "ClipTransitionAsset/UnShared");
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`3<TAsset, TTransition, TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ClipTransitionAsset/UnShared
class CORDL_TYPE ClipTransitionAsset_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_3<::UnityW<::Animancer::ClipTransitionAsset>,::Animancer::ClipTransition*,::Animancer::ClipState*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::ClipState_ITransition"
constexpr operator  ::Animancer::ClipState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ClipState*>*() noexcept;

static inline ::Animancer::ClipTransitionAsset_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::ClipState_ITransition"
constexpr ::Animancer::ClipState_ITransition* i___Animancer__ClipState_ITransition() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ClipState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ClipState*>* i___Animancer__ITransition_1___Animancer__ClipState__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipTransitionAsset_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionAsset_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipTransitionAsset_UnShared(ClipTransitionAsset_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionAsset_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipTransitionAsset_UnShared(ClipTransitionAsset_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ClipTransitionAsset_UnShared) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ClipTransitionAsset
class CORDL_TYPE ClipTransitionAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::ClipTransition*> {
public:
// Declarations
using UnShared = ::Animancer::ClipTransitionAsset_UnShared;

static inline ::Animancer::ClipTransitionAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipTransitionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipTransitionAsset(ClipTransitionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipTransitionAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipTransitionAsset(ClipTransitionAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18209};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ClipTransitionAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
