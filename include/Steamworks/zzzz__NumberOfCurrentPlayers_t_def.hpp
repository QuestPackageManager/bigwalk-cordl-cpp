#pragma once
// IWYU pragma private; include "Steamworks/NumberOfCurrentPlayers_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NumberOfCurrentPlayers_t)
// Forward declare root types
namespace Steamworks {
struct NumberOfCurrentPlayers_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::NumberOfCurrentPlayers_t);
DEFINE_IL2CPP_CLASS(::Steamworks::NumberOfCurrentPlayers_t, "Steamworks", "NumberOfCurrentPlayers_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.NumberOfCurrentPlayers_t
#pragma pack(push, 8)
struct CORDL_TYPE NumberOfCurrentPlayers_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NumberOfCurrentPlayers_t() ;

// Ctor Parameters [CppParam { name: "m_bSuccess", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_cPlayers", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NumberOfCurrentPlayers_t(uint8_t  m_bSuccess, int32_t  m_cPlayers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x453)};

/// @brief Field m_bSuccess, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_bSuccess;

/// @brief Field m_cPlayers, offset: 0x4, size: 0x4, def value: None
 int32_t  m_cPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::NumberOfCurrentPlayers_t, m_bSuccess) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::NumberOfCurrentPlayers_t, m_cPlayers) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::NumberOfCurrentPlayers_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
