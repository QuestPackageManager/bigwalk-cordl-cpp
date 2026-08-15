#pragma once
// IWYU pragma private; include "MA/Flora/DrawBinConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawBinConfig)
// Forward declare root types
namespace MA::Flora {
struct DrawBinConfig;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DrawBinConfig);
DEFINE_IL2CPP_CLASS(::MA::Flora::DrawBinConfig, "MA.Flora", "DrawBinConfig");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DrawBinConfig
struct CORDL_TYPE DrawBinConfig {
public:
// Declarations
 __declspec(property(get=get_VisibilityConfigCount)) int32_t  VisibilityConfigCount;

/// @brief Method get_VisibilityConfigCount, addr 0x1814ba660, size 0x60, virtual false, abstract: false, final false
inline int32_t get_VisibilityConfigCount() ;

// Ctor Parameters []
// @brief default ctor
constexpr DrawBinConfig() ;

// Ctor Parameters [CppParam { name: "SplitCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SupportsCrossFade", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "SupportsMotionCheck", ty: "bool", modifiers: "", def_value: None }]
constexpr DrawBinConfig(int32_t  SplitCount, bool  SupportsCrossFade, bool  SupportsMotionCheck) noexcept;

/// @brief Field SplitMaskShift offset 0xffffffff size 0x4
static constexpr int32_t  SplitMaskShift{static_cast<int32_t>(0x3)};

/// @brief Field StateBitCount offset 0xffffffff size 0x4
static constexpr int32_t  StateBitCount{static_cast<int32_t>(0x3)};

/// @brief Field StateBitMask offset 0xffffffff size 0x4
static constexpr int32_t  StateBitMask{static_cast<int32_t>(0x7)};

/// @brief Field StateKeySpace offset 0xffffffff size 0x4
static constexpr int32_t  StateKeySpace{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field SplitCount, offset: 0x0, size: 0x4, def value: None
 int32_t  SplitCount;

/// @brief Field SupportsCrossFade, offset: 0x4, size: 0x1, def value: None
 bool  SupportsCrossFade;

/// @brief Field SupportsMotionCheck, offset: 0x5, size: 0x1, def value: None
 bool  SupportsMotionCheck;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DrawBinConfig, SplitCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBinConfig, SupportsCrossFade) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DrawBinConfig, SupportsMotionCheck) == 0x5, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DrawBinConfig) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
