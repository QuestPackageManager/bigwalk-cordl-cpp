#pragma once
// IWYU pragma private; include "Steamworks/SteamInputConfigurationLoaded_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__InputHandle_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInputConfigurationLoaded_t)
// Forward declare root types
namespace Steamworks {
struct SteamInputConfigurationLoaded_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInputConfigurationLoaded_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInputConfigurationLoaded_t, "Steamworks", "SteamInputConfigurationLoaded_t");
// Dependencies Steamworks.AppId_t, Steamworks.CSteamID, Steamworks.InputHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInputConfigurationLoaded_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamInputConfigurationLoaded_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInputConfigurationLoaded_t() ;

// Ctor Parameters [CppParam { name: "m_unAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_ulDeviceHandle", ty: "::Steamworks::InputHandle_t", modifiers: "", def_value: None }, CppParam { name: "m_ulMappingCreator", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_unMajorRevision", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_unMinorRevision", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_bUsesSteamInputAPI", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_bUsesGamepadAPI", ty: "bool", modifiers: "", def_value: None }]
constexpr SteamInputConfigurationLoaded_t(::Steamworks::AppId_t  m_unAppID, ::Steamworks::InputHandle_t  m_ulDeviceHandle, ::Steamworks::CSteamID  m_ulMappingCreator, uint32_t  m_unMajorRevision, uint32_t  m_unMinorRevision, bool  m_bUsesSteamInputAPI, bool  m_bUsesGamepadAPI) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xaf3)};

/// @brief Field m_unAppID, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_unAppID;

/// @brief Field m_ulDeviceHandle, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::InputHandle_t  m_ulDeviceHandle;

/// @brief Field m_ulMappingCreator, offset: 0x10, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_ulMappingCreator;

/// @brief Field m_unMajorRevision, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_unMajorRevision;

/// @brief Field m_unMinorRevision, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_unMinorRevision;

/// @brief Field m_bUsesSteamInputAPI, offset: 0x20, size: 0x1, def value: None
 bool  m_bUsesSteamInputAPI;

/// @brief Field m_bUsesGamepadAPI, offset: 0x21, size: 0x1, def value: None
 bool  m_bUsesGamepadAPI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInputConfigurationLoaded_t, m_unAppID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputConfigurationLoaded_t, m_ulDeviceHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputConfigurationLoaded_t, m_ulMappingCreator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputConfigurationLoaded_t, m_unMajorRevision) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputConfigurationLoaded_t, m_unMinorRevision) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputConfigurationLoaded_t, m_bUsesSteamInputAPI) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamInputConfigurationLoaded_t, m_bUsesGamepadAPI) == 0x21, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInputConfigurationLoaded_t) == 0x28, "Size mismatch!");

} // namespace end def Steamworks
