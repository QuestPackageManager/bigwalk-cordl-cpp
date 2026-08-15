#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DecoderFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DecoderFactory)
namespace Dissonance::Audio::Codecs {
class IVoiceDecoder;
}
namespace Dissonance::Audio::Playback {
struct FrameFormat;
}
namespace Dissonance {
class Log;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class DecoderFactory;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::DecoderFactory*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::DecoderFactory*, "Dissonance.Audio.Playback", "DecoderFactory");
// Dependencies System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.DecoderFactory
class CORDL_TYPE DecoderFactory : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

/// @brief Method Create, addr 0x1805db860, size 0x150, virtual false, abstract: false, final false
static inline ::Dissonance::Audio::Codecs::IVoiceDecoder* Create(::Dissonance::Audio::Playback::FrameFormat  format) ;

static inline ::Dissonance::Audio::Playback::DecoderFactory* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Dissonance::Log* getStaticF_Log() ;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecoderFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecoderFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DecoderFactory(DecoderFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecoderFactory(DecoderFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Dissonance::Audio::Playback::DecoderFactory) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback
