#pragma once
// IWYU pragma private; include "GlobalNamespace/VoltageControlledAmplifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoltageControlledAmplifier)
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class IVirtualizable;
}
namespace GlobalNamespace {
struct VoiceLimitBehaviorType;
}
namespace GlobalNamespace {
struct VoltageControlledAmplifier_VolumeType;
}
// Forward declare root types
namespace GlobalNamespace {
struct VoltageControlledAmplifier_VolumeType;
}
namespace GlobalNamespace {
class VoltageControlledAmplifier;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoltageControlledAmplifier_VolumeType);
MARK_REF_T(::GlobalNamespace::VoltageControlledAmplifier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoltageControlledAmplifier_VolumeType, "", "VoltageControlledAmplifier/VolumeType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoltageControlledAmplifier*, "", "VoltageControlledAmplifier");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: VoltageControlledAmplifier/VolumeType
struct CORDL_TYPE VoltageControlledAmplifier_VolumeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VoltageControlledAmplifier_VolumeType_Unwrapped
enum struct __VoltageControlledAmplifier_VolumeType_Unwrapped : int32_t {
__E_Attenuation = static_cast<int32_t>(0x0),
__E_RTPC = static_cast<int32_t>(0x1),
__E_Final = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VoltageControlledAmplifier_VolumeType_Unwrapped () const noexcept {
return static_cast<__VoltageControlledAmplifier_VolumeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VoltageControlledAmplifier_VolumeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VoltageControlledAmplifier_VolumeType(int32_t  value__) noexcept;

/// @brief Field Attenuation value: I32(0)
static ::GlobalNamespace::VoltageControlledAmplifier_VolumeType const Attenuation;

/// @brief Field Final value: I32(2)
static ::GlobalNamespace::VoltageControlledAmplifier_VolumeType const Final;

/// @brief Field RTPC value: I32(1)
static ::GlobalNamespace::VoltageControlledAmplifier_VolumeType const RTPC;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17643};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier_VolumeType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoltageControlledAmplifier_VolumeType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioAsset, VoiceLimitBehaviorType, VoltageControlledAmplifier::VolumeType
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoltageControlledAmplifier
class CORDL_TYPE VoltageControlledAmplifier : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
using VolumeType = ::GlobalNamespace::VoltageControlledAmplifier_VolumeType;

 __declspec(property(get=get_CachedSum, put=set_CachedSum)) float_t  CachedSum;

 __declspec(property(get=get_Cooldown)) float_t  Cooldown;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_NormalizeAgainstSum)) float_t  NormalizeAgainstSum;

 __declspec(property(get=get_Normalizer, put=set_Normalizer)) ::GlobalNamespace::AudioVolume*  Normalizer;

 __declspec(property(get=get_VoiceLimit)) int32_t  VoiceLimit;

 __declspec(property(get=get_VoiceLimitBehavior)) ::GlobalNamespace::VoiceLimitBehaviorType  VoiceLimitBehavior;

 __declspec(property(get=get_Volume)) ::GlobalNamespace::AudioVolume*  Volume;

 __declspec(property(get=get_VolumeMode)) ::GlobalNamespace::VoltageControlledAmplifier_VolumeType  VolumeMode;

/// @brief Field <CachedSum>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__CachedSum_k__BackingField, put=__cordl_internal_set__CachedSum_k__BackingField)) float_t  _CachedSum_k__BackingField;

/// @brief Field <Initialized>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field <Normalizer>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Normalizer_k__BackingField, put=__cordl_internal_set__Normalizer_k__BackingField)) ::GlobalNamespace::AudioVolume*  _Normalizer_k__BackingField;

/// @brief Field _cachedVolume, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedVolume, put=__cordl_internal_set__cachedVolume)) float_t  _cachedVolume;

/// @brief Field _cooldown, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldown, put=__cordl_internal_set__cooldown)) float_t  _cooldown;

/// @brief Field _normalizeAgainstSum, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalizeAgainstSum, put=__cordl_internal_set__normalizeAgainstSum)) float_t  _normalizeAgainstSum;

/// @brief Field _voiceLimit, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceLimit, put=__cordl_internal_set__voiceLimit)) int32_t  _voiceLimit;

/// @brief Field _voiceLimitBehavior, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceLimitBehavior, put=__cordl_internal_set__voiceLimitBehavior)) ::GlobalNamespace::VoiceLimitBehaviorType  _voiceLimitBehavior;

/// @brief Field _volume, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) ::GlobalNamespace::AudioVolume*  _volume;

/// @brief Field _volumeMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__volumeMode, put=__cordl_internal_set__volumeMode)) ::GlobalNamespace::VoltageControlledAmplifier_VolumeType  _volumeMode;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVirtualizable"
constexpr operator  ::GlobalNamespace::IVirtualizable*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1804a6f30, size 0x10, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method CalculateNormalizer, addr 0x1804a6f40, size 0x2a0, virtual false, abstract: false, final false
inline void CalculateNormalizer(float_t  deltaTime) ;

static inline ::GlobalNamespace::VoltageControlledAmplifier* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804a71e0, size 0xe0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RegisterASC, addr 0x1804a72c0, size 0x110, virtual false, abstract: false, final false
inline void RegisterASC(::GlobalNamespace::AudioSourceController*  asc) ;

/// @brief Method <RegisterASC>g___deregister|35_0, addr 0x1804a73d0, size 0xb0, virtual false, abstract: false, final false
static inline void _RegisterASC_g___deregister_35_0(::GlobalNamespace::VoltageControlledAmplifier*  v, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr float_t const& __cordl_internal_get__CachedSum_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CachedSum_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__Normalizer_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__Normalizer_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__cachedVolume() const;

constexpr float_t& __cordl_internal_get__cachedVolume() ;

constexpr float_t const& __cordl_internal_get__cooldown() const;

constexpr float_t& __cordl_internal_get__cooldown() ;

constexpr float_t const& __cordl_internal_get__normalizeAgainstSum() const;

constexpr float_t& __cordl_internal_get__normalizeAgainstSum() ;

constexpr int32_t const& __cordl_internal_get__voiceLimit() const;

constexpr int32_t& __cordl_internal_get__voiceLimit() ;

constexpr ::GlobalNamespace::VoiceLimitBehaviorType const& __cordl_internal_get__voiceLimitBehavior() const;

constexpr ::GlobalNamespace::VoiceLimitBehaviorType& __cordl_internal_get__voiceLimitBehavior() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__volume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__volume() ;

constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType const& __cordl_internal_get__volumeMode() const;

constexpr ::GlobalNamespace::VoltageControlledAmplifier_VolumeType& __cordl_internal_get__volumeMode() ;

constexpr void __cordl_internal_set__CachedSum_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Normalizer_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__cachedVolume(float_t  value) ;

constexpr void __cordl_internal_set__cooldown(float_t  value) ;

constexpr void __cordl_internal_set__normalizeAgainstSum(float_t  value) ;

constexpr void __cordl_internal_set__voiceLimit(int32_t  value) ;

constexpr void __cordl_internal_set__voiceLimitBehavior(::GlobalNamespace::VoiceLimitBehaviorType  value) ;

constexpr void __cordl_internal_set__volume(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__volumeMode(::GlobalNamespace::VoltageControlledAmplifier_VolumeType  value) ;

/// @brief Method .ctor, addr 0x1804a7480, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CachedSum, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_CachedSum() ;

/// @brief Method get_Cooldown, addr 0x1802e2da0, size 0x10, virtual true, abstract: false, final true
inline float_t get_Cooldown() ;

/// @brief Method get_Initialized, addr 0x180468800, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Method get_NormalizeAgainstSum, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_NormalizeAgainstSum() ;

/// @brief Method get_Normalizer, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_Normalizer() ;

/// @brief Method get_VoiceLimit, addr 0x1803914b0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_VoiceLimit() ;

/// @brief Method get_VoiceLimitBehavior, addr 0x1802e2ba0, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::VoiceLimitBehaviorType get_VoiceLimitBehavior() ;

/// @brief Method get_Volume, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_Volume() ;

/// @brief Method get_VolumeMode, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::VoltageControlledAmplifier_VolumeType get_VolumeMode() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

/// @brief Convert to "::GlobalNamespace::IVirtualizable"
constexpr ::GlobalNamespace::IVirtualizable* i___GlobalNamespace__IVirtualizable() noexcept;

/// @brief Method set_CachedSum, addr 0x1802e2f60, size 0x10, virtual false, abstract: false, final false
inline void set_CachedSum(float_t  value) ;

/// @brief Method set_Initialized, addr 0x180468810, size 0x10, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

/// @brief Method set_Normalizer, addr 0x1802d9840, size 0x10, virtual false, abstract: false, final false
inline void set_Normalizer(::GlobalNamespace::AudioVolume*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoltageControlledAmplifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoltageControlledAmplifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoltageControlledAmplifier(VoltageControlledAmplifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoltageControlledAmplifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoltageControlledAmplifier(VoltageControlledAmplifier const& ) = delete;

/// @brief Field LERP_SPEED offset 0xffffffff size 0x4
static constexpr float_t  LERP_SPEED{static_cast<float_t>(5.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17644};

/// @brief Field _volume, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____volume;

/// @brief Field _normalizeAgainstSum, offset: 0x20, size: 0x4, def value: None
 float_t  ____normalizeAgainstSum;

/// @brief Field _volumeMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::VoltageControlledAmplifier_VolumeType  ____volumeMode;

/// @brief Field _cachedVolume, offset: 0x28, size: 0x4, def value: None
 float_t  ____cachedVolume;

/// @brief Field _voiceLimit, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____voiceLimit;

/// @brief Field _voiceLimitBehavior, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::VoiceLimitBehaviorType  ____voiceLimitBehavior;

/// @brief Field _cooldown, offset: 0x34, size: 0x4, def value: None
 float_t  ____cooldown;

/// @brief Field <Normalizer>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____Normalizer_k__BackingField;

/// @brief Field <CachedSum>k__BackingField, offset: 0x40, size: 0x4, def value: None
 float_t  ____CachedSum_k__BackingField;

/// @brief Field <Initialized>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____volume) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____normalizeAgainstSum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____volumeMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____cachedVolume) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____voiceLimit) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____voiceLimitBehavior) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____cooldown) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____Normalizer_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____CachedSum_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoltageControlledAmplifier, ____Initialized_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoltageControlledAmplifier) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
