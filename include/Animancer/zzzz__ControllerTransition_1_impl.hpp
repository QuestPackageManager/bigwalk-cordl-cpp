#pragma once
// IWYU pragma private; include "Animancer/ControllerTransition_1.hpp"
#include "Animancer/zzzz__AnimancerTransition_1_impl.hpp"
#include "Animancer/zzzz__ControllerState_impl.hpp"
#include "Animancer/zzzz__ControllerTransition_1_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
template<typename TState>
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Animancer::ControllerTransition_1<TState>::__cordl_internal_get__Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller;
}
template<typename TState>
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Animancer::ControllerTransition_1<TState>::__cordl_internal_get__Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller;
}
template<typename TState>
constexpr void Animancer::ControllerTransition_1<TState>::__cordl_internal_set__Controller(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller = value;
}
template<typename TState>
constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop>& Animancer::ControllerTransition_1<TState>::__cordl_internal_get__ActionsOnStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionsOnStop;
}
template<typename TState>
constexpr ::ArrayW<::Animancer::ControllerState_ActionOnStop> const& Animancer::ControllerTransition_1<TState>::__cordl_internal_get__ActionsOnStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActionsOnStop;
}
template<typename TState>
constexpr void Animancer::ControllerTransition_1<TState>::__cordl_internal_set__ActionsOnStop(::ArrayW<::Animancer::ControllerState_ActionOnStop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActionsOnStop = value;
}
template<typename TState>
inline ::by_ref<::UnityW<::UnityEngine::RuntimeAnimatorController>> Animancer::ControllerTransition_1<TState>::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::RuntimeAnimatorController>>>(this, ___internal_method);
}
template<typename TState>
inline ::UnityW<::UnityEngine::Object> Animancer::ControllerTransition_1<TState>::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
template<typename TState>
inline ::by_ref<::ArrayW<::Animancer::ControllerState_ActionOnStop>> Animancer::ControllerTransition_1<TState>::get_ActionsOnStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(),
                        {"get_ActionsOnStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<::Animancer::ControllerState_ActionOnStop>>>(this, ___internal_method);
}
template<typename TState>
inline float_t Animancer::ControllerTransition_1<TState>::get_MaximumDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TState>
inline bool Animancer::ControllerTransition_1<TState>::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState>
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> Animancer::ControllerTransition_1<TState>::op_Implicit___UnityW___UnityEngine__RuntimeAnimatorController_(::Animancer::ControllerTransition_1<TState>*  transition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::ControllerTransition_1<TState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RuntimeAnimatorController>>(nullptr, ___internal_method, transition);
}
template<typename TState>
inline void Animancer::ControllerTransition_1<TState>::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TState>
inline void Animancer::ControllerTransition_1<TState>::Animancer_IAnimationClipCollection_GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(),
                        {"Animancer.IAnimationClipCollection.GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
template<typename TState>
inline void Animancer::ControllerTransition_1<TState>::CopyFrom(::Animancer::ControllerTransition_1<TState>*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
template<typename TState>
inline void Animancer::ControllerTransition_1<TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ControllerTransition_1<TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline ::Animancer::ControllerTransition_1<TState>* Animancer::ControllerTransition_1<TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ControllerTransition_1<TState>*>());
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
template<typename TState>
constexpr  Animancer::ControllerTransition_1<TState>::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
template<typename TState>
constexpr ::Animancer::IAnimationClipCollection* Animancer::ControllerTransition_1<TState>::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>"
template<typename TState>
constexpr  Animancer::ControllerTransition_1<TState>::operator ::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>"
template<typename TState>
constexpr ::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>* Animancer::ControllerTransition_1<TState>::i___Animancer__ICopyable_1___Animancer__ControllerTransition_1_TState___() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ControllerTransition_1<TState>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TState>
constexpr ::Animancer::ControllerTransition_1<TState>::ControllerTransition_1()   {
}
