#pragma once
// IWYU pragma private; include "Steamworks/RemoteStoragePublishedFileDeleted_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStoragePublishedFileDeleted_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStoragePublishedFileDeleted_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStoragePublishedFileDeleted_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStoragePublishedFileDeleted_t, "Steamworks", "RemoteStoragePublishedFileDeleted_t");
// Dependencies Steamworks.AppId_t, Steamworks.PublishedFileId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStoragePublishedFileDeleted_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStoragePublishedFileDeleted_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStoragePublishedFileDeleted_t() ;

// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }]
constexpr RemoteStoragePublishedFileDeleted_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::AppId_t  m_nAppID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x52b)};

/// @brief Field m_nPublishedFileId, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::PublishedFileId_t  m_nPublishedFileId;

/// @brief Field m_nAppID, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStoragePublishedFileDeleted_t, m_nPublishedFileId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStoragePublishedFileDeleted_t, m_nAppID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStoragePublishedFileDeleted_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
