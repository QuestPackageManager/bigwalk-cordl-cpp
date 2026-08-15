#pragma once
// IWYU pragma private; include "GlobalNamespace/cvOmsRkCiTNPqpnoYRMNFDmhkCJP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(cvOmsRkCiTNPqpnoYRMNFDmhkCJP)
// Forward declare root types
namespace GlobalNamespace {
struct cvOmsRkCiTNPqpnoYRMNFDmhkCJP;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP, "", "cvOmsRkCiTNPqpnoYRMNFDmhkCJP");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: cvOmsRkCiTNPqpnoYRMNFDmhkCJP
struct CORDL_TYPE cvOmsRkCiTNPqpnoYRMNFDmhkCJP {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __cvOmsRkCiTNPqpnoYRMNFDmhkCJP_Unwrapped
enum struct __cvOmsRkCiTNPqpnoYRMNFDmhkCJP_Unwrapped : int32_t {
__E_AllDevices = static_cast<int32_t>(0x0),
__E_AttachedOnly = static_cast<int32_t>(0x1),
__E_ForceFeedback = static_cast<int32_t>(0x100),
__E_IncludeAliases = static_cast<int32_t>(0x10000),
__E_IncludePhantoms = static_cast<int32_t>(0x20000),
__E_IncludeHidden = static_cast<int32_t>(0x40000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __cvOmsRkCiTNPqpnoYRMNFDmhkCJP_Unwrapped () const noexcept {
return static_cast<__cvOmsRkCiTNPqpnoYRMNFDmhkCJP_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr cvOmsRkCiTNPqpnoYRMNFDmhkCJP() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr cvOmsRkCiTNPqpnoYRMNFDmhkCJP(int32_t  value__) noexcept;

/// @brief Field AllDevices value: I32(0)
static ::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP const AllDevices;

/// @brief Field AttachedOnly value: I32(1)
static ::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP const AttachedOnly;

/// @brief Field ForceFeedback value: I32(256)
static ::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP const ForceFeedback;

/// @brief Field IncludeAliases value: I32(65536)
static ::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP const IncludeAliases;

/// @brief Field IncludeHidden value: I32(262144)
static ::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP const IncludeHidden;

/// @brief Field IncludePhantoms value: I32(131072)
static ::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP const IncludePhantoms;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6275};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::cvOmsRkCiTNPqpnoYRMNFDmhkCJP) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
