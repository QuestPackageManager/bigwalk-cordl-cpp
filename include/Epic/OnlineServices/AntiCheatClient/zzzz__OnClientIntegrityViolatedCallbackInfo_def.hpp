#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnClientIntegrityViolatedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientViolationType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnClientIntegrityViolatedCallbackInfo)
namespace Epic::OnlineServices::AntiCheatClient {
struct AntiCheatClientViolationType;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
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
namespace Epic::OnlineServices::AntiCheatClient {
struct OnClientIntegrityViolatedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo, "Epic.OnlineServices.AntiCheatClient", "OnClientIntegrityViolatedCallbackInfo");
// Dependencies Epic.OnlineServices.AntiCheatClient.AntiCheatClientViolationType
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.OnClientIntegrityViolatedCallbackInfo
struct CORDL_TYPE OnClientIntegrityViolatedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ViolationMessage, put=set_ViolationMessage)) ::Epic::OnlineServices::Utf8String*  ViolationMessage;

 __declspec(property(get=get_ViolationType, put=set_ViolationType)) ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  ViolationType;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ViolationMessage, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ViolationMessage() ;

/// @brief Method get_ViolationType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType get_ViolationType() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ViolationMessage, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_ViolationMessage(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ViolationType, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_ViolationType(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnClientIntegrityViolatedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_ViolationType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType", modifiers: "", def_value: None }, CppParam { name: "_ViolationMessage_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr OnClientIntegrityViolatedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  _ViolationType_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ViolationMessage_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9418};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <ViolationType>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  _ViolationType_k__BackingField;

/// @brief Field <ViolationMessage>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ViolationMessage_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo, _ViolationType_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo, _ViolationMessage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
