#pragma once
// IWYU pragma private; include "Steamworks/HTTPRequestCompleted_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EHTTPStatusCode_def.hpp"
#include "Steamworks/zzzz__HTTPRequestHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HTTPRequestCompleted_t)
// Forward declare root types
namespace Steamworks {
struct HTTPRequestCompleted_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::HTTPRequestCompleted_t);
DEFINE_IL2CPP_CLASS(::Steamworks::HTTPRequestCompleted_t, "Steamworks", "HTTPRequestCompleted_t");
// Dependencies Steamworks.EHTTPStatusCode, Steamworks.HTTPRequestHandle
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.HTTPRequestCompleted_t
#pragma pack(push, 8)
struct CORDL_TYPE HTTPRequestCompleted_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HTTPRequestCompleted_t() ;

// Ctor Parameters [CppParam { name: "m_hRequest", ty: "::Steamworks::HTTPRequestHandle", modifiers: "", def_value: None }, CppParam { name: "m_ulContextValue", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_bRequestSuccessful", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_eStatusCode", ty: "::Steamworks::EHTTPStatusCode", modifiers: "", def_value: None }, CppParam { name: "m_unBodySize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr HTTPRequestCompleted_t(::Steamworks::HTTPRequestHandle  m_hRequest, uint64_t  m_ulContextValue, bool  m_bRequestSuccessful, ::Steamworks::EHTTPStatusCode  m_eStatusCode, uint32_t  m_unBodySize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x835)};

/// @brief Field m_hRequest, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::HTTPRequestHandle  m_hRequest;

/// @brief Field m_ulContextValue, offset: 0x8, size: 0x8, def value: None
 uint64_t  m_ulContextValue;

/// @brief Field m_bRequestSuccessful, offset: 0x10, size: 0x1, def value: None
 bool  m_bRequestSuccessful;

/// @brief Field m_eStatusCode, offset: 0x14, size: 0x4, def value: None
 ::Steamworks::EHTTPStatusCode  m_eStatusCode;

/// @brief Field m_unBodySize, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_unBodySize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::HTTPRequestCompleted_t, m_hRequest) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestCompleted_t, m_ulContextValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestCompleted_t, m_bRequestSuccessful) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestCompleted_t, m_eStatusCode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Steamworks::HTTPRequestCompleted_t, m_unBodySize) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Steamworks::HTTPRequestCompleted_t) == 0x20, "Size mismatch!");

} // namespace end def Steamworks
