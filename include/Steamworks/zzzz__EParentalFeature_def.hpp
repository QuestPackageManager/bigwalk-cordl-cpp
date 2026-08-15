#pragma once
// IWYU pragma private; include "Steamworks/EParentalFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EParentalFeature)
// Forward declare root types
namespace Steamworks {
struct EParentalFeature;
}
// Write type traits
MARK_VAL_T(::Steamworks::EParentalFeature);
DEFINE_IL2CPP_CLASS(::Steamworks::EParentalFeature, "Steamworks", "EParentalFeature");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EParentalFeature
struct CORDL_TYPE EParentalFeature {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EParentalFeature_Unwrapped
enum struct __EParentalFeature_Unwrapped : int32_t {
__E_k_EFeatureInvalid = static_cast<int32_t>(0x0),
__E_k_EFeatureStore = static_cast<int32_t>(0x1),
__E_k_EFeatureCommunity = static_cast<int32_t>(0x2),
__E_k_EFeatureProfile = static_cast<int32_t>(0x3),
__E_k_EFeatureFriends = static_cast<int32_t>(0x4),
__E_k_EFeatureNews = static_cast<int32_t>(0x5),
__E_k_EFeatureTrading = static_cast<int32_t>(0x6),
__E_k_EFeatureSettings = static_cast<int32_t>(0x7),
__E_k_EFeatureConsole = static_cast<int32_t>(0x8),
__E_k_EFeatureBrowser = static_cast<int32_t>(0x9),
__E_k_EFeatureParentalSetup = static_cast<int32_t>(0xa),
__E_k_EFeatureLibrary = static_cast<int32_t>(0xb),
__E_k_EFeatureTest = static_cast<int32_t>(0xc),
__E_k_EFeatureSiteLicense = static_cast<int32_t>(0xd),
__E_k_EFeatureMax = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EParentalFeature_Unwrapped () const noexcept {
return static_cast<__EParentalFeature_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EParentalFeature() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EParentalFeature(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16276};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EFeatureBrowser value: I32(9)
static ::Steamworks::EParentalFeature const k_EFeatureBrowser;

/// @brief Field k_EFeatureCommunity value: I32(2)
static ::Steamworks::EParentalFeature const k_EFeatureCommunity;

/// @brief Field k_EFeatureConsole value: I32(8)
static ::Steamworks::EParentalFeature const k_EFeatureConsole;

/// @brief Field k_EFeatureFriends value: I32(4)
static ::Steamworks::EParentalFeature const k_EFeatureFriends;

/// @brief Field k_EFeatureInvalid value: I32(0)
static ::Steamworks::EParentalFeature const k_EFeatureInvalid;

/// @brief Field k_EFeatureLibrary value: I32(11)
static ::Steamworks::EParentalFeature const k_EFeatureLibrary;

/// @brief Field k_EFeatureMax value: I32(14)
static ::Steamworks::EParentalFeature const k_EFeatureMax;

/// @brief Field k_EFeatureNews value: I32(5)
static ::Steamworks::EParentalFeature const k_EFeatureNews;

/// @brief Field k_EFeatureParentalSetup value: I32(10)
static ::Steamworks::EParentalFeature const k_EFeatureParentalSetup;

/// @brief Field k_EFeatureProfile value: I32(3)
static ::Steamworks::EParentalFeature const k_EFeatureProfile;

/// @brief Field k_EFeatureSettings value: I32(7)
static ::Steamworks::EParentalFeature const k_EFeatureSettings;

/// @brief Field k_EFeatureSiteLicense value: I32(13)
static ::Steamworks::EParentalFeature const k_EFeatureSiteLicense;

/// @brief Field k_EFeatureStore value: I32(1)
static ::Steamworks::EParentalFeature const k_EFeatureStore;

/// @brief Field k_EFeatureTest value: I32(12)
static ::Steamworks::EParentalFeature const k_EFeatureTest;

/// @brief Field k_EFeatureTrading value: I32(6)
static ::Steamworks::EParentalFeature const k_EFeatureTrading;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EParentalFeature, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EParentalFeature) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
