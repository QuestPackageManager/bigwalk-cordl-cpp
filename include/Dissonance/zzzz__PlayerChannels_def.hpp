#pragma once
// IWYU pragma private; include "Dissonance/PlayerChannels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__Channels_2_def.hpp"
#include "Dissonance/zzzz__PlayerChannel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerChannels)
namespace Dissonance::Audio::Capture {
class IChannelPriorityProvider;
}
namespace Dissonance {
class ChannelProperties;
}
namespace Dissonance {
struct PlayerChannel;
}
namespace Dissonance {
class PlayerChannels___c;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Dissonance {
class PlayerChannels;
}
namespace Dissonance {
class PlayerChannels___c;
}
// Write type traits
MARK_REF_T(::Dissonance::PlayerChannels*);
MARK_REF_T(::Dissonance::PlayerChannels___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::PlayerChannels*, "Dissonance", "PlayerChannels");
DEFINE_IL2CPP_CLASS(::Dissonance::PlayerChannels___c*, "Dissonance", "PlayerChannels/<>c");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.PlayerChannels/<>c
class CORDL_TYPE PlayerChannels___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::PlayerChannels___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*  __9__0_1;

static inline ::Dissonance::PlayerChannels___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void __ctor_b__0_0(::StringW  id, ::Dissonance::ChannelProperties*  _) ;

/// @brief Method <.ctor>b__0_1, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void __ctor_b__0_1(::StringW  id, ::Dissonance::ChannelProperties*  _) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::PlayerChannels___c* getStaticF___9() ;

static inline ::System::Action_2<::StringW,::Dissonance::ChannelProperties*>* getStaticF___9__0_0() ;

static inline ::System::Action_2<::StringW,::Dissonance::ChannelProperties*>* getStaticF___9__0_1() ;

static inline void setStaticF___9(::Dissonance::PlayerChannels___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*  value) ;

static inline void setStaticF___9__0_1(::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerChannels___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerChannels___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerChannels___c(PlayerChannels___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerChannels___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerChannels___c(PlayerChannels___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16787};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::PlayerChannels___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
// Dependencies Dissonance.Channels`2<T, TId>, Dissonance.PlayerChannel
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.PlayerChannels
class CORDL_TYPE PlayerChannels : public ::Dissonance::Channels_2<::Dissonance::PlayerChannel,::StringW> {
public:
// Declarations
using __c = ::Dissonance::PlayerChannels___c;

/// @brief Method CreateChannel, addr 0x1805cd740, size 0x60, virtual true, abstract: false, final false
inline ::Dissonance::PlayerChannel CreateChannel(uint16_t  subscriptionId, ::StringW  channelId, ::Dissonance::ChannelProperties*  properties) ;

static inline ::Dissonance::PlayerChannels* New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider) ;

/// @brief Method .ctor, addr 0x1805cd7a0, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerChannels() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerChannels", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerChannels(PlayerChannels && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerChannels", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerChannels(PlayerChannels const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16788};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::PlayerChannels) == 0x40, "Size mismatch!");

} // namespace end def Dissonance
