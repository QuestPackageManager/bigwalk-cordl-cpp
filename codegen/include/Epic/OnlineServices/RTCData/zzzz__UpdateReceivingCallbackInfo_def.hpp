#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/UpdateReceivingCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateReceivingCallbackInfo)
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
struct UpdateReceivingCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo, "Epic.OnlineServices.RTCData", "UpdateReceivingCallbackInfo");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::RTCData {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCData.UpdateReceivingCallbackInfo
struct CORDL_TYPE UpdateReceivingCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_DataEnabled, put=set_DataEnabled)) bool  DataEnabled;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ParticipantId, put=set_ParticipantId)) ::Epic::OnlineServices::ProductUserId*  ParticipantId;

 __declspec(property(get=get_ResultCode, put=set_ResultCode)) ::Epic::OnlineServices::Result  ResultCode;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::Epic::OnlineServices::Utf8String*  RoomName;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1804d84b0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_DataEnabled, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool get_DataEnabled() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ParticipantId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ParticipantId() ;

/// @brief Method get_ResultCode, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ResultCode() ;

/// @brief Method get_RoomName, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_DataEnabled, addr 0x1803cc020, size 0x10, virtual false, abstract: false, final false
inline void set_DataEnabled(bool  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParticipantId, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ResultCode, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ResultCode(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_RoomName, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateReceivingCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_ParticipantId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_DataEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr UpdateReceivingCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField, bool  _DataEnabled_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7927};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <ResultCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ResultCode_k__BackingField;

/// @brief Field <ClientData>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <ParticipantId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField;

/// @brief Field <DataEnabled>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  _DataEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo, _ResultCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo, _ClientData_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo, _RoomName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo, _ParticipantId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo, _DataEnabled_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
