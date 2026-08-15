#pragma once
// IWYU pragma private; include "Animancer/Float2ControllerTransitionAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(Float2ControllerTransitionAsset)
namespace Animancer {
class Float2ControllerState_ITransition;
}
namespace Animancer {
class Float2ControllerState;
}
namespace Animancer {
class Float2ControllerTransitionAsset_UnShared;
}
namespace Animancer {
class Float2ControllerTransition;
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
class Float2ControllerTransitionAsset;
}
namespace Animancer {
class Float2ControllerTransitionAsset_UnShared;
}
// Write type traits
MARK_REF_T(::Animancer::Float2ControllerTransitionAsset*);
MARK_REF_T(::Animancer::Float2ControllerTransitionAsset_UnShared*);
DEFINE_IL2CPP_CLASS(::Animancer::Float2ControllerTransitionAsset*, "Animancer", "Float2ControllerTransitionAsset");
DEFINE_IL2CPP_CLASS(::Animancer::Float2ControllerTransitionAsset_UnShared*, "Animancer", "Float2ControllerTransitionAsset/UnShared");
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`3<TAsset, TTransition, TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float2ControllerTransitionAsset/UnShared
class CORDL_TYPE Float2ControllerTransitionAsset_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_3<::UnityW<::Animancer::Float2ControllerTransitionAsset>,::Animancer::Float2ControllerTransition*,::Animancer::Float2ControllerState*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::Float2ControllerState_ITransition"
constexpr operator  ::Animancer::Float2ControllerState_ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>*() noexcept;

static inline ::Animancer::Float2ControllerTransitionAsset_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::Float2ControllerState_ITransition"
constexpr ::Animancer::Float2ControllerState_ITransition* i___Animancer__Float2ControllerState_ITransition() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::Float2ControllerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::Float2ControllerState*>* i___Animancer__ITransition_1___Animancer__Float2ControllerState__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float2ControllerTransitionAsset_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerTransitionAsset_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float2ControllerTransitionAsset_UnShared(Float2ControllerTransitionAsset_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerTransitionAsset_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float2ControllerTransitionAsset_UnShared(Float2ControllerTransitionAsset_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Float2ControllerTransitionAsset_UnShared) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Float2ControllerTransitionAsset
class CORDL_TYPE Float2ControllerTransitionAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::Float2ControllerTransition*> {
public:
// Declarations
using UnShared = ::Animancer::Float2ControllerTransitionAsset_UnShared;

static inline ::Animancer::Float2ControllerTransitionAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Float2ControllerTransitionAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerTransitionAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Float2ControllerTransitionAsset(Float2ControllerTransitionAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Float2ControllerTransitionAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Float2ControllerTransitionAsset(Float2ControllerTransitionAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18221};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Float2ControllerTransitionAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
