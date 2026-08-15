#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinRTCRoomCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnJoinRTCRoomCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
struct JoinRTCRoomCallbackInfoInternal;
}
namespace Epic::OnlineServices::Lobby {
class OnJoinRTCRoomCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnJoinRTCRoomCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnJoinRTCRoomCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnJoinRTCRoomCallbackInternalImplementation
class CORDL_TYPE OnJoinRTCRoomCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18050e250, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::JoinRTCRoomCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18050e2b0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnJoinRTCRoomCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnJoinRTCRoomCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnJoinRTCRoomCallbackInternalImplementation(OnJoinRTCRoomCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnJoinRTCRoomCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnJoinRTCRoomCallbackInternalImplementation(OnJoinRTCRoomCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnJoinRTCRoomCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
