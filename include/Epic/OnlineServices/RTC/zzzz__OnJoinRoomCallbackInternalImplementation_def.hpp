#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnJoinRoomCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnJoinRoomCallbackInternalImplementation)
namespace Epic::OnlineServices::RTC {
struct JoinRoomCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTC {
class OnJoinRoomCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class OnJoinRoomCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation*, "Epic.OnlineServices.RTC", "OnJoinRoomCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.OnJoinRoomCallbackInternalImplementation
class CORDL_TYPE OnJoinRoomCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f9570, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTC::JoinRoomCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f95e0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinRoomCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinRoomCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinRoomCallbackInternalImplementation(OnJoinRoomCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinRoomCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinRoomCallbackInternalImplementation(OnJoinRoomCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::OnJoinRoomCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
