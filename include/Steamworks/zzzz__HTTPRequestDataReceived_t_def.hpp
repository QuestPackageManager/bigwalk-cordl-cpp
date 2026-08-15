#pragma once
// IWYU pragma private; include "Steamworks/HTTPRequestDataReceived_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HTTPRequestHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTTPRequestDataReceived_t)
// Forward declare root types
namespace Steamworks {
struct HTTPRequestDataReceived_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTTPRequestDataReceived_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTTPRequestDataReceived_t, "Steamworks", "HTTPRequestDataReceived_t");
// Dependencies Steamworks.HTTPRequestHandle
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTTPRequestDataReceived_t
#pragma pack(push, 8)
struct CORDL_TYPE HTTPRequestDataReceived_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTTPRequestDataReceived_t() ;

// Ctor Parameters [CppParam { name: "m_hRequest", ty: "::Steamworks::HTTPRequestHandle", modifiers: "", def_value: None }, CppParam { name: "m_ulContextValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_cOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_cBytesReceived", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HTTPRequestDataReceived_t(::Steamworks::HTTPRequestHandle  m_hRequest, uint64_t  m_ulContextValue, uint32_t  m_cOffset, uint32_t  m_cBytesReceived) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16094};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x837)};

/// @brief Field m_hRequest, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HTTPRequestHandle  m_hRequest;

/// @brief Field m_ulContextValue, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulContextValue;

/// @brief Field m_cOffset, offset: 0x10, size: 0x4, def value: None
 uint32_t  m_cOffset;

/// @brief Field m_cBytesReceived, offset: 0x14, size: 0x4, def value: None
 uint32_t  m_cBytesReceived;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTTPRequestDataReceived_t, m_hRequest) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestDataReceived_t, m_ulContextValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestDataReceived_t, m_cOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestDataReceived_t, m_cBytesReceived) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTTPRequestDataReceived_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
