#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageFileReadAsyncComplete_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageFileReadAsyncComplete_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStorageFileReadAsyncComplete_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageFileReadAsyncComplete_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageFileReadAsyncComplete_t, "Steamworks", "RemoteStorageFileReadAsyncComplete_t");
// Dependencies Steamworks.EResult, Steamworks.SteamAPICall_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageFileReadAsyncComplete_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageFileReadAsyncComplete_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageFileReadAsyncComplete_t() ;

// Ctor Parameters [CppParam { name: "m_hFileReadAsync", ty: "::Steamworks::SteamAPICall_t", modifiers: "", def_value: None }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_cubRead", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RemoteStorageFileReadAsyncComplete_t(::Steamworks::SteamAPICall_t  m_hFileReadAsync, ::Steamworks::EResult  m_eResult, uint32_t  m_nOffset, uint32_t  m_cubRead) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x534)};

/// @brief Field m_hFileReadAsync, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::SteamAPICall_t  m_hFileReadAsync;

/// @brief Field m_eResult, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nOffset, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_nOffset;

/// @brief Field m_cubRead, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_cubRead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStorageFileReadAsyncComplete_t, m_hFileReadAsync) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageFileReadAsyncComplete_t, m_eResult) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageFileReadAsyncComplete_t, m_nOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageFileReadAsyncComplete_t, m_cubRead) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStorageFileReadAsyncComplete_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
