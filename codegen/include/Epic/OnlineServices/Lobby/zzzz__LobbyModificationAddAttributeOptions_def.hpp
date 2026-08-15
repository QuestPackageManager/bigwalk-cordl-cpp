#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationAddAttributeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyAttributeVisibility_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyModificationAddAttributeOptions)
namespace Epic::OnlineServices::Lobby {
struct AttributeData;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyAttributeVisibility;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationAddAttributeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions, "Epic.OnlineServices.Lobby", "LobbyModificationAddAttributeOptions");
// Dependencies Epic.OnlineServices.Lobby.AttributeData, Epic.OnlineServices.Lobby.LobbyAttributeVisibility, System.Nullable`1<T>
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyModificationAddAttributeOptions
struct CORDL_TYPE LobbyModificationAddAttributeOptions {
public:
// Declarations
 __declspec(property(get=get_Attribute, put=set_Attribute)) ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  Attribute;

 __declspec(property(get=get_Visibility, put=set_Visibility)) ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  Visibility;

/// @brief Method get_Attribute, addr 0x1804e6720, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData> get_Attribute() ;

/// @brief Method get_Visibility, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility get_Visibility() ;

/// @brief Method set_Attribute, addr 0x1804e6750, size 0x40, virtual false, abstract: false, final false
inline void set_Attribute(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  value) ;

/// @brief Method set_Visibility, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_Visibility(::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyModificationAddAttributeOptions() ;

// Ctor Parameters [CppParam { name: "_Attribute_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>", modifiers: "", def_value: None }, CppParam { name: "_Visibility_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyAttributeVisibility", modifiers: "", def_value: None }]
constexpr LobbyModificationAddAttributeOptions(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  _Attribute_k__BackingField, ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  _Visibility_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8550};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <Attribute>k__BackingField, offset: 0x0, size: 0x48, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeData>  _Attribute_k__BackingField;

/// @brief Field <Visibility>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::Epic::OnlineServices::Lobby::LobbyAttributeVisibility  _Visibility_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions, _Attribute_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions, _Visibility_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyModificationAddAttributeOptions) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
