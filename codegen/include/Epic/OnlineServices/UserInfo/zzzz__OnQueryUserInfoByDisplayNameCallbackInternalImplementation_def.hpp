#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoByDisplayNameCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryUserInfoByDisplayNameCallbackInternalImplementation)
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByDisplayNameCallbackInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoByDisplayNameCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoByDisplayNameCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation*, "Epic.OnlineServices.UserInfo", "OnQueryUserInfoByDisplayNameCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::UserInfo {
// Is value type: false
// CS Name: Epic.OnlineServices.UserInfo.OnQueryUserInfoByDisplayNameCallbackInternalImplementation
class CORDL_TYPE OnQueryUserInfoByDisplayNameCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804ddd30, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804ddda0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryUserInfoByDisplayNameCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryUserInfoByDisplayNameCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryUserInfoByDisplayNameCallbackInternalImplementation(OnQueryUserInfoByDisplayNameCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryUserInfoByDisplayNameCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryUserInfoByDisplayNameCallbackInternalImplementation(OnQueryUserInfoByDisplayNameCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
