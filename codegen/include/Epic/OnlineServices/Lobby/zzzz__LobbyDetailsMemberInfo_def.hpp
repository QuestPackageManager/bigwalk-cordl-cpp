#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsMemberInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyDetailsMemberInfo)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsMemberInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo, "Epic.OnlineServices.Lobby", "LobbyDetailsMemberInfo");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyDetailsMemberInfo
struct CORDL_TYPE LobbyDetailsMemberInfo {
public:
// Declarations
 __declspec(property(get=get_AllowsCrossplay, put=set_AllowsCrossplay)) bool  AllowsCrossplay;

 __declspec(property(get=get_Platform, put=set_Platform)) uint32_t  Platform;

 __declspec(property(get=get_UserId, put=set_UserId)) ::Epic::OnlineServices::ProductUserId*  UserId;

/// @brief Method get_AllowsCrossplay, addr 0x1804e67e0, size 0x10, virtual false, abstract: false, final false
inline bool get_AllowsCrossplay() ;

/// @brief Method get_Platform, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_Platform() ;

/// @brief Method get_UserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_UserId() ;

/// @brief Method set_AllowsCrossplay, addr 0x1804e6800, size 0x10, virtual false, abstract: false, final false
inline void set_AllowsCrossplay(bool  value) ;

/// @brief Method set_Platform, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Platform(uint32_t  value) ;

/// @brief Method set_UserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_UserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetailsMemberInfo() ;

// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Platform_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_AllowsCrossplay_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr LobbyDetailsMemberInfo(::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, uint32_t  _Platform_k__BackingField, bool  _AllowsCrossplay_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8535};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <UserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField;

/// @brief Field <Platform>k__BackingField, offset: 0x8, size: 0x4, def value: None
 uint32_t  _Platform_k__BackingField;

/// @brief Field <AllowsCrossplay>k__BackingField, offset: 0xc, size: 0x1, def value: None
 bool  _AllowsCrossplay_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo, _UserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo, _Platform_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo, _AllowsCrossplay_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetailsMemberInfo) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
