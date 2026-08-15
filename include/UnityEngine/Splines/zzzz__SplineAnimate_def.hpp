#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineAnimate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__SplineComponent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineAnimate)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace UnityEngine::Splines {
struct SplineAnimate_AlignmentMode;
}
namespace UnityEngine::Splines {
struct SplineAnimate_EasingMode;
}
namespace UnityEngine::Splines {
struct SplineAnimate_LoopMode;
}
namespace UnityEngine::Splines {
struct SplineAnimate_Method;
}
namespace UnityEngine::Splines {
struct SplineComponent_AlignAxis;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
template<typename T>
class SplinePath_1;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineAnimate_AlignmentMode;
}
namespace UnityEngine::Splines {
struct SplineAnimate_EasingMode;
}
namespace UnityEngine::Splines {
struct SplineAnimate_LoopMode;
}
namespace UnityEngine::Splines {
struct SplineAnimate_Method;
}
namespace UnityEngine::Splines {
class SplineAnimate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineAnimate_AlignmentMode);
MARK_VAL_T(::UnityEngine::Splines::SplineAnimate_EasingMode);
MARK_VAL_T(::UnityEngine::Splines::SplineAnimate_LoopMode);
MARK_VAL_T(::UnityEngine::Splines::SplineAnimate_Method);
MARK_REF_T(::UnityEngine::Splines::SplineAnimate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineAnimate_AlignmentMode, "UnityEngine.Splines", "SplineAnimate/AlignmentMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineAnimate_EasingMode, "UnityEngine.Splines", "SplineAnimate/EasingMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineAnimate_LoopMode, "UnityEngine.Splines", "SplineAnimate/LoopMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineAnimate_Method, "UnityEngine.Splines", "SplineAnimate/Method");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineAnimate*, "UnityEngine.Splines", "SplineAnimate");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineAnimate/Method
struct CORDL_TYPE SplineAnimate_Method {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineAnimate_Method_Unwrapped
enum struct __SplineAnimate_Method_Unwrapped : int32_t {
__E_Time = static_cast<int32_t>(0x0),
__E_Speed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineAnimate_Method_Unwrapped () const noexcept {
return static_cast<__SplineAnimate_Method_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate_Method() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineAnimate_Method(int32_t  value__) noexcept;

/// @brief Field Speed value: I32(1)
static ::UnityEngine::Splines::SplineAnimate_Method const Speed;

/// @brief Field Time value: I32(0)
static ::UnityEngine::Splines::SplineAnimate_Method const Time;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineAnimate_Method, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineAnimate_Method) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineAnimate/LoopMode
struct CORDL_TYPE SplineAnimate_LoopMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineAnimate_LoopMode_Unwrapped
enum struct __SplineAnimate_LoopMode_Unwrapped : int32_t {
__E_Once = static_cast<int32_t>(0x0),
__E_Loop = static_cast<int32_t>(0x1),
__E_LoopEaseInOnce = static_cast<int32_t>(0x2),
__E_PingPong = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineAnimate_LoopMode_Unwrapped () const noexcept {
return static_cast<__SplineAnimate_LoopMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate_LoopMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineAnimate_LoopMode(int32_t  value__) noexcept;

/// @brief Field Loop value: I32(1)
static ::UnityEngine::Splines::SplineAnimate_LoopMode const Loop;

/// @brief Field LoopEaseInOnce value: I32(2)
static ::UnityEngine::Splines::SplineAnimate_LoopMode const LoopEaseInOnce;

/// @brief Field Once value: I32(0)
static ::UnityEngine::Splines::SplineAnimate_LoopMode const Once;

/// @brief Field PingPong value: I32(3)
static ::UnityEngine::Splines::SplineAnimate_LoopMode const PingPong;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18709};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineAnimate_LoopMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineAnimate_LoopMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineAnimate/EasingMode
struct CORDL_TYPE SplineAnimate_EasingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineAnimate_EasingMode_Unwrapped
enum struct __SplineAnimate_EasingMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_EaseIn = static_cast<int32_t>(0x1),
__E_EaseOut = static_cast<int32_t>(0x2),
__E_EaseInOut = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineAnimate_EasingMode_Unwrapped () const noexcept {
return static_cast<__SplineAnimate_EasingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate_EasingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineAnimate_EasingMode(int32_t  value__) noexcept;

/// @brief Field EaseIn value: I32(1)
static ::UnityEngine::Splines::SplineAnimate_EasingMode const EaseIn;

/// @brief Field EaseInOut value: I32(3)
static ::UnityEngine::Splines::SplineAnimate_EasingMode const EaseInOut;

/// @brief Field EaseOut value: I32(2)
static ::UnityEngine::Splines::SplineAnimate_EasingMode const EaseOut;

/// @brief Field None value: I32(0)
static ::UnityEngine::Splines::SplineAnimate_EasingMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18710};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineAnimate_EasingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineAnimate_EasingMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineAnimate/AlignmentMode
struct CORDL_TYPE SplineAnimate_AlignmentMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineAnimate_AlignmentMode_Unwrapped
enum struct __SplineAnimate_AlignmentMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SplineElement = static_cast<int32_t>(0x1),
__E_SplineObject = static_cast<int32_t>(0x2),
__E_World = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineAnimate_AlignmentMode_Unwrapped () const noexcept {
return static_cast<__SplineAnimate_AlignmentMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate_AlignmentMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineAnimate_AlignmentMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::UnityEngine::Splines::SplineAnimate_AlignmentMode const None;

/// @brief Field SplineElement value: I32(1)
static ::UnityEngine::Splines::SplineAnimate_AlignmentMode const SplineElement;

/// @brief Field SplineObject value: I32(2)
static ::UnityEngine::Splines::SplineAnimate_AlignmentMode const SplineObject;

/// @brief Field World value: I32(3)
static ::UnityEngine::Splines::SplineAnimate_AlignmentMode const World;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18711};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineAnimate_AlignmentMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineAnimate_AlignmentMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies UnityEngine.Splines.SplineAnimate::AlignmentMode, UnityEngine.Splines.SplineAnimate::EasingMode, UnityEngine.Splines.SplineAnimate::LoopMode, UnityEngine.Splines.SplineAnimate::Method, UnityEngine.Splines.SplineComponent, UnityEngine.Splines.SplineComponent::AlignAxis
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineAnimate
class CORDL_TYPE SplineAnimate : public ::UnityEngine::Splines::SplineComponent {
public:
// Declarations
using AlignmentMode = ::UnityEngine::Splines::SplineAnimate_AlignmentMode;

using EasingMode = ::UnityEngine::Splines::SplineAnimate_EasingMode;

using LoopMode = ::UnityEngine::Splines::SplineAnimate_LoopMode;

using Method = ::UnityEngine::Splines::SplineAnimate_Method;

 __declspec(property(get=get_Alignment, put=set_Alignment)) ::UnityEngine::Splines::SplineAnimate_AlignmentMode  Alignment;

 __declspec(property(get=get_AnimationMethod, put=set_AnimationMethod)) ::UnityEngine::Splines::SplineAnimate_Method  AnimationMethod;

/// @brief Field Completed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_Completed, put=__cordl_internal_set_Completed)) ::System::Action*  Completed;

 __declspec(property(get=get_Container, put=set_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Container;

 __declspec(property(get=get_Duration, put=set_Duration)) float_t  Duration;

 __declspec(property(get=get_Easing, put=set_Easing)) ::UnityEngine::Splines::SplineAnimate_EasingMode  Easing;

 __declspec(property(get=get_ElapsedTime, put=set_ElapsedTime)) float_t  ElapsedTime;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Loop, put=set_Loop)) ::UnityEngine::Splines::SplineAnimate_LoopMode  Loop;

 __declspec(property(get=get_MaxSpeed, put=set_MaxSpeed)) float_t  MaxSpeed;

 __declspec(property(get=get_NormalizedTime, put=set_NormalizedTime)) float_t  NormalizedTime;

 __declspec(property(get=get_ObjectForwardAxis, put=set_ObjectForwardAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  ObjectForwardAxis;

 __declspec(property(get=get_ObjectUpAxis, put=set_ObjectUpAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  ObjectUpAxis;

 __declspec(property(get=get_PlayOnAwake, put=set_PlayOnAwake)) bool  PlayOnAwake;

 __declspec(property(get=get_StartOffset, put=set_StartOffset)) float_t  StartOffset;

 __declspec(property(get=get_StartOffsetT)) float_t  StartOffsetT;

/// @brief Field Updated, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_Updated, put=__cordl_internal_set_Updated)) ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  Updated;

 __declspec(property(get=get_alignmentMode)) ::UnityEngine::Splines::SplineAnimate_AlignmentMode  alignmentMode;

 __declspec(property(get=get_duration)) float_t  duration;

 __declspec(property(get=get_easingMode)) ::UnityEngine::Splines::SplineAnimate_EasingMode  easingMode;

 __declspec(property(get=get_elapsedTime)) float_t  elapsedTime;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

/// @brief Field k_EmptyContainerError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_EmptyContainerError, put=setStaticF_k_EmptyContainerError)) ::StringW  k_EmptyContainerError;

 __declspec(property(get=get_loopMode)) ::UnityEngine::Splines::SplineAnimate_LoopMode  loopMode;

/// @brief Field m_AlignmentMode, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AlignmentMode, put=__cordl_internal_set_m_AlignmentMode)) ::UnityEngine::Splines::SplineAnimate_AlignmentMode  m_AlignmentMode;

/// @brief Field m_Duration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Duration, put=__cordl_internal_set_m_Duration)) float_t  m_Duration;

/// @brief Field m_EasingMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EasingMode, put=__cordl_internal_set_m_EasingMode)) ::UnityEngine::Splines::SplineAnimate_EasingMode  m_EasingMode;

/// @brief Field m_ElapsedTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ElapsedTime, put=__cordl_internal_set_m_ElapsedTime)) float_t  m_ElapsedTime;

/// @brief Field m_EndReached, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EndReached, put=__cordl_internal_set_m_EndReached)) bool  m_EndReached;

/// @brief Field m_LoopMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LoopMode, put=__cordl_internal_set_m_LoopMode)) ::UnityEngine::Splines::SplineAnimate_LoopMode  m_LoopMode;

/// @brief Field m_MaxSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxSpeed, put=__cordl_internal_set_m_MaxSpeed)) float_t  m_MaxSpeed;

/// @brief Field m_Method, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Method, put=__cordl_internal_set_m_Method)) ::UnityEngine::Splines::SplineAnimate_Method  m_Method;

/// @brief Field m_NormalizedTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NormalizedTime, put=__cordl_internal_set_m_NormalizedTime)) float_t  m_NormalizedTime;

/// @brief Field m_ObjectForwardAxis, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ObjectForwardAxis, put=__cordl_internal_set_m_ObjectForwardAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  m_ObjectForwardAxis;

/// @brief Field m_ObjectUpAxis, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ObjectUpAxis, put=__cordl_internal_set_m_ObjectUpAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  m_ObjectUpAxis;

/// @brief Field m_PlayOnAwake, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayOnAwake, put=__cordl_internal_set_m_PlayOnAwake)) bool  m_PlayOnAwake;

/// @brief Field m_PlayOnAwakeHandledForSession, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayOnAwakeHandledForSession, put=__cordl_internal_set_m_PlayOnAwakeHandledForSession)) bool  m_PlayOnAwakeHandledForSession;

/// @brief Field m_Playing, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Playing, put=__cordl_internal_set_m_Playing)) bool  m_Playing;

/// @brief Field m_SplineLength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SplineLength, put=__cordl_internal_set_m_SplineLength)) float_t  m_SplineLength;

/// @brief Field m_SplinePath, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SplinePath, put=__cordl_internal_set_m_SplinePath)) ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*  m_SplinePath;

/// @brief Field m_StartOffset, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartOffset, put=__cordl_internal_set_m_StartOffset)) float_t  m_StartOffset;

/// @brief Field m_StartOffsetT, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StartOffsetT, put=__cordl_internal_set_m_StartOffsetT)) float_t  m_StartOffsetT;

/// @brief Field m_Target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Target;

 __declspec(property(get=get_maxSpeed)) float_t  maxSpeed;

 __declspec(property(get=get_method)) ::UnityEngine::Splines::SplineAnimate_Method  method;

 __declspec(property(get=get_normalizedTime)) float_t  normalizedTime;

 __declspec(property(get=get_objectForwardAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  objectForwardAxis;

 __declspec(property(get=get_objectUpAxis)) ::UnityEngine::Splines::SplineComponent_AlignAxis  objectUpAxis;

/// @brief Field onUpdated, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUpdated, put=__cordl_internal_set_onUpdated)) ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  onUpdated;

 __declspec(property(get=get_playOnAwake)) bool  playOnAwake;

 __declspec(property(get=get_splineContainer)) ::UnityW<::UnityEngine::Splines::SplineContainer>  splineContainer;

/// @brief Method Awake, addr 0x182168b60, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateDuration, addr 0x182168b70, size 0xa0, virtual false, abstract: false, final false
inline void CalculateDuration() ;

/// @brief Method CalculateMaxSpeed, addr 0x182168c10, size 0xa0, virtual false, abstract: false, final false
inline void CalculateMaxSpeed() ;

/// @brief Method CalculateNormalizedTime, addr 0x182168cb0, size 0x270, virtual false, abstract: false, final false
inline void CalculateNormalizedTime(float_t  deltaTime) ;

/// @brief Method EaseInOutQuadratic, addr 0x182168f20, size 0x30, virtual false, abstract: false, final false
inline float_t EaseInOutQuadratic(float_t  t) ;

/// @brief Method EaseInQuadratic, addr 0x182168f50, size 0x10, virtual false, abstract: false, final false
inline float_t EaseInQuadratic(float_t  t) ;

/// @brief Method EaseOutQuadratic, addr 0x182168f60, size 0x20, virtual false, abstract: false, final false
inline float_t EaseOutQuadratic(float_t  t) ;

/// @brief Method EvaluatePositionAndRotation, addr 0x182168f80, size 0x6d0, virtual false, abstract: false, final false
inline void EvaluatePositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method GetLoopInterpolation, addr 0x182169650, size 0x90, virtual false, abstract: false, final false
inline float_t GetLoopInterpolation(bool  offset) ;

/// @brief Method IsNullOrEmptyContainer, addr 0x1821696e0, size 0xd0, virtual false, abstract: false, final false
inline bool IsNullOrEmptyContainer() ;

static inline ::UnityEngine::Splines::SplineAnimate* New_ctor() ;

/// @brief Method OnDisable, addr 0x1821697b0, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x182169800, size 0x1a0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSplineChange, addr 0x1821699a0, size 0x10, virtual false, abstract: false, final false
inline void OnSplineChange(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType) ;

/// @brief Method OnValidate, addr 0x1821699b0, size 0x30, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Pause, addr 0x1821699e0, size 0x10, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x1821699f0, size 0x20, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method RebuildSplinePath, addr 0x182169a10, size 0xe0, virtual false, abstract: false, final false
inline void RebuildSplinePath() ;

/// @brief Method RecalculateAnimationParameters, addr 0x182169af0, size 0x80, virtual false, abstract: false, final false
inline void RecalculateAnimationParameters() ;

/// @brief Method Restart, addr 0x182169b70, size 0x160, virtual false, abstract: false, final false
inline void Restart(bool  autoplay) ;

/// @brief Method SetObjectAlignAxis, addr 0x182169cd0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis SetObjectAlignAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  newValue, ::by_ref<::UnityEngine::Splines::SplineComponent_AlignAxis>  targetAxis, ::UnityEngine::Splines::SplineComponent_AlignAxis  otherAxis) ;

/// @brief Method Update, addr 0x182169f30, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateEndReached, addr 0x182169d20, size 0x70, virtual false, abstract: false, final false
inline void UpdateEndReached(float_t  previousTime, float_t  currentDuration) ;

/// @brief Method UpdateStartOffsetT, addr 0x182169d90, size 0x40, virtual false, abstract: false, final false
inline void UpdateStartOffsetT() ;

/// @brief Method UpdateTransform, addr 0x182169dd0, size 0x160, virtual false, abstract: false, final false
inline void UpdateTransform() ;

constexpr ::System::Action* const& __cordl_internal_get_Completed() const;

constexpr ::System::Action*& __cordl_internal_get_Completed() ;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get_Updated() const;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get_Updated() ;

constexpr ::UnityEngine::Splines::SplineAnimate_AlignmentMode const& __cordl_internal_get_m_AlignmentMode() const;

constexpr ::UnityEngine::Splines::SplineAnimate_AlignmentMode& __cordl_internal_get_m_AlignmentMode() ;

constexpr float_t const& __cordl_internal_get_m_Duration() const;

constexpr float_t& __cordl_internal_get_m_Duration() ;

constexpr ::UnityEngine::Splines::SplineAnimate_EasingMode const& __cordl_internal_get_m_EasingMode() const;

constexpr ::UnityEngine::Splines::SplineAnimate_EasingMode& __cordl_internal_get_m_EasingMode() ;

constexpr float_t const& __cordl_internal_get_m_ElapsedTime() const;

constexpr float_t& __cordl_internal_get_m_ElapsedTime() ;

constexpr bool const& __cordl_internal_get_m_EndReached() const;

constexpr bool& __cordl_internal_get_m_EndReached() ;

constexpr ::UnityEngine::Splines::SplineAnimate_LoopMode const& __cordl_internal_get_m_LoopMode() const;

constexpr ::UnityEngine::Splines::SplineAnimate_LoopMode& __cordl_internal_get_m_LoopMode() ;

constexpr float_t const& __cordl_internal_get_m_MaxSpeed() const;

constexpr float_t& __cordl_internal_get_m_MaxSpeed() ;

constexpr ::UnityEngine::Splines::SplineAnimate_Method const& __cordl_internal_get_m_Method() const;

constexpr ::UnityEngine::Splines::SplineAnimate_Method& __cordl_internal_get_m_Method() ;

constexpr float_t const& __cordl_internal_get_m_NormalizedTime() const;

constexpr float_t& __cordl_internal_get_m_NormalizedTime() ;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis const& __cordl_internal_get_m_ObjectForwardAxis() const;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis& __cordl_internal_get_m_ObjectForwardAxis() ;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis const& __cordl_internal_get_m_ObjectUpAxis() const;

constexpr ::UnityEngine::Splines::SplineComponent_AlignAxis& __cordl_internal_get_m_ObjectUpAxis() ;

constexpr bool const& __cordl_internal_get_m_PlayOnAwake() const;

constexpr bool& __cordl_internal_get_m_PlayOnAwake() ;

constexpr bool const& __cordl_internal_get_m_PlayOnAwakeHandledForSession() const;

constexpr bool& __cordl_internal_get_m_PlayOnAwakeHandledForSession() ;

constexpr bool const& __cordl_internal_get_m_Playing() const;

constexpr bool& __cordl_internal_get_m_Playing() ;

constexpr float_t const& __cordl_internal_get_m_SplineLength() const;

constexpr float_t& __cordl_internal_get_m_SplineLength() ;

constexpr ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>* const& __cordl_internal_get_m_SplinePath() const;

constexpr ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*& __cordl_internal_get_m_SplinePath() ;

constexpr float_t const& __cordl_internal_get_m_StartOffset() const;

constexpr float_t& __cordl_internal_get_m_StartOffset() ;

constexpr float_t const& __cordl_internal_get_m_StartOffsetT() const;

constexpr float_t& __cordl_internal_get_m_StartOffsetT() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Target() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Target() ;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get_onUpdated() const;

constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get_onUpdated() ;

constexpr void __cordl_internal_set_Completed(::System::Action*  value) ;

constexpr void __cordl_internal_set_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set_m_AlignmentMode(::UnityEngine::Splines::SplineAnimate_AlignmentMode  value) ;

constexpr void __cordl_internal_set_m_Duration(float_t  value) ;

constexpr void __cordl_internal_set_m_EasingMode(::UnityEngine::Splines::SplineAnimate_EasingMode  value) ;

constexpr void __cordl_internal_set_m_ElapsedTime(float_t  value) ;

constexpr void __cordl_internal_set_m_EndReached(bool  value) ;

constexpr void __cordl_internal_set_m_LoopMode(::UnityEngine::Splines::SplineAnimate_LoopMode  value) ;

constexpr void __cordl_internal_set_m_MaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_Method(::UnityEngine::Splines::SplineAnimate_Method  value) ;

constexpr void __cordl_internal_set_m_NormalizedTime(float_t  value) ;

constexpr void __cordl_internal_set_m_ObjectForwardAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

constexpr void __cordl_internal_set_m_ObjectUpAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

constexpr void __cordl_internal_set_m_PlayOnAwake(bool  value) ;

constexpr void __cordl_internal_set_m_PlayOnAwakeHandledForSession(bool  value) ;

constexpr void __cordl_internal_set_m_Playing(bool  value) ;

constexpr void __cordl_internal_set_m_SplineLength(float_t  value) ;

constexpr void __cordl_internal_set_m_SplinePath(::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*  value) ;

constexpr void __cordl_internal_set_m_StartOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_StartOffsetT(float_t  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// @brief Method .ctor, addr 0x182169fc0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_Completed, addr 0x1803456c0, size 0x90, virtual false, abstract: false, final false
inline void add_Completed(::System::Action*  value) ;

/// @brief Method add_Updated, addr 0x18216a000, size 0xa0, virtual false, abstract: false, final false
inline void add_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// @brief Method add_onUpdated, addr 0x18216a0a0, size 0x90, virtual false, abstract: false, final false
inline void add_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

static inline ::StringW getStaticF_k_EmptyContainerError() ;

/// @brief Method get_Alignment, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_AlignmentMode get_Alignment() ;

/// @brief Method get_AnimationMethod, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_Method get_AnimationMethod() ;

/// @brief Method get_Container, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Container() ;

/// @brief Method get_Duration, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_Easing, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_EasingMode get_Easing() ;

/// @brief Method get_ElapsedTime, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ElapsedTime() ;

/// @brief Method get_IsPlaying, addr 0x182152290, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_Loop, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_LoopMode get_Loop() ;

/// @brief Method get_MaxSpeed, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxSpeed() ;

/// @brief Method get_NormalizedTime, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_NormalizedTime() ;

/// @brief Method get_ObjectForwardAxis, addr 0x180e25b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_ObjectForwardAxis() ;

/// @brief Method get_ObjectUpAxis, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_ObjectUpAxis() ;

/// @brief Method get_PlayOnAwake, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_PlayOnAwake() ;

/// @brief Method get_StartOffset, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_StartOffset() ;

/// @brief Method get_StartOffsetT, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_StartOffsetT() ;

/// @brief Method get_alignmentMode, addr 0x1803d4dd0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_AlignmentMode get_alignmentMode() ;

/// @brief Method get_duration, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_duration() ;

/// @brief Method get_easingMode, addr 0x180511540, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_EasingMode get_easingMode() ;

/// @brief Method get_elapsedTime, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_elapsedTime() ;

/// @brief Method get_isPlaying, addr 0x182152290, size 0x10, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_loopMode, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_LoopMode get_loopMode() ;

/// @brief Method get_maxSpeed, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_maxSpeed() ;

/// @brief Method get_method, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineAnimate_Method get_method() ;

/// @brief Method get_normalizedTime, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_normalizedTime() ;

/// @brief Method get_objectForwardAxis, addr 0x180e25b50, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_objectForwardAxis() ;

/// @brief Method get_objectUpAxis, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineComponent_AlignAxis get_objectUpAxis() ;

/// @brief Method get_playOnAwake, addr 0x1803561b0, size 0x10, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_splineContainer, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_splineContainer() ;

/// @brief Method remove_Completed, addr 0x180345c90, size 0x90, virtual false, abstract: false, final false
inline void remove_Completed(::System::Action*  value) ;

/// @brief Method remove_Updated, addr 0x18216a130, size 0xa0, virtual false, abstract: false, final false
inline void remove_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

/// @brief Method remove_onUpdated, addr 0x18216a1d0, size 0x90, virtual false, abstract: false, final false
inline void remove_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

static inline void setStaticF_k_EmptyContainerError(::StringW  value) ;

/// @brief Method set_Alignment, addr 0x1803d4ea0, size 0x10, virtual false, abstract: false, final false
inline void set_Alignment(::UnityEngine::Splines::SplineAnimate_AlignmentMode  value) ;

/// @brief Method set_AnimationMethod, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void set_AnimationMethod(::UnityEngine::Splines::SplineAnimate_Method  value) ;

/// @brief Method set_Container, addr 0x18216a260, size 0x250, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_Duration, addr 0x18216a4b0, size 0x20, virtual false, abstract: false, final false
inline void set_Duration(float_t  value) ;

/// @brief Method set_Easing, addr 0x180511580, size 0x10, virtual false, abstract: false, final false
inline void set_Easing(::UnityEngine::Splines::SplineAnimate_EasingMode  value) ;

/// @brief Method set_ElapsedTime, addr 0x18216a4d0, size 0x30, virtual false, abstract: false, final false
inline void set_ElapsedTime(float_t  value) ;

/// @brief Method set_Loop, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_Loop(::UnityEngine::Splines::SplineAnimate_LoopMode  value) ;

/// @brief Method set_MaxSpeed, addr 0x18216a500, size 0x20, virtual false, abstract: false, final false
inline void set_MaxSpeed(float_t  value) ;

/// @brief Method set_NormalizedTime, addr 0x18216a520, size 0x60, virtual false, abstract: false, final false
inline void set_NormalizedTime(float_t  value) ;

/// @brief Method set_ObjectForwardAxis, addr 0x18216a580, size 0x60, virtual false, abstract: false, final false
inline void set_ObjectForwardAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

/// @brief Method set_ObjectUpAxis, addr 0x18216a5e0, size 0x60, virtual false, abstract: false, final false
inline void set_ObjectUpAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  value) ;

/// @brief Method set_PlayOnAwake, addr 0x180499eb0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayOnAwake(bool  value) ;

/// @brief Method set_StartOffset, addr 0x18216a640, size 0x90, virtual false, abstract: false, final false
inline void set_StartOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineAnimate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineAnimate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineAnimate(SplineAnimate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineAnimate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineAnimate(SplineAnimate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18712};

/// @brief Field k_HelpUrl offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HelpUrl{u"https://docs.unity3d.com/Packages/com.unity.splines@latest/index.html?subfolder=/manual/animate-component.html"};

/// @brief Field m_Target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Target;

/// @brief Field m_PlayOnAwake, offset: 0x30, size: 0x1, def value: None
 bool  ___m_PlayOnAwake;

/// @brief Field m_LoopMode, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineAnimate_LoopMode  ___m_LoopMode;

/// @brief Field m_Method, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineAnimate_Method  ___m_Method;

/// @brief Field m_Duration, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_Duration;

/// @brief Field m_MaxSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ___m_MaxSpeed;

/// @brief Field m_EasingMode, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineAnimate_EasingMode  ___m_EasingMode;

/// @brief Field m_AlignmentMode, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineAnimate_AlignmentMode  ___m_AlignmentMode;

/// @brief Field m_ObjectForwardAxis, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineComponent_AlignAxis  ___m_ObjectForwardAxis;

/// @brief Field m_ObjectUpAxis, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::Splines::SplineComponent_AlignAxis  ___m_ObjectUpAxis;

/// @brief Field m_StartOffset, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_StartOffset;

/// @brief Field m_StartOffsetT, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_StartOffsetT;

/// @brief Field m_PlayOnAwakeHandledForSession, offset: 0x5c, size: 0x1, def value: None
 bool  ___m_PlayOnAwakeHandledForSession;

/// @brief Field m_SplineLength, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_SplineLength;

/// @brief Field m_Playing, offset: 0x64, size: 0x1, def value: None
 bool  ___m_Playing;

/// @brief Field m_NormalizedTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_NormalizedTime;

/// @brief Field m_ElapsedTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_ElapsedTime;

/// @brief Field m_SplinePath, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*  ___m_SplinePath;

/// @brief Field onUpdated, offset: 0x78, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  ___onUpdated;

/// @brief Field Updated, offset: 0x80, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  ___Updated;

/// @brief Field m_EndReached, offset: 0x88, size: 0x1, def value: None
 bool  ___m_EndReached;

/// @brief Field Completed, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___Completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_PlayOnAwake) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_LoopMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Method) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Duration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_MaxSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_EasingMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_AlignmentMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_ObjectForwardAxis) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_ObjectUpAxis) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_StartOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_StartOffsetT) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_PlayOnAwakeHandledForSession) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_SplineLength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_Playing) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_NormalizedTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_ElapsedTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_SplinePath) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___onUpdated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___Updated) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___m_EndReached) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineAnimate, ___Completed) == 0x90, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineAnimate) == 0x98, "Size mismatch!");

} // namespace end def UnityEngine::Splines
