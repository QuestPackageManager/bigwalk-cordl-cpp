#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransition_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__AnimancerTransition_1_def.hpp"
#include "Animancer/zzzz__AnimancerEvent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__FadeMode_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasEvents_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransitionDetailed_def.hpp"
#include "Animancer/zzzz__ITransitionWithEvents_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TState>
constexpr float_t& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__FadeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeDuration;
}
template<typename TState>
constexpr float_t const& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__FadeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FadeDuration;
}
template<typename TState>
constexpr void Animancer::AnimancerTransition_1<TState>::__cordl_internal_set__FadeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FadeDuration = value;
}
template<typename TState>
constexpr ::Animancer::Sequence_AnimancerEvent_Serializable*& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
template<typename TState>
constexpr ::Animancer::Sequence_AnimancerEvent_Serializable* const& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
template<typename TState>
constexpr void Animancer::AnimancerTransition_1<TState>::__cordl_internal_set__Events(::Animancer::Sequence_AnimancerEvent_Serializable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events = value;
}
template<typename TState>
constexpr ::Animancer::AnimancerState*& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__BaseState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseState_k__BackingField;
}
template<typename TState>
constexpr ::Animancer::AnimancerState* const& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__BaseState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseState_k__BackingField;
}
template<typename TState>
constexpr void Animancer::AnimancerTransition_1<TState>::__cordl_internal_set__BaseState_k__BackingField(::Animancer::AnimancerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BaseState_k__BackingField = value;
}
template<typename TState>
constexpr TState& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State;
}
template<typename TState>
constexpr TState const& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State;
}
template<typename TState>
constexpr void Animancer::AnimancerTransition_1<TState>::__cordl_internal_set__State(TState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State = value;
}
template<typename TState>
constexpr ::UnityW<::UnityEngine::Object>& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__MainObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MainObject_k__BackingField;
}
template<typename TState>
constexpr ::UnityW<::UnityEngine::Object> const& Animancer::AnimancerTransition_1<TState>::__cordl_internal_get__MainObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MainObject_k__BackingField;
}
template<typename TState>
constexpr void Animancer::AnimancerTransition_1<TState>::__cordl_internal_set__MainObject_k__BackingField(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MainObject_k__BackingField = value;
}
template<typename TState>
inline float_t Animancer::AnimancerTransition_1<TState>::get_FadeDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"get_FadeDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::set_FadeDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"set_FadeDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState>
inline bool Animancer::AnimancerTransition_1<TState>::get_IsLooping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState>
inline float_t Animancer::AnimancerTransition_1<TState>::get_NormalizedStartTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::set_NormalizedStartTime(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState>
inline float_t Animancer::AnimancerTransition_1<TState>::get_Speed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::set_Speed(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState>
inline float_t Animancer::AnimancerTransition_1<TState>::get_MaximumDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TState>
inline ::Animancer::AnimancerEvent_Sequence* Animancer::AnimancerTransition_1<TState>::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
template<typename TState>
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> Animancer::AnimancerTransition_1<TState>::get_SerializedEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"get_SerializedEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*>>(this, ___internal_method);
}
template<typename TState>
inline ::Animancer::AnimancerState* Animancer::AnimancerTransition_1<TState>::get_BaseState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"get_BaseState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::set_BaseState(::Animancer::AnimancerState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"set_BaseState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState>
inline TState Animancer::AnimancerTransition_1<TState>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::set_State(TState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"set_State", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TState>
inline bool Animancer::AnimancerTransition_1<TState>::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TState>
inline ::System::Object* Animancer::AnimancerTransition_1<TState>::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TState>
inline ::Animancer::FadeMode Animancer::AnimancerTransition_1<TState>::get_FadeMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FadeMode>(this, ___internal_method);
}
template<typename TState>
inline TState Animancer::AnimancerTransition_1<TState>::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TState>
inline ::Animancer::AnimancerState* Animancer::AnimancerTransition_1<TState>::Animancer_ITransition_CreateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"Animancer.ITransition.CreateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TState>
inline ::UnityW<::UnityEngine::Object> Animancer::AnimancerTransition_1<TState>::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
template<typename TState>
inline ::StringW Animancer::AnimancerTransition_1<TState>::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TState>
inline ::StringW Animancer::AnimancerTransition_1<TState>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::CopyFrom(::Animancer::AnimancerTransition_1<TState>*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::ApplyDetails(::Animancer::AnimancerState*  state, float_t  speed, float_t  normalizedStartTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {"ApplyDetails", {}, {::i2c::type_of<::Animancer::AnimancerState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, speed, normalizedStartTime);
}
template<typename TState>
inline void Animancer::AnimancerTransition_1<TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransition_1<TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TState>
inline ::Animancer::AnimancerTransition_1<TState>* Animancer::AnimancerTransition_1<TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerTransition_1<TState>*>());
}
/// @brief Convert operator to "::Animancer::ITransition_1<TState>"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::ITransition_1<TState>*() noexcept {
return static_cast<::Animancer::ITransition_1<TState>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<TState>"
template<typename TState>
constexpr ::Animancer::ITransition_1<TState>* Animancer::AnimancerTransition_1<TState>::i___Animancer__ITransition_1_TState_() noexcept {
return static_cast<::Animancer::ITransition_1<TState>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
template<typename TState>
constexpr ::Animancer::ITransition* Animancer::AnimancerTransition_1<TState>::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
template<typename TState>
constexpr ::Animancer::IHasKey* Animancer::AnimancerTransition_1<TState>::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
template<typename TState>
constexpr ::Animancer::IPolymorphic* Animancer::AnimancerTransition_1<TState>::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransitionDetailed"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::ITransitionDetailed*() noexcept {
return static_cast<::Animancer::ITransitionDetailed*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransitionDetailed"
template<typename TState>
constexpr ::Animancer::ITransitionDetailed* Animancer::AnimancerTransition_1<TState>::i___Animancer__ITransitionDetailed() noexcept {
return static_cast<::Animancer::ITransitionDetailed*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransitionWithEvents"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::ITransitionWithEvents*() noexcept {
return static_cast<::Animancer::ITransitionWithEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransitionWithEvents"
template<typename TState>
constexpr ::Animancer::ITransitionWithEvents* Animancer::AnimancerTransition_1<TState>::i___Animancer__ITransitionWithEvents() noexcept {
return static_cast<::Animancer::ITransitionWithEvents*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasEvents"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::IHasEvents*() noexcept {
return static_cast<::Animancer::IHasEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasEvents"
template<typename TState>
constexpr ::Animancer::IHasEvents* Animancer::AnimancerTransition_1<TState>::i___Animancer__IHasEvents() noexcept {
return static_cast<::Animancer::IHasEvents*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>"
template<typename TState>
constexpr  Animancer::AnimancerTransition_1<TState>::operator ::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>"
template<typename TState>
constexpr ::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>* Animancer::AnimancerTransition_1<TState>::i___Animancer__ICopyable_1___Animancer__AnimancerTransition_1_TState___() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::AnimancerTransition_1<TState>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TState>
constexpr ::Animancer::AnimancerTransition_1<TState>::AnimancerTransition_1()   {
}
