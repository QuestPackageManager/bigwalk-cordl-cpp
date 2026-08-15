#pragma once
// IWYU pragma private; include "Animancer/HybridAnimancerComponentExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HybridAnimancerComponentExtensions)
namespace Animancer {
class HybridAnimancerComponent;
}
// Forward declare root types
namespace Animancer {
class HybridAnimancerComponentExtensions;
}
// Write type traits
MARK_REF_T(::Animancer::HybridAnimancerComponentExtensions*);
DEFINE_IL2CPP_CLASS(::Animancer::HybridAnimancerComponentExtensions*, "Animancer", "HybridAnimancerComponentExtensions");
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.HybridAnimancerComponentExtensions
class CORDL_TYPE HybridAnimancerComponentExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method Update, addr 0x1802ee5e0, size 0x40, virtual false, abstract: false, final false
static inline void Update(::Animancer::HybridAnimancerComponent*  animancer, float_t  deltaTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HybridAnimancerComponentExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HybridAnimancerComponentExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HybridAnimancerComponentExtensions(HybridAnimancerComponentExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HybridAnimancerComponentExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HybridAnimancerComponentExtensions(HybridAnimancerComponentExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18073};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::HybridAnimancerComponentExtensions) == 0x10, "Size mismatch!");

} // namespace end def Animancer
