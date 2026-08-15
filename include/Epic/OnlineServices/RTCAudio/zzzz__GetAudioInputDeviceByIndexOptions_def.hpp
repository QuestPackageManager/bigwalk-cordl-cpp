#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/GetAudioInputDeviceByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetAudioInputDeviceByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct GetAudioInputDeviceByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions, "Epic.OnlineServices.RTCAudio", "GetAudioInputDeviceByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.GetAudioInputDeviceByIndexOptions
struct CORDL_TYPE GetAudioInputDeviceByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_DeviceInfoIndex, put=set_DeviceInfoIndex)) uint32_t  DeviceInfoIndex;

/// @brief Method get_DeviceInfoIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_DeviceInfoIndex() ;

/// @brief Method set_DeviceInfoIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_DeviceInfoIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetAudioInputDeviceByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_DeviceInfoIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetAudioInputDeviceByIndexOptions(uint32_t  _DeviceInfoIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7967};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <DeviceInfoIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _DeviceInfoIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions, _DeviceInfoIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::GetAudioInputDeviceByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
