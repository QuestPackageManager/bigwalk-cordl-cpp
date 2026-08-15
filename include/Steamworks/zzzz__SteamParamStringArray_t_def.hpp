#pragma once
// IWYU pragma private; include "Steamworks/SteamParamStringArray_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamParamStringArray_t)
// Forward declare root types
namespace Steamworks {
struct SteamParamStringArray_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamParamStringArray_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamParamStringArray_t, "Steamworks", "SteamParamStringArray_t");
// Dependencies System.IntPtr
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamParamStringArray_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamParamStringArray_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamParamStringArray_t() ;

// Ctor Parameters [CppParam { name: "m_ppStrings", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_nNumStrings", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SteamParamStringArray_t(::System::IntPtr  m_ppStrings, int32_t  m_nNumStrings) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16351};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_ppStrings, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ppStrings;

/// @brief Field m_nNumStrings, offset: 0x8, size: 0x4, def value: None
 int32_t  m_nNumStrings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamParamStringArray_t, m_ppStrings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamParamStringArray_t, m_nNumStrings) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamParamStringArray_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
