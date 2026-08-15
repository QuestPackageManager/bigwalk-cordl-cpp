#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/ParticipantStatusChangedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTC/zzzz__ParticipantMetadata_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__RTCParticipantStatus_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParticipantStatusChangedCallbackInfo)
namespace Epic::OnlineServices::RTC {
struct ParticipantMetadata;
}
namespace Epic::OnlineServices::RTC {
struct RTCParticipantStatus;
}
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
namespace Epic::OnlineServices::RTC {
struct ParticipantStatusChangedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, "Epic.OnlineServices.RTC", "ParticipantStatusChangedCallbackInfo");
// Dependencies Epic.OnlineServices.RTC.ParticipantMetadata, Epic.OnlineServices.RTC.RTCParticipantStatus
namespace Epic::OnlineServices::RTC {
// Is value type: true
// CS Name: Epic.OnlineServices.RTC.ParticipantStatusChangedCallbackInfo
struct CORDL_TYPE ParticipantStatusChangedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ParticipantId, put=set_ParticipantId)) ::Epic::OnlineServices::ProductUserId*  ParticipantId;

 __declspec(property(get=get_ParticipantInBlocklist, put=set_ParticipantInBlocklist)) bool  ParticipantInBlocklist;

 __declspec(property(get=get_ParticipantMetadata, put=set_ParticipantMetadata)) ::ArrayW<::Epic::OnlineServices::RTC::ParticipantMetadata>  ParticipantMetadata;

 __declspec(property(get=get_ParticipantStatus, put=set_ParticipantStatus)) ::Epic::OnlineServices::RTC::RTCParticipantStatus  ParticipantStatus;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ParticipantId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ParticipantId() ;

/// @brief Method get_ParticipantInBlocklist, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_ParticipantInBlocklist() ;

/// @brief Method get_ParticipantMetadata, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Epic::OnlineServices::RTC::ParticipantMetadata> get_ParticipantMetadata() ;

/// @brief Method get_ParticipantStatus, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTC::RTCParticipantStatus get_ParticipantStatus() ;

/// @brief Method get_RoomName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParticipantId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParticipantInBlocklist, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantInBlocklist(bool  value) ;

/// @brief Method set_ParticipantMetadata, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantMetadata(::ArrayW<::Epic::OnlineServices::RTC::ParticipantMetadata>  value) ;

/// @brief Method set_ParticipantStatus, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantStatus(::Epic::OnlineServices::RTC::RTCParticipantStatus  value) ;

/// @brief Method set_RoomName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticipantStatusChangedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParticipantId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_ParticipantStatus_k__BackingField", ty: "::Epic::OnlineServices::RTC::RTCParticipantStatus", modifiers: "", def_value: None }, CppParam { name: "_ParticipantMetadata_k__BackingField", ty: "::ArrayW<::Epic::OnlineServices::RTC::ParticipantMetadata>", modifiers: "", def_value: None }, CppParam { name: "_ParticipantInBlocklist_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr ParticipantStatusChangedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField, ::Epic::OnlineServices::RTC::RTCParticipantStatus  _ParticipantStatus_k__BackingField, ::ArrayW<::Epic::OnlineServices::RTC::ParticipantMetadata>  _ParticipantMetadata_k__BackingField, bool  _ParticipantInBlocklist_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <ParticipantId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField;

/// @brief Field <ParticipantStatus>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::RTC::RTCParticipantStatus  _ParticipantStatus_k__BackingField;

/// @brief Field <ParticipantMetadata>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::RTC::ParticipantMetadata>  _ParticipantMetadata_k__BackingField;

/// @brief Field <ParticipantInBlocklist>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  _ParticipantInBlocklist_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, _RoomName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, _ParticipantId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, _ParticipantStatus_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, _ParticipantMetadata_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo, _ParticipantInBlocklist_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfo) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
