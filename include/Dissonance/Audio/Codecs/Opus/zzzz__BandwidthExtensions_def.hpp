#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Opus/BandwidthExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BandwidthExtensions)
namespace Dissonance::Audio::Codecs::Opus {
struct OpusNative_Bandwidth;
}
namespace Dissonance {
class Log;
}
// Forward declare root types
namespace Dissonance::Audio::Codecs::Opus {
class BandwidthExtensions;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Codecs::Opus::BandwidthExtensions*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Codecs::Opus::BandwidthExtensions*, "Dissonance.Audio.Codecs.Opus", "BandwidthExtensions");
// Dependencies System.Object
namespace Dissonance::Audio::Codecs::Opus {
// Is value type: false
// CS Name: Dissonance.Audio.Codecs.Opus.BandwidthExtensions
class CORDL_TYPE BandwidthExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Method SampleRate, addr 0x1805f0670, size 0x100, virtual false, abstract: false, final false
static inline int32_t SampleRate(::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth  bandwidth) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BandwidthExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BandwidthExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BandwidthExtensions(BandwidthExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BandwidthExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BandwidthExtensions(BandwidthExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Codecs::Opus::BandwidthExtensions) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Codecs::Opus
