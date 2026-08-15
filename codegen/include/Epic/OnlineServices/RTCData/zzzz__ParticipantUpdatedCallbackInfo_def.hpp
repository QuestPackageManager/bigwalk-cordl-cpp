#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/ParticipantUpdatedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/RTCData/zzzz__RTCDataStatus_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParticipantUpdatedCallbackInfo)
namespace Epic::OnlineServices::RTCData {
struct RTCDataStatus;
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
namespace Epic::OnlineServices::RTCData {
struct ParticipantUpdatedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo, "Epic.OnlineServices.RTCData", "ParticipantUpdatedCallbackInfo");
// Dependencies Epic.OnlineServices.RTCData.RTCDataStatus
namespace Epic::OnlineServices::RTCData {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCData.ParticipantUpdatedCallbackInfo
struct CORDL_TYPE ParticipantUpdatedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_DataStatus, put=set_DataStatus)) ::Epic::OnlineServices::RTCData::RTCDataStatus  DataStatus;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ParticipantId, put=set_ParticipantId)) ::Epic::OnlineServices::ProductUserId*  ParticipantId;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_DataStatus, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::RTCData::RTCDataStatus get_DataStatus() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ParticipantId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ParticipantId() ;

/// @brief Method get_RoomName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_DataStatus, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_DataStatus(::Epic::OnlineServices::RTCData::RTCDataStatus  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParticipantId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticipantUpdatedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParticipantId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_DataStatus_k__BackingField", ty: "::Epic::OnlineServices::RTCData::RTCDataStatus", modifiers: "", def_value: None }]
constexpr ParticipantUpdatedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField, ::Epic::OnlineServices::RTCData::RTCDataStatus  _DataStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7921};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <ParticipantId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField;

/// @brief Field <DataStatus>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Epic::OnlineServices::RTCData::RTCDataStatus  _DataStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo, _RoomName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo, _ParticipantId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo, _DataStatus_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfo) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
