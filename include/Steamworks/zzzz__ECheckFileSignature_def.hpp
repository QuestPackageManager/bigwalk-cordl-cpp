#pragma once
// IWYU pragma private; include "Steamworks/ECheckFileSignature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ECheckFileSignature)
// Forward declare root types
namespace Steamworks {
struct ECheckFileSignature;
}
// Write type traits
MARK_VAL_T(::Steamworks::ECheckFileSignature);
DEFINE_IL2CPP_CLASS(::Steamworks::ECheckFileSignature, "Steamworks", "ECheckFileSignature");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ECheckFileSignature
struct CORDL_TYPE ECheckFileSignature {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ECheckFileSignature_Unwrapped
enum struct __ECheckFileSignature_Unwrapped : int32_t {
__E_k_ECheckFileSignatureInvalidSignature = static_cast<int32_t>(0x0),
__E_k_ECheckFileSignatureValidSignature = static_cast<int32_t>(0x1),
__E_k_ECheckFileSignatureFileNotFound = static_cast<int32_t>(0x2),
__E_k_ECheckFileSignatureNoSignaturesFoundForThisApp = static_cast<int32_t>(0x3),
__E_k_ECheckFileSignatureNoSignaturesFoundForThisFile = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ECheckFileSignature_Unwrapped () const noexcept {
return static_cast<__ECheckFileSignature_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ECheckFileSignature() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ECheckFileSignature(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16307};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ECheckFileSignatureFileNotFound value: I32(2)
static ::Steamworks::ECheckFileSignature const k_ECheckFileSignatureFileNotFound;

/// @brief Field k_ECheckFileSignatureInvalidSignature value: I32(0)
static ::Steamworks::ECheckFileSignature const k_ECheckFileSignatureInvalidSignature;

/// @brief Field k_ECheckFileSignatureNoSignaturesFoundForThisApp value: I32(3)
static ::Steamworks::ECheckFileSignature const k_ECheckFileSignatureNoSignaturesFoundForThisApp;

/// @brief Field k_ECheckFileSignatureNoSignaturesFoundForThisFile value: I32(4)
static ::Steamworks::ECheckFileSignature const k_ECheckFileSignatureNoSignaturesFoundForThisFile;

/// @brief Field k_ECheckFileSignatureValidSignature value: I32(1)
static ::Steamworks::ECheckFileSignature const k_ECheckFileSignatureValidSignature;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ECheckFileSignature, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ECheckFileSignature) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
