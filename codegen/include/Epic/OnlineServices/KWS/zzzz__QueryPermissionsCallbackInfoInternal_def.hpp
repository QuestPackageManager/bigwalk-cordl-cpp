#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/QueryPermissionsCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPermissionsCallbackInfoInternal)
namespace Epic::OnlineServices::KWS {
struct QueryPermissionsCallbackInfo;
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
namespace Epic::OnlineServices::KWS {
struct QueryPermissionsCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, "Epic.OnlineServices.KWS", "QueryPermissionsCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::KWS {
// Is value type: true
// CS Name: Epic.OnlineServices.KWS.QueryPermissionsCallbackInfoInternal
struct CORDL_TYPE QueryPermissionsCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo>*() ;

/// @brief Method Get, addr 0x18051daa0, size 0x190, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__KWS__QueryPermissionsCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr QueryPermissionsCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_KWSUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_DateOfBirth", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsMinor", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ParentEmail", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr QueryPermissionsCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_KWSUserId, ::System::IntPtr  m_DateOfBirth, int32_t  m_IsMinor, ::System::IntPtr  m_ParentEmail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_KWSUserId, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_KWSUserId;

/// @brief Field m_DateOfBirth, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_DateOfBirth;

/// @brief Field m_IsMinor, offset: 0x28, size: 0x4, def value: None
 int32_t  m_IsMinor;

/// @brief Field m_ParentEmail, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_ParentEmail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, m_KWSUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, m_DateOfBirth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, m_IsMinor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal, m_ParentEmail) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::KWS
