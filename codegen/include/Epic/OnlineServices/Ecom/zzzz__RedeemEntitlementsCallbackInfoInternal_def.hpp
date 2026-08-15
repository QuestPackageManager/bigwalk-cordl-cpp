#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/RedeemEntitlementsCallbackInfoInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RedeemEntitlementsCallbackInfoInternal)
namespace Epic::OnlineServices::Ecom {
struct RedeemEntitlementsCallbackInfo;
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
namespace Epic::OnlineServices::Ecom {
struct RedeemEntitlementsCallbackInfoInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal, "Epic.OnlineServices.Ecom", "RedeemEntitlementsCallbackInfoInternal");
// Dependencies Epic.OnlineServices.Result, System.IntPtr
namespace Epic::OnlineServices::Ecom {
// Is value type: true
// CS Name: Epic.OnlineServices.Ecom.RedeemEntitlementsCallbackInfoInternal
struct CORDL_TYPE RedeemEntitlementsCallbackInfoInternal {
public:
// Declarations
 __declspec(property(get=get_ClientDataPointer)) ::System::IntPtr  ClientDataPointer;

/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr operator  ::Epic::OnlineServices::ICallbackInfoInternal*() ;

/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>"
constexpr operator  ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>*() ;

/// @brief Method Get, addr 0x18051dc30, size 0xe0, virtual true, abstract: false, final true
inline void Get(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>  other) ;

/// @brief Method get_ClientDataPointer, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::System::IntPtr get_ClientDataPointer() ;

/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* i___Epic__OnlineServices__ICallbackInfoInternal() ;

/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfo>* i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Ecom__RedeemEntitlementsCallbackInfo_() ;

// Ctor Parameters []
// @brief default ctor
constexpr RedeemEntitlementsCallbackInfoInternal() ;

// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: None }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_RedeemedEntitlementIdsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_PreviouslyRedeemedEntitlementIdsCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_InvalidEntitlementIdsCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr RedeemEntitlementsCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, uint32_t  m_RedeemedEntitlementIdsCount, uint32_t  m_PreviouslyRedeemedEntitlementIdsCount, uint32_t  m_InvalidEntitlementIdsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9006};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_ResultCode, offset: 0x0, size: 0x4, def value: None
 ::Epic::OnlineServices::Result  m_ResultCode;

/// @brief Field m_ClientData, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_ClientData;

/// @brief Field m_LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_LocalUserId;

/// @brief Field m_RedeemedEntitlementIdsCount, offset: 0x18, size: 0x4, def value: None
 uint32_t  m_RedeemedEntitlementIdsCount;

/// @brief Field m_PreviouslyRedeemedEntitlementIdsCount, offset: 0x1c, size: 0x4, def value: None
 uint32_t  m_PreviouslyRedeemedEntitlementIdsCount;

/// @brief Field m_InvalidEntitlementIdsCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  m_InvalidEntitlementIdsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal, m_ResultCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal, m_ClientData) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal, m_LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal, m_RedeemedEntitlementIdsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal, m_PreviouslyRedeemedEntitlementIdsCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal, m_InvalidEntitlementIdsCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal) == 0x28, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Ecom
