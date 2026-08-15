#pragma once
// IWYU pragma private; include "Shipmate/Encryption/EncryptionKeyEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionKeyEncoding)
// Forward declare root types
namespace Shipmate::Encryption {
struct EncryptionKeyEncoding;
}
// Write type traits
MARK_VAL_T(::Shipmate::Encryption::EncryptionKeyEncoding);
DEFINE_IL2CPP_CLASS(::Shipmate::Encryption::EncryptionKeyEncoding, "Shipmate.Encryption", "EncryptionKeyEncoding");
// Dependencies 
namespace Shipmate::Encryption {
// Is value type: true
// CS Name: Shipmate.Encryption.EncryptionKeyEncoding
struct CORDL_TYPE EncryptionKeyEncoding {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EncryptionKeyEncoding_Unwrapped
enum struct __EncryptionKeyEncoding_Unwrapped : int32_t {
__E_UTF8 = static_cast<int32_t>(0x0),
__E_Base64 = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EncryptionKeyEncoding_Unwrapped () const noexcept {
return static_cast<__EncryptionKeyEncoding_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EncryptionKeyEncoding() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EncryptionKeyEncoding(int32_t  value__) noexcept;

/// @brief Field Base64 value: I32(1)
static ::Shipmate::Encryption::EncryptionKeyEncoding const Base64;

/// @brief Field UTF8 value: I32(0)
static ::Shipmate::Encryption::EncryptionKeyEncoding const UTF8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Shipmate::Encryption::EncryptionKeyEncoding, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Shipmate::Encryption::EncryptionKeyEncoding) == 0x4, "Size mismatch!");

} // namespace end def Shipmate::Encryption
