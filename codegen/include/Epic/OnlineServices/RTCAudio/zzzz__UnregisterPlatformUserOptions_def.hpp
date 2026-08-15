#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/UnregisterPlatformUserOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnregisterPlatformUserOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct UnregisterPlatformUserOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions, "Epic.OnlineServices.RTCAudio", "UnregisterPlatformUserOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.UnregisterPlatformUserOptions
struct CORDL_TYPE UnregisterPlatformUserOptions {
public:
// Declarations
 __declspec(property(get=get_PlatformUserId, put=set_PlatformUserId)) ::Epic::OnlineServices::Utf8String*  PlatformUserId;

/// @brief Method get_PlatformUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_PlatformUserId() ;

/// @brief Method set_PlatformUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_PlatformUserId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnregisterPlatformUserOptions() ;

// Ctor Parameters [CppParam { name: "_PlatformUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr UnregisterPlatformUserOptions(::Epic::OnlineServices::Utf8String*  _PlatformUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8072};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <PlatformUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _PlatformUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions, _PlatformUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::UnregisterPlatformUserOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
