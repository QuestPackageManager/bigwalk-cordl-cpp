#pragma once
// IWYU pragma private; include "Steamworks/UserAchievementStored_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAchievementStored_t)
// Forward declare root types
namespace Steamworks {
struct UserAchievementStored_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::UserAchievementStored_t);
DEFINE_IL2CPP_CLASS(::Steamworks::UserAchievementStored_t, "Steamworks", "UserAchievementStored_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.UserAchievementStored_t
#pragma pack(push, 8)
struct CORDL_TYPE UserAchievementStored_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchAchievementName, put=set_m_rgchAchievementName)) ::StringW  m_rgchAchievementName;

/// @brief Method get_m_rgchAchievementName, addr 0x18054afb0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchAchievementName() ;

/// @brief Method set_m_rgchAchievementName, addr 0x18054f0b0, size 0x5d0, virtual false, abstract: false, final false
inline void set_m_rgchAchievementName(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserAchievementStored_t() ;

// Ctor Parameters [CppParam { name: "m_nGameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_bGroupAchievement", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_rgchAchievementName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_nCurProgress", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nMaxProgress", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UserAchievementStored_t(uint64_t  m_nGameID, bool  m_bGroupAchievement, ::ArrayW<uint8_t>  m_rgchAchievementName_, uint32_t  m_nCurProgress, uint32_t  m_nMaxProgress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x44f)};

/// @brief Field m_nGameID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_nGameID;

/// @brief Field m_bGroupAchievement, offset: 0x8, size: 0x1, def value: None
 bool  m_bGroupAchievement;

/// @brief Field m_rgchAchievementName_, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchAchievementName_;

/// @brief Field m_nCurProgress, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_nCurProgress;

/// @brief Field m_nMaxProgress, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_nMaxProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::UserAchievementStored_t, m_nGameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserAchievementStored_t, m_bGroupAchievement) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserAchievementStored_t, m_rgchAchievementName_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserAchievementStored_t, m_nCurProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::UserAchievementStored_t, m_nMaxProgress) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Steamworks::UserAchievementStored_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
