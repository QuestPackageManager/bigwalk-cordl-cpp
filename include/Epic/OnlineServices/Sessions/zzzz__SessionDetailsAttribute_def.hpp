#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SessionDetailsAttribute)
namespace Epic::OnlineServices::Sessions {
struct AttributeData;
}
namespace Epic::OnlineServices::Sessions {
struct SessionAttributeAdvertisementType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::Sessions {
struct SessionDetailsAttribute;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionDetailsAttribute);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionDetailsAttribute, "Epic.OnlineServices.Sessions", "SessionDetailsAttribute");
// Dependencies Epic.OnlineServices.Sessions.AttributeData, Epic.OnlineServices.Sessions.SessionAttributeAdvertisementType, System.Nullable`1<T>
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionDetailsAttribute
struct CORDL_TYPE SessionDetailsAttribute {
public:
// Declarations
 __declspec(property(get=get_AdvertisementType, put=set_AdvertisementType)) ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  AdvertisementType;

 __declspec(property(get=get_Data, put=set_Data)) ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  Data;

/// @brief Method get_AdvertisementType, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType get_AdvertisementType() ;

/// @brief Method get_Data, addr 0x1804e6720, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> get_Data() ;

/// @brief Method set_AdvertisementType, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  value) ;

/// @brief Method set_Data, addr 0x1804e6750, size 0x40, virtual false, abstract: false, final false
inline void set_Data(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionDetailsAttribute() ;

// Ctor Parameters [CppParam { name: "_Data_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>", modifiers: "", def_value: None }, CppParam { name: "_AdvertisementType_k__BackingField", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: None }]
constexpr SessionDetailsAttribute(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _Data_k__BackingField, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  _AdvertisementType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <Data>k__BackingField, offset: 0x0, size: 0x48, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _Data_k__BackingField;

/// @brief Field <AdvertisementType>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  _AdvertisementType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsAttribute, _Data_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionDetailsAttribute, _AdvertisementType_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionDetailsAttribute) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
