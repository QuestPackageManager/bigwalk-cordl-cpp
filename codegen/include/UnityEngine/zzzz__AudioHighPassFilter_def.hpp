#pragma once
// IWYU pragma private; include "UnityEngine/AudioHighPassFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioHighPassFilter)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AudioHighPassFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioHighPassFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioHighPassFilter*, "UnityEngine", "AudioHighPassFilter");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioHighPassFilter
class CORDL_TYPE AudioHighPassFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_cutoffFrequency)) float_t  cutoffFrequency;

 __declspec(property(put=set_highpassResonanceQ)) float_t  highpassResonanceQ;

static inline ::UnityEngine::AudioHighPassFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_cutoffFrequency, addr 0x182239940, size 0x40, virtual false, abstract: false, final false
inline void set_cutoffFrequency(float_t  value) ;

/// @brief Method set_cutoffFrequency_Injected, addr 0x182239930, size 0x10, virtual false, abstract: false, final false
static inline void set_cutoffFrequency_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_highpassResonanceQ, addr 0x182239990, size 0x40, virtual false, abstract: false, final false
inline void set_highpassResonanceQ(float_t  value) ;

/// @brief Method set_highpassResonanceQ_Injected, addr 0x182239980, size 0x10, virtual false, abstract: false, final false
static inline void set_highpassResonanceQ_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioHighPassFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioHighPassFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioHighPassFilter(AudioHighPassFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioHighPassFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioHighPassFilter(AudioHighPassFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20470};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioHighPassFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
