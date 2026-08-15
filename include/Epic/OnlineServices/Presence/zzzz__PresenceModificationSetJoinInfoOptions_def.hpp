#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationSetJoinInfoOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PresenceModificationSetJoinInfoOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Presence {
struct PresenceModificationSetJoinInfoOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions, "Epic.OnlineServices.Presence", "PresenceModificationSetJoinInfoOptions");
// Dependencies 
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.PresenceModificationSetJoinInfoOptions
struct CORDL_TYPE PresenceModificationSetJoinInfoOptions {
public:
// Declarations
 __declspec(property(get=get_JoinInfo, put=set_JoinInfo)) ::Epic::OnlineServices::Utf8String*  JoinInfo;

/// @brief Method get_JoinInfo, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_JoinInfo() ;

/// @brief Method set_JoinInfo, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_JoinInfo(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PresenceModificationSetJoinInfoOptions() ;

// Ctor Parameters [CppParam { name: "_JoinInfo_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr PresenceModificationSetJoinInfoOptions(::Epic::OnlineServices::Utf8String*  _JoinInfo_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <JoinInfo>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _JoinInfo_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions, _JoinInfo_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::PresenceModificationSetJoinInfoOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
