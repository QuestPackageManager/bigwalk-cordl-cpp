#pragma once
// IWYU pragma private; include "Dissonance/Datastructures/PacketLossCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/Datastructures/zzzz__BaseWindowCalculator_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketLossCalculator)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Datastructures {
class PacketLossCalculator;
}
// Write type traits
MARK_REF_T(::Dissonance::Datastructures::PacketLossCalculator*);
DEFINE_IL2CPP_CLASS(::Dissonance::Datastructures::PacketLossCalculator*, "Dissonance.Datastructures", "PacketLossCalculator");
// Dependencies Dissonance.Datastructures.BaseWindowCalculator`1<T>
namespace Dissonance::Datastructures {
// Is value type: false
// CS Name: Dissonance.Datastructures.PacketLossCalculator
class CORDL_TYPE PacketLossCalculator : public ::Dissonance::Datastructures::BaseWindowCalculator_1<bool> {
public:
// Declarations
 __declspec(property(get=get_PacketLoss)) float_t  PacketLoss;

/// @brief Field _lost, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__lost, put=__cordl_internal_set__lost)) uint32_t  _lost;

/// @brief Method Clear, addr 0x1805e1e30, size 0x20, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::Dissonance::Datastructures::PacketLossCalculator* New_ctor(uint32_t  size) ;

/// @brief Method Updated, addr 0x1805e1e50, size 0x40, virtual true, abstract: false, final false
inline void Updated(::System::Nullable_1<bool>  removed, bool  added) ;

constexpr uint32_t const& __cordl_internal_get__lost() const;

constexpr uint32_t& __cordl_internal_get__lost() ;

constexpr void __cordl_internal_set__lost(uint32_t  value) ;

/// @brief Method .ctor, addr 0x1805e1e90, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  size) ;

/// @brief Method get_PacketLoss, addr 0x1805e1ea0, size 0x60, virtual false, abstract: false, final false
inline float_t get_PacketLoss() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PacketLossCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PacketLossCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PacketLossCalculator(PacketLossCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PacketLossCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PacketLossCalculator(PacketLossCalculator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16938};

/// @brief Field _lost, offset: 0x18, size: 0x4, def value: None
 uint32_t  ____lost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Datastructures::PacketLossCalculator, ____lost) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Datastructures::PacketLossCalculator) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Datastructures
