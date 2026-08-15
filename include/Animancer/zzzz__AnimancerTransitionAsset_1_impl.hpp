#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransitionAsset_1.hpp"
#include "Animancer/zzzz__AnimancerTransitionAssetBase_impl.hpp"
#include "Animancer/zzzz__AnimancerTransitionAsset_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
template<typename TTransition>
constexpr TTransition& Animancer::AnimancerTransitionAsset_1<TTransition>::__cordl_internal_get__Transition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transition;
}
template<typename TTransition>
constexpr TTransition const& Animancer::AnimancerTransitionAsset_1<TTransition>::__cordl_internal_get__Transition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transition;
}
template<typename TTransition>
constexpr void Animancer::AnimancerTransitionAsset_1<TTransition>::__cordl_internal_set__Transition(TTransition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Transition = value;
}
template<typename TTransition>
inline TTransition Animancer::AnimancerTransitionAsset_1<TTransition>::get_Transition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAsset_1<TTransition>*>(),
                        {"get_Transition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TTransition>(this, ___internal_method);
}
template<typename TTransition>
inline void Animancer::AnimancerTransitionAsset_1<TTransition>::set_Transition(TTransition  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAsset_1<TTransition>*>(),
                        {"set_Transition", {}, {::i2c::type_of<TTransition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TTransition>
inline ::Animancer::ITransition* Animancer::AnimancerTransitionAsset_1<TTransition>::GetTransition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAsset_1<TTransition>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ITransition*>(this, ___internal_method);
}
template<typename TTransition>
inline bool Animancer::AnimancerTransitionAsset_1<TTransition>::get_HasTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAsset_1<TTransition>*>(),
                        {"get_HasTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TTransition>
inline void Animancer::AnimancerTransitionAsset_1<TTransition>::AssertTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAsset_1<TTransition>*>(),
                        {"AssertTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTransition>
inline void Animancer::AnimancerTransitionAsset_1<TTransition>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAsset_1<TTransition>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TTransition>
inline ::Animancer::AnimancerTransitionAsset_1<TTransition>* Animancer::AnimancerTransitionAsset_1<TTransition>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerTransitionAsset_1<TTransition>*>());
}
// Ctor Parameters []
template<typename TTransition>
constexpr ::Animancer::AnimancerTransitionAsset_1<TTransition>::AnimancerTransitionAsset_1()   {
}
