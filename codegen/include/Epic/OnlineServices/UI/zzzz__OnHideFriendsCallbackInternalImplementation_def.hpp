#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnHideFriendsCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnHideFriendsCallbackInternalImplementation)
namespace Epic::OnlineServices::UI {
struct HideFriendsCallbackInfoInternal;
}
namespace Epic::OnlineServices::UI {
class OnHideFriendsCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::UI {
class OnHideFriendsCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*, "Epic.OnlineServices.UI", "OnHideFriendsCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::UI {
// Is value type: false
// CS Name: Epic.OnlineServices.UI.OnHideFriendsCallbackInternalImplementation
class CORDL_TYPE OnHideFriendsCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804dcf80, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804dcfe0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnHideFriendsCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnHideFriendsCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnHideFriendsCallbackInternalImplementation(OnHideFriendsCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnHideFriendsCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnHideFriendsCallbackInternalImplementation(OnHideFriendsCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
