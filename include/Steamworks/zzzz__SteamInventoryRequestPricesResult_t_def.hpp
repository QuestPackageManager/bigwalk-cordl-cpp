#pragma once
// IWYU pragma private; include "Steamworks/SteamInventoryRequestPricesResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInventoryRequestPricesResult_t)
// Forward declare root types
namespace Steamworks {
struct SteamInventoryRequestPricesResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInventoryRequestPricesResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInventoryRequestPricesResult_t, "Steamworks", "SteamInventoryRequestPricesResult_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInventoryRequestPricesResult_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamInventoryRequestPricesResult_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchCurrency, put=set_m_rgchCurrency)) ::StringW  m_rgchCurrency;

/// @brief Method get_m_rgchCurrency, addr 0x18054f030, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchCurrency() ;

/// @brief Method set_m_rgchCurrency, addr 0x1805a4b70, size 0x2c0, virtual false, abstract: false, final false
inline void set_m_rgchCurrency(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SteamInventoryRequestPricesResult_t() ;

// Ctor Parameters [CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_rgchCurrency_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr SteamInventoryRequestPricesResult_t(::Steamworks::EResult  m_result, ::ArrayW<uint8_t>  m_rgchCurrency_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16103};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x1261)};

/// @brief Field m_result, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_result;

/// @brief Field m_rgchCurrency_, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchCurrency_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInventoryRequestPricesResult_t, m_result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInventoryRequestPricesResult_t, m_rgchCurrency_) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInventoryRequestPricesResult_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
