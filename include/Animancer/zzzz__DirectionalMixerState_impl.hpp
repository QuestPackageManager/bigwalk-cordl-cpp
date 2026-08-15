#pragma once
// IWYU pragma private; include "Animancer/DirectionalMixerState.hpp"
#include "Animancer/zzzz__MixerState_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Animancer/zzzz__DirectionalMixerState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Animancer::DirectionalMixerState.get_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::DirectionalMixerState::*)()>(&::Animancer::DirectionalMixerState::get_ParameterX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803054e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.set_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)(float_t)>(&::Animancer::DirectionalMixerState::set_ParameterX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180305500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.get_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::DirectionalMixerState::*)()>(&::Animancer::DirectionalMixerState::get_ParameterY)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803054f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.set_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)(float_t)>(&::Animancer::DirectionalMixerState::set_ParameterY)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180305520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.GetParameterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::DirectionalMixerState::*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalMixerState::GetParameterError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.OnThresholdsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)()>(&::Animancer::DirectionalMixerState::OnThresholdsChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.ForceRecalculateWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)()>(&::Animancer::DirectionalMixerState::ForceRecalculateWeights)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x180309d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.CalculateBlendFactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)(int32_t)>(&::Animancer::DirectionalMixerState::CalculateBlendFactors)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x180309820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"CalculateBlendFactors", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.SignedAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Animancer::DirectionalMixerState::SignedAngle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"SignedAngle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::DirectionalMixerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::DirectionalMixerState::Clone)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180309c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.Animancer_ICopyable_Animancer_DirectionalMixerState__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)(::Animancer::DirectionalMixerState*)>(&::Animancer::DirectionalMixerState::Animancer_ICopyable_Animancer_DirectionalMixerState__CopyFrom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803097a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"Animancer.ICopyable<Animancer.DirectionalMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::DirectionalMixerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.AppendParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)(::System::Text::StringBuilder*, ::UnityEngine::Vector2)>(&::Animancer::DirectionalMixerState::AppendParameter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180304d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::DirectionalMixerState::*)()>(&::Animancer::DirectionalMixerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.GetParameterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::DirectionalMixerState::*)(int32_t)>(&::Animancer::DirectionalMixerState::GetParameterName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180305370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.GetParameterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameterType (::Animancer::DirectionalMixerState::*)(int32_t)>(&::Animancer::DirectionalMixerState::GetParameterType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::DirectionalMixerState::*)(int32_t)>(&::Animancer::DirectionalMixerState::GetParameterValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803053b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState.SetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)(int32_t, ::System::Object*)>(&::Animancer::DirectionalMixerState::SetParameterValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180305410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                    {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalMixerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalMixerState::*)()>(&::Animancer::DirectionalMixerState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18030a150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Animancer::DirectionalMixerState::__cordl_internal_get__ThresholdMagnitudes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThresholdMagnitudes;
}
constexpr ::ArrayW<float_t> const& Animancer::DirectionalMixerState::__cordl_internal_get__ThresholdMagnitudes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThresholdMagnitudes;
}
constexpr void Animancer::DirectionalMixerState::__cordl_internal_set__ThresholdMagnitudes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThresholdMagnitudes = value;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>>& Animancer::DirectionalMixerState::__cordl_internal_get__BlendFactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactors;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>> const& Animancer::DirectionalMixerState::__cordl_internal_get__BlendFactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactors;
}
constexpr void Animancer::DirectionalMixerState::__cordl_internal_set__BlendFactors(::ArrayW<::ArrayW<::UnityEngine::Vector2>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlendFactors = value;
}
constexpr bool& Animancer::DirectionalMixerState::__cordl_internal_get__BlendFactorsDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactorsDirty;
}
constexpr bool const& Animancer::DirectionalMixerState::__cordl_internal_get__BlendFactorsDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactorsDirty;
}
constexpr void Animancer::DirectionalMixerState::__cordl_internal_set__BlendFactorsDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlendFactorsDirty = value;
}
inline float_t Animancer::DirectionalMixerState::get_ParameterX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::DirectionalMixerState::set_ParameterX(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::DirectionalMixerState::get_ParameterY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::DirectionalMixerState::set_ParameterY(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Animancer::DirectionalMixerState::GetParameterError(::UnityEngine::Vector2  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void Animancer::DirectionalMixerState::OnThresholdsChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::DirectionalMixerState::ForceRecalculateWeights()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::DirectionalMixerState::CalculateBlendFactors(int32_t  childCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"CalculateBlendFactors", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childCount);
}
inline float_t Animancer::DirectionalMixerState::SignedAngle(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"SignedAngle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline ::Animancer::AnimancerState* Animancer::DirectionalMixerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline void Animancer::DirectionalMixerState::Animancer_ICopyable_Animancer_DirectionalMixerState__CopyFrom(::Animancer::DirectionalMixerState*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {"Animancer.ICopyable<Animancer.DirectionalMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::DirectionalMixerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::DirectionalMixerState::AppendParameter(::System::Text::StringBuilder*  text, ::UnityEngine::Vector2  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, parameter);
}
inline int32_t Animancer::DirectionalMixerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Animancer::DirectionalMixerState::GetParameterName(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::UnityEngine::AnimatorControllerParameterType Animancer::DirectionalMixerState::GetParameterType(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameterType>(this, ___internal_method, index);
}
inline ::System::Object* Animancer::DirectionalMixerState::GetParameterValue(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void Animancer::DirectionalMixerState::SetParameterValue(int32_t  index, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalMixerState*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Animancer::DirectionalMixerState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalMixerState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DirectionalMixerState* Animancer::DirectionalMixerState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DirectionalMixerState*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>"
constexpr  Animancer::DirectionalMixerState::operator ::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>* Animancer::DirectionalMixerState::i___Animancer__ICopyable_1___Animancer__DirectionalMixerState__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::DirectionalMixerState*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::DirectionalMixerState::DirectionalMixerState()   {
}
