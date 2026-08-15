#pragma once
// IWYU pragma private; include "Steamworks/FileDetailsResult_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileDetailsResult_t)
// Forward declare root types
namespace Steamworks {
struct FileDetailsResult_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::FileDetailsResult_t);
DEFINE_IL2CPP_CLASS(::Steamworks::FileDetailsResult_t, "Steamworks", "FileDetailsResult_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.FileDetailsResult_t
#pragma pack(push, 8)
struct CORDL_TYPE FileDetailsResult_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FileDetailsResult_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }, CppParam { name: "m_ulFileSize", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_FileSHA", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_unFlags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr FileDetailsResult_t(::Steamworks::EResult  m_eResult, uint64_t  m_ulFileSize, ::ArrayW<uint8_t>  m_FileSHA, uint32_t  m_unFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x3ff)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

/// @brief Field m_ulFileSize, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulFileSize;

/// @brief Field m_FileSHA, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_FileSHA;

/// @brief Field m_unFlags, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_unFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::FileDetailsResult_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FileDetailsResult_t, m_ulFileSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FileDetailsResult_t, m_FileSHA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::FileDetailsResult_t, m_unFlags) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::FileDetailsResult_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
