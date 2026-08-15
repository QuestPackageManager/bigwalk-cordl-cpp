#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnLeaveRoomCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLeaveRoomCallbackInternalImplementation)
namespace Epic::OnlineServices::RTC {
struct LeaveRoomCallbackInfoInternal;
}
namespace Epic::OnlineServices::RTC {
class OnLeaveRoomCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class OnLeaveRoomCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation*, "Epic.OnlineServices.RTC", "OnLeaveRoomCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.OnLeaveRoomCallbackInternalImplementation
class CORDL_TYPE OnLeaveRoomCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f9a00, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTC::LeaveRoomCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f9a60, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLeaveRoomCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveRoomCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLeaveRoomCallbackInternalImplementation(OnLeaveRoomCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveRoomCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLeaveRoomCallbackInternalImplementation(OnLeaveRoomCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8156};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::OnLeaveRoomCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
