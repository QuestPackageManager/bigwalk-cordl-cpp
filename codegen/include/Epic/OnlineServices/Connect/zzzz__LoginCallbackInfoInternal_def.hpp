#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/LoginCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LoginCallbackInfoInternal)
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfo;
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
namespace Epic::OnlineServices::Connect {
struct LoginCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Connect::LoginCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Connect::LoginCallbackInfoInternal, "Epic.OnlineServices.Connect", "LoginCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Connect {
// Is value type: true
// CS Name: Epic.OnlineServices.Connect.LoginCallbackInfoInternal
struct CORDL_TYPE LoginCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::LoginCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::LoginCallbackInfo>*() ;

/// @brief Method Get, addr 0x180526250, size 0x170, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::LoginCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Connect::LoginCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Connect__LoginCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr LoginCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ContinuanceToken", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LoginCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_ContinuanceToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9153};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_ContinuanceToken, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_ContinuanceToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Connect::LoginCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LoginCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LoginCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Connect::LoginCallbackInfoInternal, m_ContinuanceToken) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Connect::LoginCallbackInfoInternal) == 0x20, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Connect
