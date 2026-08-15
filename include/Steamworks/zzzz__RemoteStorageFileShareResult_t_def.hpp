#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageFileShareResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "Steamworks/zzzz__UGCHandle_t_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteStorageFileShareResult_t)
// Forward declare root types
namespace Steamworks {
struct RemoteStorageFileShareResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::RemoteStorageFileShareResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::RemoteStorageFileShareResult_t, "Steamworks", "RemoteStorageFileShareResult_t");
// Dependencies Steamworks.EResult, Steamworks.UGCHandle_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.RemoteStorageFileShareResult_t
#pragma pack(push, 8)
struct CORDL_TYPE RemoteStorageFileShareResult_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchFilename, put=set_m_rgchFilename)) ::StringW  m_rgchFilename;

/// @brief Method get_m_rgchFilename, addr 0x18054afb0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchFilename() ;

/// @brief Method set_m_rgchFilename, addr 0x18057e9f0, size 0x32a0, virtual false, abstract: false, final false
inline void set_m_rgchFilename(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RemoteStorageFileShareResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_hFile", ty: "::Steamworks::UGCHandle_t", modifiers: "", def_value: None }, CppParam { name: "m_rgchFilename_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr RemoteStorageFileShareResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::UGCHandle_t  m_hFile, ::ArrayW<uint8_t>  m_rgchFilename_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x51b)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_hFile, offset: 0x8, size: 0x8, def value: None
 ::Steamworks::UGCHandle_t  m_hFile;

/// @brief Field m_rgchFilename_, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchFilename_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::RemoteStorageFileShareResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageFileShareResult_t, m_hFile) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::RemoteStorageFileShareResult_t, m_rgchFilename_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::RemoteStorageFileShareResult_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
