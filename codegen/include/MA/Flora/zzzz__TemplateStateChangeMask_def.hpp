#pragma once
// IWYU pragma private; include "MA/Flora/TemplateStateChangeMask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateStateChangeMask)
// Forward declare root types
namespace MA::Flora {
struct TemplateStateChangeMask;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateStateChangeMask);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateStateChangeMask, "MA.Flora", "TemplateStateChangeMask");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateStateChangeMask
struct CORDL_TYPE TemplateStateChangeMask {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TemplateStateChangeMask_Unwrapped
enum struct __TemplateStateChangeMask_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_DomainChanged = static_cast<uint8_t>(0x1u),
__E_DrawChanged = static_cast<uint8_t>(0x2u),
__E_TemplateDataChanged = static_cast<uint8_t>(0x4u),
__E_CapabilityChanged = static_cast<uint8_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TemplateStateChangeMask_Unwrapped () const noexcept {
return static_cast<__TemplateStateChangeMask_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TemplateStateChangeMask() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TemplateStateChangeMask(uint8_t  value__) noexcept;

/// @brief Field CapabilityChanged value: U8(8)
static ::MA::Flora::TemplateStateChangeMask const CapabilityChanged;

/// @brief Field DomainChanged value: U8(1)
static ::MA::Flora::TemplateStateChangeMask const DomainChanged;

/// @brief Field DrawChanged value: U8(2)
static ::MA::Flora::TemplateStateChangeMask const DrawChanged;

/// @brief Field None value: U8(0)
static ::MA::Flora::TemplateStateChangeMask const None;

/// @brief Field TemplateDataChanged value: U8(4)
static ::MA::Flora::TemplateStateChangeMask const TemplateDataChanged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateStateChangeMask, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateStateChangeMask) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
