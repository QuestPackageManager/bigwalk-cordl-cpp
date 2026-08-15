#pragma once
// IWYU pragma private; include "GlobalNamespace/cZpAIWWjWQAufHOzaxLPYlbXdftW.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(cZpAIWWjWQAufHOzaxLPYlbXdftW)
// Forward declare root types
namespace GlobalNamespace {
struct cZpAIWWjWQAufHOzaxLPYlbXdftW;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::cZpAIWWjWQAufHOzaxLPYlbXdftW);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::cZpAIWWjWQAufHOzaxLPYlbXdftW, "", "cZpAIWWjWQAufHOzaxLPYlbXdftW");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: cZpAIWWjWQAufHOzaxLPYlbXdftW
struct CORDL_TYPE cZpAIWWjWQAufHOzaxLPYlbXdftW {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __cZpAIWWjWQAufHOzaxLPYlbXdftW_Unwrapped
enum struct __cZpAIWWjWQAufHOzaxLPYlbXdftW_Unwrapped : int32_t {
__E_PreparsedData = static_cast<int32_t>(0x20000005),
__E_DeviceName = static_cast<int32_t>(0x20000007),
__E_DeviceInfo = static_cast<int32_t>(0x2000000b),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __cZpAIWWjWQAufHOzaxLPYlbXdftW_Unwrapped () const noexcept {
return static_cast<__cZpAIWWjWQAufHOzaxLPYlbXdftW_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr cZpAIWWjWQAufHOzaxLPYlbXdftW() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr cZpAIWWjWQAufHOzaxLPYlbXdftW(int32_t  value__) noexcept;

/// @brief Field DeviceInfo value: I32(536870923)
static ::GlobalNamespace::cZpAIWWjWQAufHOzaxLPYlbXdftW const DeviceInfo;

/// @brief Field DeviceName value: I32(536870919)
static ::GlobalNamespace::cZpAIWWjWQAufHOzaxLPYlbXdftW const DeviceName;

/// @brief Field PreparsedData value: I32(536870917)
static ::GlobalNamespace::cZpAIWWjWQAufHOzaxLPYlbXdftW const PreparsedData;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6154};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::cZpAIWWjWQAufHOzaxLPYlbXdftW, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::cZpAIWWjWQAufHOzaxLPYlbXdftW) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
