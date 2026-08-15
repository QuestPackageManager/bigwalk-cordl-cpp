#pragma once
// IWYU pragma private; include "Animancer/AnimancerTransitionAssetBase.hpp"
#include "Animancer/zzzz__AnimancerTransitionAssetBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__AnimancerEvent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__AnimancerTransitionAssetBase_def.hpp"
#include "Animancer/zzzz__FadeMode_def.hpp"
#include "Animancer/zzzz__IHasEvents_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransitionWithEvents_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__IWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__IAnimationClipSource_def.hpp"
template<typename TAsset>
constexpr TAsset& Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_get__Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Asset;
}
template<typename TAsset>
constexpr TAsset const& Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_get__Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Asset;
}
template<typename TAsset>
constexpr void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_set__Asset(TAsset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Asset = value;
}
template<typename TAsset>
constexpr ::Animancer::AnimancerState*& Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_get__BaseState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseState;
}
template<typename TAsset>
constexpr ::Animancer::AnimancerState* const& Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_get__BaseState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BaseState;
}
template<typename TAsset>
constexpr void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_set__BaseState(::Animancer::AnimancerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BaseState = value;
}
template<typename TAsset>
constexpr ::Animancer::AnimancerEvent_Sequence*& Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_get__Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
template<typename TAsset>
constexpr ::Animancer::AnimancerEvent_Sequence* const& Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_get__Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events;
}
template<typename TAsset>
constexpr void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::__cordl_internal_set__Events(::Animancer::AnimancerEvent_Sequence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Events = value;
}
template<typename TAsset>
inline TAsset Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_Asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"get_Asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TAsset>(this, ___internal_method);
}
template<typename TAsset>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::set_Asset(TAsset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"set_Asset", {}, {::i2c::type_of<TAsset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TAsset>
inline ::System::Object* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::Animancer_IWrapper_get_WrappedObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"Animancer.IWrapper.get_WrappedObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TAsset>
inline ::Animancer::ITransition* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_BaseTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"get_BaseTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ITransition*>(this, ___internal_method);
}
template<typename TAsset>
inline bool Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TAsset>
inline bool Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_HasAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"get_HasAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TAsset>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::AssertAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"AssertAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAsset>
inline ::Animancer::AnimancerState* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_BaseState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"get_BaseState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
template<typename TAsset>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::set_BaseState(::Animancer::AnimancerState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"set_BaseState", {}, {::i2c::type_of<::Animancer::AnimancerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TAsset>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::OnSetBaseState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAsset>
inline ::Animancer::AnimancerEvent_Sequence* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_Events()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerEvent_Sequence*>(this, ___internal_method);
}
template<typename TAsset>
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_SerializedEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*>>(this, ___internal_method);
}
template<typename TAsset>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::ClearCachedEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"ClearCachedEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAsset>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
template<typename TAsset>
inline ::System::Object* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TAsset>
inline float_t Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_FadeDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename TAsset>
inline ::Animancer::FadeMode Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::get_FadeMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FadeMode>(this, ___internal_method);
}
template<typename TAsset>
inline ::Animancer::AnimancerState* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::Animancer_ITransition_CreateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {"Animancer.ITransition.CreateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
template<typename TAsset>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAsset>
inline ::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>*>());
}
/// @brief Convert operator to "::Animancer::ITransition"
template<typename TAsset>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
template<typename TAsset>
constexpr ::Animancer::ITransition* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
template<typename TAsset>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
template<typename TAsset>
constexpr ::Animancer::IHasKey* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
template<typename TAsset>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
template<typename TAsset>
constexpr ::Animancer::IPolymorphic* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransitionWithEvents"
template<typename TAsset>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::operator ::Animancer::ITransitionWithEvents*() noexcept {
return static_cast<::Animancer::ITransitionWithEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransitionWithEvents"
template<typename TAsset>
constexpr ::Animancer::ITransitionWithEvents* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::i___Animancer__ITransitionWithEvents() noexcept {
return static_cast<::Animancer::ITransitionWithEvents*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasEvents"
template<typename TAsset>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::operator ::Animancer::IHasEvents*() noexcept {
return static_cast<::Animancer::IHasEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasEvents"
template<typename TAsset>
constexpr ::Animancer::IHasEvents* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::i___Animancer__IHasEvents() noexcept {
return static_cast<::Animancer::IHasEvents*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IWrapper"
template<typename TAsset>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::operator ::Animancer::IWrapper*() noexcept {
return static_cast<::Animancer::IWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IWrapper"
template<typename TAsset>
constexpr ::Animancer::IWrapper* Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::i___Animancer__IWrapper() noexcept {
return static_cast<::Animancer::IWrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TAsset>
constexpr ::Animancer::AnimancerTransitionAssetBase_UnShared_1<TAsset>::AnimancerTransitionAssetBase_UnShared_1()   {
}
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase_UnShared._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerTransitionAssetBase_UnShared::*)()>(&::Animancer::AnimancerTransitionAssetBase_UnShared::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::AnimancerTransitionAssetBase_UnShared::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerTransitionAssetBase_UnShared* Animancer::AnimancerTransitionAssetBase_UnShared::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerTransitionAssetBase_UnShared*>());
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerTransitionAssetBase_UnShared::AnimancerTransitionAssetBase_UnShared()   {
}
template<typename TAsset,typename TTransition,typename TState>
constexpr TState& Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::__cordl_internal_get__State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State;
}
template<typename TAsset,typename TTransition,typename TState>
constexpr TState const& Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::__cordl_internal_get__State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State;
}
template<typename TAsset,typename TTransition,typename TState>
constexpr void Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::__cordl_internal_set__State(TState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State = value;
}
template<typename TAsset,typename TTransition,typename TState>
inline TTransition Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::get_Transition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(),
                        {"get_Transition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TTransition>(this, ___internal_method);
}
template<typename TAsset,typename TTransition,typename TState>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::set_Transition(TTransition  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(),
                        {"set_Transition", {}, {::i2c::type_of<TTransition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TAsset,typename TTransition,typename TState>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::OnSetBaseState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAsset,typename TTransition,typename TState>
inline TState Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TAsset,typename TTransition,typename TState>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::set_State(TState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(),
                        {"set_State", {}, {::i2c::type_of<TState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TAsset,typename TTransition,typename TState>
inline ::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*> Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::get_SerializedEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::Sequence_AnimancerEvent_Serializable*>>(this, ___internal_method);
}
template<typename TAsset,typename TTransition,typename TState>
inline TState Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method);
}
template<typename TAsset,typename TTransition,typename TState>
inline void Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TAsset,typename TTransition,typename TState>
inline ::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>* Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>*>());
}
/// @brief Convert operator to "::Animancer::ITransition_1<TState>"
template<typename TAsset,typename TTransition,typename TState>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::operator ::Animancer::ITransition_1<TState>*() noexcept {
return static_cast<::Animancer::ITransition_1<TState>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<TState>"
template<typename TAsset,typename TTransition,typename TState>
constexpr ::Animancer::ITransition_1<TState>* Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::i___Animancer__ITransition_1_TState_() noexcept {
return static_cast<::Animancer::ITransition_1<TState>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
template<typename TAsset,typename TTransition,typename TState>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
template<typename TAsset,typename TTransition,typename TState>
constexpr ::Animancer::ITransition* Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
template<typename TAsset,typename TTransition,typename TState>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
template<typename TAsset,typename TTransition,typename TState>
constexpr ::Animancer::IHasKey* Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
template<typename TAsset,typename TTransition,typename TState>
constexpr  Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
template<typename TAsset,typename TTransition,typename TState>
constexpr ::Animancer::IPolymorphic* Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TAsset,typename TTransition,typename TState>
constexpr ::Animancer::AnimancerTransitionAssetBase_UnShared_3<TAsset,TTransition,TState>::AnimancerTransitionAssetBase_UnShared_3()   {
}
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.GetTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ITransition* (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::GetTransition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.Animancer_IWrapper_get_WrappedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::Animancer_IWrapper_get_WrappedObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180303b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                        {"Animancer.IWrapper.get_WrappedObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::get_IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180303de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.get_FadeDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::get_FadeDuration)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180303ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::get_Key)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180303e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.get_FadeMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::FadeMode (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::get_FadeMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180303da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::CreateState)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180303bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerTransitionAssetBase::*)(::Animancer::AnimancerState*)>(&::Animancer::AnimancerTransitionAssetBase::Apply)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180303ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase.GetAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerTransitionAssetBase::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::AnimancerTransitionAssetBase::GetAnimationClips)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180303ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                    {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::AnimancerTransitionAssetBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::AnimancerTransitionAssetBase::*)()>(&::Animancer::AnimancerTransitionAssetBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Animancer::ITransition* Animancer::AnimancerTransitionAssetBase::GetTransition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ITransition*>(this, ___internal_method);
}
inline ::System::Object* Animancer::AnimancerTransitionAssetBase::Animancer_IWrapper_get_WrappedObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                        {"Animancer.IWrapper.get_WrappedObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool Animancer::AnimancerTransitionAssetBase::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Animancer::AnimancerTransitionAssetBase::get_FadeDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Object* Animancer::AnimancerTransitionAssetBase::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Animancer::FadeMode Animancer::AnimancerTransitionAssetBase::get_FadeMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::FadeMode>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::AnimancerTransitionAssetBase::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method);
}
inline void Animancer::AnimancerTransitionAssetBase::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::AnimancerTransitionAssetBase::GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::AnimancerTransitionAssetBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimancerTransitionAssetBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerTransitionAssetBase* Animancer::AnimancerTransitionAssetBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimancerTransitionAssetBase*>());
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::AnimancerTransitionAssetBase::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::AnimancerTransitionAssetBase::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::AnimancerTransitionAssetBase::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::AnimancerTransitionAssetBase::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::AnimancerTransitionAssetBase::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::AnimancerTransitionAssetBase::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IWrapper"
constexpr  Animancer::AnimancerTransitionAssetBase::operator ::Animancer::IWrapper*() noexcept {
return static_cast<::Animancer::IWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IWrapper"
constexpr ::Animancer::IWrapper* Animancer::AnimancerTransitionAssetBase::i___Animancer__IWrapper() noexcept {
return static_cast<::Animancer::IWrapper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr  Animancer::AnimancerTransitionAssetBase::operator ::UnityEngine::IAnimationClipSource*() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* Animancer::AnimancerTransitionAssetBase::i___UnityEngine__IAnimationClipSource() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::AnimancerTransitionAssetBase::AnimancerTransitionAssetBase()   {
}
