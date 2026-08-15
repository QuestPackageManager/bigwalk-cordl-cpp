#pragma once
// IWYU pragma private; include "Steamworks/HTTPRequestHeadersReceived_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__HTTPRequestHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTTPRequestHeadersReceived_t)
// Forward declare root types
namespace Steamworks {
struct HTTPRequestHeadersReceived_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTTPRequestHeadersReceived_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTTPRequestHeadersReceived_t, "Steamworks", "HTTPRequestHeadersReceived_t");
// Dependencies Steamworks.HTTPRequestHandle
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTTPRequestHeadersReceived_t
#pragma pack(push, 8)
struct CORDL_TYPE HTTPRequestHeadersReceived_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTTPRequestHeadersReceived_t() ;

// Ctor Parameters [CppParam { name: "m_hRequest", ty: "::Steamworks::HTTPRequestHandle", modifiers: "", def_value: None }, CppParam { name: "m_ulContextValue", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr HTTPRequestHeadersReceived_t(::Steamworks::HTTPRequestHandle  m_hRequest, uint64_t  m_ulContextValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16093};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x836)};

/// @brief Field m_hRequest, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HTTPRequestHandle  m_hRequest;

/// @brief Field m_ulContextValue, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulContextValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTTPRequestHeadersReceived_t, m_hRequest) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestHeadersReceived_t, m_ulContextValue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTTPRequestHeadersReceived_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
