#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryUserInfoCallbackInternalImplementation)
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoCallbackInternal;
}
namespace Epic::OnlineServices::UserInfo {
struct QueryUserInfoCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::UserInfo {
class OnQueryUserInfoCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation*, "Epic.OnlineServices.UserInfo", "OnQueryUserInfoCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::UserInfo {
// Is value type: false
// CS Name: Epic.OnlineServices.UserInfo.OnQueryUserInfoCallbackInternalImplementation
class CORDL_TYPE OnQueryUserInfoCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804de1d0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804de230, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryUserInfoCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryUserInfoCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryUserInfoCallbackInternalImplementation(OnQueryUserInfoCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryUserInfoCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryUserInfoCallbackInternalImplementation(OnQueryUserInfoCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UserInfo
