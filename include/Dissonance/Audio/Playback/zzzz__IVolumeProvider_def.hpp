#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/IVolumeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IVolumeProvider)
// Forward declare root types
namespace Dissonance::Audio::Playback {
class IVolumeProvider;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::IVolumeProvider*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::IVolumeProvider*, "Dissonance.Audio.Playback", "IVolumeProvider");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.IVolumeProvider
class CORDL_TYPE IVolumeProvider {
public:
// Declarations
 __declspec(property(get=get_TargetVolume)) float_t  TargetVolume;

/// @brief Method get_TargetVolume, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_TargetVolume() ;

// Ctor Parameters [CppParam { name: "", ty: "IVolumeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVolumeProvider(IVolumeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16994};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Playback
