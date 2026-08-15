#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnMessageToServerCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnMessageToServerCallbackInfo)
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
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
namespace Epic::OnlineServices::AntiCheatClient {
struct OnMessageToServerCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo, "Epic.OnlineServices.AntiCheatClient", "OnMessageToServerCallbackInfo");
// Dependencies System.ArraySegment`1<T>
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.OnMessageToServerCallbackInfo
struct CORDL_TYPE OnMessageToServerCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_MessageData, put=set_MessageData)) ::System::ArraySegment_1<uint8_t>  MessageData;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_MessageData, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_MessageData() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_MessageData, addr 0x18051eaa0, size 0x20, virtual false, abstract: false, final false
inline void set_MessageData(::System::ArraySegment_1<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnMessageToServerCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_MessageData_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr OnMessageToServerCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::System::ArraySegment_1<uint8_t>  _MessageData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <MessageData>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _MessageData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo, _MessageData_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
