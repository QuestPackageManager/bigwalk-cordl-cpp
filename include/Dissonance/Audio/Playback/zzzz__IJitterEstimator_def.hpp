#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IJitterEstimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IJitterEstimator)
// Forward declare root types
namespace Dissonance::Audio::Playback {
class IJitterEstimator;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IJitterEstimator*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IJitterEstimator*, "Dissonance.Audio.Playback", "IJitterEstimator");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IJitterEstimator
class CORDL_TYPE IJitterEstimator {
public:
// Declarations
 __declspec(property(get=get_Confidence)) float_t  Confidence;

 __declspec(property(get=get_Jitter)) float_t  Jitter;

/// @brief Method get_Confidence, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Confidence() ;

/// @brief Method get_Jitter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Jitter() ;

// Ctor Parameters [CppParam { name: "", ty: "IJitterEstimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJitterEstimator(IJitterEstimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16988};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
