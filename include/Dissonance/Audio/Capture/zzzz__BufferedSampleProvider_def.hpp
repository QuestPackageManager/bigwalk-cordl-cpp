#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/BufferedSampleProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedSampleProvider)
namespace Dissonance::Datastructures {
template<typename T>
class TransferBuffer_1;
}
namespace NAudio::Wave {
class ISampleProvider;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class BufferedSampleProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::BufferedSampleProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::BufferedSampleProvider*, "Dissonance.Audio.Capture", "BufferedSampleProvider");
// Dependencies System.Object
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.BufferedSampleProvider
class CORDL_TYPE BufferedSampleProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field _format, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__format, put=__cordl_internal_set__format)) ::NAudio::Wave::WaveFormat*  _format;

/// @brief Field _samples, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples, put=__cordl_internal_set__samples)) ::Dissonance::Datastructures::TransferBuffer_1<float_t>*  _samples;

/// @brief Convert operator to "::NAudio::Wave::ISampleProvider"
constexpr operator  ::NAudio::Wave::ISampleProvider*() noexcept;

static inline ::Dissonance::Audio::Capture::BufferedSampleProvider* New_ctor(::NAudio::Wave::WaveFormat*  format, int32_t  bufferSize) ;

/// @brief Method Read, addr 0x1805f3830, size 0x70, virtual true, abstract: false, final true
inline int32_t Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Reset, addr 0x1805f38a0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Write, addr 0x1805f38c0, size 0x50, virtual false, abstract: false, final false
inline int32_t Write(::System::ArraySegment_1<float_t>  data) ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__format() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__format() ;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>* const& __cordl_internal_get__samples() const;

constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>*& __cordl_internal_get__samples() ;

constexpr void __cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__samples(::Dissonance::Datastructures::TransferBuffer_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x1805f3910, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::NAudio::Wave::WaveFormat*  format, int32_t  bufferSize) ;

/// @brief Method get_Capacity, addr 0x1805f3970, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x1805f3990, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_WaveFormat, addr 0x1802db4a0, size 0x10, virtual true, abstract: false, final true
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Convert to "::NAudio::Wave::ISampleProvider"
constexpr ::NAudio::Wave::ISampleProvider* i___NAudio__Wave__ISampleProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferedSampleProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferedSampleProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferedSampleProvider(BufferedSampleProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferedSampleProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferedSampleProvider(BufferedSampleProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17023};

/// @brief Field _format, offset: 0x10, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____format;

/// @brief Field _samples, offset: 0x18, size: 0x8, def value: None
 ::Dissonance::Datastructures::TransferBuffer_1<float_t>*  ____samples;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::BufferedSampleProvider, ____format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Capture::BufferedSampleProvider, ____samples) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::BufferedSampleProvider) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
