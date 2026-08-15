#pragma once
// IWYU pragma private; include "Dissonance/RoomChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomChannel)
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class ChannelProperties;
}
namespace Dissonance {
template<typename T>
class IChannel_1;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class RoomChannels;
}
namespace Dissonance {
struct RoomName;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance {
struct RoomChannel;
}
// Write type traits
MARK_VAL_T(::Dissonance::RoomChannel);
DEFINE_IL2CPP_CLASS(::Dissonance::RoomChannel, "Dissonance", "RoomChannel");
// Dependencies Dissonance.RoomName
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.RoomChannel
struct CORDL_TYPE RoomChannel {
public:
// Declarations
 __declspec(property(get=Dissonance_IChannel_Dissonance_RoomName__get_Properties)) ::Dissonance::ChannelProperties*  Dissonance_IChannel_Dissonance_RoomName__Properties;

 __declspec(property(get=Dissonance_IChannel_Dissonance_RoomName__get_TargetId)) ::Dissonance::RoomName  Dissonance_IChannel_Dissonance_RoomName__TargetId;

 __declspec(property(get=get_IsOpen)) bool  IsOpen;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Positional, put=set_Positional)) bool  Positional;

 __declspec(property(get=get_Priority, put=set_Priority)) ::Dissonance::ChannelPriority  Priority;

 __declspec(property(get=get_Properties)) ::Dissonance::ChannelProperties*  Properties;

 __declspec(property(get=get_SubscriptionId)) uint16_t  SubscriptionId;

 __declspec(property(get=get_TargetId)) ::StringW  TargetId;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Convert operator to "::Dissonance::IChannel_1<::Dissonance::RoomName>"
constexpr operator  ::Dissonance::IChannel_1<::Dissonance::RoomName>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::RoomChannel>"
constexpr operator  ::System::IEquatable_1<::Dissonance::RoomChannel>*() ;

/// @brief Method CheckValidProperties, addr 0x1805cf370, size 0xe0, virtual false, abstract: false, final false
inline void CheckValidProperties() ;

/// @brief Method Dispose, addr 0x1805cf450, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dissonance.IChannel<Dissonance.RoomName>.get_Properties, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::ChannelProperties* Dissonance_IChannel_Dissonance_RoomName__get_Properties() ;

/// @brief Method Dissonance.IChannel<Dissonance.RoomName>.get_TargetId, addr 0x18038fea0, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::RoomName Dissonance_IChannel_Dissonance_RoomName__get_TargetId() ;

/// @brief Method Equals, addr 0x1805cf4b0, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805cd2b0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::RoomChannel  other) ;

/// @brief Method GetHashCode, addr 0x1805cd300, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x1805cf5c0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(uint16_t  subscriptionId, ::Dissonance::RoomName  roomId, ::Dissonance::RoomChannels*  channels, ::Dissonance::ChannelProperties*  properties) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_IsOpen, addr 0x1805cf650, size 0x60, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_Positional, addr 0x1805cf6b0, size 0x40, virtual false, abstract: false, final false
inline bool get_Positional() ;

/// @brief Method get_Priority, addr 0x1805cf6f0, size 0x40, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Method get_Properties, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelProperties* get_Properties() ;

/// @brief Method get_SubscriptionId, addr 0x18052ca80, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_SubscriptionId() ;

/// @brief Method get_TargetId, addr 0x1803ed930, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_TargetId() ;

/// @brief Method get_Volume, addr 0x1805cf730, size 0x40, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Convert to "::Dissonance::IChannel_1<::Dissonance::RoomName>"
constexpr ::Dissonance::IChannel_1<::Dissonance::RoomName>* i___Dissonance__IChannel_1___Dissonance__RoomName_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::RoomChannel>"
constexpr ::System::IEquatable_1<::Dissonance::RoomChannel>* i___System__IEquatable_1___Dissonance__RoomChannel_() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_Positional, addr 0x1805cf770, size 0x50, virtual false, abstract: false, final false
inline void set_Positional(bool  value) ;

/// @brief Method set_Priority, addr 0x1805cf7c0, size 0x40, virtual false, abstract: false, final false
inline void set_Priority(::Dissonance::ChannelPriority  value) ;

/// @brief Method set_Volume, addr 0x1805cf800, size 0xa0, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomChannel() ;

// Ctor Parameters [CppParam { name: "_subscriptionId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_roomId", ty: "::Dissonance::RoomName", modifiers: "", def_value: None }, CppParam { name: "_properties", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: None }, CppParam { name: "_channels", ty: "::Dissonance::RoomChannels*", modifiers: "", def_value: None }]
constexpr RoomChannel(uint16_t  _subscriptionId, ::Dissonance::RoomName  _roomId, ::Dissonance::ChannelProperties*  _properties, ::Dissonance::RoomChannels*  _channels) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16790};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _subscriptionId, offset: 0x0, size: 0x2, def value: None
 uint16_t  _subscriptionId;

/// @brief Field _roomId, offset: 0x8, size: 0x10, def value: None
 ::Dissonance::RoomName  _roomId;

/// @brief Field _properties, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::ChannelProperties*  _properties;

/// @brief Field _channels, offset: 0x20, size: 0x8, def value: None
 ::Dissonance::RoomChannels*  _channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::RoomChannel, _subscriptionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RoomChannel, _roomId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RoomChannel, _properties) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::RoomChannel, _channels) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::RoomChannel) == 0x28, "Size mismatch!");

} // namespace end def Dissonance
