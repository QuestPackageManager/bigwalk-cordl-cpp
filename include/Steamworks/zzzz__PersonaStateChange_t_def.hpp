#pragma once
// IWYU pragma private; include "Steamworks/PersonaStateChange_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__EPersonaChange_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PersonaStateChange_t)
// Forward declare root types
namespace Steamworks {
struct PersonaStateChange_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::PersonaStateChange_t);
DEFINE_IL2CPP_CLASS(::Steamworks::PersonaStateChange_t, "Steamworks", "PersonaStateChange_t");
// Dependencies Steamworks.EPersonaChange
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.PersonaStateChange_t
#pragma pack(push, 8)
struct CORDL_TYPE PersonaStateChange_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PersonaStateChange_t() ;

// Ctor Parameters [CppParam { name: "m_ulSteamID", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_nChangeFlags", ty: "::Steamworks::EPersonaChange", modifiers: "", def_value: None }]
constexpr PersonaStateChange_t(uint64_t  m_ulSteamID, ::Steamworks::EPersonaChange  m_nChangeFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0x130)};

/// @brief Field m_ulSteamID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_ulSteamID;

/// @brief Field m_nChangeFlags, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EPersonaChange  m_nChangeFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::PersonaStateChange_t, m_ulSteamID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::PersonaStateChange_t, m_nChangeFlags) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Steamworks::PersonaStateChange_t) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
