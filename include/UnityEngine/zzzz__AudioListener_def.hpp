#pragma once
// IWYU pragma private; include "UnityEngine/AudioListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioListener)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct AudioVelocityUpdateMode;
}
namespace UnityEngine {
struct FFTWindow;
}
// Forward declare root types
namespace UnityEngine {
class AudioListener;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioListener*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioListener*, "UnityEngine", "AudioListener");
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioListener
class CORDL_TYPE AudioListener : public ::UnityEngine::AudioBehaviour {
public:
// Declarations
 __declspec(property(put=set_velocityUpdateMode)) ::UnityEngine::AudioVelocityUpdateMode  velocityUpdateMode;

/// @brief Method GetOutputData, addr 0x182239a80, size 0x10, virtual false, abstract: false, final false
static inline void GetOutputData(::ArrayW<float_t>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper, addr 0x1822399e0, size 0xa0, virtual false, abstract: false, final false
static inline void GetOutputDataHelper(::by_ref<::ArrayW<float_t>>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper_Injected, addr 0x1822399d0, size 0x10, virtual false, abstract: false, final false
static inline void GetOutputDataHelper_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel) ;

/// @brief Method GetSpectrumData, addr 0x182239b40, size 0x10, virtual false, abstract: false, final false
static inline void GetSpectrumData(::ArrayW<float_t>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper, addr 0x182239aa0, size 0xa0, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper(::by_ref<::ArrayW<float_t>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper_Injected, addr 0x182239a90, size 0x10, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

static inline ::UnityEngine::AudioListener* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_velocityUpdateMode, addr 0x182239b60, size 0x30, virtual false, abstract: false, final false
inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode  value) ;

/// @brief Method set_velocityUpdateMode_Injected, addr 0x182239b50, size 0x10, virtual false, abstract: false, final false
static inline void set_velocityUpdateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioVelocityUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioListener(AudioListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioListener(AudioListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20467};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioListener) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
