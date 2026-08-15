#pragma once
// IWYU pragma private; include "UnityEngine/Playables/FrameData.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_impl.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData_Flags::FrameData_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::FrameData_Flags::FrameData_Flags()   {
}
constexpr ::UnityEngine::Playables::FrameData_Flags  UnityEngine::Playables::FrameData_Flags::Evaluate{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Playables::FrameData_Flags  UnityEngine::Playables::FrameData_Flags::SeekOccured{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Playables::FrameData_Flags  UnityEngine::Playables::FrameData_Flags::Loop{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Playables::FrameData_Flags  UnityEngine::Playables::FrameData_Flags::Hold{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Playables::FrameData_Flags  UnityEngine::Playables::FrameData_Flags::EffectivePlayStateDelayed{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Playables::FrameData_Flags  UnityEngine::Playables::FrameData_Flags::EffectivePlayStatePlaying{static_cast<int32_t>(0x20)};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_frameId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_frameId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::FrameData>(),
                        {"get_frameId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_deltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_deltaTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18227ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::FrameData>(),
                        {"get_deltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_effectiveParentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_effectiveParentSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::FrameData>(),
                        {"get_effectiveParentSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t UnityEngine::Playables::FrameData::get_frameId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::FrameData>(),
                        {"get_frameId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Playables::FrameData::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::FrameData>(),
                        {"get_deltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Playables::FrameData::get_effectiveParentSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Playables::FrameData>(),
                        {"get_effectiveParentSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::FrameData_Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData::FrameData(uint64_t  m_FrameID, double_t  m_DeltaTime, float_t  m_Weight, float_t  m_EffectiveWeight, double_t  m_EffectiveParentDelay, float_t  m_EffectiveParentSpeed, float_t  m_EffectiveSpeed, ::UnityEngine::Playables::FrameData_Flags  m_Flags, ::UnityEngine::Playables::PlayableOutput  m_Output) noexcept  {
this->m_FrameID = m_FrameID;
this->m_DeltaTime = m_DeltaTime;
this->m_Weight = m_Weight;
this->m_EffectiveWeight = m_EffectiveWeight;
this->m_EffectiveParentDelay = m_EffectiveParentDelay;
this->m_EffectiveParentSpeed = m_EffectiveParentSpeed;
this->m_EffectiveSpeed = m_EffectiveSpeed;
this->m_Flags = m_Flags;
this->m_Output = m_Output;
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::FrameData::FrameData()   {
}
