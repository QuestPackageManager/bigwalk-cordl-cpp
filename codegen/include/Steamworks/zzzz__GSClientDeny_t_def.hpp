#pragma once
// IWYU pragma private; include "Steamworks/GSClientDeny_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__EDenyReason_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GSClientDeny_t)
// Forward declare root types
namespace Steamworks {
struct GSClientDeny_t;
}
// Write type traits
MARK_VAL_T(::Steamworks::GSClientDeny_t);
DEFINE_IL2CPP_CLASS(::Steamworks::GSClientDeny_t, "Steamworks", "GSClientDeny_t");
// Dependencies Steamworks.CSteamID, Steamworks.EDenyReason
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.GSClientDeny_t
#pragma pack(push, 4)
struct CORDL_TYPE GSClientDeny_t {
public:
// Declarations
 __declspec(property(get=get_m_rgchOptionalText, put=set_m_rgchOptionalText)) ::StringW  m_rgchOptionalText;

/// @brief Method get_m_rgchOptionalText, addr 0x18054afb0, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_m_rgchOptionalText() ;

/// @brief Method set_m_rgchOptionalText, addr 0x18054f0b0, size 0x5d0, virtual false, abstract: false, final false
inline void set_m_rgchOptionalText(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GSClientDeny_t() ;

// Ctor Parameters [CppParam { name: "m_SteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: None }, CppParam { name: "m_eDenyReason", ty: "::Steamworks::EDenyReason", modifiers: "", def_value: None }, CppParam { name: "m_rgchOptionalText_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr GSClientDeny_t(::Steamworks::CSteamID  m_SteamID, ::Steamworks::EDenyReason  m_eDenyReason, ::ArrayW<uint8_t>  m_rgchOptionalText_) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field k_iCallback offset 0xffffffff size 0x4
static constexpr int32_t  k_iCallback{static_cast<int32_t>(0xca)};

/// @brief Field m_SteamID, offset: 0x0, size: 0x8, def value: None
 ::Steamworks::CSteamID  m_SteamID;

/// @brief Field m_eDenyReason, offset: 0x8, size: 0x4, def value: None
 ::Steamworks::EDenyReason  m_eDenyReason;

/// @brief Field m_rgchOptionalText_, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  m_rgchOptionalText_;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Steamworks::GSClientDeny_t, m_SteamID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientDeny_t, m_eDenyReason) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Steamworks::GSClientDeny_t, m_rgchOptionalText_) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Steamworks::GSClientDeny_t) == 0x18, "Size mismatch!");

} // namespace end def Steamworks
