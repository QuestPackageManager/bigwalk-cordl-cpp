#pragma once
// IWYU pragma private; include "Steamworks/SteamAPICallCompleted_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__SteamAPICall_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamAPICallCompleted_t)
// Forward declare root types
namespace Steamworks {
struct SteamAPICallCompleted_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::SteamAPICallCompleted_t);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamAPICallCompleted_t, "Steamworks", "SteamAPICallCompleted_t");
// Dependencies Steamworks.SteamAPICall_t
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.SteamAPICallCompleted_t
#pragma pack(push, 8)
struct CORDL_TYPE SteamAPICallCompleted_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SteamAPICallCompleted_t() ;

// Ctor Parameters [CppParam { name: "m_hAsyncCall", ty: "::Steamworks::SteamAPICall_t", modifiers: "", def_value: None }, CppParam { name: "m_iCallback", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_cubParam", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SteamAPICallCompleted_t(::Steamworks::SteamAPICall_t  m_hAsyncCall, int32_t  m_iCallback, uint32_t  m_cubParam) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16229};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x2bf)};

/// @brief Field m_hAsyncCall, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::SteamAPICall_t  m_hAsyncCall;

/// @brief Field m_iCallback, offset: 0x8, size: 0x4, def value: None
 int32_t  m_iCallback;

/// @brief Field m_cubParam, offset: 0xc, size: 0x4, def value: None
 uint32_t  m_cubParam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::SteamAPICallCompleted_t, m_hAsyncCall) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamAPICallCompleted_t, m_iCallback) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::SteamAPICallCompleted_t, m_cubParam) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Steamworks::SteamAPICallCompleted_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
