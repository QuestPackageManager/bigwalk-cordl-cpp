#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AddNotifyRTCRoomConnectionChangedOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AddNotifyRTCRoomConnectionChangedOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct AddNotifyRTCRoomConnectionChangedOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions, "Epic.OnlineServices.Lobby", "AddNotifyRTCRoomConnectionChangedOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.AddNotifyRTCRoomConnectionChangedOptions
struct CORDL_TYPE AddNotifyRTCRoomConnectionChangedOptions {
public:
// Declarations
 __declspec(property(get=get_LobbyId_DEPRECATED, put=set_LobbyId_DEPRECATED)) ::Epic::OnlineServices::Utf8String*  LobbyId_DEPRECATED;

 __declspec(property(get=get_LocalUserId_DEPRECATED, put=set_LocalUserId_DEPRECATED)) ::Epic::OnlineServices::ProductUserId*  LocalUserId_DEPRECATED;

/// @brief Method get_LobbyId_DEPRECATED, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_LobbyId_DEPRECATED() ;

/// @brief Method get_LocalUserId_DEPRECATED, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId_DEPRECATED() ;

/// @brief Method set_LobbyId_DEPRECATED, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyId_DEPRECATED(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId_DEPRECATED, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId_DEPRECATED(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyRTCRoomConnectionChangedOptions() ;

// Ctor Parameters [CppParam { name: "_LobbyId_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_DEPRECATED_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr AddNotifyRTCRoomConnectionChangedOptions(::Epic::OnlineServices::Utf8String*  _LobbyId_DEPRECATED_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_DEPRECATED_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8441};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <LobbyId_DEPRECATED>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _LobbyId_DEPRECATED_k__BackingField;

/// @brief Field <LocalUserId_DEPRECATED>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_DEPRECATED_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions, _LobbyId_DEPRECATED_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions, _LocalUserId_DEPRECATED_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
