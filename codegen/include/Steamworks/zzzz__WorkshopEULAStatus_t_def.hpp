#pragma once
// IWYU pragma private; include "Steamworks/WorkshopEULAStatus_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__RTime32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WorkshopEULAStatus_t)
// Forward declare root types
namespace Steamworks {
struct WorkshopEULAStatus_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::WorkshopEULAStatus_t);
DEFINE_IL2CPP_CLASS(::Steamworks::WorkshopEULAStatus_t, "Steamworks", "WorkshopEULAStatus_t");
// Dependencies Steamworks.AppId_t, Steamworks.EResult, Steamworks.RTime32
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.WorkshopEULAStatus_t
#pragma pack(push, 8)
struct CORDL_TYPE WorkshopEULAStatus_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WorkshopEULAStatus_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_unVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_rtAction", ty: "::Steamworks::RTime32", modifiers: "", def_value: None }, CppParam { name: "m_bAccepted", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_bNeedsAction", ty: "bool", modifiers: "", def_value: None }]
constexpr WorkshopEULAStatus_t(::Steamworks::EResult  m_eResult, ::Steamworks::AppId_t  m_nAppID, uint32_t  m_unVersion, ::Steamworks::RTime32  m_rtAction, bool  m_bAccepted, bool  m_bNeedsAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16200};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd5c)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nAppID, offset: 0x4, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

/// @brief Field m_unVersion, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_unVersion;

/// @brief Field m_rtAction, offset: 0xc, size: 0x4, def value: None
 ::Steamworks::RTime32  m_rtAction;

/// @brief Field m_bAccepted, offset: 0x10, size: 0x1, def value: None
 bool  m_bAccepted;

/// @brief Field m_bNeedsAction, offset: 0x11, size: 0x1, def value: None
 bool  m_bNeedsAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::WorkshopEULAStatus_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::WorkshopEULAStatus_t, m_nAppID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::WorkshopEULAStatus_t, m_unVersion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::WorkshopEULAStatus_t, m_rtAction) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::WorkshopEULAStatus_t, m_bAccepted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::WorkshopEULAStatus_t, m_bNeedsAction) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Steamworks::WorkshopEULAStatus_t) == 0x14, "Size mismatch!");

} // namespace end def Steamworks
