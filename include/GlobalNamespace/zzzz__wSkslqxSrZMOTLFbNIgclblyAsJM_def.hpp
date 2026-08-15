#pragma once
// IWYU pragma private; include "GlobalNamespace/wSkslqxSrZMOTLFbNIgclblyAsJM.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(wSkslqxSrZMOTLFbNIgclblyAsJM)
// Forward declare root types
namespace GlobalNamespace {
struct wSkslqxSrZMOTLFbNIgclblyAsJM;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM, "", "wSkslqxSrZMOTLFbNIgclblyAsJM");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: wSkslqxSrZMOTLFbNIgclblyAsJM
struct CORDL_TYPE wSkslqxSrZMOTLFbNIgclblyAsJM {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __wSkslqxSrZMOTLFbNIgclblyAsJM_Unwrapped
enum struct __wSkslqxSrZMOTLFbNIgclblyAsJM_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_USB = static_cast<int32_t>(0x1),
__E_Bluetooth = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __wSkslqxSrZMOTLFbNIgclblyAsJM_Unwrapped () const noexcept {
return static_cast<__wSkslqxSrZMOTLFbNIgclblyAsJM_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr wSkslqxSrZMOTLFbNIgclblyAsJM() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr wSkslqxSrZMOTLFbNIgclblyAsJM(int32_t  value__) noexcept;

/// @brief Field Bluetooth value: I32(2)
static ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM const Bluetooth;

/// @brief Field USB value: I32(1)
static ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM const USB;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::wSkslqxSrZMOTLFbNIgclblyAsJM) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
