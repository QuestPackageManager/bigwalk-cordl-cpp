#pragma once
// IWYU pragma private; include "Dissonance/IVoiceBroadcastTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IVoiceBroadcastTrigger)
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
struct CommActivationMode;
}
// Forward declare root types
namespace Dissonance {
class IVoiceBroadcastTrigger;
}
// Write type traits
MARK_REF_T(::Dissonance::IVoiceBroadcastTrigger*);
DEFINE_IL2CPP_CLASS(::Dissonance::IVoiceBroadcastTrigger*, "Dissonance", "IVoiceBroadcastTrigger");
// Dependencies 
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.IVoiceBroadcastTrigger
class CORDL_TYPE IVoiceBroadcastTrigger {
public:
// Declarations
 __declspec(property(get=get_InputName, put=set_InputName)) ::StringW  InputName;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsTransmitting)) bool  IsTransmitting;

 __declspec(property(get=get_Mode, put=set_Mode)) ::Dissonance::CommActivationMode  Mode;

 __declspec(property(get=get_Priority, put=set_Priority)) ::Dissonance::ChannelPriority  Priority;

 __declspec(property(get=get_RoomName, put=set_RoomName)) ::StringW  RoomName;

 __declspec(property(get=get_UseColliderTrigger, put=set_UseColliderTrigger)) bool  UseColliderTrigger;

/// @brief Method ToggleMute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ToggleMute() ;

/// @brief Method get_InputName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_InputName() ;

/// @brief Method get_IsMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsMuted() ;

/// @brief Method get_IsTransmitting, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsTransmitting() ;

/// @brief Method get_Mode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::CommActivationMode get_Mode() ;

/// @brief Method get_Priority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Method get_RoomName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_RoomName() ;

/// @brief Method get_UseColliderTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_UseColliderTrigger() ;

/// @brief Method set_InputName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_InputName(::StringW  value) ;

/// @brief Method set_IsMuted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_IsMuted(bool  value) ;

/// @brief Method set_Mode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Mode(::Dissonance::CommActivationMode  value) ;

/// @brief Method set_Priority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Priority(::Dissonance::ChannelPriority  value) ;

/// @brief Method set_RoomName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_RoomName(::StringW  value) ;

/// @brief Method set_UseColliderTrigger, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_UseColliderTrigger(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVoiceBroadcastTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVoiceBroadcastTrigger(IVoiceBroadcastTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance
