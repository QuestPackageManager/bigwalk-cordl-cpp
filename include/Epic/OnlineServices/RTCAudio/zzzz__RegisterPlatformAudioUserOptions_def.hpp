#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/RegisterPlatformAudioUserOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RegisterPlatformAudioUserOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAudio {
struct RegisterPlatformAudioUserOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions, "Epic.OnlineServices.RTCAudio", "RegisterPlatformAudioUserOptions");
// Dependencies 
namespace Epic::OnlineServices::RTCAudio {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCAudio.RegisterPlatformAudioUserOptions
struct CORDL_TYPE RegisterPlatformAudioUserOptions {
public:
// Declarations
 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::Utf8String*  UserId;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_UserId() ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegisterPlatformAudioUserOptions() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr RegisterPlatformAudioUserOptions(::Epic::OnlineServices::Utf8String*  _UserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _UserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCAudio::RegisterPlatformAudioUserOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAudio
