#pragma once
// IWYU pragma private; include "GlobalNamespace/GLfvZpbUHBxCZwGFCtTMxZLqdAxO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GLfvZpbUHBxCZwGFCtTMxZLqdAxO)
// Forward declare root types
namespace GlobalNamespace {
struct GLfvZpbUHBxCZwGFCtTMxZLqdAxO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GLfvZpbUHBxCZwGFCtTMxZLqdAxO);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GLfvZpbUHBxCZwGFCtTMxZLqdAxO, "", "GLfvZpbUHBxCZwGFCtTMxZLqdAxO");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GLfvZpbUHBxCZwGFCtTMxZLqdAxO
struct CORDL_TYPE GLfvZpbUHBxCZwGFCtTMxZLqdAxO {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GLfvZpbUHBxCZwGFCtTMxZLqdAxO_Unwrapped
enum struct __GLfvZpbUHBxCZwGFCtTMxZLqdAxO_Unwrapped : int32_t {
__E_AudioSessionStateInactive = static_cast<int32_t>(0x0),
__E_AudioSessionStateActive = static_cast<int32_t>(0x1),
__E_AudioSessionStateExpired = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GLfvZpbUHBxCZwGFCtTMxZLqdAxO_Unwrapped () const noexcept {
return static_cast<__GLfvZpbUHBxCZwGFCtTMxZLqdAxO_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GLfvZpbUHBxCZwGFCtTMxZLqdAxO() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GLfvZpbUHBxCZwGFCtTMxZLqdAxO(int32_t  value__) noexcept;

/// @brief Field AudioSessionStateActive value: I32(1)
static ::GlobalNamespace::GLfvZpbUHBxCZwGFCtTMxZLqdAxO const AudioSessionStateActive;

/// @brief Field AudioSessionStateExpired value: I32(2)
static ::GlobalNamespace::GLfvZpbUHBxCZwGFCtTMxZLqdAxO const AudioSessionStateExpired;

/// @brief Field AudioSessionStateInactive value: I32(0)
static ::GlobalNamespace::GLfvZpbUHBxCZwGFCtTMxZLqdAxO const AudioSessionStateInactive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6194};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GLfvZpbUHBxCZwGFCtTMxZLqdAxO, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GLfvZpbUHBxCZwGFCtTMxZLqdAxO) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
