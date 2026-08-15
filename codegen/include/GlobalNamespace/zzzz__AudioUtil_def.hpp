#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioUtil)
namespace GlobalNamespace {
struct AudioUtil_RandomPointSection;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Random;
}
namespace UnityEngine {
struct AudioSpeakerMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AudioUtil_RandomPointSection;
}
namespace GlobalNamespace {
class AudioUtil;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioUtil_RandomPointSection);
MARK_REF_T(::GlobalNamespace::AudioUtil*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioUtil_RandomPointSection, "", "AudioUtil/RandomPointSection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioUtil*, "", "AudioUtil");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioUtil/RandomPointSection
struct CORDL_TYPE AudioUtil_RandomPointSection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioUtil_RandomPointSection_Unwrapped
enum struct __AudioUtil_RandomPointSection_Unwrapped : int32_t {
__E_LeftForward = static_cast<int32_t>(0x0),
__E_RightForward = static_cast<int32_t>(0x1),
__E_LeftBackward = static_cast<int32_t>(0x2),
__E_RightBackward = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioUtil_RandomPointSection_Unwrapped () const noexcept {
return static_cast<__AudioUtil_RandomPointSection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_RandomPointSection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioUtil_RandomPointSection(int32_t  value__) noexcept;

/// @brief Field LeftBackward value: I32(2)
static ::GlobalNamespace::AudioUtil_RandomPointSection const LeftBackward;

/// @brief Field LeftForward value: I32(0)
static ::GlobalNamespace::AudioUtil_RandomPointSection const LeftForward;

/// @brief Field RightBackward value: I32(3)
static ::GlobalNamespace::AudioUtil_RandomPointSection const RightBackward;

/// @brief Field RightForward value: I32(1)
static ::GlobalNamespace::AudioUtil_RandomPointSection const RightForward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioUtil_RandomPointSection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioUtil_RandomPointSection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioUtil
class CORDL_TYPE AudioUtil : public ::System::Object {
public:
// Declarations
using RandomPointSection = ::GlobalNamespace::AudioUtil_RandomPointSection;

/// @brief Field RNG, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RNG, put=setStaticF_RNG)) ::System::Random*  RNG;

/// @brief Field s_twelfthRootOfTwo, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_twelfthRootOfTwo, put=setStaticF_s_twelfthRootOfTwo)) float_t  s_twelfthRootOfTwo;

/// @brief Method AddLinearVolume, addr 0x18049a770, size 0x50, virtual false, abstract: false, final false
static inline float_t AddLinearVolume(float_t  vol1, float_t  vol2, ::by_ref<bool>  overOne) ;

/// @brief Method AngularLerp, addr 0x18049a7c0, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 AngularLerp(::UnityEngine::Vector2  from, ::UnityEngine::Vector2  to, float_t  t) ;

/// @brief Method Approximately, addr 0x18049a8d0, size 0x50, virtual false, abstract: false, final false
static inline bool Approximately(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  tolerance) ;

/// @brief Method AudioFreqLerp, addr 0x18049a920, size 0x80, virtual false, abstract: false, final false
static inline float_t AudioFreqLerp(float_t  startFreq, float_t  endFreq, float_t  t, float_t  steepness) ;

/// @brief Method DecibelsToLinear, addr 0x18049a9a0, size 0x20, virtual false, abstract: false, final false
static inline float_t DecibelsToLinear(float_t  db) ;

/// @brief Method EaseInOut, addr 0x18049a9c0, size 0xc0, virtual false, abstract: false, final false
static inline float_t EaseInOut(float_t  x, float_t  center, float_t  steepness) ;

/// @brief Method GenerateRandomPointForward, addr 0x18049aa80, size 0x150, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GenerateRandomPointForward(::UnityEngine::Transform*  center, float_t  minY) ;

/// @brief Method GenerateRandomPointSection, addr 0x18049abd0, size 0x200, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GenerateRandomPointSection(float_t  lowestAngle, float_t  highestAngle, ::GlobalNamespace::AudioUtil_RandomPointSection  section) ;

/// @brief Method GenerateRandomPointUpward, addr 0x18049add0, size 0x1a0, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GenerateRandomPointUpward(float_t  lowestAngle, float_t  highestAngle) ;

/// @brief Method GenerateRandomPointWithAngleRanges, addr 0x18049af70, size 0x230, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GenerateRandomPointWithAngleRanges(float_t  lowestVerticalAngle, float_t  highestVerticalAngle, float_t  lowestHorizontalAngle, float_t  highestHorizontalAngle) ;

/// @brief Method GetAngle360, addr 0x18049b1a0, size 0x1b0, virtual false, abstract: false, final false
static inline float_t GetAngle360(::UnityEngine::Vector2  from, ::UnityEngine::Vector2  to) ;

/// @brief Method GetUnityChannels, addr 0x18049b350, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetUnityChannels(::UnityEngine::AudioSpeakerMode  speakerMode) ;

/// @brief Method HashStringToInt, addr 0x18049b3c0, size 0x60, virtual false, abstract: false, final false
static inline int32_t HashStringToInt(::StringW  input) ;

/// @brief Method InverseParabola, addr 0x18049b420, size 0x60, virtual false, abstract: false, final false
static inline float_t InverseParabola(float_t  x) ;

/// @brief Method InverseTransformPoint, addr 0x18049b480, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3  transformPos, ::UnityEngine::Quaternion  transformRotation, ::UnityEngine::Vector3  transformScale, ::UnityEngine::Vector3  pos) ;

/// @brief Method LerpSnap, addr 0x18049b5a0, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 LerpSnap(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, float_t  t) ;

/// @brief Method LerpSnap, addr 0x18049b6a0, size 0x30, virtual false, abstract: false, final false
static inline float_t LerpSnap(float_t  current, float_t  target, float_t  t) ;

/// @brief Method LinearToDecibels, addr 0x18049b6d0, size 0x20, virtual false, abstract: false, final false
static inline float_t LinearToDecibels(float_t  lin) ;

/// @brief Method LinearToDecibels, addr 0x18049b6f0, size 0x50, virtual false, abstract: false, final false
static inline float_t LinearToDecibels(float_t  lin, float_t  minDb) ;

/// @brief Method LogApproximation, addr 0x18049b740, size 0x10, virtual false, abstract: false, final false
static inline float_t LogApproximation(float_t  x) ;

/// @brief Method Modulo, addr 0x18049b770, size 0x40, virtual false, abstract: false, final false
static inline float_t Modulo(float_t  dividend, float_t  divisor) ;

/// @brief Method Modulo, addr 0x18049b750, size 0x20, virtual false, abstract: false, final false
static inline int32_t Modulo(int32_t  dividend, int32_t  divisor) ;

/// @brief Method NewX, addr 0x18049b7b0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NewX(::UnityEngine::Vector3  origin, float_t  x) ;

/// @brief Method NewY, addr 0x18049b7d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NewY(::UnityEngine::Vector3  origin, float_t  y) ;

/// @brief Method NewZ, addr 0x18049b7f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 NewZ(::UnityEngine::Vector3  origin, float_t  z) ;

/// @brief Method NextFloat, addr 0x18049b810, size 0xd0, virtual false, abstract: false, final false
static inline float_t NextFloat() ;

/// @brief Method ParabolaLeft, addr 0x18049b8e0, size 0xb0, virtual false, abstract: false, final false
static inline float_t ParabolaLeft(float_t  x, int32_t  exp) ;

/// @brief Method ParabolaRight, addr 0x18049b990, size 0x20, virtual false, abstract: false, final false
static inline float_t ParabolaRight(float_t  x) ;

/// @brief Method PitchToSemitone, addr 0x18049b9b0, size 0xa0, virtual false, abstract: false, final false
static inline float_t PitchToSemitone(float_t  pitch) ;

/// @brief Method RandomDirectionTowards, addr 0x18049ba50, size 0x140, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 RandomDirectionTowards(::UnityEngine::Vector3  target, ::UnityEngine::Vector3  source) ;

/// @brief Method RoundAndClamp, addr 0x18049bbd0, size 0x60, virtual false, abstract: false, final false
static inline float_t RoundAndClamp(float_t  value, float_t  min, float_t  max, int32_t  digits) ;

/// @brief Method RoundAndClamp01, addr 0x18049bb90, size 0x40, virtual false, abstract: false, final false
static inline float_t RoundAndClamp01(float_t  value, int32_t  digits) ;

/// @brief Method SemitoneToPitch, addr 0x18049bc30, size 0x70, virtual false, abstract: false, final false
static inline float_t SemitoneToPitch(float_t  semitone) ;

/// @brief Method Shuffle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Shuffle(::System::Collections::Generic::IList_1<T>*  list) ;

/// @brief Method ToVector2_XZ, addr 0x18049bca0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ToVector2_XZ(::UnityEngine::Vector3  origin) ;

/// @brief Method ToVector3_XZ, addr 0x18049bcc0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ToVector3_XZ(::UnityEngine::Vector2  origin, float_t  y) ;

static inline ::System::Random* getStaticF_RNG() ;

static inline float_t getStaticF_s_twelfthRootOfTwo() ;

static inline void setStaticF_RNG(::System::Random*  value) ;

static inline void setStaticF_s_twelfthRootOfTwo(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil(AudioUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil(AudioUtil const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17584};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AudioUtil) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
