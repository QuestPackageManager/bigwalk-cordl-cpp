#pragma once
// IWYU pragma private; include "Animancer/ControllerTransitionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(ControllerTransitionAsset)
namespace Animancer {
class ControllerState_ITransition;
}
namespace Animancer {
class ControllerState;
}
namespace Animancer {
class ControllerTransitionAsset_UnShared;
}
namespace Animancer {
class ControllerTransition;
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
class ControllerTransitionAsset;
}
namespace Animancer {
class ControllerTransitionAsset_UnShared;
}
// Write type traits
MARK_REF_T(::Animancer::ControllerTransitionAsset*);
MARK_REF_T(::Animancer::ControllerTransitionAsset_UnShared*);
DEFINE_IL2CPP_CLASS(::Animancer::ControllerTransitionAsset*, "Animancer", "ControllerTransitionAsset");
DEFINE_IL2CPP_CLASS(::Animancer::ControllerTransitionAsset_UnShared*, "Animancer", "ControllerTransitionAsset/UnShared");
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`3<TAsset, TTransition, TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ControllerTransitionAsset/UnShared
class CORDL_TYPE ControllerTransitionAsset_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_3<::UnityW<::Animancer::ControllerTransitionAsset>,::Animancer::ControllerTransition*,::Animancer::ControllerState*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::ControllerState_ITransition"
constexpr operator  ::Animancer::ControllerState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ControllerState*>*() noexcept;

static inline ::Animancer::ControllerTransitionAsset_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::ControllerState_ITransition"
constexpr ::Animancer::ControllerState_ITransition* i___Animancer__ControllerState_ITransition() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ControllerState*>* i___Animancer__ITransition_1___Animancer__ControllerState__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTransitionAsset_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransitionAsset_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTransitionAsset_UnShared(ControllerTransitionAsset_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransitionAsset_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTransitionAsset_UnShared(ControllerTransitionAsset_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18213};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ControllerTransitionAsset_UnShared) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ControllerTransitionAsset
class CORDL_TYPE ControllerTransitionAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::ControllerTransition*> {
public:
// Declarations
using UnShared = ::Animancer::ControllerTransitionAsset_UnShared;

static inline ::Animancer::ControllerTransitionAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTransitionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransitionAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTransitionAsset(ControllerTransitionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTransitionAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTransitionAsset(ControllerTransitionAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18214};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::ControllerTransitionAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
