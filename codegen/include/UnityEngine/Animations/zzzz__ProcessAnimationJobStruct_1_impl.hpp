#pragma once
// IWYU pragma private; include "UnityEngine/Animations/ProcessAnimationJobStruct_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Animations/zzzz__ProcessAnimationJobStruct_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "UnityEngine/Animations/zzzz__ProcessAnimationJobStruct_1_def.hpp"
template<typename T>
inline void UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename T>
inline void UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>::Invoke(::by_ref<T>  data, ::System::IntPtr  animationStreamPtr, ::System::IntPtr  unusedPtr, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, animationStreamPtr, unusedPtr, ranges, jobIndex);
}
template<typename T>
inline ::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>* UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>*>(object, method));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Animations::ProcessAnimationJobStruct_1_ExecuteJobFunction<T>::ProcessAnimationJobStruct_1_ExecuteJobFunction()   {
}
template<typename T>
inline void UnityEngine::Animations::ProcessAnimationJobStruct_1<T>::setStaticF_jobReflectionData(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "jobReflectionData", ::UnityEngine::Animations::ProcessAnimationJobStruct_1<T>>(std::forward<::System::IntPtr>(value));
}
template<typename T>
inline ::System::IntPtr UnityEngine::Animations::ProcessAnimationJobStruct_1<T>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "jobReflectionData", ::UnityEngine::Animations::ProcessAnimationJobStruct_1<T>>();
}
template<typename T>
inline ::System::IntPtr UnityEngine::Animations::ProcessAnimationJobStruct_1<T>::GetJobReflectionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::ProcessAnimationJobStruct_1<T>>(),
                        {"GetJobReflectionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
template<typename T>
inline void UnityEngine::Animations::ProcessAnimationJobStruct_1<T>::Execute(::by_ref<T>  data, ::System::IntPtr  animationStreamPtr, ::System::IntPtr  methodIndex, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::ProcessAnimationJobStruct_1<T>>(),
                        {"Execute", {}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, animationStreamPtr, methodIndex, ranges, jobIndex);
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Animations::ProcessAnimationJobStruct_1<T>::ProcessAnimationJobStruct_1()   {
}
