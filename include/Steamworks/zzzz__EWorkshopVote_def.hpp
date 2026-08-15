#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopVote.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EWorkshopVote)
// Forward declare root types
namespace Steamworks {
struct EWorkshopVote;
}
// Write type traits
MARK_VAL_T(::Steamworks::EWorkshopVote);
DEFINE_IL2CPP_CLASS(::Steamworks::EWorkshopVote, "Steamworks", "EWorkshopVote");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EWorkshopVote
struct CORDL_TYPE EWorkshopVote {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EWorkshopVote_Unwrapped
enum struct __EWorkshopVote_Unwrapped : int32_t {
__E_k_EWorkshopVoteUnvoted = static_cast<int32_t>(0x0),
__E_k_EWorkshopVoteFor = static_cast<int32_t>(0x1),
__E_k_EWorkshopVoteAgainst = static_cast<int32_t>(0x2),
__E_k_EWorkshopVoteLater = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EWorkshopVote_Unwrapped () const noexcept {
return static_cast<__EWorkshopVote_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EWorkshopVote() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EWorkshopVote(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16281};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EWorkshopVoteAgainst value: I32(2)
static ::Steamworks::EWorkshopVote const k_EWorkshopVoteAgainst;

/// @brief Field k_EWorkshopVoteFor value: I32(1)
static ::Steamworks::EWorkshopVote const k_EWorkshopVoteFor;

/// @brief Field k_EWorkshopVoteLater value: I32(3)
static ::Steamworks::EWorkshopVote const k_EWorkshopVoteLater;

/// @brief Field k_EWorkshopVoteUnvoted value: I32(0)
static ::Steamworks::EWorkshopVote const k_EWorkshopVoteUnvoted;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EWorkshopVote, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EWorkshopVote) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
