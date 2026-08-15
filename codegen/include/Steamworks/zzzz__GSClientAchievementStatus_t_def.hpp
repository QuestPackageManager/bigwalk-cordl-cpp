#pragma once
// IWYU pragma private; include "Steamworks/GSClientAchievementStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GSClientAchievementStatus_t)
// Forward declare root types
namespace Steamworks {
struct GSClientAchievementStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GSClientAchievementStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GSClientAchievementStatus_t, "Steamworks", "GSClientAchievementStatus_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GSClientAchievementStatus_t
#pragma pack(push, 8)
struct CORDL_TYPE GSClientAchievementStatus_t {
public:
// Declarations
 __declspec(property(get=get_m_pchAchievement, put=set_m_pchAchievement)) ::StringW  m_pchAchievement;

/// @brief Method get_m_pchAchievement, addr 0x18054f030, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_pchAchievement() ;

/// @brief Method set_m_pchAchievement, addr 0x18054f0b0, size 0x5d0, virtual false, abstract: false, final false
inline void set_m_pchAchievement(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GSClientAchievementStatus_t() ;

// Ctor Parameters [CppParam { name: "m_SteamID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_pchAchievement_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_bUnlocked", ty: "bool", modifiers: "", def_value: None }]
constexpr GSClientAchievementStatus_t(uint64_t  m_SteamID, ::ArrayW<uint8_t>  m_pchAchievement_, bool  m_bUnlocked) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16059};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xce)};

/// @brief Field m_SteamID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_SteamID;

/// @brief Field m_pchAchievement_, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_pchAchievement_;

/// @brief Field m_bUnlocked, offset: 0x10, size: 0x1, def value: None
 bool  m_bUnlocked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GSClientAchievementStatus_t, m_SteamID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientAchievementStatus_t, m_pchAchievement_) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientAchievementStatus_t, m_bUnlocked) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GSClientAchievementStatus_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
