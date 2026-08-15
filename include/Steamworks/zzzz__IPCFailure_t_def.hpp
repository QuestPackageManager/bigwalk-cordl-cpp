#pragma once
// IWYU pragma private; include "Steamworks/IPCFailure_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPCFailure_t)
// Forward declare root types
namespace Steamworks {
struct IPCFailure_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::IPCFailure_t);
DEFINE_IL2CPP_CLASS(::Steamworks::IPCFailure_t, "Steamworks", "IPCFailure_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.IPCFailure_t
#pragma pack(push, 8)
struct CORDL_TYPE IPCFailure_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IPCFailure_t() ;

// Ctor Parameters [CppParam { name: "m_eFailureType", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr IPCFailure_t(uint8_t  m_eFailureType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x75)};

/// @brief Field m_eFailureType, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_eFailureType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::IPCFailure_t, m_eFailureType) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::IPCFailure_t) == 0x1, "Size mismatch!");

} // namespace end def Steamworks
