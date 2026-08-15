#pragma once
// IWYU pragma private; include "GlobalNamespace/fmjOcSgFrjmQzJlrXgwToxkjNXXo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(fmjOcSgFrjmQzJlrXgwToxkjNXXo)
// Forward declare root types
namespace GlobalNamespace {
struct fmjOcSgFrjmQzJlrXgwToxkjNXXo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo, "", "fmjOcSgFrjmQzJlrXgwToxkjNXXo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: fmjOcSgFrjmQzJlrXgwToxkjNXXo
struct CORDL_TYPE fmjOcSgFrjmQzJlrXgwToxkjNXXo {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __fmjOcSgFrjmQzJlrXgwToxkjNXXo_Unwrapped
enum struct __fmjOcSgFrjmQzJlrXgwToxkjNXXo_Unwrapped : int32_t {
__E_Synchronous = static_cast<int32_t>(0x0),
__E_Asynchronous = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __fmjOcSgFrjmQzJlrXgwToxkjNXXo_Unwrapped () const noexcept {
return static_cast<__fmjOcSgFrjmQzJlrXgwToxkjNXXo_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr fmjOcSgFrjmQzJlrXgwToxkjNXXo() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr fmjOcSgFrjmQzJlrXgwToxkjNXXo(int32_t  value__) noexcept;

/// @brief Field Asynchronous value: I32(1)
static ::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo const Asynchronous;

/// @brief Field Synchronous value: I32(0)
static ::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo const Synchronous;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
