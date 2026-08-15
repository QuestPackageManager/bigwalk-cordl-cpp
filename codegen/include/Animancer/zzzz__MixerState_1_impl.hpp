#pragma once
// IWYU pragma private; include "Animancer/MixerState_1.hpp"
#include "Animancer/zzzz__ManualMixerState_impl.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ClipState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
template<typename TParameter>
constexpr ::ArrayW<TParameter>& Animancer::MixerState_1<TParameter>::__cordl_internal_get__Thresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Thresholds;
}
template<typename TParameter>
constexpr ::ArrayW<TParameter> const& Animancer::MixerState_1<TParameter>::__cordl_internal_get__Thresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Thresholds;
}
template<typename TParameter>
constexpr void Animancer::MixerState_1<TParameter>::__cordl_internal_set__Thresholds(::ArrayW<TParameter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Thresholds = value;
}
template<typename TParameter>
constexpr TParameter& Animancer::MixerState_1<TParameter>::__cordl_internal_get__Parameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameter;
}
template<typename TParameter>
constexpr TParameter const& Animancer::MixerState_1<TParameter>::__cordl_internal_get__Parameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameter;
}
template<typename TParameter>
constexpr void Animancer::MixerState_1<TParameter>::__cordl_internal_set__Parameter(TParameter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parameter = value;
}
template<typename TParameter>
inline TParameter Animancer::MixerState_1<TParameter>::get_Parameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"get_Parameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TParameter>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::set_Parameter(TParameter  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"set_Parameter", {}, {::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TParameter>
inline ::StringW Animancer::MixerState_1<TParameter>::GetParameterError(TParameter  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, parameter);
}
template<typename TParameter>
inline bool Animancer::MixerState_1<TParameter>::get_HasThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"get_HasThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TParameter>
inline TParameter Animancer::MixerState_1<TParameter>::GetThreshold(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"GetThreshold", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TParameter>(this, ___internal_method, index);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::SetThreshold(int32_t  index, TParameter  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"SetThreshold", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, threshold);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::SetThresholds(::ArrayW<TParameter>  thresholds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"SetThresholds", {}, {::i2c::type_of<::ArrayW<TParameter>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thresholds);
}
template<typename TParameter>
inline bool Animancer::MixerState_1<TParameter>::ValidateThresholdCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"ValidateThresholdCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::OnThresholdsChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::CalculateThresholds(::System::Func_2<::Animancer::AnimancerState*,TParameter>*  calculate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"CalculateThresholds", {}, {::i2c::type_of<::System::Func_2<::Animancer::AnimancerState*,TParameter>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, calculate);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::RecreatePlayable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::OnChildCapacityChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::Add(::Animancer::AnimancerState*  state, TParameter  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, threshold);
}
template<typename TParameter>
inline ::Animancer::ClipState* Animancer::MixerState_1<TParameter>::Add(::UnityEngine::AnimationClip*  clip, TParameter  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>(), ::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ClipState*>(this, ___internal_method, clip, threshold);
}
template<typename TParameter>
inline ::Animancer::AnimancerState* Animancer::MixerState_1<TParameter>::Add(::Animancer::ITransition*  transition, TParameter  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"Add", {}, {::i2c::type_of<::Animancer::ITransition*>(), ::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, transition, threshold);
}
template<typename TParameter>
inline ::Animancer::AnimancerState* Animancer::MixerState_1<TParameter>::Add(::System::Object*  child, TParameter  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<TParameter>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, child, threshold);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::Animancer_ICopyable_Animancer_MixerState_TParameter___CopyFrom(::Animancer::MixerState_1<TParameter>*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {"Animancer.ICopyable<Animancer.MixerState<TParameter>>.CopyFrom", {}, {::i2c::type_of<::Animancer::MixerState_1<TParameter>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
template<typename TParameter>
inline ::StringW Animancer::MixerState_1<TParameter>::GetDisplayKey(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, state);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::AppendParameter(::System::Text::StringBuilder*  description, TParameter  parameter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description, parameter);
}
template<typename TParameter>
inline void Animancer::MixerState_1<TParameter>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerState_1<TParameter>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TParameter>
inline ::Animancer::MixerState_1<TParameter>* Animancer::MixerState_1<TParameter>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerState_1<TParameter>*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>"
template<typename TParameter>
constexpr  Animancer::MixerState_1<TParameter>::operator ::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>"
template<typename TParameter>
constexpr ::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>* Animancer::MixerState_1<TParameter>::i___Animancer__ICopyable_1___Animancer__MixerState_1_TParameter___() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::MixerState_1<TParameter>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TParameter>
constexpr ::Animancer::MixerState_1<TParameter>::MixerState_1()   {
}
