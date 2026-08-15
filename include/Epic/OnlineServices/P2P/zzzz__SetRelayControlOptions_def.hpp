#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/SetRelayControlOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/P2P/zzzz__RelayControl_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SetRelayControlOptions)
namespace Epic::OnlineServices::P2P {
struct RelayControl;
}
// Forward declare root types
namespace Epic::OnlineServices::P2P {
struct SetRelayControlOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::P2P::SetRelayControlOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::P2P::SetRelayControlOptions, "Epic.OnlineServices.P2P", "SetRelayControlOptions");
// Dependencies Epic.OnlineServices.P2P.RelayControl
namespace Epic::OnlineServices::P2P {
// Is value type: true
// CS Name: Epic.OnlineServices.P2P.SetRelayControlOptions
struct CORDL_TYPE SetRelayControlOptions {
public:
// Declarations
 __declspec(property(get=get_RelayControl, put=set_RelayControl)) ::Epic::OnlineServices::P2P::RelayControl  RelayControl;

/// @brief Method get_RelayControl, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::P2P::RelayControl get_RelayControl() ;

/// @brief Method set_RelayControl, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_RelayControl(::Epic::OnlineServices::P2P::RelayControl  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SetRelayControlOptions() ;

// Ctor Parameters [CppParam { name: "_RelayControl_k__BackingField", ty: "::Epic::OnlineServices::P2P::RelayControl", modifiers: "", def_value: None }]
constexpr SetRelayControlOptions(::Epic::OnlineServices::P2P::RelayControl  _RelayControl_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9600};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <RelayControl>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::P2P::RelayControl  _RelayControl_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::P2P::SetRelayControlOptions, _RelayControl_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::P2P::SetRelayControlOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::P2P
