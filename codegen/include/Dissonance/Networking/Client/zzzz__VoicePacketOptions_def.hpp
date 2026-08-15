#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/VoicePacketOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoicePacketOptions)
// Forward declare root types
namespace Dissonance::Networking::Client {
struct VoicePacketOptions;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::Client::VoicePacketOptions);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::VoicePacketOptions, "Dissonance.Networking.Client", "VoicePacketOptions");
// Dependencies 
namespace Dissonance::Networking::Client {
// Is value type: true
// CS Name: Dissonance.Networking.Client.VoicePacketOptions
struct CORDL_TYPE VoicePacketOptions {
public:
// Declarations
 __declspec(property(get=get_Bitfield)) uint8_t  Bitfield;

 __declspec(property(get=get_ChannelSession)) uint8_t  ChannelSession;

 __declspec(property(get=get_ChannelSessionRange)) int32_t  ChannelSessionRange;

 __declspec(property(get=get_IsChannelSessionExtendedRange)) bool  IsChannelSessionExtendedRange;

/// @brief Method Pack, addr 0x1805ed840, size 0x10, virtual false, abstract: false, final false
static inline ::Dissonance::Networking::Client::VoicePacketOptions Pack(uint8_t  channelSession) ;

/// @brief Method Unpack, addr 0x1805ed850, size 0x10, virtual false, abstract: false, final false
static inline ::Dissonance::Networking::Client::VoicePacketOptions Unpack(uint8_t  bitfield) ;

/// @brief Method .ctor, addr 0x1804bda60, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint8_t  bitfield) ;

/// @brief Method get_Bitfield, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_Bitfield() ;

/// @brief Method get_ChannelSession, addr 0x1805ed880, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_ChannelSession() ;

/// @brief Method get_ChannelSessionRange, addr 0x1805ed860, size 0x20, virtual false, abstract: false, final false
inline int32_t get_ChannelSessionRange() ;

/// @brief Method get_IsChannelSessionExtendedRange, addr 0x1805ed8a0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsChannelSessionExtendedRange() ;

// Ctor Parameters []
// @brief default ctor
constexpr VoicePacketOptions() ;

// Ctor Parameters [CppParam { name: "_bitfield", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr VoicePacketOptions(uint8_t  _bitfield) noexcept;

/// @brief Field EXTENDED_RANGE_FLAG offset 0xffffffff size 0x1
static constexpr uint8_t  EXTENDED_RANGE_FLAG{static_cast<uint8_t>(0x80u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field _bitfield, offset: 0x0, size: 0x1, def value: None
 uint8_t  _bitfield;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::Client::VoicePacketOptions, _bitfield) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::Client::VoicePacketOptions) == 0x1, "Size mismatch!");

} // namespace end def Dissonance::Networking::Client
