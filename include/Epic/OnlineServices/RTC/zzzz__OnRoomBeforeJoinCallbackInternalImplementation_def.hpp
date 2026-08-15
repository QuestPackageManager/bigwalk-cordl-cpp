#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnRoomBeforeJoinCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRoomBeforeJoinCallbackInternalImplementation)
namespace Epic::OnlineServices::RTC {
class OnRoomBeforeJoinCallbackInternal;
}
namespace Epic::OnlineServices::RTC {
struct RoomBeforeJoinCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTC {
class OnRoomBeforeJoinCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation*, "Epic.OnlineServices.RTC", "OnRoomBeforeJoinCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTC {
// Is value type: false
// CS Name: Epic.OnlineServices.RTC.OnRoomBeforeJoinCallbackInternalImplementation
class CORDL_TYPE OnRoomBeforeJoinCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fae70, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTC::RoomBeforeJoinCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804faed0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRoomBeforeJoinCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRoomBeforeJoinCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRoomBeforeJoinCallbackInternalImplementation(OnRoomBeforeJoinCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRoomBeforeJoinCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRoomBeforeJoinCallbackInternalImplementation(OnRoomBeforeJoinCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8162};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTC::OnRoomBeforeJoinCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTC
