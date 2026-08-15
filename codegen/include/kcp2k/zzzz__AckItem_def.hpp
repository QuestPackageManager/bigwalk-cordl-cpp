#pragma once
// IWYU pragma private; include "kcp2k/AckItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AckItem)
// Forward declare root types
namespace kcp2k {
struct AckItem;
}
// Write type traits
MARK_VAL_T(::kcp2k::AckItem);
DEFINE_IL2CPP_CLASS(::kcp2k::AckItem, "kcp2k", "AckItem");
// Dependencies 
namespace kcp2k {
// Is value type: true
// CS Name: kcp2k.AckItem
struct CORDL_TYPE AckItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AckItem() ;

// Ctor Parameters [CppParam { name: "serialNumber", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "timestamp", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AckItem(uint32_t  serialNumber, uint32_t  timestamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field serialNumber, offset: 0x0, size: 0x4, def value: None
 uint32_t  serialNumber;

/// @brief Field timestamp, offset: 0x4, size: 0x4, def value: None
 uint32_t  timestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::kcp2k::AckItem, serialNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::kcp2k::AckItem, timestamp) == 0x4, "Offset mismatch!");

static_assert(sizeof(::kcp2k::AckItem) == 0x8, "Size mismatch!");

} // namespace end def kcp2k
