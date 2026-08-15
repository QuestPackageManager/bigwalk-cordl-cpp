#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnClientAuthStatusChangedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientAuthStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OnClientAuthStatusChangedCallbackInfo)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonClientAuthStatus;
}
namespace Epic::OnlineServices {
class ICallbackInfo;
}
namespace Epic::OnlineServices {
struct Result;
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
struct OnClientAuthStatusChangedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo, "Epic.OnlineServices.AntiCheatCommon", "OnClientAuthStatusChangedCallbackInfo");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonClientAuthStatus, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.OnClientAuthStatusChangedCallbackInfo
struct CORDL_TYPE OnClientAuthStatusChangedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientAuthStatus, put=set_ClientAuthStatus)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  ClientAuthStatus;

 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientAuthStatus, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus get_ClientAuthStatus() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ClientHandle, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientAuthStatus, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientAuthStatus(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  value) ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ClientHandle, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnClientAuthStatusChangedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_ClientAuthStatus_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus", modifiers: "", def_value: None }]
constexpr OnClientAuthStatusChangedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::System::IntPtr  _ClientHandle_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  _ClientAuthStatus_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <ClientHandle>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <ClientAuthStatus>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus  _ClientAuthStatus_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo, _ClientHandle_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo, _ClientAuthStatus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
