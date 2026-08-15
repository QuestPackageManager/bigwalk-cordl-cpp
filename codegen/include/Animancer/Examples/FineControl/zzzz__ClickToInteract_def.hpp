#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/ClickToInteract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ClickToInteract)
// Forward declare root types
namespace Animancer::Examples::FineControl {
class ClickToInteract;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::FineControl::ClickToInteract*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::FineControl::ClickToInteract*, "Animancer.Examples.FineControl", "ClickToInteract");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::FineControl {
// Is value type: false
// CS Name: Animancer.Examples.FineControl.ClickToInteract
class CORDL_TYPE ClickToInteract : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Animancer::Examples::FineControl::ClickToInteract* New_ctor() ;

/// @brief Method Update, addr 0x1802f8650, size 0x170, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClickToInteract() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClickToInteract", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClickToInteract(ClickToInteract && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClickToInteract", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClickToInteract(ClickToInteract const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::FineControl::ClickToInteract) == 0x20, "Size mismatch!");

} // namespace end def Animancer::Examples::FineControl
