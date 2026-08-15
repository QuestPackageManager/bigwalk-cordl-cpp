#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/CopyInputDeviceInformationByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyInputDeviceInformationByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct CopyInputDeviceInformationByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions, "Epic.OnlineServices.RTCAudio", "CopyInputDeviceInformationByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.CopyInputDeviceInformationByIndexOptions
struct CORDL_TYPE CopyInputDeviceInformationByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_DeviceIndex, put=set_DeviceIndex)) uint32_t  DeviceIndex;

/// @brief Method get_DeviceIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_DeviceIndex() ;

/// @brief Method set_DeviceIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_DeviceIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyInputDeviceInformationByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_DeviceIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CopyInputDeviceInformationByIndexOptions(uint32_t  _DeviceIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7963};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <DeviceIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _DeviceIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions, _DeviceIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::CopyInputDeviceInformationByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
