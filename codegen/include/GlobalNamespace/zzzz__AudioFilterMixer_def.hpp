#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioFilterMixer)
namespace GlobalNamespace {
class IAudioFilter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioFilterMixer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioFilterMixer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioFilterMixer*, "", "AudioFilterMixer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioFilterMixer
class CORDL_TYPE AudioFilterMixer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Filters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Filters, put=__cordl_internal_set_Filters)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  Filters;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_SynthesizerMode, put=set_SynthesizerMode)) bool  SynthesizerMode;

/// @brief Field <SynthesizerMode>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__SynthesizerMode_k__BackingField, put=__cordl_internal_set__SynthesizerMode_k__BackingField)) bool  _SynthesizerMode_k__BackingField;

/// @brief Field _cachedData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedData, put=__cordl_internal_set__cachedData)) ::ArrayW<float_t>  _cachedData;

/// @brief Method Awake, addr 0x180499bd0, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioFilterMixer* New_ctor() ;

/// @brief Method OnAudioFilterRead, addr 0x180499c90, size 0x220, virtual false, abstract: false, final false
inline void OnAudioFilterRead(::ArrayW<float_t>  data, int32_t  channels) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>* const& __cordl_internal_get_Filters() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*& __cordl_internal_get_Filters() ;

constexpr bool const& __cordl_internal_get__SynthesizerMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__SynthesizerMode_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__cachedData() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__cachedData() ;

constexpr void __cordl_internal_set_Filters(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  value) ;

constexpr void __cordl_internal_set__SynthesizerMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__cachedData(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Initialized, addr 0x1802ed970, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_SynthesizerMode, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_SynthesizerMode() ;

/// @brief Method set_SynthesizerMode, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void set_SynthesizerMode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioFilterMixer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioFilterMixer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioFilterMixer(AudioFilterMixer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioFilterMixer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioFilterMixer(AudioFilterMixer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17598};

/// @brief Field Filters, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioFilter*>*  ___Filters;

/// @brief Field _cachedData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ____cachedData;

/// @brief Field <SynthesizerMode>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____SynthesizerMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioFilterMixer, ___Filters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFilterMixer, ____cachedData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFilterMixer, ____SynthesizerMode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioFilterMixer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
