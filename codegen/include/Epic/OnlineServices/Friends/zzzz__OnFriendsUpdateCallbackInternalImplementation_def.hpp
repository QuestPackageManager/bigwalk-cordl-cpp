#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnFriendsUpdateCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnFriendsUpdateCallbackInternalImplementation)
namespace Epic::OnlineServices::Friends {
class OnFriendsUpdateCallbackInternal;
}
namespace Epic::OnlineServices::Friends {
struct OnFriendsUpdateInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Friends {
class OnFriendsUpdateCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation*, "Epic.OnlineServices.Friends", "OnFriendsUpdateCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Friends {
// Is value type: false
// CS Name: Epic.OnlineServices.Friends.OnFriendsUpdateCallbackInternalImplementation
class CORDL_TYPE OnFriendsUpdateCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180519c80, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x180519ce0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnFriendsUpdateCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnFriendsUpdateCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnFriendsUpdateCallbackInternalImplementation(OnFriendsUpdateCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnFriendsUpdateCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnFriendsUpdateCallbackInternalImplementation(OnFriendsUpdateCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Friends::OnFriendsUpdateCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Friends
