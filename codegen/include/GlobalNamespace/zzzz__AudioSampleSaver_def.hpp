#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSampleSaver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSampleSaver)
namespace GlobalNamespace {
class IAudioFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioSampleSaver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioSampleSaver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioSampleSaver*, "", "AudioSampleSaver");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioSampleSaver
class CORDL_TYPE AudioSampleSaver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

 __declspec(property(get=get_InternalBypass, put=set_InternalBypass)) bool  InternalBypass;

/// @brief Field _bypass, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__bypass, put=__cordl_internal_set__bypass)) bool  _bypass;

/// @brief Field _internalBypass, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__internalBypass, put=__cordl_internal_set__internalBypass)) bool  _internalBypass;

/// @brief Field channelsToBuffer, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_channelsToBuffer, put=__cordl_internal_set_channelsToBuffer)) int32_t  channelsToBuffer;

/// @brief Field clearToOne, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearToOne, put=__cordl_internal_set_clearToOne)) bool  clearToOne;

/// @brief Field flatLineSaver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatLineSaver, put=__cordl_internal_set_flatLineSaver)) ::UnityW<::GlobalNamespace::AudioSampleSaver>  flatLineSaver;

/// @brief Field saveIndex, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_saveIndex, put=__cordl_internal_set_saveIndex)) int32_t  saveIndex;

/// @brief Field savedSamples, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_savedSamples, put=__cordl_internal_set_savedSamples)) ::ArrayW<float_t>  savedSamples;

/// @brief Convert operator to "::GlobalNamespace::IAudioFilter"
constexpr operator  ::GlobalNamespace::IAudioFilter*() noexcept;

/// @brief Method AddData, addr 0x1803918d0, size 0xa0, virtual false, abstract: false, final false
inline void AddData(::ArrayW<float_t>  data) ;

/// @brief Method Awake, addr 0x180391970, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BetterModulo, addr 0x1803919b0, size 0x20, virtual false, abstract: false, final false
inline int32_t BetterModulo(int32_t  x, int32_t  m) ;

/// @brief Method Clear, addr 0x1803919d0, size 0x20, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method LoadReader, addr 0x1803919f0, size 0x100, virtual false, abstract: false, final false
inline void LoadReader(::ArrayW<float_t>  data, int32_t  channels, int32_t  delay) ;

static inline ::GlobalNamespace::AudioSampleSaver* New_ctor() ;

/// @brief Method ProcessSamples, addr 0x180391af0, size 0x140, virtual true, abstract: false, final true
inline void ProcessSamples(::by_ref<::ArrayW<float_t>>  data, int32_t  channels) ;

/// @brief Method SaveOne, addr 0x180391c30, size 0x40, virtual false, abstract: false, final false
inline void SaveOne(float_t  singleData) ;

/// @brief Method UpdateVariables, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void UpdateVariables(float_t  deltaTime) ;

constexpr bool const& __cordl_internal_get__bypass() const;

constexpr bool& __cordl_internal_get__bypass() ;

constexpr bool const& __cordl_internal_get__internalBypass() const;

constexpr bool& __cordl_internal_get__internalBypass() ;

constexpr int32_t const& __cordl_internal_get_channelsToBuffer() const;

constexpr int32_t& __cordl_internal_get_channelsToBuffer() ;

constexpr bool const& __cordl_internal_get_clearToOne() const;

constexpr bool& __cordl_internal_get_clearToOne() ;

constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver> const& __cordl_internal_get_flatLineSaver() const;

constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver>& __cordl_internal_get_flatLineSaver() ;

constexpr int32_t const& __cordl_internal_get_saveIndex() const;

constexpr int32_t& __cordl_internal_get_saveIndex() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_savedSamples() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_savedSamples() ;

constexpr void __cordl_internal_set__bypass(bool  value) ;

constexpr void __cordl_internal_set__internalBypass(bool  value) ;

constexpr void __cordl_internal_set_channelsToBuffer(int32_t  value) ;

constexpr void __cordl_internal_set_clearToOne(bool  value) ;

constexpr void __cordl_internal_set_flatLineSaver(::UnityW<::GlobalNamespace::AudioSampleSaver>  value) ;

constexpr void __cordl_internal_set_saveIndex(int32_t  value) ;

constexpr void __cordl_internal_set_savedSamples(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x180391c70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bypass, addr 0x180391c80, size 0x10, virtual true, abstract: false, final true
inline bool get_Bypass() ;

/// @brief Method get_InternalBypass, addr 0x180391c90, size 0x10, virtual true, abstract: false, final true
inline bool get_InternalBypass() ;

/// @brief Convert to "::GlobalNamespace::IAudioFilter"
constexpr ::GlobalNamespace::IAudioFilter* i___GlobalNamespace__IAudioFilter() noexcept;

/// @brief Method set_Bypass, addr 0x180391ca0, size 0x10, virtual true, abstract: false, final true
inline void set_Bypass(bool  value) ;

/// @brief Method set_InternalBypass, addr 0x180391cb0, size 0x10, virtual true, abstract: false, final true
inline void set_InternalBypass(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSampleSaver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleSaver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSampleSaver(AudioSampleSaver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSampleSaver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSampleSaver(AudioSampleSaver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5618};

/// @brief Field flatLineSaver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSampleSaver>  ___flatLineSaver;

/// @brief Field clearToOne, offset: 0x28, size: 0x1, def value: None
 bool  ___clearToOne;

/// @brief Field savedSamples, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ___savedSamples;

/// @brief Field channelsToBuffer, offset: 0x38, size: 0x4, def value: None
 int32_t  ___channelsToBuffer;

/// @brief Field saveIndex, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___saveIndex;

/// @brief Field _internalBypass, offset: 0x40, size: 0x1, def value: None
 bool  ____internalBypass;

/// @brief Field _bypass, offset: 0x41, size: 0x1, def value: None
 bool  ____bypass;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioSampleSaver, ___flatLineSaver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSampleSaver, ___clearToOne) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSampleSaver, ___savedSamples) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSampleSaver, ___channelsToBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSampleSaver, ___saveIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSampleSaver, ____internalBypass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioSampleSaver, ____bypass) == 0x41, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioSampleSaver) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
