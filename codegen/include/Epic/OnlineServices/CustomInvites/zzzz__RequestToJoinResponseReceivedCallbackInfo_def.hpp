#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RequestToJoinResponseReceivedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponse_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RequestToJoinResponseReceivedCallbackInfo)
namespace Epic::OnlineServices::CustomInvites {
struct RequestToJoinResponse;
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
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::CustomInvites {
struct RequestToJoinResponseReceivedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo, "Epic.OnlineServices.CustomInvites", "RequestToJoinResponseReceivedCallbackInfo");
// Dependencies Epic.OnlineServices.CustomInvites.RequestToJoinResponse
namespace Epic::OnlineServices::CustomInvites {
// Is value type: true
// CS Name: Epic.OnlineServices.CustomInvites.RequestToJoinResponseReceivedCallbackInfo
struct CORDL_TYPE RequestToJoinResponseReceivedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_FromUserId, put=set_FromUserId)) ::Epic::OnlineServices::ProductUserId*  FromUserId;

 __declspec(property(get=get_Response, put=set_Response)) ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  Response;

 __declspec(property(get=get_ToUserId, put=set_ToUserId)) ::Epic::OnlineServices::ProductUserId*  ToUserId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_FromUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_FromUserId() ;

/// @brief Method get_Response, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse get_Response() ;

/// @brief Method get_ToUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_ToUserId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_FromUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_FromUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_Response, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_Response(::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  value) ;

/// @brief Method set_ToUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ToUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RequestToJoinResponseReceivedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_FromUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_ToUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_Response_k__BackingField", ty: "::Epic::OnlineServices::CustomInvites::RequestToJoinResponse", modifiers: "", def_value: None }]
constexpr RequestToJoinResponseReceivedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _FromUserId_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _ToUserId_k__BackingField, ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  _Response_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9093};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <FromUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _FromUserId_k__BackingField;

/// @brief Field <ToUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _ToUserId_k__BackingField;

/// @brief Field <Response>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  _Response_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo, _FromUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo, _ToUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo, _Response_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::CustomInvites
