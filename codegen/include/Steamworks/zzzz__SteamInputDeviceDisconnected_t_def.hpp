#pragma once
// IWYU pragma private; include "Steamworks/SteamInputDeviceDisconnected_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__InputHandle_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInputDeviceDisconnected_t)
// Forward declare root types
namespace Steamworks {
struct SteamInputDeviceDisconnected_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamInputDeviceDisconnected_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInputDeviceDisconnected_t, "Steamworks", "SteamInputDeviceDisconnected_t");
// Dependencies Steamworks.InputHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamInputDeviceDisconnected_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamInputDeviceDisconnected_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamInputDeviceDisconnected_t() ;

// Ctor Parameters [CppParam { name: "m_ulDisconnectedDeviceHandle", ty: "::Steamworks::InputHandle_t", modifiers: "", def_value: None }]
constexpr SteamInputDeviceDisconnected_t(::Steamworks::InputHandle_t  m_ulDisconnectedDeviceHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xaf2)};

/// @brief Field m_ulDisconnectedDeviceHandle, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::InputHandle_t  m_ulDisconnectedDeviceHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamInputDeviceDisconnected_t, m_ulDisconnectedDeviceHandle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamInputDeviceDisconnected_t) == 0x8, "Size mismatch!");

} // namespace end def Steamworks
