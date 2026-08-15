#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/ActiveSessionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__OnlineSessionState_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ActiveSessionInfo)
namespace Epic::OnlineServices::Sessions {
struct OnlineSessionState;
}
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct ActiveSessionInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::ActiveSessionInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::ActiveSessionInfo, "Epic.OnlineServices.Sessions", "ActiveSessionInfo");
// Dependencies Epic.OnlineServices.Sessions.OnlineSessionState, Epic.OnlineServices.Sessions.SessionDetailsInfo, System.Nullable`1<T>
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.ActiveSessionInfo
struct CORDL_TYPE ActiveSessionInfo {
public:
// Declarations
 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_SessionDetails, put=set_SessionDetails)) ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  SessionDetails;

 __declspec(property(get=get_SessionName, put=set_SessionName)) ::Epic::OnlineServices::Utf8String*  SessionName;

 __declspec(property(get=get_State, put=set_State)) ::Epic::OnlineServices::Sessions::OnlineSessionState  State;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_SessionDetails, addr 0x1804bd920, size 0x40, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo> get_SessionDetails() ;

/// @brief Method get_SessionName, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionName() ;

/// @brief Method get_State, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::OnlineSessionState get_State() ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_SessionDetails, addr 0x1804bd960, size 0x40, virtual false, abstract: false, final false
inline void set_SessionDetails(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  value) ;

/// @brief Method set_SessionName, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionName(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_State, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_State(::Epic::OnlineServices::Sessions::OnlineSessionState  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ActiveSessionInfo() ;

// Ctor Parameters [CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_State_k__BackingField", ty: "::Epic::OnlineServices::Sessions::OnlineSessionState", modifiers: "", def_value: None }, CppParam { name: "_SessionDetails_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>", modifiers: "", def_value: None }]
constexpr ActiveSessionInfo(::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Sessions::OnlineSessionState  _State_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  _SessionDetails_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7672};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <SessionName>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <State>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::OnlineSessionState  _State_k__BackingField;

/// @brief Field <SessionDetails>k__BackingField, offset: 0x18, size: 0x58, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  _SessionDetails_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfo, _SessionName_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfo, _State_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::ActiveSessionInfo, _SessionDetails_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::ActiveSessionInfo) == 0x70, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
