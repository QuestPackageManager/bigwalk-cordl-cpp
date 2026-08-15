#pragma once
// IWYU pragma private; include "Steamworks/TimedTrialStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimedTrialStatus_t)
// Forward declare root types
namespace Steamworks {
struct TimedTrialStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::TimedTrialStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::TimedTrialStatus_t, "Steamworks", "TimedTrialStatus_t");
// Dependencies Steamworks.AppId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.TimedTrialStatus_t
#pragma pack(push, 8)
struct CORDL_TYPE TimedTrialStatus_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TimedTrialStatus_t() ;

// Ctor Parameters [CppParam { name: "m_unAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_bIsOffline", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_unSecondsAllowed", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_unSecondsPlayed", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TimedTrialStatus_t(::Steamworks::AppId_t  m_unAppID, bool  m_bIsOffline, uint32_t  m_unSecondsAllowed, uint32_t  m_unSecondsPlayed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16033};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x406)};

/// @brief Field m_unAppID, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_unAppID;

/// @brief Field m_bIsOffline, offset: 0x4, size: 0x1, def value: None
 bool  m_bIsOffline;

/// @brief Field m_unSecondsAllowed, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_unSecondsAllowed;

/// @brief Field m_unSecondsPlayed, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_unSecondsPlayed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::TimedTrialStatus_t, m_unAppID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::TimedTrialStatus_t, m_bIsOffline) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::TimedTrialStatus_t, m_unSecondsAllowed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::TimedTrialStatus_t, m_unSecondsPlayed) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Steamworks::TimedTrialStatus_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
