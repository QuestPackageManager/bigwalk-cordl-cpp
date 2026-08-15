#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioRTPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioRTPC)
namespace GlobalNamespace {
struct AudioRTPCX;
}
namespace GlobalNamespace {
struct AudioRTPCY;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
struct AudioRTPC_YAxisType;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
struct AudioRTPC_YAxisType;
}
namespace GlobalNamespace {
class AudioRTPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioRTPC_XAxisType);
MARK_VAL_T(::GlobalNamespace::AudioRTPC_YAxisType);
MARK_REF_T(::GlobalNamespace::AudioRTPC*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPC_XAxisType, "", "AudioRTPC/XAxisType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPC_YAxisType, "", "AudioRTPC/YAxisType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioRTPC*, "", "AudioRTPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioRTPC/XAxisType
struct CORDL_TYPE AudioRTPC_XAxisType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioRTPC_XAxisType_Unwrapped
enum struct __AudioRTPC_XAxisType_Unwrapped : int32_t {
__E_ListenerDistance = static_cast<int32_t>(0x0),
__E_ScreenDistanceX = static_cast<int32_t>(0xa),
__E_ScreenDistanceY = static_cast<int32_t>(0x14),
__E_CameraDistance = static_cast<int32_t>(0x1e),
__E_PlayerDistance = static_cast<int32_t>(0x28),
__E_Distance = static_cast<int32_t>(0x32),
__E_Speed = static_cast<int32_t>(0x3c),
__E_OcclusionLevel = static_cast<int32_t>(0x46),
__E_IntersectDistance = static_cast<int32_t>(0x5a),
__E_RandomNumOnPlay = static_cast<int32_t>(0x5f),
__E_VoiceBlock = static_cast<int32_t>(0x64),
__E_Intensity = static_cast<int32_t>(0x6e),
__E_Angle = static_cast<int32_t>(0x78),
__E_Time = static_cast<int32_t>(0x82),
__E_Elevation = static_cast<int32_t>(0x8c),
__E_Scaler = static_cast<int32_t>(0x96),
__E_FaderVol = static_cast<int32_t>(0xa0),
__E_Spatial = static_cast<int32_t>(0xaa),
__E_Outdoorness = static_cast<int32_t>(0xb4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioRTPC_XAxisType_Unwrapped () const noexcept {
return static_cast<__AudioRTPC_XAxisType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPC_XAxisType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioRTPC_XAxisType(int32_t  value__) noexcept;

/// @brief Field Angle value: I32(120)
static ::GlobalNamespace::AudioRTPC_XAxisType const Angle;

/// @brief Field CameraDistance value: I32(30)
static ::GlobalNamespace::AudioRTPC_XAxisType const CameraDistance;

/// @brief Field Distance value: I32(50)
static ::GlobalNamespace::AudioRTPC_XAxisType const Distance;

/// @brief Field Elevation value: I32(140)
static ::GlobalNamespace::AudioRTPC_XAxisType const Elevation;

/// @brief Field FaderVol value: I32(160)
static ::GlobalNamespace::AudioRTPC_XAxisType const FaderVol;

/// @brief Field Intensity value: I32(110)
static ::GlobalNamespace::AudioRTPC_XAxisType const Intensity;

/// @brief Field IntersectDistance value: I32(90)
static ::GlobalNamespace::AudioRTPC_XAxisType const IntersectDistance;

/// @brief Field ListenerDistance value: I32(0)
static ::GlobalNamespace::AudioRTPC_XAxisType const ListenerDistance;

/// @brief Field OcclusionLevel value: I32(70)
static ::GlobalNamespace::AudioRTPC_XAxisType const OcclusionLevel;

/// @brief Field Outdoorness value: I32(180)
static ::GlobalNamespace::AudioRTPC_XAxisType const Outdoorness;

/// @brief Field PlayerDistance value: I32(40)
static ::GlobalNamespace::AudioRTPC_XAxisType const PlayerDistance;

/// @brief Field RandomNumOnPlay value: I32(95)
static ::GlobalNamespace::AudioRTPC_XAxisType const RandomNumOnPlay;

/// @brief Field Scaler value: I32(150)
static ::GlobalNamespace::AudioRTPC_XAxisType const Scaler;

/// @brief Field ScreenDistanceX value: I32(10)
static ::GlobalNamespace::AudioRTPC_XAxisType const ScreenDistanceX;

/// @brief Field ScreenDistanceY value: I32(20)
static ::GlobalNamespace::AudioRTPC_XAxisType const ScreenDistanceY;

/// @brief Field Spatial value: I32(170)
static ::GlobalNamespace::AudioRTPC_XAxisType const Spatial;

/// @brief Field Speed value: I32(60)
static ::GlobalNamespace::AudioRTPC_XAxisType const Speed;

/// @brief Field Time value: I32(130)
static ::GlobalNamespace::AudioRTPC_XAxisType const Time;

/// @brief Field VoiceBlock value: I32(100)
static ::GlobalNamespace::AudioRTPC_XAxisType const VoiceBlock;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17551};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPC_XAxisType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPC_XAxisType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioRTPC/YAxisType
struct CORDL_TYPE AudioRTPC_YAxisType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioRTPC_YAxisType_Unwrapped
enum struct __AudioRTPC_YAxisType_Unwrapped : int32_t {
__E_Volume = static_cast<int32_t>(0x0),
__E_Pitch = static_cast<int32_t>(0xa),
__E_Panning = static_cast<int32_t>(0x14),
__E_SpatialBlend = static_cast<int32_t>(0x1e),
__E_Spread = static_cast<int32_t>(0x28),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioRTPC_YAxisType_Unwrapped () const noexcept {
return static_cast<__AudioRTPC_YAxisType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPC_YAxisType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioRTPC_YAxisType(int32_t  value__) noexcept;

/// @brief Field Panning value: I32(20)
static ::GlobalNamespace::AudioRTPC_YAxisType const Panning;

/// @brief Field Pitch value: I32(10)
static ::GlobalNamespace::AudioRTPC_YAxisType const Pitch;

/// @brief Field SpatialBlend value: I32(30)
static ::GlobalNamespace::AudioRTPC_YAxisType const SpatialBlend;

/// @brief Field Spread value: I32(40)
static ::GlobalNamespace::AudioRTPC_YAxisType const Spread;

/// @brief Field Volume value: I32(0)
static ::GlobalNamespace::AudioRTPC_YAxisType const Volume;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17552};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPC_YAxisType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPC_YAxisType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioRTPC::XAxisType, AudioRTPC::YAxisType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioRTPC
class CORDL_TYPE AudioRTPC : public ::System::Object {
public:
// Declarations
using XAxisType = ::GlobalNamespace::AudioRTPC_XAxisType;

using YAxisType = ::GlobalNamespace::AudioRTPC_YAxisType;

/// @brief Field Curve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Curve, put=__cordl_internal_set_Curve)) ::UnityEngine::AnimationCurve*  Curve;

/// @brief Field XAxis, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_XAxis, put=__cordl_internal_set_XAxis)) ::GlobalNamespace::AudioRTPC_XAxisType  XAxis;

/// @brief Field YAxis, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_YAxis, put=__cordl_internal_set_YAxis)) ::GlobalNamespace::AudioRTPC_YAxisType  YAxis;

/// @brief Method ClampYValue, addr 0x18048c810, size 0x80, virtual false, abstract: false, final false
static inline float_t ClampYValue(::GlobalNamespace::AudioRTPC_YAxisType  yType, float_t  val) ;

/// @brief Method GetValue, addr 0x18048c890, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioRTPCY GetValue(::GlobalNamespace::AudioRTPCX  x) ;

/// @brief Method GetYDefaultValue, addr 0x18048c910, size 0x30, virtual false, abstract: false, final false
static inline float_t GetYDefaultValue(::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

static inline ::GlobalNamespace::AudioRTPC* New_ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_Curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_Curve() ;

constexpr ::GlobalNamespace::AudioRTPC_XAxisType const& __cordl_internal_get_XAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_XAxisType& __cordl_internal_get_XAxis() ;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType const& __cordl_internal_get_YAxis() const;

constexpr ::GlobalNamespace::AudioRTPC_YAxisType& __cordl_internal_get_YAxis() ;

constexpr void __cordl_internal_set_Curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_XAxis(::GlobalNamespace::AudioRTPC_XAxisType  value) ;

constexpr void __cordl_internal_set_YAxis(::GlobalNamespace::AudioRTPC_YAxisType  value) ;

/// @brief Method .ctor, addr 0x18048c940, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::GlobalNamespace::AudioRTPC_YAxisType  yType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioRTPC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioRTPC(AudioRTPC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioRTPC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioRTPC(AudioRTPC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17553};

/// @brief Field XAxis, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_XAxisType  ___XAxis;

/// @brief Field YAxis, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::AudioRTPC_YAxisType  ___YAxis;

/// @brief Field Curve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___Curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioRTPC, ___XAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPC, ___YAxis) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioRTPC, ___Curve) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioRTPC) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
