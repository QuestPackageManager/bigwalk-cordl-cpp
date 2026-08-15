#pragma once
// IWYU pragma private; include "Dissonance/Networking/ChannelBitField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelBitField)
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
struct ChannelType;
}
// Forward declare root types
namespace Dissonance::Networking {
struct ChannelBitField;
}
// Write type traits
MARK_VAL_T(::Dissonance::Networking::ChannelBitField);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::ChannelBitField, "Dissonance.Networking", "ChannelBitField");
// Dependencies 
namespace Dissonance::Networking {
// Is value type: true
// CS Name: Dissonance.Networking.ChannelBitField
struct CORDL_TYPE ChannelBitField {
public:
// Declarations
 __declspec(property(get=get_AmplitudeMultiplier)) float_t  AmplitudeMultiplier;

 __declspec(property(get=get_Bitfield)) uint16_t  Bitfield;

 __declspec(property(get=get_IsClosing)) bool  IsClosing;

 __declspec(property(get=get_IsPositional)) bool  IsPositional;

 __declspec(property(get=get_Priority)) ::Dissonance::ChannelPriority  Priority;

 __declspec(property(get=get_SessionId)) int32_t  SessionId;

 __declspec(property(get=get_Type)) ::Dissonance::ChannelType  Type;

/// @brief Method PackPriority, addr 0x1805d9ef0, size 0x30, virtual false, abstract: false, final false
static inline uint16_t PackPriority(::Dissonance::ChannelPriority  priority) ;

/// @brief Method .ctor, addr 0x18052caa0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint16_t  bitfield) ;

/// @brief Method .ctor, addr 0x1805d9f20, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::ChannelType  type, int32_t  sessionId, ::Dissonance::ChannelPriority  priority, float_t  amplitudeMult, bool  positional, bool  closing) ;

/// @brief Method get_AmplitudeMultiplier, addr 0x1805da090, size 0x30, virtual false, abstract: false, final false
inline float_t get_AmplitudeMultiplier() ;

/// @brief Method get_Bitfield, addr 0x18052ca80, size 0x10, virtual false, abstract: false, final false
inline uint16_t get_Bitfield() ;

/// @brief Method get_IsClosing, addr 0x1805da0c0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsClosing() ;

/// @brief Method get_IsPositional, addr 0x1805da0e0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsPositional() ;

/// @brief Method get_Priority, addr 0x1805da100, size 0x40, virtual false, abstract: false, final false
inline ::Dissonance::ChannelPriority get_Priority() ;

/// @brief Method get_SessionId, addr 0x1805da140, size 0x20, virtual false, abstract: false, final false
inline int32_t get_SessionId() ;

/// @brief Method get_Type, addr 0x1805da160, size 0x20, virtual false, abstract: false, final false
inline ::Dissonance::ChannelType get_Type() ;

// Ctor Parameters []
// @brief default ctor
constexpr ChannelBitField() ;

// Ctor Parameters [CppParam { name: "_Bitfield_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ChannelBitField(uint16_t  _Bitfield_k__BackingField) noexcept;

/// @brief Field AmplitudeMask offset 0xffffffff size 0x2
static constexpr uint16_t  AmplitudeMask{static_cast<uint16_t>(0xff00u)};

/// @brief Field AmplitudeOffset offset 0xffffffff size 0x2
static constexpr uint16_t  AmplitudeOffset{static_cast<uint16_t>(0x8u)};

/// @brief Field ClosureMask offset 0xffffffff size 0x2
static constexpr uint16_t  ClosureMask{static_cast<uint16_t>(0x4u)};

/// @brief Field PositionalMask offset 0xffffffff size 0x2
static constexpr uint16_t  PositionalMask{static_cast<uint16_t>(0x2u)};

/// @brief Field PriorityMask offset 0xffffffff size 0x2
static constexpr uint16_t  PriorityMask{static_cast<uint16_t>(0x18u)};

/// @brief Field PriorityOffset offset 0xffffffff size 0x2
static constexpr uint16_t  PriorityOffset{static_cast<uint16_t>(0x3u)};

/// @brief Field SessionIdMask offset 0xffffffff size 0x2
static constexpr uint16_t  SessionIdMask{static_cast<uint16_t>(0x61u)};

/// @brief Field SessionIdOffset offset 0xffffffff size 0x2
static constexpr uint16_t  SessionIdOffset{static_cast<uint16_t>(0x5u)};

/// @brief Field TypeMask offset 0xffffffff size 0x2
static constexpr uint16_t  TypeMask{static_cast<uint16_t>(0x1u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field <Bitfield>k__BackingField, offset: 0x0, size: 0x2, def value: None
 uint16_t  _Bitfield_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Networking::ChannelBitField, _Bitfield_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Networking::ChannelBitField) == 0x2, "Size mismatch!");

} // namespace end def Dissonance::Networking
