#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/ManagerBehaviour_1.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomBehaviour_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagerBehaviour_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::setStaticF_s_OnUpdate(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnUpdate", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Action_1<T>*>* WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::getStaticF_s_OnUpdate()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnUpdate", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>();
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::setStaticF_s_OnLateUpdate(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnLateUpdate", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Action_1<T>*>* WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::getStaticF_s_OnLateUpdate()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnLateUpdate", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>();
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::setStaticF_s_OnFixedUpdate(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnFixedUpdate", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Action_1<T>*>* WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::getStaticF_s_OnFixedUpdate()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnFixedUpdate", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>();
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::setStaticF_s_OnEnable(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnEnable", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Action_1<T>*>* WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::getStaticF_s_OnEnable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnEnable", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>();
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::setStaticF_s_OnDisable(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnDisable", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Action_1<T>*>* WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::getStaticF_s_OnDisable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<T>*>*, "s_OnDisable", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>();
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::setStaticF__Instance_k__BackingField(T  value)  {
::cordl_internals::setStaticField<T, "<Instance>k__BackingField", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<T, "<Instance>k__BackingField", ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>();
}
template<typename T>
inline T WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::set_Instance(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {"set_Instance", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::Broadcast(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  listeners, T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {"Broadcast", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Action_1<T>*>*>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listeners, instance);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::Broadcast(::System::Collections::Generic::List_1<::System::Action_1<T>*>*  listeners)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {"Broadcast", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Action_1<T>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listeners);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::BroadcastUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {"BroadcastUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::AfterRuntimeLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {"AfterRuntimeLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::AfterScriptReload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {"AfterScriptReload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>* WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::WaveHarmonic::Crest::Internal::ManagerBehaviour_1<T>::ManagerBehaviour_1()   {
}
