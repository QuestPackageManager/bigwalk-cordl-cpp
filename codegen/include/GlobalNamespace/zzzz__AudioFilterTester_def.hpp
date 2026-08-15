#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterTester.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioFilterTester)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioFilterTester;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioFilterTester*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioFilterTester*, "", "AudioFilterTester");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioFilterTester
class CORDL_TYPE AudioFilterTester : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Asset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asset, put=__cordl_internal_set_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field Frequency, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Frequency, put=__cordl_internal_set_Frequency)) float_t  Frequency;

/// @brief Field PositionOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_PositionOffset, put=__cordl_internal_set_PositionOffset)) ::UnityEngine::Vector3  PositionOffset;

/// @brief Field Q, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Q, put=__cordl_internal_set_Q)) float_t  Q;

/// @brief Field Volume, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

/// @brief Field _asc, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__asc, put=__cordl_internal_set__asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  _asc;

static inline ::GlobalNamespace::AudioFilterTester* New_ctor() ;

/// @brief Method OnDisable, addr 0x180329e40, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180329e90, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x180329ea0, size 0x290, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Stop, addr 0x180329e40, size 0x50, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method <Play>g___clearRef|8_0, addr 0x18032a130, size 0x50, virtual false, abstract: false, final false
static inline void _Play_g___clearRef_8_0(::GlobalNamespace::AudioFilterTester*  t, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Asset() ;

constexpr float_t const& __cordl_internal_get_Frequency() const;

constexpr float_t& __cordl_internal_get_Frequency() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PositionOffset() ;

constexpr float_t const& __cordl_internal_get_Q() const;

constexpr float_t& __cordl_internal_get_Q() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__asc() ;

constexpr void __cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Frequency(float_t  value) ;

constexpr void __cordl_internal_set_PositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Q(float_t  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

constexpr void __cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

/// @brief Method .ctor, addr 0x18032a180, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioFilterTester() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioFilterTester", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioFilterTester(AudioFilterTester && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioFilterTester", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioFilterTester(AudioFilterTester const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4806};

/// @brief Field Asset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Asset;

/// @brief Field PositionOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PositionOffset;

/// @brief Field Q, offset: 0x34, size: 0x4, def value: None
 float_t  ___Q;

/// @brief Field Frequency, offset: 0x38, size: 0x4, def value: None
 float_t  ___Frequency;

/// @brief Field Volume, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Volume;

/// @brief Field _asc, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____asc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioFilterTester, ___Asset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFilterTester, ___PositionOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFilterTester, ___Q) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFilterTester, ___Frequency) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFilterTester, ___Volume) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioFilterTester, ____asc) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioFilterTester) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
