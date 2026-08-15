#pragma once
// IWYU pragma private; include "Animancer/MixerTransition_2.hpp"
#include "Animancer/zzzz__ManualMixerTransition_1_impl.hpp"
#include "Animancer/zzzz__MixerTransition_2_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
template<typename TMixer,typename TParameter>
constexpr ::ArrayW<TParameter>& Animancer::MixerTransition_2<TMixer,TParameter>::__cordl_internal_get__Thresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Thresholds;
}
template<typename TMixer,typename TParameter>
constexpr ::ArrayW<TParameter> const& Animancer::MixerTransition_2<TMixer,TParameter>::__cordl_internal_get__Thresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Thresholds;
}
template<typename TMixer,typename TParameter>
constexpr void Animancer::MixerTransition_2<TMixer,TParameter>::__cordl_internal_set__Thresholds(::ArrayW<TParameter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Thresholds = value;
}
template<typename TMixer,typename TParameter>
constexpr TParameter& Animancer::MixerTransition_2<TMixer,TParameter>::__cordl_internal_get__DefaultParameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultParameter;
}
template<typename TMixer,typename TParameter>
constexpr TParameter const& Animancer::MixerTransition_2<TMixer,TParameter>::__cordl_internal_get__DefaultParameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultParameter;
}
template<typename TMixer,typename TParameter>
constexpr void Animancer::MixerTransition_2<TMixer,TParameter>::__cordl_internal_set__DefaultParameter(TParameter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultParameter = value;
}
template<typename TMixer,typename TParameter>
inline ::by_ref<::ArrayW<TParameter>> Animancer::MixerTransition_2<TMixer,TParameter>::get_Thresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition_2<TMixer,TParameter>*>(),
                        {"get_Thresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<TParameter>>>(this, ___internal_method);
}
template<typename TMixer,typename TParameter>
inline ::by_ref<TParameter> Animancer::MixerTransition_2<TMixer,TParameter>::get_DefaultParameter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition_2<TMixer,TParameter>*>(),
                        {"get_DefaultParameter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<TParameter>>(this, ___internal_method);
}
template<typename TMixer,typename TParameter>
inline void Animancer::MixerTransition_2<TMixer,TParameter>::InitializeState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerTransition_2<TMixer,TParameter>*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TMixer,typename TParameter>
inline void Animancer::MixerTransition_2<TMixer,TParameter>::CopyFrom(::Animancer::MixerTransition_2<TMixer,TParameter>*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::MixerTransition_2<TMixer,TParameter>*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
template<typename TMixer,typename TParameter>
inline void Animancer::MixerTransition_2<TMixer,TParameter>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::MixerTransition_2<TMixer,TParameter>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TMixer,typename TParameter>
inline ::Animancer::MixerTransition_2<TMixer,TParameter>* Animancer::MixerTransition_2<TMixer,TParameter>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::MixerTransition_2<TMixer,TParameter>*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>"
template<typename TMixer,typename TParameter>
constexpr  Animancer::MixerTransition_2<TMixer,TParameter>::operator ::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>"
template<typename TMixer,typename TParameter>
constexpr ::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>* Animancer::MixerTransition_2<TMixer,TParameter>::i___Animancer__ICopyable_1___Animancer__MixerTransition_2_TMixer_TParameter___() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::MixerTransition_2<TMixer,TParameter>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TMixer,typename TParameter>
constexpr ::Animancer::MixerTransition_2<TMixer,TParameter>::MixerTransition_2()   {
}
