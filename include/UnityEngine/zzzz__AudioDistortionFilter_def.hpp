#pragma once
// IWYU pragma private; include "UnityEngine/AudioDistortionFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioDistortionFilter)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AudioDistortionFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioDistortionFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioDistortionFilter*, "UnityEngine", "AudioDistortionFilter");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioDistortionFilter
class CORDL_TYPE AudioDistortionFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_distortionLevel)) float_t  distortionLevel;

static inline ::UnityEngine::AudioDistortionFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_distortionLevel, addr 0x1822397b0, size 0x40, virtual false, abstract: false, final false
inline void set_distortionLevel(float_t  value) ;

/// @brief Method set_distortionLevel_Injected, addr 0x1822397a0, size 0x10, virtual false, abstract: false, final false
static inline void set_distortionLevel_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDistortionFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDistortionFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDistortionFilter(AudioDistortionFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDistortionFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDistortionFilter(AudioDistortionFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioDistortionFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
