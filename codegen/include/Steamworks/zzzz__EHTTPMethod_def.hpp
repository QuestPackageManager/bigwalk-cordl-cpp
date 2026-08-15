#pragma once
// IWYU pragma private; include "Steamworks/EHTTPMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EHTTPMethod)
// Forward declare root types
namespace Steamworks {
struct EHTTPMethod;
}
// Write type traits
MARK_VAL_T(::Steamworks::EHTTPMethod);
DEFINE_IL2CPP_CLASS(::Steamworks::EHTTPMethod, "Steamworks", "EHTTPMethod");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EHTTPMethod
struct CORDL_TYPE EHTTPMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EHTTPMethod_Unwrapped
enum struct __EHTTPMethod_Unwrapped : int32_t {
__E_k_EHTTPMethodInvalid = static_cast<int32_t>(0x0),
__E_k_EHTTPMethodGET = static_cast<int32_t>(0x1),
__E_k_EHTTPMethodHEAD = static_cast<int32_t>(0x2),
__E_k_EHTTPMethodPOST = static_cast<int32_t>(0x3),
__E_k_EHTTPMethodPUT = static_cast<int32_t>(0x4),
__E_k_EHTTPMethodDELETE = static_cast<int32_t>(0x5),
__E_k_EHTTPMethodOPTIONS = static_cast<int32_t>(0x6),
__E_k_EHTTPMethodPATCH = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EHTTPMethod_Unwrapped () const noexcept {
return static_cast<__EHTTPMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EHTTPMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EHTTPMethod(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EHTTPMethodDELETE value: I32(5)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodDELETE;

/// @brief Field k_EHTTPMethodGET value: I32(1)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodGET;

/// @brief Field k_EHTTPMethodHEAD value: I32(2)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodHEAD;

/// @brief Field k_EHTTPMethodInvalid value: I32(0)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodInvalid;

/// @brief Field k_EHTTPMethodOPTIONS value: I32(6)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodOPTIONS;

/// @brief Field k_EHTTPMethodPATCH value: I32(7)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodPATCH;

/// @brief Field k_EHTTPMethodPOST value: I32(3)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodPOST;

/// @brief Field k_EHTTPMethodPUT value: I32(4)
static ::Steamworks::EHTTPMethod const k_EHTTPMethodPUT;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EHTTPMethod, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EHTTPMethod) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
