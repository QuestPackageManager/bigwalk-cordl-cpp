#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnRTCRoomConnectionChangedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnRTCRoomConnectionChangedCallbackInternalImplementation)
namespace Epic::OnlineServices::Lobby {
class OnRTCRoomConnectionChangedCallbackInternal;
}
namespace Epic::OnlineServices::Lobby {
struct RTCRoomConnectionChangedCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
class OnRTCRoomConnectionChangedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation*, "Epic.OnlineServices.Lobby", "OnRTCRoomConnectionChangedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Lobby {
// Is value type: false
// CS Name: Epic.OnlineServices.Lobby.OnRTCRoomConnectionChangedCallbackInternalImplementation
class CORDL_TYPE OnRTCRoomConnectionChangedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x180510070, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::RTCRoomConnectionChangedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1805100d0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnRTCRoomConnectionChangedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnRTCRoomConnectionChangedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnRTCRoomConnectionChangedCallbackInternalImplementation(OnRTCRoomConnectionChangedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnRTCRoomConnectionChangedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnRTCRoomConnectionChangedCallbackInternalImplementation(OnRTCRoomConnectionChangedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8655};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
