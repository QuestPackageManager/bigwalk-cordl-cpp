#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetPortRangeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetPortRangeOptions)
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SetPortRangeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SetPortRangeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SetPortRangeOptions, "Epic.OnlineServices.P2P", "SetPortRangeOptions");
// Dependencies 
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SetPortRangeOptions
struct CORDL_TYPE SetPortRangeOptions {
public:
// Declarations
 __declspec(property(get=get_MaxAdditionalPortsToTry, put=set_MaxAdditionalPortsToTry)) uint16_t  MaxAdditionalPortsToTry;

 __declspec(property(get=get_Port, put=set_Port)) uint16_t  Port;

/// @brief Method get_MaxAdditionalPortsToTry, addr 0x18052ca70, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_MaxAdditionalPortsToTry() ;

/// @brief Method get_Port, addr 0x18052ca80, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_Port() ;

/// @brief Method set_MaxAdditionalPortsToTry, addr 0x18052ca90, size 0x10, virtual false, abstract: false, final false
inline void set_MaxAdditionalPortsToTry(uint16_t  value) ;

/// @brief Method set_Port, addr 0x18052caa0, size 0x10, virtual false, abstract: false, final false
inline void set_Port(uint16_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetPortRangeOptions() ;

// Ctor Parameters [CppParam { name: "_Port_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_MaxAdditionalPortsToTry_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr SetPortRangeOptions(uint16_t  _Port_k__BackingField, uint16_t  _MaxAdditionalPortsToTry_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9598};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <Port>k__BackingField, offset: 0x0, size: 0x2, def value: None
 uint16_t  _Port_k__BackingField;

/// @brief Field <MaxAdditionalPortsToTry>k__BackingField, offset: 0x2, size: 0x2, def value: None
 uint16_t  _MaxAdditionalPortsToTry_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SetPortRangeOptions, _Port_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::P2P::SetPortRangeOptions, _MaxAdditionalPortsToTry_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SetPortRangeOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
