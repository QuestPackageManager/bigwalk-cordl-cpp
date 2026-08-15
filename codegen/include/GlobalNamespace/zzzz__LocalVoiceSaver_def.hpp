#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoiceSaver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LocalVoiceSaver)
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace GlobalNamespace {
class AudioSampleSaver;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalVoiceSaver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalVoiceSaver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalVoiceSaver*, "", "LocalVoiceSaver");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalVoiceSaver
class CORDL_TYPE LocalVoiceSaver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _transferBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__transferBuffer, put=__cordl_internal_set__transferBuffer)) ::System::Collections::Generic::Queue_1<float_t>*  _transferBuffer;

/// @brief Field saver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_saver, put=__cordl_internal_set_saver)) ::UnityW<::GlobalNamespace::AudioSampleSaver>  saver;

/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr operator  ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData, addr 0x180394e50, size 0x130, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset() ;

static inline ::GlobalNamespace::LocalVoiceSaver* New_ctor() ;

/// @brief Method Start, addr 0x180394f80, size 0x40, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* const& __cordl_internal_get__transferBuffer() const;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get__transferBuffer() ;

constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver> const& __cordl_internal_get_saver() const;

constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver>& __cordl_internal_get_saver() ;

constexpr void __cordl_internal_set__transferBuffer(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr void __cordl_internal_set_saver(::UnityW<::GlobalNamespace::AudioSampleSaver>  value) ;

/// @brief Method .ctor, addr 0x180394fc0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoiceSaver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceSaver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoiceSaver(LocalVoiceSaver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceSaver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoiceSaver(LocalVoiceSaver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5619};

/// @brief Field saver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSampleSaver>  ___saver;

/// @brief Field _transferBuffer, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ____transferBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalVoiceSaver, ___saver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalVoiceSaver, ____transferBuffer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalVoiceSaver) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
