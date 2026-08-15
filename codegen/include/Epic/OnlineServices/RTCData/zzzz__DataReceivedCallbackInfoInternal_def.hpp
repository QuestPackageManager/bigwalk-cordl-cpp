#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/DataReceivedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataReceivedCallbackInfoInternal)
namespace Epic::OnlineServices::RTCData {
struct DataReceivedCallbackInfo;
}
namespace Epic::OnlineServices {
class ICallbackInfoInternal;
}
namespace Epic::OnlineServices {
template<typename T>
class IGettable_1;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCData {
struct DataReceivedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal, "Epic.OnlineServices.RTCData", "DataReceivedCallbackInfoInternal");
// Dependencies System.IntPtr
namespace Epic::OnlineServices::RTCData {
// Is value type: true
// CS Name: Epic.OnlineServices.RTCData.DataReceivedCallbackInfoInternal
struct CORDL_TYPE DataReceivedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1804e7700, size 0x440, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::RTCData::DataReceivedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__RTCData__DataReceivedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DataReceivedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RoomName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DataLengthBytes", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Data", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ParticipantId", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr DataReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_RoomName, uint32_t  m_DataLengthBytes, ::System::IntPtr  m_Data, ::System::IntPtr  m_ParticipantId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7908};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RoomName, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_RoomName;

/// @brief Field m_DataLengthBytes, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_DataLengthBytes;

/// @brief Field m_Data, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_Data;

/// @brief Field m_ParticipantId, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_ParticipantId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal, m_RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal, m_DataLengthBytes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal, m_Data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal, m_ParticipantId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::RTCData::DataReceivedCallbackInfoInternal) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCData
