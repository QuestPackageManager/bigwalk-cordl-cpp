#pragma once
// IWYU pragma private; include "GlobalNamespace/OfflineMicMeter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OfflineMicMeter)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class OfflineMicMeter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OfflineMicMeter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OfflineMicMeter*, "", "OfflineMicMeter");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OfflineMicMeter
class CORDL_TYPE OfflineMicMeter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CurrentClip)) ::UnityW<::UnityEngine::AudioClip>  CurrentClip;

/// @brief Field amplitude, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_amplitude, put=__cordl_internal_set_amplitude)) float_t  amplitude;

/// @brief Field buffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<float_t>  buffer;

/// @brief Field logVerbose, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field maxOnDevice, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxOnDevice, put=__cordl_internal_set_maxOnDevice)) float_t  maxOnDevice;

/// @brief Field playingDeviceName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playingDeviceName, put=__cordl_internal_set_playingDeviceName)) ::StringW  playingDeviceName;

/// @brief Field wasRecording, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasRecording, put=__cordl_internal_set_wasRecording)) bool  wasRecording;

/// @brief Method LevelAvg, addr 0x180427800, size 0x150, virtual false, abstract: false, final false
inline float_t LevelAvg() ;

/// @brief Method LevelMax, addr 0x180427950, size 0x120, virtual false, abstract: false, final false
inline float_t LevelMax() ;

static inline ::GlobalNamespace::OfflineMicMeter* New_ctor() ;

/// @brief Method OnDisable, addr 0x180427a70, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180427a90, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StartMicrophone, addr 0x180427aa0, size 0xa0, virtual false, abstract: false, final false
inline void StartMicrophone() ;

/// @brief Method StopMicrophone, addr 0x180427b40, size 0x30, virtual false, abstract: false, final false
inline void StopMicrophone(bool  forceStop) ;

/// @brief Method Update, addr 0x180427b70, size 0x200, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_amplitude() const;

constexpr float_t& __cordl_internal_get_amplitude() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_buffer() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr float_t const& __cordl_internal_get_maxOnDevice() const;

constexpr float_t& __cordl_internal_get_maxOnDevice() ;

constexpr ::StringW const& __cordl_internal_get_playingDeviceName() const;

constexpr ::StringW& __cordl_internal_get_playingDeviceName() ;

constexpr bool const& __cordl_internal_get_wasRecording() const;

constexpr bool& __cordl_internal_get_wasRecording() ;

constexpr void __cordl_internal_set_amplitude(float_t  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_maxOnDevice(float_t  value) ;

constexpr void __cordl_internal_set_playingDeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_wasRecording(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentClip, addr 0x180427d70, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_CurrentClip() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OfflineMicMeter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OfflineMicMeter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OfflineMicMeter(OfflineMicMeter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OfflineMicMeter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OfflineMicMeter(OfflineMicMeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5238};

/// @brief Field amplitude, offset: 0x20, size: 0x4, def value: None
 float_t  ___amplitude;

/// @brief Field logVerbose, offset: 0x24, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playingDeviceName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___playingDeviceName;

/// @brief Field maxOnDevice, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxOnDevice;

/// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___buffer;

/// @brief Field wasRecording, offset: 0x40, size: 0x1, def value: None
 bool  ___wasRecording;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OfflineMicMeter, ___amplitude) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfflineMicMeter, ___logVerbose) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfflineMicMeter, ___playingDeviceName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfflineMicMeter, ___maxOnDevice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfflineMicMeter, ___buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OfflineMicMeter, ___wasRecording) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OfflineMicMeter) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
