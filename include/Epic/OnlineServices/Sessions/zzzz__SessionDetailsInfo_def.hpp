#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsSettings_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionDetailsInfo)
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsSettings;
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
struct SessionDetailsInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsInfo, "Epic.OnlineServices.Sessions", "SessionDetailsInfo");
// Dependencies Epic.OnlineServices.Sessions.SessionDetailsSettings, System.Nullable`1<T>
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsInfo
struct CORDL_TYPE SessionDetailsInfo {
public:
// Declarations
 __declspec(property(get=get_HostAddress, put=set_HostAddress)) ::Epic::OnlineServices::Utf8String*  HostAddress;

 __declspec(property(get=get_NumOpenPublicConnections, put=set_NumOpenPublicConnections)) uint32_t  NumOpenPublicConnections;

 __declspec(property(get=get_OwnerServerClientId, put=set_OwnerServerClientId)) ::Epic::OnlineServices::Utf8String*  OwnerServerClientId;

 __declspec(property(get=get_OwnerUserId, put=set_OwnerUserId)) ::Epic::OnlineServices::ProductUserId*  OwnerUserId;

 __declspec(property(get=get_SessionId, put=set_SessionId)) ::Epic::OnlineServices::Utf8String*  SessionId;

 __declspec(property(get=get_Settings, put=set_Settings)) ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  Settings;

/// @brief Method get_HostAddress, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_HostAddress() ;

/// @brief Method get_NumOpenPublicConnections, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_NumOpenPublicConnections() ;

/// @brief Method get_OwnerServerClientId, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_OwnerServerClientId() ;

/// @brief Method get_OwnerUserId, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_OwnerUserId() ;

/// @brief Method get_SessionId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionId() ;

/// @brief Method get_Settings, addr 0x1804e6790, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings> get_Settings() ;

/// @brief Method set_HostAddress, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_HostAddress(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_NumOpenPublicConnections, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_NumOpenPublicConnections(uint32_t  value) ;

/// @brief Method set_OwnerServerClientId, addr 0x1802e5e30, size 0x10, virtual false, abstract: false, final false
inline void set_OwnerServerClientId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_OwnerUserId, addr 0x1802e5d90, size 0x10, virtual false, abstract: false, final false
inline void set_OwnerUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_SessionId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_SessionId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_Settings, addr 0x1804e67b0, size 0x30, virtual false, abstract: false, final false
inline void set_Settings(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsInfo() ;

// Ctor Parameters [CppParam { name: "_SessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_HostAddress_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_NumOpenPublicConnections_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_Settings_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>", modifiers: "", def_value: None }, CppParam { name: "_OwnerUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_OwnerServerClientId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr SessionDetailsInfo(::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _HostAddress_k__BackingField, uint32_t  _NumOpenPublicConnections_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  _Settings_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _OwnerUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _OwnerServerClientId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <SessionId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField;

/// @brief Field <HostAddress>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _HostAddress_k__BackingField;

/// @brief Field <NumOpenPublicConnections>k__BackingField, offset: 0x10, size: 0x4, def value: None
 uint32_t  _NumOpenPublicConnections_k__BackingField;

/// @brief Field <Settings>k__BackingField, offset: 0x18, size: 0x28, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettings>  _Settings_k__BackingField;

/// @brief Field <OwnerUserId>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _OwnerUserId_k__BackingField;

/// @brief Field <OwnerServerClientId>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _OwnerServerClientId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfo, _SessionId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfo, _HostAddress_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfo, _NumOpenPublicConnections_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfo, _Settings_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfo, _OwnerUserId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsInfo, _OwnerServerClientId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsInfo) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
