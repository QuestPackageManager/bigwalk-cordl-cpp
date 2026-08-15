#pragma once
// IWYU pragma private; include "UnityEngine/Microphone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Microphone)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine {
class Microphone;
}
// Write type traits
MARK_REF_T(::UnityEngine::Microphone*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Microphone*, "UnityEngine", "Microphone");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Microphone
class CORDL_TYPE Microphone : public ::System::Object {
public:
// Declarations
/// @brief Method End, addr 0x18223be20, size 0x30, virtual false, abstract: false, final false
static inline void End(::StringW  deviceName) ;

/// @brief Method EndRecord, addr 0x18223be10, size 0x10, virtual false, abstract: false, final false
static inline void EndRecord(int32_t  deviceID) ;

/// @brief Method GetDeviceCaps, addr 0x18223be90, size 0x10, virtual false, abstract: false, final false
static inline void GetDeviceCaps(int32_t  deviceID, ::by_ref<int32_t>  minFreq, ::by_ref<int32_t>  maxFreq) ;

/// @brief Method GetDeviceCaps, addr 0x18223be50, size 0x40, virtual false, abstract: false, final false
static inline void GetDeviceCaps(::StringW  deviceName, ::by_ref<int32_t>  minFreq, ::by_ref<int32_t>  maxFreq) ;

/// @brief Method GetMicrophoneDeviceIDFromName, addr 0x18223beb0, size 0x110, virtual false, abstract: false, final false
static inline int32_t GetMicrophoneDeviceIDFromName(::StringW  name) ;

/// @brief Method GetMicrophoneDeviceIDFromName_Injected, addr 0x18223bea0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMicrophoneDeviceIDFromName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method GetPosition, addr 0x18223bfc0, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetPosition(::StringW  deviceName) ;

/// @brief Method GetRecordPosition, addr 0x18223bff0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetRecordPosition(int32_t  deviceID) ;

/// @brief Method IsRecording, addr 0x18223c000, size 0x10, virtual false, abstract: false, final false
static inline bool IsRecording(int32_t  deviceID) ;

/// @brief Method IsRecording, addr 0x18223c010, size 0x30, virtual false, abstract: false, final false
static inline bool IsRecording(::StringW  deviceName) ;

/// @brief Method Start, addr 0x18223c070, size 0x180, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> Start(::StringW  deviceName, bool  loop, int32_t  lengthSec, int32_t  frequency) ;

/// @brief Method StartRecord, addr 0x18223c050, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AudioClip> StartRecord(int32_t  deviceID, bool  loop, float_t  lengthSec, int32_t  frequency) ;

/// @brief Method StartRecord_Injected, addr 0x18223c040, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr StartRecord_Injected(int32_t  deviceID, bool  loop, float_t  lengthSec, int32_t  frequency) ;

/// @brief Method get_devices, addr 0x18223c1f0, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> get_devices() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Microphone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Microphone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Microphone(Microphone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Microphone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Microphone(Microphone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Microphone) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
