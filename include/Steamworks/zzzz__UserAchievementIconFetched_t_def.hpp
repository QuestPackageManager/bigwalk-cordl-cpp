#pragma once
// IWYU pragma private; include "Steamworks/UserAchievementIconFetched_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CGameID_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAchievementIconFetched_t)
// Forward declare root types
namespace Steamworks {
struct UserAchievementIconFetched_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::UserAchievementIconFetched_t);
DEFINE_IL2CPP_CLASS(::Steamworks::UserAchievementIconFetched_t, "Steamworks", "UserAchievementIconFetched_t");
// Dependencies Steamworks.CGameID
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.UserAchievementIconFetched_t
#pragma pack(push, 8)
struct CORDL_TYPE UserAchievementIconFetched_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchAchievementName, put=set_m_rgchAchievementName)) ::StringW  m_rgchAchievementName;

/// @brief Method get_m_rgchAchievementName, addr 0x18054f030, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchAchievementName() ;

/// @brief Method set_m_rgchAchievementName, addr 0x18054f0b0, size 0x5d0, virtual false, abstract: false, final false
inline void set_m_rgchAchievementName(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserAchievementIconFetched_t() ;

// Ctor Parameters [CppParam { name: "m_nGameID", ty: "::Steamworks::CGameID", modifiers: "", def_value: None }, CppParam { name: "m_rgchAchievementName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_bAchieved", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_nIconHandle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserAchievementIconFetched_t(::Steamworks::CGameID  m_nGameID, ::ArrayW<uint8_t>  m_rgchAchievementName_, bool  m_bAchieved, int32_t  m_nIconHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x455)};

/// @brief Field m_nGameID, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CGameID  m_nGameID;

/// @brief Field m_rgchAchievementName_, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchAchievementName_;

/// @brief Field m_bAchieved, offset: 0x10, size: 0x1, def value: None
 bool  m_bAchieved;

/// @brief Field m_nIconHandle, offset: 0x14, size: 0x4, def value: None
 int32_t  m_nIconHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::UserAchievementIconFetched_t, m_nGameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserAchievementIconFetched_t, m_rgchAchievementName_) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserAchievementIconFetched_t, m_bAchieved) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserAchievementIconFetched_t, m_nIconHandle) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Steamworks::UserAchievementIconFetched_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
