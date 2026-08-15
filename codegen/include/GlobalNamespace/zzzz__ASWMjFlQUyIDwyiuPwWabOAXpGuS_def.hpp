#pragma once
// IWYU pragma private; include "GlobalNamespace/ASWMjFlQUyIDwyiuPwWabOAXpGuS.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ASWMjFlQUyIDwyiuPwWabOAXpGuS)
// Forward declare root types
namespace GlobalNamespace {
struct ASWMjFlQUyIDwyiuPwWabOAXpGuS;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS, "", "ASWMjFlQUyIDwyiuPwWabOAXpGuS");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ASWMjFlQUyIDwyiuPwWabOAXpGuS
struct CORDL_TYPE ASWMjFlQUyIDwyiuPwWabOAXpGuS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ASWMjFlQUyIDwyiuPwWabOAXpGuS_Unwrapped
enum struct __ASWMjFlQUyIDwyiuPwWabOAXpGuS_Unwrapped : int32_t {
__E_ForceFeedbackActuator = static_cast<int32_t>(0x1),
__E_ForceFeedbackTrigger = static_cast<int32_t>(0x2),
__E_Polled = static_cast<int32_t>(0x8000),
__E_Position = static_cast<int32_t>(0x100),
__E_Velocity = static_cast<int32_t>(0x200),
__E_Acceleration = static_cast<int32_t>(0x300),
__E_Force = static_cast<int32_t>(0x400),
__E_Mask = static_cast<int32_t>(0xf00),
__E_GuidIsUsage = static_cast<int32_t>(0x10000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ASWMjFlQUyIDwyiuPwWabOAXpGuS_Unwrapped () const noexcept {
return static_cast<__ASWMjFlQUyIDwyiuPwWabOAXpGuS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ASWMjFlQUyIDwyiuPwWabOAXpGuS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ASWMjFlQUyIDwyiuPwWabOAXpGuS(int32_t  value__) noexcept;

/// @brief Field Acceleration value: I32(768)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const Acceleration;

/// @brief Field Force value: I32(1024)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const Force;

/// @brief Field ForceFeedbackActuator value: I32(1)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const ForceFeedbackActuator;

/// @brief Field ForceFeedbackTrigger value: I32(2)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const ForceFeedbackTrigger;

/// @brief Field GuidIsUsage value: I32(65536)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const GuidIsUsage;

/// @brief Field Mask value: I32(3840)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const Mask;

/// @brief Field Polled value: I32(32768)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const Polled;

/// @brief Field Position value: I32(256)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const Position;

/// @brief Field Velocity value: I32(512)
static ::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS const Velocity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6291};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ASWMjFlQUyIDwyiuPwWabOAXpGuS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
