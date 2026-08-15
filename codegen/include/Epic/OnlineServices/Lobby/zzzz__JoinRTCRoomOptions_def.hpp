#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/JoinRTCRoomOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__LocalRTCOptions_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(JoinRTCRoomOptions)
namespace Epic::OnlineServices::Lobby {
struct LocalRTCOptions;
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
namespace Epic::OnlineServices::Lobby {
struct JoinRTCRoomOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::JoinRTCRoomOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::JoinRTCRoomOptions, "Epic.OnlineServices.Lobby", "JoinRTCRoomOptions");
// Dependencies Epic.OnlineServices.Lobby.LocalRTCOptions, System.Nullable`1<T>
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.JoinRTCRoomOptions
struct CORDL_TYPE JoinRTCRoomOptions {
public:
// Declarations
 __declspec(property(get=get_LobbyId, put=set_LobbyId)) ::Epic::OnlineServices::Utf8String*  LobbyId;

 __declspec(property(get=get_LocalRTCOptions, put=set_LocalRTCOptions)) ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  LocalRTCOptions;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

/// @brief Method get_LobbyId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId() ;

/// @brief Method get_LocalRTCOptions, addr 0x180347870, size 0x1f0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions> get_LocalRTCOptions() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method set_LobbyId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalRTCOptions, addr 0x180503ca0, size 0x20, virtual false, abstract: false, final false
inline void set_LocalRTCOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinRTCRoomOptions() ;

// Ctor Parameters [CppParam { name: "_LobbyId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_LocalRTCOptions_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>", modifiers: "", def_value: None }]
constexpr JoinRTCRoomOptions(::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <LobbyId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <LocalRTCOptions>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Lobby::LocalRTCOptions>  _LocalRTCOptions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinRTCRoomOptions, _LobbyId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinRTCRoomOptions, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::JoinRTCRoomOptions, _LocalRTCOptions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::JoinRTCRoomOptions) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
