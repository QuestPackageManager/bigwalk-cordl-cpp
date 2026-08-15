#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/UnregisterPlatformAudioUserOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnregisterPlatformAudioUserOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct UnregisterPlatformAudioUserOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions, "Epic.OnlineServices.RTCAudio", "UnregisterPlatformAudioUserOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.UnregisterPlatformAudioUserOptions
struct CORDL_TYPE UnregisterPlatformAudioUserOptions {
public:
// Declarations
 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::Utf8String*  UserId;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UserId() ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnregisterPlatformAudioUserOptions() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr UnregisterPlatformAudioUserOptions(::Epic::OnlineServices::Utf8String*  _UserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::UnregisterPlatformAudioUserOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
