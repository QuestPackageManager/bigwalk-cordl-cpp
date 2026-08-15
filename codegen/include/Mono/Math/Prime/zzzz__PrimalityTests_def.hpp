#pragma once
// IWYU pragma private; include "Mono/Math/Prime/PrimalityTests.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimalityTests)
namespace Mono::Math::Prime {
struct ConfidenceFactor;
}
namespace Mono::Math {
class BigInteger;
}
// Forward declare root types
namespace Mono::Math::Prime {
class PrimalityTests;
}
// Write type traits
MARK_REF_T(::Mono::Math::Prime::PrimalityTests*);
DEFINE_IL2CPP_CLASS(::Mono::Math::Prime::PrimalityTests*, "Mono.Math.Prime", "PrimalityTests");
// Dependencies System.Object
namespace Mono::Math::Prime {
// Is value type: false
// CS Name: Mono.Math.Prime.PrimalityTests
class CORDL_TYPE PrimalityTests : public ::System::Object {
public:
// Declarations
/// @brief Method GetSPPRounds, addr 0x1815d9180, size 0x1a0, virtual false, abstract: false, final false
static inline int32_t GetSPPRounds(::Mono::Math::BigInteger*  bi, ::Mono::Math::Prime::ConfidenceFactor  confidence) ;

/// @brief Method RabinMillerTest, addr 0x1815d9320, size 0x3a0, virtual false, abstract: false, final false
static inline bool RabinMillerTest(::Mono::Math::BigInteger*  n, ::Mono::Math::Prime::ConfidenceFactor  confidence) ;

/// @brief Method SmallPrimeSppTest, addr 0x1815d96c0, size 0x1c0, virtual false, abstract: false, final false
static inline bool SmallPrimeSppTest(::Mono::Math::BigInteger*  bi, ::Mono::Math::Prime::ConfidenceFactor  confidence) ;

/// @brief Method Test, addr 0x1815d9880, size 0x80, virtual false, abstract: false, final false
static inline bool Test(::Mono::Math::BigInteger*  n, ::Mono::Math::Prime::ConfidenceFactor  confidence) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimalityTests() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimalityTests(PrimalityTests && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimalityTests", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimalityTests(PrimalityTests const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{112};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Math::Prime::PrimalityTests) == 0x10, "Size mismatch!");

} // namespace end def Mono::Math::Prime
