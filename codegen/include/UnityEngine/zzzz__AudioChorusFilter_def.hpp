#pragma once
// IWYU pragma private; include "UnityEngine/AudioChorusFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioChorusFilter)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class AudioChorusFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioChorusFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioChorusFilter*, "UnityEngine", "AudioChorusFilter");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioChorusFilter
class CORDL_TYPE AudioChorusFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(put=set_delay)) float_t  delay;

 __declspec(property(put=set_depth)) float_t  depth;

 __declspec(property(put=set_dryMix)) float_t  dryMix;

 __declspec(property(put=set_rate)) float_t  rate;

 __declspec(property(put=set_wetMix1)) float_t  wetMix1;

 __declspec(property(put=set_wetMix2)) float_t  wetMix2;

 __declspec(property(put=set_wetMix3)) float_t  wetMix3;

static inline ::UnityEngine::AudioChorusFilter* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method set_delay, addr 0x182238610, size 0x40, virtual false, abstract: false, final false
inline void set_delay(float_t  value) ;

/// @brief Method set_delay_Injected, addr 0x182238600, size 0x10, virtual false, abstract: false, final false
static inline void set_delay_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_depth, addr 0x182238660, size 0x40, virtual false, abstract: false, final false
inline void set_depth(float_t  value) ;

/// @brief Method set_depth_Injected, addr 0x182238650, size 0x10, virtual false, abstract: false, final false
static inline void set_depth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_dryMix, addr 0x1822386b0, size 0x40, virtual false, abstract: false, final false
inline void set_dryMix(float_t  value) ;

/// @brief Method set_dryMix_Injected, addr 0x1822386a0, size 0x10, virtual false, abstract: false, final false
static inline void set_dryMix_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_rate, addr 0x182238700, size 0x40, virtual false, abstract: false, final false
inline void set_rate(float_t  value) ;

/// @brief Method set_rate_Injected, addr 0x1822386f0, size 0x10, virtual false, abstract: false, final false
static inline void set_rate_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_wetMix1, addr 0x182238750, size 0x40, virtual false, abstract: false, final false
inline void set_wetMix1(float_t  value) ;

/// @brief Method set_wetMix1_Injected, addr 0x182238740, size 0x10, virtual false, abstract: false, final false
static inline void set_wetMix1_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_wetMix2, addr 0x1822387a0, size 0x40, virtual false, abstract: false, final false
inline void set_wetMix2(float_t  value) ;

/// @brief Method set_wetMix2_Injected, addr 0x182238790, size 0x10, virtual false, abstract: false, final false
static inline void set_wetMix2_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_wetMix3, addr 0x1822387f0, size 0x40, virtual false, abstract: false, final false
inline void set_wetMix3(float_t  value) ;

/// @brief Method set_wetMix3_Injected, addr 0x1822387e0, size 0x10, virtual false, abstract: false, final false
static inline void set_wetMix3_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioChorusFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioChorusFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioChorusFilter(AudioChorusFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioChorusFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioChorusFilter(AudioChorusFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20473};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioChorusFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
