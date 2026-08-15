#pragma once
// IWYU pragma private; include "Dissonance/ILossEstimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ILossEstimator)
// Forward declare root types
namespace Dissonance {
class ILossEstimator;
}
// Write type traits
MARK_REF_T(::Dissonance::ILossEstimator*);
DEFINE_IL2CPP_CLASS(::Dissonance::ILossEstimator*, "Dissonance", "ILossEstimator");
// Dependencies 
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.ILossEstimator
class CORDL_TYPE ILossEstimator {
public:
// Declarations
 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

/// @brief Method get_PacketLoss, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_PacketLoss() ;

// Ctor Parameters [CppParam { name: "", ty: "ILossEstimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILossEstimator(ILossEstimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16805};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance
