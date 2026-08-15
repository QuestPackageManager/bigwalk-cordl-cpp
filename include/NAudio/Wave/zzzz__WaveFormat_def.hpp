#pragma once
// IWYU pragma private; include "NAudio/Wave/WaveFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaveFormat)
// Forward declare root types
namespace NAudio::Wave {
class WaveFormat;
}
// Write type traits
MARK_REF_T(::NAudio::Wave::WaveFormat*);
DEFINE_IL2CPP_CLASS(::NAudio::Wave::WaveFormat*, "NAudio.Wave", "WaveFormat");
// Dependencies System.Object
namespace NAudio::Wave {
// Is value type: false
// CS Name: NAudio.Wave.WaveFormat
class CORDL_TYPE WaveFormat : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

/// @brief Field _channels, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) int32_t  _channels;

/// @brief Field _sampleRate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Method Equals, addr 0x1805d5c90, size 0x30, virtual false, abstract: false, final false
inline bool Equals(::NAudio::Wave::WaveFormat*  other) ;

/// @brief Method GetHashCode, addr 0x1805d5cc0, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::NAudio::Wave::WaveFormat* New_ctor(int32_t  sampleRate, int32_t  channels) ;

/// @brief Method ToString, addr 0x1805d5ce0, size 0x60, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__channels() const;

constexpr int32_t& __cordl_internal_get__channels() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr void __cordl_internal_set__channels(int32_t  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0x1805d5d40, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  channels) ;

/// @brief Method get_Channels, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Channels() ;

/// @brief Method get_SampleRate, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_SampleRate() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveFormat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveFormat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveFormat(WaveFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveFormat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveFormat(WaveFormat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16773};

/// @brief Field _channels, offset: 0x10, size: 0x4, def value: None
 int32_t  ____channels;

/// @brief Field _sampleRate, offset: 0x14, size: 0x4, def value: None
 int32_t  ____sampleRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NAudio::Wave::WaveFormat, ____channels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::NAudio::Wave::WaveFormat, ____sampleRate) == 0x14, "Offset mismatch!");

static_assert(sizeof(::NAudio::Wave::WaveFormat) == 0x18, "Size mismatch!");

} // namespace end def NAudio::Wave
