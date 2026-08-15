#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/OpenChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenChannel)
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class ChannelProperties;
}
namespace Dissonance {
struct ChannelType;
}
namespace Dissonance {
class Log;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
struct OpenChannel;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::Client::OpenChannel);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::OpenChannel, "Dissonance.Networking.Client", "OpenChannel");
// Dependencies Dissonance.ChannelType
namespace Dissonance::Networking::Client {
// Is value type: true
// CS Name: Dissonance.Networking.Client.OpenChannel
struct CORDL_TYPE OpenChannel {
public:
// Declarations
 __declspec(property(get=get_AmplitudeMultiplier)) float_t  AmplitudeMultiplier;

 __declspec(property(get=get_Bitfield)) uint16_t  Bitfield;

 __declspec(property(get=get_Config)) ::Dissonance::ChannelProperties*  Config;

 __declspec(property(get=get_IsClosing)) bool  IsClosing;

 __declspec(property(get=get_IsPositional)) bool  IsPositional;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Priority)) ::Dissonance::ChannelPriority  Priority;

 __declspec(property(get=get_Recipient)) uint16_t  Recipient;

 __declspec(property(get=get_SessionId)) uint16_t  SessionId;

 __declspec(property(get=get_Type)) ::Dissonance::ChannelType  Type;

/// @brief Method AsClosing, addr 0x1805e1540, size 0x110, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Client::OpenChannel AsClosing() ;

/// @brief Method AsOpen, addr 0x1805e1650, size 0x120, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Client::OpenChannel AsOpen() ;

/// @brief Method AsSent, addr 0x1805e1770, size 0xc0, virtual false, abstract: false, final false
inline ::Dissonance::Networking::Client::OpenChannel AsSent() ;

/// @brief Method .ctor, addr 0x1805e1880, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::ChannelType  type, uint16_t  sessionId, ::Dissonance::ChannelProperties*  config, bool  closing, uint16_t  recipient, ::StringW  name, bool  sent) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_AmplitudeMultiplier, addr 0x1805e18f0, size 0x30, virtual false, abstract: false, final false
inline float_t get_AmplitudeMultiplier() ;

/// @brief Method get_Bitfield, addr 0x1805e1920, size 0x90, virtual false, abstract: false, final false
inline uint16_t get_Bitfield() ;

/// @brief Method get_Config, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelProperties* get_Config() ;

/// @brief Method get_IsClosing, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsClosing() ;

/// @brief Method get_IsPositional, addr 0x1805e19b0, size 0x30, virtual false, abstract: false, final false
inline bool get_IsPositional() ;

/// @brief Method get_Name, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Priority, addr 0x1805e19e0, size 0x80, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Method get_Recipient, addr 0x1805d74a0, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_Recipient() ;

/// @brief Method get_SessionId, addr 0x1805d74b0, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_SessionId() ;

/// @brief Method get_Type, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Dissonance::ChannelType get_Type() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OpenChannel() ;

// Ctor Parameters [CppParam { name: "_config", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: None }, CppParam { name: "_type", ty: "::Dissonance::ChannelType", modifiers: "", def_value: None }, CppParam { name: "_recipient", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_isClosing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_sessionId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "_sent", ty: "bool", modifiers: "", def_value: None }]
constexpr OpenChannel(::Dissonance::ChannelProperties*  _config, ::Dissonance::ChannelType  _type, uint16_t  _recipient, ::StringW  _name, bool  _isClosing, uint16_t  _sessionId, bool  _sent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16914};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _config, offset: 0x0, size: 0x8, def value: None
 ::Dissonance::ChannelProperties*  _config;

/// @brief Field _type, offset: 0x8, size: 0x4, def value: None
 ::Dissonance::ChannelType  _type;

/// @brief Field _recipient, offset: 0xc, size: 0x2, def value: None
 uint16_t  _recipient;

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  _name;

/// @brief Field _isClosing, offset: 0x18, size: 0x1, def value: None
 bool  _isClosing;

/// @brief Field _sessionId, offset: 0x1a, size: 0x2, def value: None
 uint16_t  _sessionId;

/// @brief Field _sent, offset: 0x1c, size: 0x1, def value: None
 bool  _sent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::OpenChannel, _config) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::OpenChannel, _type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::OpenChannel, _recipient) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::OpenChannel, _name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::OpenChannel, _isClosing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::OpenChannel, _sessionId) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Networking::Client::OpenChannel, _sent) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::OpenChannel) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
