#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/UpdateSessionCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UpdateSessionCallbackInfo)
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
namespace Epic::OnlineServices::Sessions {
struct UpdateSessionCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo, "Epic.OnlineServices.Sessions", "UpdateSessionCallbackInfo");
// Dependencies Epic.OnlineServices.Result
namespace Epic::OnlineServices::Sessions {
// Is value type: true
// CS Name: Epic.OnlineServices.Sessions.UpdateSessionCallbackInfo
struct CORDL_TYPE UpdateSessionCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_ResultCode, put=set_ResultCode)) ::Epic::OnlineServices::Result  ResultCode;

 __declspec(property(get=get_SessionId, put=set_SessionId)) ::Epic::OnlineServices::Utf8String*  SessionId;

 __declspec(property(get=get_SessionName, put=set_SessionName)) ::Epic::OnlineServices::Utf8String*  SessionName;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1804d84b0, size 0xa0, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_ResultCode, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result get_ResultCode() ;

/// @brief Method get_SessionId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionId() ;

/// @brief Method get_SessionName, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_SessionName() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_ResultCode, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_ResultCode(::Epic::OnlineServices::Result  value) ;

/// @brief Method set_SessionId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_SessionId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_SessionName, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_SessionName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UpdateSessionCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ResultCode_k__BackingField", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_SessionName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_SessionId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr UpdateSessionCallbackInfo(::Epic::OnlineServices::Result  _ResultCode_k__BackingField, ::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField, ::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7866};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <ResultCode>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  _ResultCode_k__BackingField;

/// @brief Field <ClientData>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <SessionName>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionName_k__BackingField;

/// @brief Field <SessionId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _SessionId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo, _ResultCode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo, _ClientData_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo, _SessionName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo, _SessionId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Sessions::UpdateSessionCallbackInfo) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Sessions
