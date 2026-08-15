#pragma once
// IWYU pragma private; include "Steamworks/GameServerChangeRequested_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerChangeRequested_t)
// Forward declare root types
namespace Steamworks {
struct GameServerChangeRequested_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GameServerChangeRequested_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GameServerChangeRequested_t, "Steamworks", "GameServerChangeRequested_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GameServerChangeRequested_t
#pragma pack(push, 8)
struct CORDL_TYPE GameServerChangeRequested_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchPassword, put=set_m_rgchPassword)) ::StringW  m_rgchPassword;

 __declspec(property(get=get_m_rgchServer, put=set_m_rgchServer)) ::StringW  m_rgchServer;

/// @brief Method get_m_rgchPassword, addr 0x18054f030, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchPassword() ;

/// @brief Method get_m_rgchServer, addr 0x18054f850, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchServer() ;

/// @brief Method set_m_rgchPassword, addr 0x18054f8d0, size 0xc10, virtual false, abstract: false, final false
inline void set_m_rgchPassword(::StringW  value) ;

/// @brief Method set_m_rgchServer, addr 0x18054f8d0, size 0xc10, virtual false, abstract: false, final false
inline void set_m_rgchServer(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameServerChangeRequested_t() ;

// Ctor Parameters [CppParam { name: "m_rgchServer_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_rgchPassword_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr GameServerChangeRequested_t(::ArrayW<uint8_t>  m_rgchServer_, ::ArrayW<uint8_t>  m_rgchPassword_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14c)};

/// @brief Field m_rgchServer_, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchServer_;

/// @brief Field m_rgchPassword_, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchPassword_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GameServerChangeRequested_t, m_rgchServer_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GameServerChangeRequested_t, m_rgchPassword_) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GameServerChangeRequested_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
