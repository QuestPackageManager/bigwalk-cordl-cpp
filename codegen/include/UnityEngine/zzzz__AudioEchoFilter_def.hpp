#pragma once
// IWYU pragma private; include "UnityEngine/AudioEchoFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioEchoFilter)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AudioEchoFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioEchoFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioEchoFilter*, "UnityEngine", "AudioEchoFilter");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioEchoFilter
class CORDL_TYPE AudioEchoFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_decayRatio)) float_t  decayRatio;

 __declspec(property(put=set_delay)) float_t  delay;

 __declspec(property(put=set_dryMix)) float_t  dryMix;

 __declspec(property(put=set_wetMix)) float_t  wetMix;

static inline ::UnityEngine::AudioEchoFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_decayRatio, addr 0x182239800, size 0x40, virtual false, abstract: false, final false
inline void set_decayRatio(float_t  value) ;

/// @brief Method set_decayRatio_Injected, addr 0x1822397f0, size 0x10, virtual false, abstract: false, final false
static inline void set_decayRatio_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_delay, addr 0x182239850, size 0x40, virtual false, abstract: false, final false
inline void set_delay(float_t  value) ;

/// @brief Method set_delay_Injected, addr 0x182239840, size 0x10, virtual false, abstract: false, final false
static inline void set_delay_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_dryMix, addr 0x1822398a0, size 0x40, virtual false, abstract: false, final false
inline void set_dryMix(float_t  value) ;

/// @brief Method set_dryMix_Injected, addr 0x182239890, size 0x10, virtual false, abstract: false, final false
static inline void set_dryMix_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_wetMix, addr 0x1822398f0, size 0x40, virtual false, abstract: false, final false
inline void set_wetMix(float_t  value) ;

/// @brief Method set_wetMix_Injected, addr 0x1822398e0, size 0x10, virtual false, abstract: false, final false
static inline void set_wetMix_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEchoFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEchoFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEchoFilter(AudioEchoFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEchoFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEchoFilter(AudioEchoFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioEchoFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
