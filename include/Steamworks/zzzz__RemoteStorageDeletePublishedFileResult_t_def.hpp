#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageDeletePublishedFileResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageDeletePublishedFileResult_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStorageDeletePublishedFileResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageDeletePublishedFileResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageDeletePublishedFileResult_t, "Steamworks", "RemoteStorageDeletePublishedFileResult_t");
// Dependencies Steamworks.EResult, Steamworks.PublishedFileId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageDeletePublishedFileResult_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageDeletePublishedFileResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageDeletePublishedFileResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: None }]
constexpr RemoteStorageDeletePublishedFileResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x51f)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nPublishedFileId, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::PublishedFileId_t  m_nPublishedFileId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStorageDeletePublishedFileResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageDeletePublishedFileResult_t, m_nPublishedFileId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStorageDeletePublishedFileResult_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
