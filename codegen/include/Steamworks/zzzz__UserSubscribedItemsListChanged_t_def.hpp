#pragma once
// IWYU pragma private; include "Steamworks/UserSubscribedItemsListChanged_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserSubscribedItemsListChanged_t)
// Forward declare root types
namespace Steamworks {
struct UserSubscribedItemsListChanged_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::UserSubscribedItemsListChanged_t);
DEFINE_IL2CPP_CLASS(::Steamworks::UserSubscribedItemsListChanged_t, "Steamworks", "UserSubscribedItemsListChanged_t");
// Dependencies Steamworks.AppId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.UserSubscribedItemsListChanged_t
#pragma pack(push, 8)
struct CORDL_TYPE UserSubscribedItemsListChanged_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UserSubscribedItemsListChanged_t() ;

// Ctor Parameters [CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }]
constexpr UserSubscribedItemsListChanged_t(::Steamworks::AppId_t  m_nAppID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd5a)};

/// @brief Field m_nAppID, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::UserSubscribedItemsListChanged_t, m_nAppID) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::UserSubscribedItemsListChanged_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
