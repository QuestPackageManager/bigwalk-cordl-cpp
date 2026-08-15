#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnClientActionRequiredCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientActionReason_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAction_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnClientActionRequiredCallbackInfo)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientActionReason;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientAction;
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
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct OnClientActionRequiredCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo, "Epic.OnlineServices.AntiCheatCommon", "OnClientActionRequiredCallbackInfo");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientAction, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientActionReason, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.OnClientActionRequiredCallbackInfo
struct CORDL_TYPE OnClientActionRequiredCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ActionReasonCode, put=set_ActionReasonCode)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  ActionReasonCode;

 __declspec(property(get=get_ActionReasonDetailsString, put=set_ActionReasonDetailsString)) ::Epic::OnlineServices::Utf8String*  ActionReasonDetailsString;

 __declspec(property(get=get_ClientAction, put=set_ClientAction)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction  ClientAction;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ActionReasonCode, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason get_ActionReasonCode() ;

/// @brief Method get_ActionReasonDetailsString, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ActionReasonDetailsString() ;

/// @brief Method get_ClientAction, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction get_ClientAction() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ClientHandle, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ActionReasonCode, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_ActionReasonCode(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  value) ;

/// @brief Method set_ActionReasonDetailsString, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_ActionReasonDetailsString(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_ClientAction, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientAction(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction  value) ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ClientHandle, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnClientActionRequiredCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ClientAction_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction", modifiers: "", def_value: None }, CppParam { name: "_ActionReasonCode_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason", modifiers: "", def_value: None }, CppParam { name: "_ActionReasonDetailsString_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr OnClientActionRequiredCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::System::IntPtr  _ClientHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction  _ClientAction_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  _ActionReasonCode_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ActionReasonDetailsString_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <ClientHandle>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <ClientAction>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction  _ClientAction_k__BackingField;

/// @brief Field <ActionReasonCode>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason  _ActionReasonCode_k__BackingField;

/// @brief Field <ActionReasonDetailsString>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ActionReasonDetailsString_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo, _ClientHandle_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo, _ClientAction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo, _ActionReasonCode_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo, _ActionReasonDetailsString_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
