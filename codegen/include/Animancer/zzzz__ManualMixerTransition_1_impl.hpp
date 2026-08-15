#pragma once
// IWYU pragma private; include "Animancer/ManualMixerTransition_1.hpp"
#include "Animancer/zzzz__AnimancerTransition_1_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__ManualMixerTransition_1_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IMotion_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template<typename TMixer>
constexpr float_t& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
template<typename TMixer>
constexpr float_t const& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
template<typename TMixer>
constexpr void Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_set__Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speed = value;
}
template<typename TMixer>
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__Animations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
template<typename TMixer>
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__Animations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animations;
}
template<typename TMixer>
constexpr void Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_set__Animations(::ArrayW<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animations = value;
}
template<typename TMixer>
constexpr ::ArrayW<float_t>& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__Speeds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speeds;
}
template<typename TMixer>
constexpr ::ArrayW<float_t> const& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__Speeds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speeds;
}
template<typename TMixer>
constexpr void Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_set__Speeds(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speeds = value;
}
template<typename TMixer>
constexpr ::ArrayW<bool>& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__SynchronizeChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynchronizeChildren;
}
template<typename TMixer>
constexpr ::ArrayW<bool> const& Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_get__SynchronizeChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SynchronizeChildren;
}
template<typename TMixer>
constexpr void Animancer::ManualMixerTransition_1<TMixer>::__cordl_internal_set__SynchronizeChildren(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SynchronizeChildren = value;
}
template<typename TMixer>
inline float_t Animancer::ManualMixerTransition_1<TMixer>::get_Speed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TMixer>
inline void Animancer::ManualMixerTransition_1<TMixer>::set_Speed(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TMixer>
inline ::by_ref<::ArrayW<::UnityW<::UnityEngine::Object>>> Animancer::ManualMixerTransition_1<TMixer>::get_Animations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(),
                        {"get_Animations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<::UnityW<::UnityEngine::Object>>>>(this, ___internal_method);
}
template<typename TMixer>
inline ::by_ref<::ArrayW<float_t>> Animancer::ManualMixerTransition_1<TMixer>::get_Speeds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(),
                        {"get_Speeds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<float_t>>>(this, ___internal_method);
}
template<typename TMixer>
inline bool Animancer::ManualMixerTransition_1<TMixer>::get_HasSpeeds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(),
                        {"get_HasSpeeds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TMixer>
inline ::by_ref<::ArrayW<bool>> Animancer::ManualMixerTransition_1<TMixer>::get_SynchronizeChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(),
                        {"get_SynchronizeChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<bool>>>(this, ___internal_method);
}
template<typename TMixer>
inline bool Animancer::ManualMixerTransition_1<TMixer>::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TMixer>
inline float_t Animancer::ManualMixerTransition_1<TMixer>::get_MaximumDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TMixer>
inline float_t Animancer::ManualMixerTransition_1<TMixer>::get_AverageAngularSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TMixer>
inline ::UnityEngine::Vector3 Animancer::ManualMixerTransition_1<TMixer>::get_AverageVelocity()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
template<typename TMixer>
inline bool Animancer::ManualMixerTransition_1<TMixer>::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TMixer>
inline void Animancer::ManualMixerTransition_1<TMixer>::InitializeState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TMixer>
inline void Animancer::ManualMixerTransition_1<TMixer>::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TMixer>
inline void Animancer::ManualMixerTransition_1<TMixer>::Animancer_IAnimationClipCollection_GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(),
                        {"Animancer.IAnimationClipCollection.GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
template<typename TMixer>
inline void Animancer::ManualMixerTransition_1<TMixer>::CopyFrom(::Animancer::ManualMixerTransition_1<TMixer>*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
template<typename TMixer>
inline void Animancer::ManualMixerTransition_1<TMixer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ManualMixerTransition_1<TMixer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TMixer>
inline ::Animancer::ManualMixerTransition_1<TMixer>* Animancer::ManualMixerTransition_1<TMixer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ManualMixerTransition_1<TMixer>*>());
}
/// @brief Convert operator to "::Animancer::IMotion"
template<typename TMixer>
constexpr  Animancer::ManualMixerTransition_1<TMixer>::operator ::Animancer::IMotion*() noexcept {
return static_cast<::Animancer::IMotion*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IMotion"
template<typename TMixer>
constexpr ::Animancer::IMotion* Animancer::ManualMixerTransition_1<TMixer>::i___Animancer__IMotion() noexcept {
return static_cast<::Animancer::IMotion*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
template<typename TMixer>
constexpr  Animancer::ManualMixerTransition_1<TMixer>::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
template<typename TMixer>
constexpr ::Animancer::IAnimationClipCollection* Animancer::ManualMixerTransition_1<TMixer>::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>"
template<typename TMixer>
constexpr  Animancer::ManualMixerTransition_1<TMixer>::operator ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>"
template<typename TMixer>
constexpr ::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>* Animancer::ManualMixerTransition_1<TMixer>::i___Animancer__ICopyable_1___Animancer__ManualMixerTransition_1_TMixer___() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::ManualMixerTransition_1<TMixer>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TMixer>
constexpr ::Animancer::ManualMixerTransition_1<TMixer>::ManualMixerTransition_1()   {
}
