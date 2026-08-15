#pragma once
// IWYU pragma private; include "Steamworks/GetAppDependenciesResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__AppId_t_def.hpp"
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetAppDependenciesResult_t)
namespace Steamworks {
struct AppId_t;
}
// Forward declare root types
namespace Steamworks {
struct GetAppDependenciesResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GetAppDependenciesResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GetAppDependenciesResult_t, "Steamworks", "GetAppDependenciesResult_t");
// Dependencies Steamworks.AppId_t, Steamworks.EResult, Steamworks.PublishedFileId_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GetAppDependenciesResult_t
#pragma pack(push, 8)
struct CORDL_TYPE GetAppDependenciesResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GetAppDependenciesResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: None }, CppParam { name: "m_rgAppIDs", ty: "::ArrayW<::Steamworks::AppId_t>", modifiers: "", def_value: None }, CppParam { name: "m_nNumAppDependencies", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nTotalNumAppDependencies", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetAppDependenciesResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::ArrayW<::Steamworks::AppId_t>  m_rgAppIDs, uint32_t  m_nNumAppDependencies, uint32_t  m_nTotalNumAppDependencies) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xd58)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_nPublishedFileId, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::PublishedFileId_t  m_nPublishedFileId;

/// @brief Field m_rgAppIDs, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Steamworks::AppId_t>  m_rgAppIDs;

/// @brief Field m_nNumAppDependencies, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_nNumAppDependencies;

/// @brief Field m_nTotalNumAppDependencies, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_nTotalNumAppDependencies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GetAppDependenciesResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetAppDependenciesResult_t, m_nPublishedFileId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetAppDependenciesResult_t, m_rgAppIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetAppDependenciesResult_t, m_nNumAppDependencies) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GetAppDependenciesResult_t, m_nTotalNumAppDependencies) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GetAppDependenciesResult_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
