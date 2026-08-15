#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnQueryFriendsCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryFriendsCallbackInternalImplementation)
namespace Epic::OnlineServices::Friends {
class OnQueryFriendsCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
struct QueryFriendsCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
class OnQueryFriendsCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation*, "Epic.OnlineServices.Friends", "OnQueryFriendsCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Friends {
// Is value type: false
// CS Name: Epic.OnlineServices.Friends.OnQueryFriendsCallbackInternalImplementation
class CORDL_TYPE OnQueryFriendsCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18051a8c0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Friends::QueryFriendsCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18051a920, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryFriendsCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryFriendsCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryFriendsCallbackInternalImplementation(OnQueryFriendsCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryFriendsCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryFriendsCallbackInternalImplementation(OnQueryFriendsCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8868};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Friends::OnQueryFriendsCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
