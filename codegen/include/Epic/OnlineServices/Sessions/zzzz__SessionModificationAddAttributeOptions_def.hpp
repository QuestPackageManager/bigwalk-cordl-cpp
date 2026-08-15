#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationAddAttributeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Sessions/zzzz__AttributeData_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SessionModificationAddAttributeOptions)
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
struct SessionModificationAddAttributeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions, "Epic.OnlineServices.Sessions", "SessionModificationAddAttributeOptions");
// Dependencies Epic.OnlineServices.Sessions.AttributeData, Epic.OnlineServices.Sessions.SessionAttributeAdvertisementType, System.Nullable`1<T>
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.SessionModificationAddAttributeOptions
struct CORDL_TYPE SessionModificationAddAttributeOptions {
public:
// Declarations
 __declspec(property(get=get_AdvertisementType, put=set_AdvertisementType)) ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  AdvertisementType;

 __declspec(property(get=get_SessionAttribute, put=set_SessionAttribute)) ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  SessionAttribute;

/// @brief Method get_AdvertisementType, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType get_AdvertisementType() ;

/// @brief Method get_SessionAttribute, addr 0x1804e6720, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData> get_SessionAttribute() ;

/// @brief Method set_AdvertisementType, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_AdvertisementType(::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  value) ;

/// @brief Method set_SessionAttribute, addr 0x1804e6750, size 0x40, virtual false, abstract: false, final false
inline void set_SessionAttribute(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionModificationAddAttributeOptions() ;

// Ctor Parameters [CppParam { name: "_SessionAttribute_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>", modifiers: "", def_value: None }, CppParam { name: "_AdvertisementType_k__BackingField", ty: "::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType", modifiers: "", def_value: None }]
constexpr SessionModificationAddAttributeOptions(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _SessionAttribute_k__BackingField, ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  _AdvertisementType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <SessionAttribute>k__BackingField, offset: 0x0, size: 0x48, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeData>  _SessionAttribute_k__BackingField;

/// @brief Field <AdvertisementType>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  _AdvertisementType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions, _SessionAttribute_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions, _AdvertisementType_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::SessionModificationAddAttributeOptions) == 0x50, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
