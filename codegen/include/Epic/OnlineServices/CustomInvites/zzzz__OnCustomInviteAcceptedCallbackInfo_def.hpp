#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteAcceptedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OnCustomInviteAcceptedCallbackInfo)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
struct OnCustomInviteAcceptedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo, "Epic.OnlineServices.CustomInvites", "OnCustomInviteAcceptedCallbackInfo");
// Dependencies 
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.OnCustomInviteAcceptedCallbackInfo
struct CORDL_TYPE OnCustomInviteAcceptedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_CustomInviteId, put=set_CustomInviteId)) ::Epic::OnlineServices::Utf8String*  CustomInviteId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_Payload, put=set_Payload)) ::Epic::OnlineServices::Utf8String*  Payload;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_CustomInviteId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_CustomInviteId() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_Payload, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Payload() ;

/// @brief Method get_TargetUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_CustomInviteId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_CustomInviteId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_Payload, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Payload(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_TargetUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnCustomInviteAcceptedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_CustomInviteId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Payload_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr OnCustomInviteAcceptedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _CustomInviteId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Payload_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <CustomInviteId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _CustomInviteId_k__BackingField;

/// @brief Field <Payload>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Payload_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo, _TargetUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo, _CustomInviteId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo, _Payload_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfo) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
