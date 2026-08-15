#pragma once
// IWYU pragma private; include "Steamworks/ELeaderboardUploadScoreMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ELeaderboardUploadScoreMethod)
// Forward declare root types
namespace Steamworks {
struct ELeaderboardUploadScoreMethod;
}
// Write type traits
MARK_VAL_T(::Steamworks::ELeaderboardUploadScoreMethod);
DEFINE_IL2CPP_CLASS(::Steamworks::ELeaderboardUploadScoreMethod, "Steamworks", "ELeaderboardUploadScoreMethod");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ELeaderboardUploadScoreMethod
struct CORDL_TYPE ELeaderboardUploadScoreMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ELeaderboardUploadScoreMethod_Unwrapped
enum struct __ELeaderboardUploadScoreMethod_Unwrapped : int32_t {
__E_k_ELeaderboardUploadScoreMethodNone = static_cast<int32_t>(0x0),
__E_k_ELeaderboardUploadScoreMethodKeepBest = static_cast<int32_t>(0x1),
__E_k_ELeaderboardUploadScoreMethodForceUpdate = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ELeaderboardUploadScoreMethod_Unwrapped () const noexcept {
return static_cast<__ELeaderboardUploadScoreMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ELeaderboardUploadScoreMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ELeaderboardUploadScoreMethod(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16301};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ELeaderboardUploadScoreMethodForceUpdate value: I32(2)
static ::Steamworks::ELeaderboardUploadScoreMethod const k_ELeaderboardUploadScoreMethodForceUpdate;

/// @brief Field k_ELeaderboardUploadScoreMethodKeepBest value: I32(1)
static ::Steamworks::ELeaderboardUploadScoreMethod const k_ELeaderboardUploadScoreMethodKeepBest;

/// @brief Field k_ELeaderboardUploadScoreMethodNone value: I32(0)
static ::Steamworks::ELeaderboardUploadScoreMethod const k_ELeaderboardUploadScoreMethodNone;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ELeaderboardUploadScoreMethod, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ELeaderboardUploadScoreMethod) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
