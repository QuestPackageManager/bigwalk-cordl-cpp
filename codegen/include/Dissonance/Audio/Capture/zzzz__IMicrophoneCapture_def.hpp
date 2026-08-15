#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IMicrophoneCapture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IMicrophoneCapture)
namespace Dissonance::Audio::Capture {
class IMicrophoneSubscriber;
}
namespace NAudio::Wave {
class WaveFormat;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance::Audio::Capture {
class IMicrophoneCapture;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Capture::IMicrophoneCapture*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::IMicrophoneCapture*, "Dissonance.Audio.Capture", "IMicrophoneCapture");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: false
// CS Name: Dissonance.Audio.Capture.IMicrophoneCapture
class CORDL_TYPE IMicrophoneCapture {
public:
// Declarations
 __declspec(property(get=get_Device)) ::StringW  Device;

 __declspec(property(get=get_IsRecording)) bool  IsRecording;

 __declspec(property(get=get_Latency)) ::System::TimeSpan  Latency;

/// @brief Method StartCapture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* StartCapture(::StringW  name) ;

/// @brief Method StopCapture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void StopCapture() ;

/// @brief Method Subscribe, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method Unsubscribe, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener) ;

/// @brief Method UpdateSubscribers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool UpdateSubscribers() ;

/// @brief Method get_Device, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_Device() ;

/// @brief Method get_IsRecording, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsRecording() ;

/// @brief Method get_Latency, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::TimeSpan get_Latency() ;

// Ctor Parameters [CppParam { name: "", ty: "IMicrophoneCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMicrophoneCapture(IMicrophoneCapture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Audio::Capture
