#pragma once
// IWYU pragma private; include "GlobalNamespace/EchoData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(EchoData)
// Forward declare root types
namespace GlobalNamespace {
struct EchoData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EchoData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EchoData, "", "EchoData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EchoData
struct CORDL_TYPE EchoData {
public:
// Declarations
/// @brief Method .ctor, addr 0x1802d5770, size 0x10, virtual false, abstract: false, final false
inline void _ctor(float_t  amount, float_t  delay, float_t  decay) ;

// Ctor Parameters []
// @brief default ctor
constexpr EchoData() ;

// Ctor Parameters [CppParam { name: "Amount", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Delay", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Decay", ty: "float_t", modifiers: "", def_value: None }]
constexpr EchoData(float_t  Amount, float_t  Delay, float_t  Decay) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field Amount, offset: 0x0, size: 0x4, def value: None
 float_t  Amount;

/// @brief Field Delay, offset: 0x4, size: 0x4, def value: None
 float_t  Delay;

/// @brief Field Decay, offset: 0x8, size: 0x4, def value: None
 float_t  Decay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EchoData, Amount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoData, Delay) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EchoData, Decay) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EchoData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
