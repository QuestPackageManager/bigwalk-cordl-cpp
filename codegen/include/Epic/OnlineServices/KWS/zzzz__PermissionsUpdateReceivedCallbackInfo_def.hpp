#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/PermissionsUpdateReceivedCallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PermissionsUpdateReceivedCallbackInfo)
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
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::KWS {
struct PermissionsUpdateReceivedCallbackInfo;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo, "Epic.OnlineServices.KWS", "PermissionsUpdateReceivedCallbackInfo");
// Dependencies 
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.PermissionsUpdateReceivedCallbackInfo
struct CORDL_TYPE PermissionsUpdateReceivedCallbackInfo {
public:
// Declarations
 __declspec(property(get=get_ClientData, put=set_ClientData)) ::System::Object*  ClientData;

 __declspec(property(get=get_DateOfBirth, put=set_DateOfBirth)) ::Epic::OnlineServices::Utf8String*  DateOfBirth;

 __declspec(property(get=get_IsMinor, put=set_IsMinor)) bool  IsMinor;

 __declspec(property(get=get_KWSUserId, put=set_KWSUserId)) ::Epic::OnlineServices::Utf8String*  KWSUserId;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::Epic::OnlineServices::ProductUserId*  LocalUserId;

 __declspec(property(get=get_ParentEmail, put=set_ParentEmail)) ::Epic::OnlineServices::Utf8String*  ParentEmail;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfo"
constexpr operator  ::Epic::OnlineServices::ICallbackInfo*() ;

/// @brief Method GetClientData, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetClientData() ;

/// @brief Method GetResultCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode() ;

/// @brief Method get_ClientData, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* get_ClientData() ;

/// @brief Method get_DateOfBirth, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_DateOfBirth() ;

/// @brief Method get_IsMinor, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMinor() ;

/// @brief Method get_KWSUserId, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_KWSUserId() ;

/// @brief Method get_LocalUserId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_LocalUserId() ;

/// @brief Method get_ParentEmail, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_ParentEmail() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfo"
constexpr ::Epic::OnlineServices::ICallbackInfo* i___Epic__OnlineServices__ICallbackInfo() ;

/// @brief Method set_ClientData, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_ClientData(::System::Object*  value) ;

/// @brief Method set_DateOfBirth, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_DateOfBirth(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_IsMinor, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_IsMinor(bool  value) ;

/// @brief Method set_KWSUserId, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_KWSUserId(::Epic::OnlineServices::Utf8String*  value) ;

/// @brief Method set_LocalUserId, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method set_ParentEmail, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_ParentEmail(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PermissionsUpdateReceivedCallbackInfo() ;

// Ctor Parameters [CppParam { name: "_ClientData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }, CppParam { name: "_KWSUserId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_DateOfBirth_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }, CppParam { name: "_IsMinor_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ParentEmail_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr PermissionsUpdateReceivedCallbackInfo(::System::Object*  _ClientData_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _KWSUserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _DateOfBirth_k__BackingField, bool  _IsMinor_k__BackingField, ::Epic::OnlineServices::Utf8String*  _ParentEmail_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8779};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <ClientData>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::Object*  _ClientData_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField;

/// @brief Field <KWSUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _KWSUserId_k__BackingField;

/// @brief Field <DateOfBirth>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _DateOfBirth_k__BackingField;

/// @brief Field <IsMinor>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  _IsMinor_k__BackingField;

/// @brief Field <ParentEmail>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _ParentEmail_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo, _ClientData_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo, _LocalUserId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo, _KWSUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo, _DateOfBirth_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo, _IsMinor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo, _ParentEmail_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo) == 0x30, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
