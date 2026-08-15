#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoByExternalAccountCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryUserInfoByExternalAccountCallbackInternalImplementation)
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByExternalAccountCallbackInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByExternalAccountCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByExternalAccountCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation*, "Epic.OnlineServices.UserInfo", "OnQueryUserInfoByExternalAccountCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::UserInfo {
// Is value type: false
// CS Name: Epic.OnlineServices.UserInfo.OnQueryUserInfoByExternalAccountCallbackInternalImplementation
class CORDL_TYPE OnQueryUserInfoByExternalAccountCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ddf80, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ddff0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryUserInfoByExternalAccountCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryUserInfoByExternalAccountCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryUserInfoByExternalAccountCallbackInternalImplementation(OnQueryUserInfoByExternalAccountCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryUserInfoByExternalAccountCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryUserInfoByExternalAccountCallbackInternalImplementation(OnQueryUserInfoByExternalAccountCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
