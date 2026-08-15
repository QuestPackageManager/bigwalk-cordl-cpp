#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLeaveRTCRoomCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnLeaveRTCRoomCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct LeaveRTCRoomCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnLeaveRTCRoomCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnLeaveRTCRoomCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnLeaveRTCRoomCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnLeaveRTCRoomCallbackInternalImplementation
class CORDL_TYPE OnLeaveRTCRoomCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050eb50, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LeaveRTCRoomCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050ebb0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnLeaveRTCRoomCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveRTCRoomCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnLeaveRTCRoomCallbackInternalImplementation(OnLeaveRTCRoomCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnLeaveRTCRoomCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnLeaveRTCRoomCallbackInternalImplementation(OnLeaveRTCRoomCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8628};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnLeaveRTCRoomCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
