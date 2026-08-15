#pragma once
// IWYU pragma private; include "Microsoft/Win32/RegistryHive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegistryHive)
// Forward declare root types
namespace Microsoft::Win32 {
struct RegistryHive;
}
// Write type traits
MARK_VAL_T(::Microsoft::Win32::RegistryHive);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::RegistryHive, "Microsoft.Win32", "RegistryHive");
// Dependencies 
namespace Microsoft::Win32 {
// Is value type: true
// CS Name: Microsoft.Win32.RegistryHive
struct CORDL_TYPE RegistryHive {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RegistryHive_Unwrapped
enum struct __RegistryHive_Unwrapped : int32_t {
__E_ClassesRoot = static_cast<int32_t>(0x80000000),
__E_CurrentUser = static_cast<int32_t>(0x80000001),
__E_LocalMachine = static_cast<int32_t>(0x80000002),
__E_Users = static_cast<int32_t>(0x80000003),
__E_PerformanceData = static_cast<int32_t>(0x80000004),
__E_CurrentConfig = static_cast<int32_t>(0x80000005),
__E_DynData = static_cast<int32_t>(0x80000006),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RegistryHive_Unwrapped () const noexcept {
return static_cast<__RegistryHive_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RegistryHive() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RegistryHive(int32_t  value__) noexcept;

/// @brief Field ClassesRoot value: I32(-2147483648)
static ::Microsoft::Win32::RegistryHive const ClassesRoot;

/// @brief Field CurrentConfig value: I32(-2147483643)
static ::Microsoft::Win32::RegistryHive const CurrentConfig;

/// @brief Field CurrentUser value: I32(-2147483647)
static ::Microsoft::Win32::RegistryHive const CurrentUser;

/// @brief Field DynData value: I32(-2147483642)
static ::Microsoft::Win32::RegistryHive const DynData;

/// @brief Field LocalMachine value: I32(-2147483646)
static ::Microsoft::Win32::RegistryHive const LocalMachine;

/// @brief Field PerformanceData value: I32(-2147483644)
static ::Microsoft::Win32::RegistryHive const PerformanceData;

/// @brief Field Users value: I32(-2147483645)
static ::Microsoft::Win32::RegistryHive const Users;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{116};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Microsoft::Win32::RegistryHive, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Microsoft::Win32::RegistryHive) == 0x4, "Size mismatch!");

} // namespace end def Microsoft::Win32
