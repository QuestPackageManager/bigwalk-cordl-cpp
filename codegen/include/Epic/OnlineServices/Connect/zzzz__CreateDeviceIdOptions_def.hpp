#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/CreateDeviceIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CreateDeviceIdOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Connect {
struct CreateDeviceIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::CreateDeviceIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::CreateDeviceIdOptions, "Epic.OnlineServices.Connect", "CreateDeviceIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.CreateDeviceIdOptions
struct CORDL_TYPE CreateDeviceIdOptions {
public:
// Declarations
 __declspec(property(get=get_DeviceModel, put=set_DeviceModel)) ::Epic::OnlineServices::Utf8String*  DeviceModel;

/// @brief Method get_DeviceModel, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DeviceModel() ;

/// @brief Method set_DeviceModel, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_DeviceModel(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateDeviceIdOptions() ;

// Ctor Parameters [CppParam { name: "_DeviceModel_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr CreateDeviceIdOptions(::Epic::OnlineServices::Utf8String*  _DeviceModel_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9126};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <DeviceModel>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DeviceModel_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::CreateDeviceIdOptions, _DeviceModel_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::CreateDeviceIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
