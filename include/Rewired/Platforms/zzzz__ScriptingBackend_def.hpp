#pragma once
// IWYU pragma private; include "Rewired/Platforms/ScriptingBackend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptingBackend)
// Forward declare root types
namespace Rewired::Platforms {
struct ScriptingBackend;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::ScriptingBackend);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::ScriptingBackend, "Rewired.Platforms", "ScriptingBackend");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.ScriptingBackend
struct CORDL_TYPE ScriptingBackend {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScriptingBackend_Unwrapped
enum struct __ScriptingBackend_Unwrapped : int32_t {
__E_Mono = static_cast<int32_t>(0x0),
__E_DotNet = static_cast<int32_t>(0x1),
__E_IL2CPP = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScriptingBackend_Unwrapped () const noexcept {
return static_cast<__ScriptingBackend_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScriptingBackend() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScriptingBackend(int32_t  value__) noexcept;

/// @brief Field DotNet value: I32(1)
static ::Rewired::Platforms::ScriptingBackend const DotNet;

/// @brief Field IL2CPP value: I32(2)
static ::Rewired::Platforms::ScriptingBackend const IL2CPP;

/// @brief Field Mono value: I32(0)
static ::Rewired::Platforms::ScriptingBackend const Mono;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::ScriptingBackend, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::ScriptingBackend) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
