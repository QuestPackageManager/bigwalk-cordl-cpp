#pragma once
// IWYU pragma private; include "Steamworks/CheckFileSignature_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__ECheckFileSignature_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CheckFileSignature_t)
// Forward declare root types
namespace Steamworks {
struct CheckFileSignature_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::CheckFileSignature_t);
DEFINE_IL2CPP_CLASS(::Steamworks::CheckFileSignature_t, "Steamworks", "CheckFileSignature_t");
// Dependencies Steamworks.ECheckFileSignature
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.CheckFileSignature_t
#pragma pack(push, 8)
struct CORDL_TYPE CheckFileSignature_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CheckFileSignature_t() ;

// Ctor Parameters [CppParam { name: "m_eCheckFileSignature", ty: "::Steamworks::ECheckFileSignature", modifiers: "", def_value: None }]
constexpr CheckFileSignature_t(::Steamworks::ECheckFileSignature  m_eCheckFileSignature) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16231};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x2c1)};

/// @brief Field m_eCheckFileSignature, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::ECheckFileSignature  m_eCheckFileSignature;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::CheckFileSignature_t, m_eCheckFileSignature) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::CheckFileSignature_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
