#pragma once
// IWYU pragma private; include "UnityEngine/AudioLowPassFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLowPassFilter)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AudioLowPassFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioLowPassFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioLowPassFilter
class CORDL_TYPE AudioLowPassFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_cutoffFrequency, put=set_cutoffFrequency)) float_t  cutoffFrequency;

 __declspec(property(put=set_lowpassResonanceQ)) float_t  lowpassResonanceQ;

static inline ::UnityEngine::AudioLowPassFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_cutoffFrequency, addr 0x182239ba0, size 0x30, virtual false, abstract: false, final false
inline float_t get_cutoffFrequency() ;

/// @brief Method get_cutoffFrequency_Injected, addr 0x182239b90, size 0x10, virtual false, abstract: false, final false
static inline float_t get_cutoffFrequency_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_cutoffFrequency, addr 0x182239be0, size 0x40, virtual false, abstract: false, final false
inline void set_cutoffFrequency(float_t  value) ;

/// @brief Method set_cutoffFrequency_Injected, addr 0x182239bd0, size 0x10, virtual false, abstract: false, final false
static inline void set_cutoffFrequency_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_lowpassResonanceQ, addr 0x182239c30, size 0x40, virtual false, abstract: false, final false
inline void set_lowpassResonanceQ(float_t  value) ;

/// @brief Method set_lowpassResonanceQ_Injected, addr 0x182239c20, size 0x10, virtual false, abstract: false, final false
static inline void set_lowpassResonanceQ_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioLowPassFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLowPassFilter(AudioLowPassFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLowPassFilter(AudioLowPassFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioLowPassFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
