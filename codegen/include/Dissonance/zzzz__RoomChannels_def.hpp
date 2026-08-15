#pragma once
// IWYU pragma private; include "Dissonance/RoomChannels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__Channels_2_def.hpp"
#include "Dissonance/zzzz__RoomChannel_def.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomChannels)
namespace Dissonance::Audio::Capture {
class IChannelPriorityProvider;
}
namespace Dissonance {
class ChannelProperties;
}
namespace Dissonance {
struct RoomChannel;
}
namespace Dissonance {
class RoomChannels___c;
}
namespace Dissonance {
struct RoomName;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
class RoomChannels___c;
}
// Write type traits
MARK_REF_T(::Dissonance::RoomChannels*);
MARK_REF_T(::Dissonance::RoomChannels___c*);
DEFINE_IL2CPP_CLASS(::Dissonance::RoomChannels*, "Dissonance", "RoomChannels");
DEFINE_IL2CPP_CLASS(::Dissonance::RoomChannels___c*, "Dissonance", "RoomChannels/<>c");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.RoomChannels/<>c
class CORDL_TYPE RoomChannels___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Dissonance::RoomChannels___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*  __9__0_0;

/// @brief Field <>9__0_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_1, put=setStaticF___9__0_1)) ::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*  __9__0_1;

static inline ::Dissonance::RoomChannels___c* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void __ctor_b__0_0(::Dissonance::RoomName  id, ::Dissonance::ChannelProperties*  _) ;

/// @brief Method <.ctor>b__0_1, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void __ctor_b__0_1(::Dissonance::RoomName  id, ::Dissonance::ChannelProperties*  _) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::RoomChannels___c* getStaticF___9() ;

static inline ::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>* getStaticF___9__0_0() ;

static inline ::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>* getStaticF___9__0_1() ;

static inline void setStaticF___9(::Dissonance::RoomChannels___c*  value) ;

static inline void setStaticF___9__0_0(::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*  value) ;

static inline void setStaticF___9__0_1(::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomChannels___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomChannels___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomChannels___c(RoomChannels___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomChannels___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomChannels___c(RoomChannels___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16791};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::RoomChannels___c) == 0x10, "Size mismatch!");

} // namespace end def Dissonance
// Dependencies Dissonance.Channels`2<T, TId>, Dissonance.RoomChannel, Dissonance.RoomName
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.RoomChannels
class CORDL_TYPE RoomChannels : public ::Dissonance::Channels_2<::Dissonance::RoomChannel,::Dissonance::RoomName> {
public:
// Declarations
using __c = ::Dissonance::RoomChannels___c;

/// @brief Method CreateChannel, addr 0x1805cf8a0, size 0x70, virtual true, abstract: false, final false
inline ::Dissonance::RoomChannel CreateChannel(uint16_t  subscriptionId, ::Dissonance::RoomName  channelId, ::Dissonance::ChannelProperties*  properties) ;

static inline ::Dissonance::RoomChannels* New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider) ;

/// @brief Method .ctor, addr 0x1805cf910, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomChannels() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomChannels", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomChannels(RoomChannels && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomChannels", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomChannels(RoomChannels const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16792};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::RoomChannels) == 0x40, "Size mismatch!");

} // namespace end def Dissonance
