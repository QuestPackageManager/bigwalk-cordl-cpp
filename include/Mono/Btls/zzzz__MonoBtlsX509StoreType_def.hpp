#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsX509StoreType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsX509StoreType)
// Forward declare root types
namespace Mono::Btls {
struct MonoBtlsX509StoreType;
}
// Write type traits
MARK_VAL_T(::Mono::Btls::MonoBtlsX509StoreType);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsX509StoreType, "Mono.Btls", "MonoBtlsX509StoreType");
// Dependencies 
namespace Mono::Btls {
// Is value type: true
// CS Name: Mono.Btls.MonoBtlsX509StoreType
struct CORDL_TYPE MonoBtlsX509StoreType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoBtlsX509StoreType_Unwrapped
enum struct __MonoBtlsX509StoreType_Unwrapped : int32_t {
__E_Custom = static_cast<int32_t>(0x0),
__E_MachineTrustedRoots = static_cast<int32_t>(0x1),
__E_MachineIntermediateCA = static_cast<int32_t>(0x2),
__E_MachineUntrusted = static_cast<int32_t>(0x3),
__E_UserTrustedRoots = static_cast<int32_t>(0x4),
__E_UserIntermediateCA = static_cast<int32_t>(0x5),
__E_UserUntrusted = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoBtlsX509StoreType_Unwrapped () const noexcept {
return static_cast<__MonoBtlsX509StoreType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsX509StoreType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoBtlsX509StoreType(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(0)
static ::Mono::Btls::MonoBtlsX509StoreType const Custom;

/// @brief Field MachineIntermediateCA value: I32(2)
static ::Mono::Btls::MonoBtlsX509StoreType const MachineIntermediateCA;

/// @brief Field MachineTrustedRoots value: I32(1)
static ::Mono::Btls::MonoBtlsX509StoreType const MachineTrustedRoots;

/// @brief Field MachineUntrusted value: I32(3)
static ::Mono::Btls::MonoBtlsX509StoreType const MachineUntrusted;

/// @brief Field UserIntermediateCA value: I32(5)
static ::Mono::Btls::MonoBtlsX509StoreType const UserIntermediateCA;

/// @brief Field UserTrustedRoots value: I32(4)
static ::Mono::Btls::MonoBtlsX509StoreType const UserTrustedRoots;

/// @brief Field UserUntrusted value: I32(6)
static ::Mono::Btls::MonoBtlsX509StoreType const UserUntrusted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11502};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Btls::MonoBtlsX509StoreType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Mono::Btls::MonoBtlsX509StoreType) == 0x4, "Size mismatch!");

} // namespace end def Mono::Btls
