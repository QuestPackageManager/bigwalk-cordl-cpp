#pragma once
// IWYU pragma private; include "Animancer/CartesianMixerState.hpp"
#include "Animancer/zzzz__MixerState_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Animancer/zzzz__CartesianMixerState_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameterType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Animancer::CartesianMixerState.get_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::CartesianMixerState::*)()>(&::Animancer::CartesianMixerState::get_ParameterX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803054e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.set_ParameterX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)(float_t)>(&::Animancer::CartesianMixerState::set_ParameterX)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180305500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.get_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::CartesianMixerState::*)()>(&::Animancer::CartesianMixerState::get_ParameterY)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803054f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.set_ParameterY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)(float_t)>(&::Animancer::CartesianMixerState::set_ParameterY)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180305520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.GetParameterError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::CartesianMixerState::*)(::UnityEngine::Vector2)>(&::Animancer::CartesianMixerState::GetParameterError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.OnThresholdsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)()>(&::Animancer::CartesianMixerState::OnThresholdsChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180305400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.ForceRecalculateWeights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)()>(&::Animancer::CartesianMixerState::ForceRecalculateWeights)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x180305090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.CalculateBlendFactors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)(int32_t)>(&::Animancer::CartesianMixerState::CalculateBlendFactors)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x180304da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"CalculateBlendFactors", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::CartesianMixerState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::CartesianMixerState::Clone)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180304fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.Animancer_ICopyable_Animancer_CartesianMixerState__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)(::Animancer::CartesianMixerState*)>(&::Animancer::CartesianMixerState::Animancer_ICopyable_Animancer_CartesianMixerState__CopyFrom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180304ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"Animancer.ICopyable<Animancer.CartesianMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::CartesianMixerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.AppendParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)(::System::Text::StringBuilder*, ::UnityEngine::Vector2)>(&::Animancer::CartesianMixerState::AppendParameter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180304d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.get_ParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::CartesianMixerState::*)()>(&::Animancer::CartesianMixerState::get_ParameterCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.GetParameterName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::CartesianMixerState::*)(int32_t)>(&::Animancer::CartesianMixerState::GetParameterName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180305370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.GetParameterType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameterType (::Animancer::CartesianMixerState::*)(int32_t)>(&::Animancer::CartesianMixerState::GetParameterType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.GetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::CartesianMixerState::*)(int32_t)>(&::Animancer::CartesianMixerState::GetParameterValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803053b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState.SetParameterValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)(int32_t, ::System::Object*)>(&::Animancer::CartesianMixerState::SetParameterValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180305410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                    {::i2c::class_of<::Animancer::CartesianMixerState*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::CartesianMixerState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::CartesianMixerState::*)()>(&::Animancer::CartesianMixerState::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803054c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>>& Animancer::CartesianMixerState::__cordl_internal_get__BlendFactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactors;
}
constexpr ::ArrayW<::ArrayW<::UnityEngine::Vector2>> const& Animancer::CartesianMixerState::__cordl_internal_get__BlendFactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactors;
}
constexpr void Animancer::CartesianMixerState::__cordl_internal_set__BlendFactors(::ArrayW<::ArrayW<::UnityEngine::Vector2>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlendFactors = value;
}
constexpr bool& Animancer::CartesianMixerState::__cordl_internal_get__BlendFactorsDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactorsDirty;
}
constexpr bool const& Animancer::CartesianMixerState::__cordl_internal_get__BlendFactorsDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlendFactorsDirty;
}
constexpr void Animancer::CartesianMixerState::__cordl_internal_set__BlendFactorsDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlendFactorsDirty = value;
}
inline float_t Animancer::CartesianMixerState::get_ParameterX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"get_ParameterX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::CartesianMixerState::set_ParameterX(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"set_ParameterX", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::CartesianMixerState::get_ParameterY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"get_ParameterY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::CartesianMixerState::set_ParameterY(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"set_ParameterY", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Animancer::CartesianMixerState::GetParameterError(::UnityEngine::Vector2  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void Animancer::CartesianMixerState::OnThresholdsChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::CartesianMixerState::ForceRecalculateWeights()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::CartesianMixerState::CalculateBlendFactors(int32_t  childCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"CalculateBlendFactors", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childCount);
}
inline ::Animancer::AnimancerState* Animancer::CartesianMixerState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline void Animancer::CartesianMixerState::Animancer_ICopyable_Animancer_CartesianMixerState__CopyFrom(::Animancer::CartesianMixerState*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {"Animancer.ICopyable<Animancer.CartesianMixerState>.CopyFrom", {}, {::i2c::type_of<::Animancer::CartesianMixerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::CartesianMixerState::AppendParameter(::System::Text::StringBuilder*  text, ::UnityEngine::Vector2  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, parameter);
}
inline int32_t Animancer::CartesianMixerState::get_ParameterCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Animancer::CartesianMixerState::GetParameterName(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, index);
}
inline ::UnityEngine::AnimatorControllerParameterType Animancer::CartesianMixerState::GetParameterType(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameterType>(this, ___internal_method, index);
}
inline ::System::Object* Animancer::CartesianMixerState::GetParameterValue(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
inline void Animancer::CartesianMixerState::SetParameterValue(int32_t  index, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::CartesianMixerState*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
inline void Animancer::CartesianMixerState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::CartesianMixerState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::CartesianMixerState* Animancer::CartesianMixerState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::CartesianMixerState*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>"
constexpr  Animancer::CartesianMixerState::operator ::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>* Animancer::CartesianMixerState::i___Animancer__ICopyable_1___Animancer__CartesianMixerState__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::CartesianMixerState*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::CartesianMixerState::CartesianMixerState()   {
}
