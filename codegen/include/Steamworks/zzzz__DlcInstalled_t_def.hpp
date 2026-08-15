#pragma once
// IWYU pragma private; include "Steamworks/DlcInstalled_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcInstalled_t)
// Forward declare root types
namespace Steamworks {
struct DlcInstalled_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::DlcInstalled_t);
DEFINE_IL2CPP_CLASS(::Steamworks::DlcInstalled_t, "Steamworks", "DlcInstalled_t");
// Dependencies Steamworks.AppId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.DlcInstalled_t
#pragma pack(push, 8)
struct CORDL_TYPE DlcInstalled_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DlcInstalled_t() ;

// Ctor Parameters [CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }]
constexpr DlcInstalled_t(::Steamworks::AppId_t  m_nAppID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16028};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x3ed)};

/// @brief Field m_nAppID, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::DlcInstalled_t, m_nAppID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::DlcInstalled_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
