#pragma once
// IWYU pragma private; include "GlobalNamespace/CXTXaQEpijRALvGSlyIcXnouWVLt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CXTXaQEpijRALvGSlyIcXnouWVLt)
// Forward declare root types
namespace GlobalNamespace {
struct CXTXaQEpijRALvGSlyIcXnouWVLt;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CXTXaQEpijRALvGSlyIcXnouWVLt);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CXTXaQEpijRALvGSlyIcXnouWVLt, "", "CXTXaQEpijRALvGSlyIcXnouWVLt");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CXTXaQEpijRALvGSlyIcXnouWVLt
struct CORDL_TYPE CXTXaQEpijRALvGSlyIcXnouWVLt {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CXTXaQEpijRALvGSlyIcXnouWVLt_Unwrapped
enum struct __CXTXaQEpijRALvGSlyIcXnouWVLt_Unwrapped : int32_t {
__E_Mouse = static_cast<int32_t>(0x0),
__E_Keyboard = static_cast<int32_t>(0x1),
__E_HumanInputDevice = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CXTXaQEpijRALvGSlyIcXnouWVLt_Unwrapped () const noexcept {
return static_cast<__CXTXaQEpijRALvGSlyIcXnouWVLt_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CXTXaQEpijRALvGSlyIcXnouWVLt() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CXTXaQEpijRALvGSlyIcXnouWVLt(int32_t  value__) noexcept;

/// @brief Field HumanInputDevice value: I32(2)
static ::GlobalNamespace::CXTXaQEpijRALvGSlyIcXnouWVLt const HumanInputDevice;

/// @brief Field Keyboard value: I32(1)
static ::GlobalNamespace::CXTXaQEpijRALvGSlyIcXnouWVLt const Keyboard;

/// @brief Field Mouse value: I32(0)
static ::GlobalNamespace::CXTXaQEpijRALvGSlyIcXnouWVLt const Mouse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6149};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CXTXaQEpijRALvGSlyIcXnouWVLt, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CXTXaQEpijRALvGSlyIcXnouWVLt) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
