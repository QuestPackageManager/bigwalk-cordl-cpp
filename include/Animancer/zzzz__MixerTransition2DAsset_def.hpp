#pragma once
// IWYU pragma private; include "Animancer/MixerTransition2DAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
CORDL_MODULE_EXPORT(MixerTransition2DAsset)
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
class ManualMixerState_ITransition2D;
}
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
namespace Animancer {
class MixerTransition2DAsset_UnShared;
}
namespace Animancer {
class MixerTransition2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Animancer {
class MixerTransition2DAsset;
}
namespace Animancer {
class MixerTransition2DAsset_UnShared;
}
// Write type traits
MARK_REF_T(::Animancer::MixerTransition2DAsset*);
MARK_REF_T(::Animancer::MixerTransition2DAsset_UnShared*);
DEFINE_IL2CPP_CLASS(::Animancer::MixerTransition2DAsset*, "Animancer", "MixerTransition2DAsset");
DEFINE_IL2CPP_CLASS(::Animancer::MixerTransition2DAsset_UnShared*, "Animancer", "MixerTransition2DAsset/UnShared");
// Dependencies Animancer.AnimancerTransitionAssetBase::UnShared`3<TAsset, TTransition, TState>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.MixerTransition2DAsset/UnShared
class CORDL_TYPE MixerTransition2DAsset_UnShared : public ::Animancer::AnimancerTransitionAssetBase_UnShared_3<::UnityW<::Animancer::MixerTransition2DAsset>,::Animancer::MixerTransition2D*,::Animancer::MixerState_1<::UnityEngine::Vector2>*> {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*() noexcept;

/// @brief Convert operator to "::Animancer::ManualMixerState_ITransition2D"
constexpr operator  ::Animancer::ManualMixerState_ITransition2D*() noexcept;

static inline ::Animancer::MixerTransition2DAsset_UnShared* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>* i___Animancer__ITransition_1___Animancer__MixerState_1___UnityEngine__Vector2___() noexcept;

/// @brief Convert to "::Animancer::ManualMixerState_ITransition2D"
constexpr ::Animancer::ManualMixerState_ITransition2D* i___Animancer__ManualMixerState_ITransition2D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerTransition2DAsset_UnShared() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition2DAsset_UnShared", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerTransition2DAsset_UnShared(MixerTransition2DAsset_UnShared && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition2DAsset_UnShared", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerTransition2DAsset_UnShared(MixerTransition2DAsset_UnShared const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::MixerTransition2DAsset_UnShared) == 0x30, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerTransitionAsset`1<TTransition>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.MixerTransition2DAsset
class CORDL_TYPE MixerTransition2DAsset : public ::Animancer::AnimancerTransitionAsset_1<::Animancer::MixerTransition2D*> {
public:
// Declarations
using UnShared = ::Animancer::MixerTransition2DAsset_UnShared;

static inline ::Animancer::MixerTransition2DAsset* New_ctor() ;

/// @brief Method .ctor, addr 0x180303e50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MixerTransition2DAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition2DAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MixerTransition2DAsset(MixerTransition2DAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MixerTransition2DAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MixerTransition2DAsset(MixerTransition2DAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18235};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::MixerTransition2DAsset) == 0x20, "Size mismatch!");

} // namespace end def Animancer
