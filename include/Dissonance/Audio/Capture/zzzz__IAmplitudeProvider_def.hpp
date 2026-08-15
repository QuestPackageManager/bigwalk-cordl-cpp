#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IAmplitudeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAmplitudeProvider)
// Forward declare root types
namespace Dissonance::Audio::Capture {
class IAmplitudeProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::IAmplitudeProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::IAmplitudeProvider*, "Dissonance.Audio.Capture", "IAmplitudeProvider");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.IAmplitudeProvider
class CORDL_TYPE IAmplitudeProvider {
public:
// Declarations
 __declspec(property(get=get_Amplitude)) float_t  Amplitude;

/// @brief Method get_Amplitude, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Amplitude() ;

// Ctor Parameters [CppParam { name: "", ty: "IAmplitudeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAmplitudeProvider(IAmplitudeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
