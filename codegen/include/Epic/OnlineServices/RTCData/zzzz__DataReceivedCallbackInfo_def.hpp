#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/DataReceivedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataReceivedCallbackInfo)
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
struct ArraySegment_1;
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
struct DataReceivedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo, "Epic.OnlineServices.RTCData", "DataReceivedCallbackInfo");
// Dependencies System.ArraySegment`1<T>
namespace Epic::OnlineServices::RTCData {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCData.DataReceivedCallbackInfo
struct CORDL_TYPE DataReceivedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_Data, put=set_Data)) ::System::ArraySegment_1<uint8_t>  Data;

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

/// @brief Method get_Data, addr 0x1802e2d70, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_Data() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ParticipantId, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ParticipantId() ;

/// @brief Method get_RoomName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_RoomName() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_Data, addr 0x1804e66e0, size 0x20, virtual false, abstract: false, final false
inline void set_Data(::System::ArraySegment_1<uint8_t>  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParticipantId, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_ParticipantId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_RoomName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_RoomName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DataReceivedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_RoomName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_Data_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "_ParticipantId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr DataReceivedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField, ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7907};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <RoomName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _RoomName_k__BackingField;

/// @brief Field <Data>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _Data_k__BackingField;

/// @brief Field <ParticipantId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ParticipantId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo, _RoomName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo, _Data_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo, _ParticipantId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
