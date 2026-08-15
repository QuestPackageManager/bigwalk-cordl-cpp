#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginStatusChangedCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__LoginStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoginStatusChangedCallbackInfoInternal)
namespace Epic::OnlineServices::Auth {
struct LoginStatusChangedCallbackInfo;
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
namespace Epic::OnlineServices::Auth {
struct LoginStatusChangedCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal, "Epic.OnlineServices.Auth", "LoginStatusChangedCallbackInfoInternal");
// Dependencies Epic.OnlineServices.LoginStatus, System.IntPtr
namespace Epic::OnlineServices::Auth {
// Is value type: true
// CS Name: Epic.OnlineServices.Auth.LoginStatusChangedCallbackInfoInternal
struct CORDL_TYPE LoginStatusChangedCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>*() ;

/// @brief Method Get, addr 0x1805265e0, size 0x90, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803a88d0, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Auth__LoginStatusChangedCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginStatusChangedCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_PrevStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }, CppParam { name: "m_CurrentStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: None }]
constexpr LoginStatusChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::Epic::OnlineServices::LoginStatus  m_PrevStatus, ::Epic::OnlineServices::LoginStatus  m_CurrentStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ClientData, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_PrevStatus, offset: 0x10, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  m_PrevStatus;

/// @brief Field m_CurrentStatus, offset: 0x14, size: 0x4, def value: None
 ::Epic::OnlineServices::LoginStatus  m_CurrentStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal, m_ClientData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal, m_LocalUserId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal, m_PrevStatus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal, m_CurrentStatus) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Auth
