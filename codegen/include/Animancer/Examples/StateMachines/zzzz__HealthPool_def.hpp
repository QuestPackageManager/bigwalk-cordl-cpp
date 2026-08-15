#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/HealthPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HealthPool)
namespace Animancer::Examples::FineControl {
class IInteractable;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class HealthPool;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::HealthPool*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::HealthPool*, "Animancer.Examples.StateMachines", "HealthPool");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.HealthPool
class CORDL_TYPE HealthPool : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnHitReceived, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitReceived, put=__cordl_internal_set_OnHitReceived)) ::System::Action*  OnHitReceived;

/// @brief Convert operator to "::Animancer::Examples::FineControl::IInteractable"
constexpr operator  ::Animancer::Examples::FineControl::IInteractable*() noexcept;

/// @brief Method Interact, addr 0x1802fc2c0, size 0x20, virtual true, abstract: false, final true
inline void Interact() ;

static inline ::Animancer::Examples::StateMachines::HealthPool* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_OnHitReceived() const;

constexpr ::System::Action*& __cordl_internal_get_OnHitReceived() ;

constexpr void __cordl_internal_set_OnHitReceived(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnHitReceived, addr 0x1802fc2e0, size 0x80, virtual false, abstract: false, final false
inline void add_OnHitReceived(::System::Action*  value) ;

/// @brief Convert to "::Animancer::Examples::FineControl::IInteractable"
constexpr ::Animancer::Examples::FineControl::IInteractable* i___Animancer__Examples__FineControl__IInteractable() noexcept;

/// @brief Method remove_OnHitReceived, addr 0x1802fc360, size 0x80, virtual false, abstract: false, final false
inline void remove_OnHitReceived(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HealthPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HealthPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HealthPool(HealthPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HealthPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HealthPool(HealthPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19999};

/// @brief Field OnHitReceived, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnHitReceived;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::HealthPool, ___OnHitReceived) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::HealthPool) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
