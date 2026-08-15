#pragma once
// IWYU pragma private; include "Steamworks/ERemoteStorageFilePathType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ERemoteStorageFilePathType)
// Forward declare root types
namespace Steamworks {
struct ERemoteStorageFilePathType;
}
// Write type traits
MARK_VAL_T(::Steamworks::ERemoteStorageFilePathType);
DEFINE_IL2CPP_CLASS(::Steamworks::ERemoteStorageFilePathType, "Steamworks", "ERemoteStorageFilePathType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ERemoteStorageFilePathType
struct CORDL_TYPE ERemoteStorageFilePathType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ERemoteStorageFilePathType_Unwrapped
enum struct __ERemoteStorageFilePathType_Unwrapped : int32_t {
__E_k_ERemoteStorageFilePathType_Invalid = static_cast<int32_t>(0x0),
__E_k_ERemoteStorageFilePathType_Absolute = static_cast<int32_t>(0x1),
__E_k_ERemoteStorageFilePathType_APIFilename = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ERemoteStorageFilePathType_Unwrapped () const noexcept {
return static_cast<__ERemoteStorageFilePathType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ERemoteStorageFilePathType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ERemoteStorageFilePathType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ERemoteStorageFilePathType_APIFilename value: I32(2)
static ::Steamworks::ERemoteStorageFilePathType const k_ERemoteStorageFilePathType_APIFilename;

/// @brief Field k_ERemoteStorageFilePathType_Absolute value: I32(1)
static ::Steamworks::ERemoteStorageFilePathType const k_ERemoteStorageFilePathType_Absolute;

/// @brief Field k_ERemoteStorageFilePathType_Invalid value: I32(0)
static ::Steamworks::ERemoteStorageFilePathType const k_ERemoteStorageFilePathType_Invalid;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ERemoteStorageFilePathType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ERemoteStorageFilePathType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
