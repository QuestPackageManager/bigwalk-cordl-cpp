#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/JoinGameAcceptedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinGameAcceptedCallbackInfo)
namespace Epic::OnlineServices {
class EpicAccountId;
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
namespace Epic::OnlineServices::Presence {
struct JoinGameAcceptedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo, "Epic.OnlineServices.Presence", "JoinGameAcceptedCallbackInfo");
// Dependencies 
namespace Epic::OnlineServices::Presence {
// Is value type: true
// CS Name: Epic.OnlineServices.Presence.JoinGameAcceptedCallbackInfo
struct CORDL_TYPE JoinGameAcceptedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_JoinInfo, put=set_JoinInfo)) ::Epic::OnlineServices::Utf8String*  JoinInfo;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::EpicAccountId*  LocalUserId;

 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::EpicAccountId*  TargetUserId;

 __declspec(property(get=get_UiEventId, put=set_UiEventId)) uint64_t  UiEventId;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_JoinInfo, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_JoinInfo() ;

/// @brief Method get_LocalUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_LocalUserId() ;

/// @brief Method get_TargetUserId, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::EpicAccountId* get_TargetUserId() ;

/// @brief Method get_UiEventId, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_UiEventId() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_JoinInfo, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_JoinInfo(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_TargetUserId, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::EpicAccountId*  value) ;

/// @brief Method set_UiEventId, addr 0x1804f6740, size 0x10, virtual false, abstract: false, final false
inline void set_UiEventId(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr JoinGameAcceptedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_JoinInfo_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::EpicAccountId*", modifiers: "", def_value: None }, CppParam { name: "_UiEventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr JoinGameAcceptedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::Utf8String*  _JoinInfo_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::EpicAccountId*  _TargetUserId_k__BackingField, uint64_t  _UiEventId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <JoinInfo>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _JoinInfo_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _LocalUserId_k__BackingField;

/// @brief Field <TargetUserId>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::EpicAccountId*  _TargetUserId_k__BackingField;

/// @brief Field <UiEventId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 uint64_t  _UiEventId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo, _JoinInfo_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo, _LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo, _TargetUserId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo, _UiEventId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Presence::JoinGameAcceptedCallbackInfo) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Presence
