#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioOcclusionBase)
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
namespace GlobalNamespace {
class BiquadFilters;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioOcclusionBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioOcclusionBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusionBase*, "", "AudioOcclusionBase");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioOcclusionBase
class CORDL_TYPE AudioOcclusionBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Filter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Filter, put=__cordl_internal_set_Filter)) ::UnityW<::GlobalNamespace::BiquadFilters>  Filter;

 __declspec(property(get=get_OccLvl, put=set_OccLvl)) float_t  OccLvl;

 __declspec(property(get=get_VoiceBlockingLvl, put=set_VoiceBlockingLvl)) float_t  VoiceBlockingLvl;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize(::GlobalNamespace::AudioOcclusionConfig*  config) ;

static inline ::GlobalNamespace::AudioOcclusionBase* New_ctor() ;

/// @brief Method UpdateOcclusion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateOcclusion() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get_Filter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get_Filter() ;

constexpr void __cordl_internal_set_Filter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OccLvl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_OccLvl() ;

/// @brief Method get_VoiceBlockingLvl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_VoiceBlockingLvl() ;

/// @brief Method set_OccLvl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_OccLvl(float_t  value) ;

/// @brief Method set_VoiceBlockingLvl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_VoiceBlockingLvl(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusionBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOcclusionBase(AudioOcclusionBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOcclusionBase(AudioOcclusionBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17535};

/// @brief Field Filter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ___Filter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusionBase, ___Filter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusionBase) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
