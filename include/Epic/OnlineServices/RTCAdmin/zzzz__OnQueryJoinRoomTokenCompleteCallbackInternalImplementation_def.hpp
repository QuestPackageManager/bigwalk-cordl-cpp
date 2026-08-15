#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnQueryJoinRoomTokenCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryJoinRoomTokenCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::RTCAdmin {
class OnQueryJoinRoomTokenCompleteCallbackInternal;
}
namespace Epic::OnlineServices::RTCAdmin {
struct QueryJoinRoomTokenCompleteCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::RTCAdmin {
class OnQueryJoinRoomTokenCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation*, "Epic.OnlineServices.RTCAdmin", "OnQueryJoinRoomTokenCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::RTCAdmin {
// Is value type: false
// CS Name: Epic.OnlineServices.RTCAdmin.OnQueryJoinRoomTokenCompleteCallbackInternalImplementation
class CORDL_TYPE OnQueryJoinRoomTokenCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fa550, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804fa5c0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryJoinRoomTokenCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryJoinRoomTokenCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryJoinRoomTokenCompleteCallbackInternalImplementation(OnQueryJoinRoomTokenCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryJoinRoomTokenCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryJoinRoomTokenCompleteCallbackInternalImplementation(OnQueryJoinRoomTokenCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8107};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::RTCAdmin
