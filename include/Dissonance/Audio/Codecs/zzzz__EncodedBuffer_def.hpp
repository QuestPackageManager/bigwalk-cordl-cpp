#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/EncodedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncodedBuffer)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Audio::Codecs {
struct EncodedBuffer;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Codecs::EncodedBuffer);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::EncodedBuffer, "Dissonance.Audio.Codecs", "EncodedBuffer");
// Dependencies System.ArraySegment`1<T>, System.Nullable`1<T>
namespace Dissonance::Audio::Codecs {
// Is value type: true
// CS Name: Dissonance.Audio.Codecs.EncodedBuffer
struct CORDL_TYPE EncodedBuffer {
public:
// Declarations
/// @brief Method .ctor, addr 0x1805f4f00, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  encoded, bool  packetLost) ;

// Ctor Parameters []
// @brief default ctor
constexpr EncodedBuffer() ;

// Ctor Parameters [CppParam { name: "Encoded", ty: "::System::Nullable_1<::System::ArraySegment_1<uint8_t>>", modifiers: "", def_value: None }, CppParam { name: "PacketLost", ty: "bool", modifiers: "", def_value: None }]
constexpr EncodedBuffer(::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  Encoded, bool  PacketLost) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16996};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Encoded, offset: 0x0, size: 0x18, def value: None
 ::System::Nullable_1<::System::ArraySegment_1<uint8_t>>  Encoded;

/// @brief Field PacketLost, offset: 0x18, size: 0x1, def value: None
 bool  PacketLost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Codecs::EncodedBuffer, Encoded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Codecs::EncodedBuffer, PacketLost) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Codecs::EncodedBuffer) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs
