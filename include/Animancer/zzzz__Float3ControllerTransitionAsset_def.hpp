#pragma once
// IWYU pragma private; include "Animancer/Float3ControllerTransitionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(Float3ControllerTransitionAsset)
namespace Animancer {
class Float3ControllerState_ITransition;
}
namespace Animancer {
class Float3ControllerState;
}
namespace Animancer {
class Float3ControllerTransitionAsset_UnShared;
}
namespace Animancer {
class Float3ControllerTransition;
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
class Float3ControllerTransitionAsset;
}
namespace Animancer {
class Float3ControllerTransitionAsset_UnShared;
}
// Write type traits
MARK_REF_T(::Animancer::Float3ControllerTransitionAsset*);
MARK_REF_T(::Animancer::Float3ControllerTransitionAsset_UnShared*);
DEFINE_IL2CPP_CLASS(::Animancer::Float3ControllerTransitionAsset*, "Animancer", "Float3ControllerTransitionAsset");
DEFINE_IL2CPP_CLASS(::Animancer::Float3ControllerTransitionAsset_UnShared*, "Animancer", "Float3ControllerTransitionAsset/UnShared");
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`3<TAsset, TTransition, TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float3ControllerTransitionAsset/UnShared
class CORDL_TYPE Float3ControllerTransitionAsset_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_3<::UnityW<::Animancer::Float3ControllerTransitionAsset>,::Animancer::Float3ControllerTransition*,::Animancer::Float3ControllerState*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::Float3ControllerState_ITransition"
constexpr operator  ::Animancer::Float3ControllerState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float3ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::Float3ControllerState*>*() noexcept;

static inline ::Animancer::Float3ControllerTransitionAsset_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::Float3ControllerState_ITransition"
constexpr ::Animancer::Float3ControllerState_ITransition* i___Animancer__Float3ControllerState_ITransition() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float3ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float3ControllerState*>* i___Animancer__ITransition_1___Animancer__Float3ControllerState__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float3ControllerTransitionAsset_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float3ControllerTransitionAsset_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float3ControllerTransitionAsset_UnShared(Float3ControllerTransitionAsset_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float3ControllerTransitionAsset_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float3ControllerTransitionAsset_UnShared(Float3ControllerTransitionAsset_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18223};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Float3ControllerTransitionAsset_UnShared) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float3ControllerTransitionAsset
class CORDL_TYPE Float3ControllerTransitionAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::Float3ControllerTransition*> {
public:
// Declarations
using UnShared = ::Animancer::Float3ControllerTransitionAsset_UnShared;

static inline ::Animancer::Float3ControllerTransitionAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float3ControllerTransitionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float3ControllerTransitionAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float3ControllerTransitionAsset(Float3ControllerTransitionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float3ControllerTransitionAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float3ControllerTransitionAsset(Float3ControllerTransitionAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18224};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Float3ControllerTransitionAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
