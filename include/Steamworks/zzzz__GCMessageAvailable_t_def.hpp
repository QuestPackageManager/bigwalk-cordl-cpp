#pragma once
// IWYU pragma private; include "Steamworks/GCMessageAvailable_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GCMessageAvailable_t)
// Forward declare root types
namespace Steamworks {
struct GCMessageAvailable_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GCMessageAvailable_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GCMessageAvailable_t, "Steamworks", "GCMessageAvailable_t");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GCMessageAvailable_t
#pragma pack(push, 8)
struct CORDL_TYPE GCMessageAvailable_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GCMessageAvailable_t() ;

// Ctor Parameters [CppParam { name: "m_nMessageSize", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GCMessageAvailable_t(uint32_t  m_nMessageSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x6a5)};

/// @brief Field m_nMessageSize, offset: 0x0, size: 0x4, def value: None
 uint32_t  m_nMessageSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GCMessageAvailable_t, m_nMessageSize) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GCMessageAvailable_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
