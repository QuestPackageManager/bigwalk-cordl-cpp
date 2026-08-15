#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLayerContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioLayerContainer)
namespace GlobalNamespace {
struct AudioLayerContainer_LayerType;
}
namespace GlobalNamespace {
class AudioLayer;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class IAudioVolume;
}
namespace GlobalNamespace {
class ISoundBankable;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioLayerContainer_LayerType;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioLayerContainer_LayerType);
MARK_REF_T(::GlobalNamespace::AudioLayerContainer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioLayerContainer_LayerType, "", "AudioLayerContainer/LayerType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioLayerContainer*, "", "AudioLayerContainer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioLayerContainer/LayerType
struct CORDL_TYPE AudioLayerContainer_LayerType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioLayerContainer_LayerType_Unwrapped
enum struct __AudioLayerContainer_LayerType_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_Loop = static_cast<int32_t>(0x1),
__E_Tail = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioLayerContainer_LayerType_Unwrapped () const noexcept {
return static_cast<__AudioLayerContainer_LayerType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioLayerContainer_LayerType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioLayerContainer_LayerType(int32_t  value__) noexcept;

/// @brief Field Head value: I32(0)
static ::GlobalNamespace::AudioLayerContainer_LayerType const Head;

/// @brief Field Loop value: I32(1)
static ::GlobalNamespace::AudioLayerContainer_LayerType const Loop;

/// @brief Field Tail value: I32(2)
static ::GlobalNamespace::AudioLayerContainer_LayerType const Tail;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioLayerContainer_LayerType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioLayerContainer_LayerType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioAsset, AudioLayer
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioLayerContainer
class CORDL_TYPE AudioLayerContainer : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
using LayerType = ::GlobalNamespace::AudioLayerContainer_LayerType;

/// @brief Field Heads, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Heads, put=__cordl_internal_set_Heads)) ::ArrayW<::GlobalNamespace::AudioLayer*>  Heads;

 __declspec(property(get=get_IntensityDriven)) bool  IntensityDriven;

 __declspec(property(get=get_LoopDelay)) float_t  LoopDelay;

/// @brief Field Loops, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Loops, put=__cordl_internal_set_Loops)) ::ArrayW<::GlobalNamespace::AudioLayer*>  Loops;

 __declspec(property(get=get_MaxIntensity)) float_t  MaxIntensity;

 __declspec(property(get=get_MinIntensity)) float_t  MinIntensity;

 __declspec(property(get=get_SyncRandom)) bool  SyncRandom;

/// @brief Field Tails, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tails, put=__cordl_internal_set_Tails)) ::ArrayW<::GlobalNamespace::AudioLayer*>  Tails;

/// @brief Field Volume, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) ::GlobalNamespace::AudioVolume*  Volume;

/// @brief Field _intensityDriven, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__intensityDriven, put=__cordl_internal_set__intensityDriven)) bool  _intensityDriven;

/// @brief Field _loopDelay, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__loopDelay, put=__cordl_internal_set__loopDelay)) float_t  _loopDelay;

/// @brief Field _maxIntensity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxIntensity, put=__cordl_internal_set__maxIntensity)) float_t  _maxIntensity;

/// @brief Field _minIntensity, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minIntensity, put=__cordl_internal_set__minIntensity)) float_t  _minIntensity;

/// @brief Field _syncRandom, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__syncRandom, put=__cordl_internal_set__syncRandom)) bool  _syncRandom;

/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr operator  ::GlobalNamespace::ISoundBankable*() noexcept;

/// @brief Method CheckValidity, addr 0x18047b450, size 0x1d0, virtual false, abstract: false, final false
inline void CheckValidity(::ArrayW<::GlobalNamespace::AudioLayer*>  layers, ::GlobalNamespace::AudioLayerContainer_LayerType  type) ;

/// @brief Method GetDeterministicIndex, addr 0x18047b620, size 0x40, virtual false, abstract: false, final false
inline int32_t GetDeterministicIndex(int32_t  randInt, int32_t  length) ;

/// @brief Method GetNormalizedIntensity, addr 0x18047b660, size 0x40, virtual false, abstract: false, final false
inline float_t GetNormalizedIntensity(float_t  rawIntensity) ;

/// @brief Method GetVolume, addr 0x18047b6a0, size 0x140, virtual false, abstract: false, final false
inline ::GlobalNamespace::IAudioVolume* GetVolume(::GlobalNamespace::AudioLayer*  layer, float_t  rawIntensity, ::GlobalNamespace::AudioVolume*  volume) ;

/// @brief Method InRange, addr 0x18047b7e0, size 0xa0, virtual false, abstract: false, final false
inline bool InRange(::GlobalNamespace::AudioLayer*  layer, float_t  rawIntensity) ;

/// @brief Method InRange, addr 0x18047b880, size 0x160, virtual false, abstract: false, final false
inline bool InRange(::GlobalNamespace::AudioLayerContainer_LayerType  type, int32_t  index, float_t  rawIntensity) ;

static inline ::GlobalNamespace::AudioLayerContainer* New_ctor() ;

/// @brief Method OnValidate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::ArrayW<::GlobalNamespace::AudioLayer*> const& __cordl_internal_get_Heads() const;

constexpr ::ArrayW<::GlobalNamespace::AudioLayer*>& __cordl_internal_get_Heads() ;

constexpr ::ArrayW<::GlobalNamespace::AudioLayer*> const& __cordl_internal_get_Loops() const;

constexpr ::ArrayW<::GlobalNamespace::AudioLayer*>& __cordl_internal_get_Loops() ;

constexpr ::ArrayW<::GlobalNamespace::AudioLayer*> const& __cordl_internal_get_Tails() const;

constexpr ::ArrayW<::GlobalNamespace::AudioLayer*>& __cordl_internal_get_Tails() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get_Volume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get_Volume() ;

constexpr bool const& __cordl_internal_get__intensityDriven() const;

constexpr bool& __cordl_internal_get__intensityDriven() ;

constexpr float_t const& __cordl_internal_get__loopDelay() const;

constexpr float_t& __cordl_internal_get__loopDelay() ;

constexpr float_t const& __cordl_internal_get__maxIntensity() const;

constexpr float_t& __cordl_internal_get__maxIntensity() ;

constexpr float_t const& __cordl_internal_get__minIntensity() const;

constexpr float_t& __cordl_internal_get__minIntensity() ;

constexpr bool const& __cordl_internal_get__syncRandom() const;

constexpr bool& __cordl_internal_get__syncRandom() ;

constexpr void __cordl_internal_set_Heads(::ArrayW<::GlobalNamespace::AudioLayer*>  value) ;

constexpr void __cordl_internal_set_Loops(::ArrayW<::GlobalNamespace::AudioLayer*>  value) ;

constexpr void __cordl_internal_set_Tails(::ArrayW<::GlobalNamespace::AudioLayer*>  value) ;

constexpr void __cordl_internal_set_Volume(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__intensityDriven(bool  value) ;

constexpr void __cordl_internal_set__loopDelay(float_t  value) ;

constexpr void __cordl_internal_set__maxIntensity(float_t  value) ;

constexpr void __cordl_internal_set__minIntensity(float_t  value) ;

constexpr void __cordl_internal_set__syncRandom(bool  value) ;

/// @brief Method .ctor, addr 0x18047b9e0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IntensityDriven, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IntensityDriven() ;

/// @brief Method get_LoopDelay, addr 0x1802f80d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_LoopDelay() ;

/// @brief Method get_MaxIntensity, addr 0x1802f42b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxIntensity() ;

/// @brief Method get_MinIntensity, addr 0x1802f80a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinIntensity() ;

/// @brief Method get_SyncRandom, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool get_SyncRandom() ;

/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* i___GlobalNamespace__ISoundBankable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioLayerContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioLayerContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLayerContainer(AudioLayerContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLayerContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLayerContainer(AudioLayerContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17523};

/// @brief Field _intensityDriven, offset: 0x18, size: 0x1, def value: None
 bool  ____intensityDriven;

/// @brief Field _minIntensity, offset: 0x1c, size: 0x4, def value: None
 float_t  ____minIntensity;

/// @brief Field _maxIntensity, offset: 0x20, size: 0x4, def value: None
 float_t  ____maxIntensity;

/// @brief Field _loopDelay, offset: 0x24, size: 0x4, def value: None
 float_t  ____loopDelay;

/// @brief Field Heads, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioLayer*>  ___Heads;

/// @brief Field Loops, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioLayer*>  ___Loops;

/// @brief Field Tails, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioLayer*>  ___Tails;

/// @brief Field Volume, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ___Volume;

/// @brief Field _syncRandom, offset: 0x48, size: 0x1, def value: None
 bool  ____syncRandom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ____intensityDriven) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ____minIntensity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ____maxIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ____loopDelay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ___Heads) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ___Loops) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ___Tails) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ___Volume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayerContainer, ____syncRandom) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioLayerContainer) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
