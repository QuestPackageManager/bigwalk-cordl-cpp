#pragma once
// IWYU pragma private; include "Animancer/AnimatedProperty_2.hpp"
#include "Animancer/zzzz__AnimancerJob_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_impl.hpp"
#include "Animancer/zzzz__AnimatedProperty_2_def.hpp"
#include "Animancer/zzzz__IAnimancerComponent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
template<typename TJob,typename TValue>
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>& Animancer::AnimatedProperty_2<TJob,TValue>::__cordl_internal_get__Properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Properties;
}
template<typename TJob,typename TValue>
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle> const& Animancer::AnimatedProperty_2<TJob,TValue>::__cordl_internal_get__Properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Properties;
}
template<typename TJob,typename TValue>
constexpr void Animancer::AnimatedProperty_2<TJob,TValue>::__cordl_internal_set__Properties(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Properties = value;
}
template<typename TJob,typename TValue>
constexpr ::Unity::Collections::NativeArray_1<TValue>& Animancer::AnimatedProperty_2<TJob,TValue>::__cordl_internal_get__Values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Values;
}
template<typename TJob,typename TValue>
constexpr ::Unity::Collections::NativeArray_1<TValue> const& Animancer::AnimatedProperty_2<TJob,TValue>::__cordl_internal_get__Values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Values;
}
template<typename TJob,typename TValue>
constexpr void Animancer::AnimatedProperty_2<TJob,TValue>::__cordl_internal_set__Values(::Unity::Collections::NativeArray_1<TValue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Values = value;
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyCount, options);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyName);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::IAnimancerComponent*>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animancer, propertyNames);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::InitializeProperty(::UnityEngine::Animator*  animator, int32_t  index, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"InitializeProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, index, name);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::InitializeProperty(::UnityEngine::Animator*  animator, int32_t  index, ::UnityEngine::Transform*  transform, ::System::Type*  type, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"InitializeProperty", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animator, index, transform, type, name);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::CreateJob()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TJob,typename TValue>
inline TValue Animancer::AnimatedProperty_2<TJob,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TJob,typename TValue>
inline TValue Animancer::AnimatedProperty_2<TJob,TValue>::op_Implicit_TValue(::Animancer::AnimatedProperty_2<TJob,TValue>*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, properties);
}
template<typename TJob,typename TValue>
inline TValue Animancer::AnimatedProperty_2<TJob,TValue>::GetValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"GetValue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, index);
}
template<typename TJob,typename TValue>
inline TValue Animancer::AnimatedProperty_2<TJob,TValue>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, index);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::GetValues(::by_ref<::ArrayW<TValue>>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"GetValues", {}, {::i2c::type_of<::by_ref<::ArrayW<TValue>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
template<typename TJob,typename TValue>
inline ::ArrayW<TValue> Animancer::AnimatedProperty_2<TJob,TValue>::GetValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"GetValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue>>(this, ___internal_method);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TJob,typename TValue>
inline void Animancer::AnimatedProperty_2<TJob,TValue>::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::AnimatedProperty_2<TJob,TValue>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TJob,typename TValue>
inline ::Animancer::AnimatedProperty_2<TJob,TValue>* Animancer::AnimatedProperty_2<TJob,TValue>::New_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedProperty_2<TJob,TValue>*>(animancer, propertyCount, options));
}
template<typename TJob,typename TValue>
inline ::Animancer::AnimatedProperty_2<TJob,TValue>* Animancer::AnimatedProperty_2<TJob,TValue>::New_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedProperty_2<TJob,TValue>*>(animancer, propertyName));
}
template<typename TJob,typename TValue>
inline ::Animancer::AnimatedProperty_2<TJob,TValue>* Animancer::AnimatedProperty_2<TJob,TValue>::New_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::AnimatedProperty_2<TJob,TValue>*>(animancer, propertyNames));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TJob,typename TValue>
constexpr  Animancer::AnimatedProperty_2<TJob,TValue>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TJob,typename TValue>
constexpr ::System::IDisposable* Animancer::AnimatedProperty_2<TJob,TValue>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TJob,typename TValue>
constexpr ::Animancer::AnimatedProperty_2<TJob,TValue>::AnimatedProperty_2()   {
}
