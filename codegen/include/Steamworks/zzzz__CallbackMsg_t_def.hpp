#pragma once
// IWYU pragma private; include "Steamworks/CallbackMsg_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallbackMsg_t)
// Forward declare root types
namespace Steamworks {
struct CallbackMsg_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::CallbackMsg_t);
DEFINE_IL2CPP_CLASS(::Steamworks::CallbackMsg_t, "Steamworks", "CallbackMsg_t");
// Dependencies System.IntPtr
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.CallbackMsg_t
#pragma pack(push, 8)
struct CORDL_TYPE CallbackMsg_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CallbackMsg_t() ;

// Ctor Parameters [CppParam { name: "m_hSteamUser", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_iCallback", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_pubParam", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_cubParam", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CallbackMsg_t(int32_t  m_hSteamUser, int32_t  m_iCallback, ::System::IntPtr  m_pubParam, int32_t  m_cubParam) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_hSteamUser, offset: 0x0, size: 0x4, def value: None
 int32_t  m_hSteamUser;

/// @brief Field m_iCallback, offset: 0x4, size: 0x4, def value: None
 int32_t  m_iCallback;

/// @brief Field m_pubParam, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_pubParam;

/// @brief Field m_cubParam, offset: 0x10, size: 0x4, def value: None
 int32_t  m_cubParam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::CallbackMsg_t, m_hSteamUser) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::CallbackMsg_t, m_iCallback) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Steamworks::CallbackMsg_t, m_pubParam) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::CallbackMsg_t, m_cubParam) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CallbackMsg_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
