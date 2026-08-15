#pragma once
// IWYU pragma private; include "GlobalNamespace/obNTSIYUuUqJePztsrGQvfEnsvZQ.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(obNTSIYUuUqJePztsrGQvfEnsvZQ)
// Forward declare root types
namespace GlobalNamespace {
struct obNTSIYUuUqJePztsrGQvfEnsvZQ;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ, "", "obNTSIYUuUqJePztsrGQvfEnsvZQ");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: obNTSIYUuUqJePztsrGQvfEnsvZQ
struct CORDL_TYPE obNTSIYUuUqJePztsrGQvfEnsvZQ {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __obNTSIYUuUqJePztsrGQvfEnsvZQ_Unwrapped
enum struct __obNTSIYUuUqJePztsrGQvfEnsvZQ_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Up = static_cast<int32_t>(0x1),
__E_Right = static_cast<int32_t>(0x2),
__E_Down = static_cast<int32_t>(0x4),
__E_Left = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __obNTSIYUuUqJePztsrGQvfEnsvZQ_Unwrapped () const noexcept {
return static_cast<__obNTSIYUuUqJePztsrGQvfEnsvZQ_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr obNTSIYUuUqJePztsrGQvfEnsvZQ() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr obNTSIYUuUqJePztsrGQvfEnsvZQ(int32_t  value__) noexcept;

/// @brief Field Down value: I32(4)
static ::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ const Down;

/// @brief Field Left value: I32(8)
static ::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ const Left;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ const None;

/// @brief Field Right value: I32(2)
static ::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ const Right;

/// @brief Field Up value: I32(1)
static ::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6533};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::obNTSIYUuUqJePztsrGQvfEnsvZQ) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
