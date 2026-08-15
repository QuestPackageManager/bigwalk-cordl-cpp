#pragma once
// IWYU pragma private; include "Steamworks/UserStatsReceived_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserStatsReceived_t)
// Forward declare root types
namespace Steamworks {
struct UserStatsReceived_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::UserStatsReceived_t);
DEFINE_IL2CPP_CLASS(::Steamworks::UserStatsReceived_t, "Steamworks", "UserStatsReceived_t");
// Dependencies Steamworks.CSteamID, Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.UserStatsReceived_t
#pragma pack(push, 8)
struct CORDL_TYPE UserStatsReceived_t {
public:
// Declarations
/// @brief Field m_eResult, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_eResult, put=__cordl_internal_set_m_eResult)) ::Steamworks::EResult  m_eResult;

/// @brief Field m_nGameID, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_nGameID, put=__cordl_internal_set_m_nGameID)) uint64_t  m_nGameID;

/// @brief Field m_steamIDUser, offset 0xc, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_steamIDUser, put=__cordl_internal_set_m_steamIDUser)) ::Steamworks::CSteamID  m_steamIDUser;

constexpr ::Steamworks::EResult const& __cordl_internal_get_m_eResult() const;

constexpr ::Steamworks::EResult& __cordl_internal_get_m_eResult() ;

constexpr uint64_t const& __cordl_internal_get_m_nGameID() const;

constexpr uint64_t& __cordl_internal_get_m_nGameID() ;

constexpr ::Steamworks::CSteamID const& __cordl_internal_get_m_steamIDUser() const;

constexpr ::Steamworks::CSteamID& __cordl_internal_get_m_steamIDUser() ;

constexpr void __cordl_internal_set_m_eResult(::Steamworks::EResult  value) ;

constexpr void __cordl_internal_set_m_nGameID(uint64_t  value) ;

constexpr void __cordl_internal_set_m_steamIDUser(::Steamworks::CSteamID  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserStatsReceived_t() ;

// Ctor Parameters [CppParam { name: "m_nGameID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }]
constexpr UserStatsReceived_t(uint64_t  m_nGameID, ::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_steamIDUser) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_nGameID_padding[0x0];
/// @brief Field m_nGameID, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_nGameID;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_nGameID_padding_forAlignment[0x0];
/// @brief Field m_nGameID, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___m_nGameID_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___m_eResult_padding[0x8];
/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  ___m_eResult;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___m_eResult_padding_forAlignment[0x8];
/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  ___m_eResult_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___m_steamIDUser_padding[0xc];
/// @brief Field m_steamIDUser, offset: 0xc, size: 0x8, def value: None
 ::Steamworks::CSteamID  ___m_steamIDUser;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___m_steamIDUser_padding_forAlignment[0xc];
/// @brief Field m_steamIDUser, offset: 0xc, size: 0x8, def value: None
 ::Steamworks::CSteamID  ___m_steamIDUser_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x44d)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Steamworks::UserStatsReceived_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
