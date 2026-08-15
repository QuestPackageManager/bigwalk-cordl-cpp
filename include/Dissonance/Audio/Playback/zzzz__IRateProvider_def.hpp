#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IRateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IRateProvider)
// Forward declare root types
namespace Dissonance::Audio::Playback {
class IRateProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IRateProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IRateProvider*, "Dissonance.Audio.Playback", "IRateProvider");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IRateProvider
class CORDL_TYPE IRateProvider {
public:
// Declarations
 __declspec(property(get=get_PlaybackRate)) float_t  PlaybackRate;

/// @brief Method get_PlaybackRate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_PlaybackRate() ;

// Ctor Parameters [CppParam { name: "", ty: "IRateProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRateProvider(IRateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
