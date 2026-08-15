#pragma once
// IWYU pragma private; include "Steamworks/RemoteStoragePublishedFileUpdated_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStoragePublishedFileUpdated_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStoragePublishedFileUpdated_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStoragePublishedFileUpdated_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStoragePublishedFileUpdated_t, "Steamworks", "RemoteStoragePublishedFileUpdated_t");
// Dependencies Steamworks.AppId_t, Steamworks.PublishedFileId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStoragePublishedFileUpdated_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStoragePublishedFileUpdated_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStoragePublishedFileUpdated_t() ;

// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: None }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: None }, CppParam { name: "m_ulUnused", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr RemoteStoragePublishedFileUpdated_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::AppId_t  m_nAppID, uint64_t  m_ulUnused) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x532)};

/// @brief Field m_nPublishedFileId, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::PublishedFileId_t  m_nPublishedFileId;

/// @brief Field m_nAppID, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::AppId_t  m_nAppID;

/// @brief Field m_ulUnused, offset: 0x10, size: 0x8, def value: None
 uint64_t  m_ulUnused;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStoragePublishedFileUpdated_t, m_nPublishedFileId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStoragePublishedFileUpdated_t, m_nAppID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStoragePublishedFileUpdated_t, m_ulUnused) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStoragePublishedFileUpdated_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
