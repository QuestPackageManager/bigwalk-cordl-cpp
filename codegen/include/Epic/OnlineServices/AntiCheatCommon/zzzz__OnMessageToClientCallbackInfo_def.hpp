#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/OnMessageToClientCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnMessageToClientCallbackInfo)
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
struct OnMessageToClientCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo, "Epic.OnlineServices.AntiCheatCommon", "OnMessageToClientCallbackInfo");
// Dependencies System.ArraySegment`1<T>, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.OnMessageToClientCallbackInfo
struct CORDL_TYPE OnMessageToClientCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ClientHandle, put=set_ClientHandle)) ::System::IntPtr  ClientHandle;

 __declspec(property(get=get_MessageData, put=set_MessageData)) ::System::ArraySegment_1<uint8_t>  MessageData;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ClientHandle, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_ClientHandle() ;

/// @brief Method get_MessageData, addr 0x1802e5810, size 0x10, virtual false, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> get_MessageData() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ClientHandle, addr 0x1804bda50, size 0x10, virtual false, abstract: false, final false
inline void set_ClientHandle(::System::IntPtr  value) ;

/// @brief Method set_MessageData, addr 0x1804e6700, size 0x20, virtual false, abstract: false, final false
inline void set_MessageData(::System::ArraySegment_1<uint8_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OnMessageToClientCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_ClientHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_MessageData_k__BackingField", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: None }]
constexpr OnMessageToClientCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::System::IntPtr  _ClientHandle_k__BackingField, ::System::ArraySegment_1<uint8_t>  _MessageData_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <ClientHandle>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  _ClientHandle_k__BackingField;

/// @brief Field <MessageData>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::ArraySegment_1<uint8_t>  _MessageData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo, _ClientHandle_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo, _MessageData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
