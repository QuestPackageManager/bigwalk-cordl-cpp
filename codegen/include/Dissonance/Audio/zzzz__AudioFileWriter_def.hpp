#pragma once
// IWYU pragma private; include "Dissonance/Audio/AudioFileWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioFileWriter)
namespace Dissonance::Threading {
template<typename T>
class LockedValue_1;
}
namespace Dissonance {
class Log;
}
namespace NAudio::Wave {
class WaveFileWriter;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Dissonance::Audio {
class AudioFileWriter;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::AudioFileWriter*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::AudioFileWriter*, "Dissonance.Audio", "AudioFileWriter");
// Dependencies System.Object
namespace Dissonance::Audio {
// Is value type: false
// CS Name: Dissonance.Audio.AudioFileWriter
class CORDL_TYPE AudioFileWriter : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Field _error, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__error, put=__cordl_internal_set__error)) bool  _error;

/// @brief Field _lock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>*  _lock;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1805d7860, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Flush, addr 0x1805d7940, size 0xd0, virtual false, abstract: false, final false
inline void Flush() ;

static inline ::Dissonance::Audio::AudioFileWriter* New_ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method WriteSamples, addr 0x1805d7a10, size 0xf0, virtual false, abstract: false, final false
inline void WriteSamples(::System::ArraySegment_1<float_t>  samples) ;

constexpr bool const& __cordl_internal_get__error() const;

constexpr bool& __cordl_internal_get__error() ;

constexpr ::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>* const& __cordl_internal_get__lock() const;

constexpr ::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>*& __cordl_internal_get__lock() ;

constexpr void __cordl_internal_set__error(bool  value) ;

constexpr void __cordl_internal_set__lock(::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>*  value) ;

/// @brief Method .ctor, addr 0x1805d7b50, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioFileWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioFileWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioFileWriter(AudioFileWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioFileWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioFileWriter(AudioFileWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16956};

/// @brief Field _lock, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::Threading::LockedValue_1<::NAudio::Wave::WaveFileWriter*>*  ____lock;

/// @brief Field _error, offset: 0x18, size: 0x1, def value: None
 bool  ____error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::AudioFileWriter, ____lock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::AudioFileWriter, ____error) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::AudioFileWriter) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio
