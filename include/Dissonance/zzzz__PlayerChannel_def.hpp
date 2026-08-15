#pragma once
// IWYU pragma private; include "Dissonance/PlayerChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerChannel)
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
class PlayerChannels;
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
struct PlayerChannel;
}
// Write type traits
MARK_VAL_T(::Dissonance::PlayerChannel);
DEFINE_IL2CPP_CLASS(::Dissonance::PlayerChannel, "Dissonance", "PlayerChannel");
// Dependencies 
namespace Dissonance {
// Is value type: true
// CS Name: Dissonance.PlayerChannel
struct CORDL_TYPE PlayerChannel {
public:
// Declarations
 __declspec(property(get=Dissonance_IChannel_System_String__get_Properties)) ::Dissonance::ChannelProperties*  Dissonance_IChannel_System_String__Properties;

 __declspec(property(get=get_IsOpen)) bool  IsOpen;

 __declspec(property(get=get_Positional, put=set_Positional)) bool  Positional;

 __declspec(property(get=get_Priority, put=set_Priority)) ::Dissonance::ChannelPriority  Priority;

 __declspec(property(get=get_Properties)) ::Dissonance::ChannelProperties*  Properties;

 __declspec(property(get=get_SubscriptionId)) uint16_t  SubscriptionId;

 __declspec(property(get=get_TargetId)) ::StringW  TargetId;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Convert operator to "::Dissonance::IChannel_1<::StringW>"
constexpr operator  ::Dissonance::IChannel_1<::StringW>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::PlayerChannel>"
constexpr operator  ::System::IEquatable_1<::Dissonance::PlayerChannel>*() ;

/// @brief Method CheckValidProperties, addr 0x1805cd160, size 0x80, virtual false, abstract: false, final false
inline void CheckValidProperties() ;

/// @brief Method Dispose, addr 0x1805cd1e0, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dissonance.IChannel<System.String>.get_Properties, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::ChannelProperties* Dissonance_IChannel_System_String__get_Properties() ;

/// @brief Method Equals, addr 0x1805cd230, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805cd2b0, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::PlayerChannel  other) ;

/// @brief Method GetHashCode, addr 0x1805cd300, size 0x40, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x1805cd340, size 0x70, virtual false, abstract: false, final false
inline void _ctor(uint16_t  subscriptionId, ::StringW  playerId, ::Dissonance::PlayerChannels*  channels, ::Dissonance::ChannelProperties*  properties) ;

/// @brief Method get_IsOpen, addr 0x1805cd3b0, size 0x50, virtual false, abstract: false, final false
inline bool get_IsOpen() ;

/// @brief Method get_Positional, addr 0x1805cd400, size 0x80, virtual false, abstract: false, final false
inline bool get_Positional() ;

/// @brief Method get_Priority, addr 0x1805cd480, size 0x80, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Method get_Properties, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelProperties* get_Properties() ;

/// @brief Method get_SubscriptionId, addr 0x18052ca80, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_SubscriptionId() ;

/// @brief Method get_TargetId, addr 0x1803ed930, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_TargetId() ;

/// @brief Method get_Volume, addr 0x1805cd500, size 0x80, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Convert to "::Dissonance::IChannel_1<::StringW>"
constexpr ::Dissonance::IChannel_1<::StringW>* i___Dissonance__IChannel_1___StringW_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::PlayerChannel>"
constexpr ::System::IEquatable_1<::Dissonance::PlayerChannel>* i___System__IEquatable_1___Dissonance__PlayerChannel_() ;

/// @brief Method set_Positional, addr 0x1805cd580, size 0x80, virtual false, abstract: false, final false
inline void set_Positional(bool  value) ;

/// @brief Method set_Priority, addr 0x1805cd600, size 0x80, virtual false, abstract: false, final false
inline void set_Priority(::Dissonance::ChannelPriority  value) ;

/// @brief Method set_Volume, addr 0x1805cd680, size 0xc0, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerChannel() ;

// Ctor Parameters [CppParam { name: "_subscriptionId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_properties", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: None }, CppParam { name: "_channels", ty: "::Dissonance::PlayerChannels*", modifiers: "", def_value: None }]
constexpr PlayerChannel(uint16_t  _subscriptionId, ::StringW  _playerId, ::Dissonance::ChannelProperties*  _properties, ::Dissonance::PlayerChannels*  _channels) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _subscriptionId, offset: 0x0, size: 0x2, def value: None
 uint16_t  _subscriptionId;

/// @brief Field _playerId, offset: 0x8, size: 0x8, def value: None
 ::StringW  _playerId;

/// @brief Field _properties, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::ChannelProperties*  _properties;

/// @brief Field _channels, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::PlayerChannels*  _channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::PlayerChannel, _subscriptionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlayerChannel, _playerId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlayerChannel, _properties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::PlayerChannel, _channels) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::PlayerChannel) == 0x20, "Size mismatch!");

} // namespace end def Dissonance
