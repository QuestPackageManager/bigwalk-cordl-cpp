#pragma once
// IWYU pragma private; include "Steamworks/EncryptedAppTicketResponse_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EResult_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptedAppTicketResponse_t)
// Forward declare root types
namespace Steamworks {
struct EncryptedAppTicketResponse_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::EncryptedAppTicketResponse_t);
DEFINE_IL2CPP_CLASS(::Steamworks::EncryptedAppTicketResponse_t, "Steamworks", "EncryptedAppTicketResponse_t");
// Dependencies Steamworks.EResult
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EncryptedAppTicketResponse_t
#pragma pack(push, 8)
struct CORDL_TYPE EncryptedAppTicketResponse_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EncryptedAppTicketResponse_t() ;

// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: None }]
constexpr EncryptedAppTicketResponse_t(::Steamworks::EResult  m_eResult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x9a)};

/// @brief Field m_eResult, offset: 0x0, size: 0x4, def value: None
 ::Steamworks::EResult  m_eResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::EncryptedAppTicketResponse_t, m_eResult) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EncryptedAppTicketResponse_t) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
