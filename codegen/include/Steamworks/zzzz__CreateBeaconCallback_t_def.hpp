#pragma once
// IWYU pragma private; include "Steamworks/CreateBeaconCallback_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PartyBeaconID_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateBeaconCallback_t)
// Forward declare root types
namespace Steamworks {
struct CreateBeaconCallback_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::CreateBeaconCallback_t);
DEFINE_IL2CPP_CLASS(::Steamworks::CreateBeaconCallback_t, "Steamworks", "CreateBeaconCallback_t");
// Dependencies Steamworks.EResult, Steamworks.PartyBeaconID_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.CreateBeaconCallback_t
#pragma pack(push, 8)
struct CORDL_TYPE CreateBeaconCallback_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CreateBeaconCallback_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_ulBeaconID", ty: "::Steamworks::PartyBeaconID_t", modifiers: "", def_value: None }]
constexpr CreateBeaconCallback_t(::Steamworks::EResult  m_eResult, ::Steamworks::PartyBeaconID_t  m_ulBeaconID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16123};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x14b6)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_ulBeaconID, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::PartyBeaconID_t  m_ulBeaconID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::CreateBeaconCallback_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::CreateBeaconCallback_t, m_ulBeaconID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CreateBeaconCallback_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
