#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioUtil_def.hpp"
#include "GlobalNamespace/zzzz__AudioUtil_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioUtil_RandomPointSection::AudioUtil_RandomPointSection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioUtil_RandomPointSection::AudioUtil_RandomPointSection()   {
}
constexpr ::GlobalNamespace::AudioUtil_RandomPointSection  GlobalNamespace::AudioUtil_RandomPointSection::LeftForward{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioUtil_RandomPointSection  GlobalNamespace::AudioUtil_RandomPointSection::RightForward{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioUtil_RandomPointSection  GlobalNamespace::AudioUtil_RandomPointSection::LeftBackward{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AudioUtil_RandomPointSection  GlobalNamespace::AudioUtil_RandomPointSection::RightBackward{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.NextFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::AudioUtil::NextFloat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18049b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NextFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.DecibelsToLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioUtil::DecibelsToLinear)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"DecibelsToLinear", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.LinearToDecibels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioUtil::LinearToDecibels)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LinearToDecibels", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.LinearToDecibels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::AudioUtil::LinearToDecibels)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LinearToDecibels", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.SemitoneToPitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioUtil::SemitoneToPitch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18049bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"SemitoneToPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.PitchToSemitone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioUtil::PitchToSemitone)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18049b9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"PitchToSemitone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.Modulo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::AudioUtil::Modulo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.Modulo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::AudioUtil::Modulo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18049b770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.RoundAndClamp01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t)>(&::GlobalNamespace::AudioUtil::RoundAndClamp01)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18049bb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"RoundAndClamp01", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.RoundAndClamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, int32_t)>(&::GlobalNamespace::AudioUtil::RoundAndClamp)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18049bbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"RoundAndClamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.GetUnityChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::AudioSpeakerMode)>(&::GlobalNamespace::AudioUtil::GetUnityChannels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18049b350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GetUnityChannels", {}, {::i2c::type_of<::UnityEngine::AudioSpeakerMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.InverseTransformPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::AudioUtil::InverseTransformPoint)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18049b480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"InverseTransformPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.GenerateRandomPointForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::AudioUtil::GenerateRandomPointForward)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18049aa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointForward", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.GenerateRandomPointUpward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t)>(&::GlobalNamespace::AudioUtil::GenerateRandomPointUpward)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18049add0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointUpward", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.GenerateRandomPointWithAngleRanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::AudioUtil::GenerateRandomPointWithAngleRanges)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18049af70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointWithAngleRanges", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.GenerateRandomPointSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t, ::GlobalNamespace::AudioUtil_RandomPointSection)>(&::GlobalNamespace::AudioUtil::GenerateRandomPointSection)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18049abd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointSection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioUtil_RandomPointSection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.RandomDirectionTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::AudioUtil::RandomDirectionTowards)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18049ba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"RandomDirectionTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.GetAngle360
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::AudioUtil::GetAngle360)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18049b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GetAngle360", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.AddLinearVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, ::by_ref<bool>)>(&::GlobalNamespace::AudioUtil::AddLinearVolume)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"AddLinearVolume", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.ToVector2_XZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AudioUtil::ToVector2_XZ)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049bca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ToVector2_XZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.ToVector3_XZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::AudioUtil::ToVector3_XZ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ToVector3_XZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.NewY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::AudioUtil::NewY)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NewY", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.NewX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::AudioUtil::NewX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NewX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.NewZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::AudioUtil::NewZ)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NewZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.Approximately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::AudioUtil::Approximately)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18049a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"Approximately", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.HashStringToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::AudioUtil::HashStringToInt)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18049b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"HashStringToInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.ParabolaLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t)>(&::GlobalNamespace::AudioUtil::ParabolaLeft)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18049b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ParabolaLeft", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.ParabolaRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioUtil::ParabolaRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18049b990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ParabolaRight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.InverseParabola
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioUtil::InverseParabola)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18049b420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"InverseParabola", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.LogApproximation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioUtil::LogApproximation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LogApproximation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.EaseInOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::GlobalNamespace::AudioUtil::EaseInOut)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18049a9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"EaseInOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.LerpSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::GlobalNamespace::AudioUtil::LerpSnap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LerpSnap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.LerpSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::AudioUtil::LerpSnap)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18049b5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LerpSnap", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.AngularLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::AudioUtil::AngularLerp)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18049a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"AngularLerp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioUtil.AudioFreqLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::AudioUtil::AudioFreqLerp)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18049a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"AudioFreqLerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AudioUtil::setStaticF_RNG(::System::Random*  value)  {
::cordl_internals::setStaticField<::System::Random*, "RNG", ::GlobalNamespace::AudioUtil*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* GlobalNamespace::AudioUtil::getStaticF_RNG()  {
return ::cordl_internals::getStaticField<::System::Random*, "RNG", ::GlobalNamespace::AudioUtil*>();
}
inline void GlobalNamespace::AudioUtil::setStaticF_s_twelfthRootOfTwo(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_twelfthRootOfTwo", ::GlobalNamespace::AudioUtil*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::AudioUtil::getStaticF_s_twelfthRootOfTwo()  {
return ::cordl_internals::getStaticField<float_t, "s_twelfthRootOfTwo", ::GlobalNamespace::AudioUtil*>();
}
template<typename T>
inline void GlobalNamespace::AudioUtil::Shuffle(::System::Collections::Generic::IList_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                    {"Shuffle", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
inline float_t GlobalNamespace::AudioUtil::NextFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NextFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::AudioUtil::DecibelsToLinear(float_t  db)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"DecibelsToLinear", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, db);
}
inline float_t GlobalNamespace::AudioUtil::LinearToDecibels(float_t  lin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LinearToDecibels", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lin);
}
inline float_t GlobalNamespace::AudioUtil::LinearToDecibels(float_t  lin, float_t  minDb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LinearToDecibels", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lin, minDb);
}
inline float_t GlobalNamespace::AudioUtil::SemitoneToPitch(float_t  semitone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"SemitoneToPitch", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, semitone);
}
inline float_t GlobalNamespace::AudioUtil::PitchToSemitone(float_t  pitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"PitchToSemitone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pitch);
}
inline int32_t GlobalNamespace::AudioUtil::Modulo(int32_t  dividend, int32_t  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, dividend, divisor);
}
inline float_t GlobalNamespace::AudioUtil::Modulo(float_t  dividend, float_t  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"Modulo", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, dividend, divisor);
}
inline float_t GlobalNamespace::AudioUtil::RoundAndClamp01(float_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"RoundAndClamp01", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, digits);
}
inline float_t GlobalNamespace::AudioUtil::RoundAndClamp(float_t  value, float_t  min, float_t  max, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"RoundAndClamp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, min, max, digits);
}
inline int32_t GlobalNamespace::AudioUtil::GetUnityChannels(::UnityEngine::AudioSpeakerMode  speakerMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GetUnityChannels", {}, {::i2c::type_of<::UnityEngine::AudioSpeakerMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, speakerMode);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::InverseTransformPoint(::UnityEngine::Vector3  transformPos, ::UnityEngine::Quaternion  transformRotation, ::UnityEngine::Vector3  transformScale, ::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"InverseTransformPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transformPos, transformRotation, transformScale, pos);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::GenerateRandomPointForward(::UnityEngine::Transform*  center, float_t  minY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointForward", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, center, minY);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::GenerateRandomPointUpward(float_t  lowestAngle, float_t  highestAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointUpward", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lowestAngle, highestAngle);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::GenerateRandomPointWithAngleRanges(float_t  lowestVerticalAngle, float_t  highestVerticalAngle, float_t  lowestHorizontalAngle, float_t  highestHorizontalAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointWithAngleRanges", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lowestVerticalAngle, highestVerticalAngle, lowestHorizontalAngle, highestHorizontalAngle);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::GenerateRandomPointSection(float_t  lowestAngle, float_t  highestAngle, ::GlobalNamespace::AudioUtil_RandomPointSection  section)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GenerateRandomPointSection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioUtil_RandomPointSection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lowestAngle, highestAngle, section);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::RandomDirectionTowards(::UnityEngine::Vector3  target, ::UnityEngine::Vector3  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"RandomDirectionTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, target, source);
}
inline float_t GlobalNamespace::AudioUtil::GetAngle360(::UnityEngine::Vector2  from, ::UnityEngine::Vector2  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"GetAngle360", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
inline float_t GlobalNamespace::AudioUtil::AddLinearVolume(float_t  vol1, float_t  vol2, ::by_ref<bool>  overOne)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"AddLinearVolume", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, vol1, vol2, overOne);
}
inline ::UnityEngine::Vector2 GlobalNamespace::AudioUtil::ToVector2_XZ(::UnityEngine::Vector3  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ToVector2_XZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, origin);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::ToVector3_XZ(::UnityEngine::Vector2  origin, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ToVector3_XZ", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, origin, y);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::NewY(::UnityEngine::Vector3  origin, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NewY", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, origin, y);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::NewX(::UnityEngine::Vector3  origin, float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NewX", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, origin, x);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::NewZ(::UnityEngine::Vector3  origin, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"NewZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, origin, z);
}
inline bool GlobalNamespace::AudioUtil::Approximately(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  tolerance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"Approximately", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, tolerance);
}
inline int32_t GlobalNamespace::AudioUtil::HashStringToInt(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"HashStringToInt", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline float_t GlobalNamespace::AudioUtil::ParabolaLeft(float_t  x, int32_t  exp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ParabolaLeft", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, exp);
}
inline float_t GlobalNamespace::AudioUtil::ParabolaRight(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"ParabolaRight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t GlobalNamespace::AudioUtil::InverseParabola(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"InverseParabola", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t GlobalNamespace::AudioUtil::LogApproximation(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LogApproximation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t GlobalNamespace::AudioUtil::EaseInOut(float_t  x, float_t  center, float_t  steepness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"EaseInOut", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, center, steepness);
}
inline float_t GlobalNamespace::AudioUtil::LerpSnap(float_t  current, float_t  target, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LerpSnap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, current, target, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::AudioUtil::LerpSnap(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"LerpSnap", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, current, target, t);
}
inline ::UnityEngine::Vector2 GlobalNamespace::AudioUtil::AngularLerp(::UnityEngine::Vector2  from, ::UnityEngine::Vector2  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"AngularLerp", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, from, to, t);
}
inline float_t GlobalNamespace::AudioUtil::AudioFreqLerp(float_t  startFreq, float_t  endFreq, float_t  t, float_t  steepness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioUtil*>(),
                        {"AudioFreqLerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, startFreq, endFreq, t, steepness);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioUtil::AudioUtil()   {
}
