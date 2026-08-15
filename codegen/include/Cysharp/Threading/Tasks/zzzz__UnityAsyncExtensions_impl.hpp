#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnityEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnityEventHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncClickEventHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndEditEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncValueChangedEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::*)(::UnityEngine::AssetBundleRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e72f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::GetAwaiter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e72fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::GetResult)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e73730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e72ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e72f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::_ctor(::UnityEngine::AssetBundleRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(*this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e823e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c._Create_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e82150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e73de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* (*)(::UnityEngine::AssetBundleRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, bool, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181e73850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e73b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e73b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180e57af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x19360;
  constexpr static std::size_t addrs = 0x180d18070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x180e57b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181e73bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e73ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Continuation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e737e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AssetBundleRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AssetBundleRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancelImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancelImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_cancelImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelImmediately = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, cancelImmediately, token);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Continuation(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___ArrayW___UnityW___UnityEngine__Object___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource_1___ArrayW___UnityW___UnityEngine__Object___() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e823a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c._Create_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::_Create_b__11_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e81f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__11_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::setStaticF___9__11_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__11_0", ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__11_0", ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::_Create_b__11_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__11_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181e76730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e769a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e76980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e76b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x6cd0;
  constexpr static std::size_t addrs = 0x180e584e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e76c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e76b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e76d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancelImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancelImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_cancelImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelImmediately = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Create(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(nullptr, ___internal_method, asyncOperation, timing, cancellationToken, cancelImmediately, token);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Rendering__AsyncGPUReadbackRequest_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityEngine__Rendering__AsyncGPUReadbackRequest_() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* (*)(::Unity::Jobs::JobHandle, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e7e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"Create", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e60db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180ed13f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::OnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e60e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::MoveNext)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181e7ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Jobs::JobHandle& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobHandle = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::Create(::Unity::Jobs::JobHandle  jobHandle, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"Create", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(nullptr, ___internal_method, jobHandle, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::UnityAsyncExtensions_JobHandlePromise()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e72f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e72fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181e78450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e72ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e72f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::_ctor(::UnityEngine::AsyncOperation*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::UnityAsyncExtensions_AsyncOperationAwaiter(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter::UnityAsyncExtensions_AsyncOperationAwaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e82260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c._Create_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e82000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::AsyncOperationConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e78b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource* (*)(::UnityEngine::AsyncOperation*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, bool, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181e785c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e788a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180e57af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x19360;
  constexpr static std::size_t addrs = 0x180d18070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x180e57b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e78900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e789d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::Continuation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e78550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AsyncOperation*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AsyncOperation* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancelImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancelImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_cancelImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelImmediately = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::Create(::UnityEngine::AsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, cancelImmediately, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::Continuation(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncOperationConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::UnityAsyncExtensions_AsyncOperationConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::*)(::UnityEngine::ResourceRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e72f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e72fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::GetResult)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e73e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e72ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e72f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::_ctor(::UnityEngine::ResourceRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::ResourceRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::UnityAsyncExtensions_ResourceRequestAwaiter(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter::UnityAsyncExtensions_ResourceRequestAwaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e82320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c._Create_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e82100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::ResourceRequestConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e7fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* (*)(::UnityEngine::ResourceRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, bool, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181e7f9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e7fcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180e57af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x19360;
  constexpr static std::size_t addrs = 0x180d18070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x180e57b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181e742c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e7fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Continuation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e73ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::ResourceRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::ResourceRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::ResourceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancelImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancelImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_cancelImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelImmediately = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Create(::UnityEngine::ResourceRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, cancelImmediately, token);
}
inline ::UnityW<::UnityEngine::Object> Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Continuation(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityW___UnityEngine__Object__() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_ResourceRequestConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::UnityAsyncExtensions_ResourceRequestConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)(::UnityEngine::AssetBundleRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e72f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e72fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::GetResult)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e73e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e72ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e72f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::_ctor(::UnityEngine::AssetBundleRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnityAsyncExtensions_AssetBundleRequestAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnityAsyncExtensions_AssetBundleRequestAwaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e82220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c._Create_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e82050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e74500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* (*)(::UnityEngine::AssetBundleRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, bool, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181e73f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e74250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e74240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180e57af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x19360;
  constexpr static std::size_t addrs = 0x180d18070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x180e57b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181e742c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e743a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Continuation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e73ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AssetBundleRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AssetBundleRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancelImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancelImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_cancelImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelImmediately = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, cancelImmediately, token);
}
inline ::UnityW<::UnityEngine::Object> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Continuation(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityW___UnityEngine__Object__() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::UnityAsyncExtensions_AssetBundleRequestConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)(::UnityEngine::AssetBundleCreateRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e72f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e72fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e72e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e72ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e72f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::_ctor(::UnityEngine::AssetBundleCreateRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AssetBundle> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleCreateRequest*", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e82360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c._Create_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e81fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e736e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* (*)(::UnityEngine::AssetBundleCreateRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, bool, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181e73130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e73430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e73420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180e57af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x19360;
  constexpr static std::size_t addrs = 0x180d18070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x180e57b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181e734a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e73580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Continuation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e730c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AssetBundleCreateRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AssetBundleCreateRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleCreateRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancelImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancelImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_cancelImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelImmediately = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Create(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, cancelImmediately, token);
}
inline ::UnityW<::UnityEngine::AssetBundle> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Continuation(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__AssetBundle__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityW___UnityEngine__AssetBundle__() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e72f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e72fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181e88150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e72ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e72f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::_ctor(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: Some("{}") }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e822e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c._Create_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)(::System::Object*)>(&::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e820a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "<>9__14_0", ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::_Create_b__14_0(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<Create>b__14_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e88a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, bool, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181e883b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e886b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e886a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180e57af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0x19360;
  constexpr static std::size_t addrs = 0x180d18070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x180e57b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181e88720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e888b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(::UnityEngine::AsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Continuation)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e882c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancelImmediately()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancelImmediately() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancelImmediately;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_cancelImmediately(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancelImmediately = value;
}
constexpr bool& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Create(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, cancelImmediately, token);
}
inline ::UnityEngine::Networking::UnityWebRequest* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Continuation(::UnityEngine::AsyncOperation*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Networking__UnityWebRequest__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityEngine__Networking__UnityWebRequest__() noexcept {
return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181e835b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "waitTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: Some("{}") }, CppParam { name: "jobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::UnityAsyncExtensions__WaitAsync_d__11(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming, ::Unity::Jobs::JobHandle  jobHandle, ::System::Threading::CancellationToken  cancellationToken, ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->waitTiming = waitTiming;
this->jobHandle = jobHandle;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11::UnityAsyncExtensions__WaitAsync_d__11()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.AwaitForAllAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter (*)(::UnityEngine::AssetBundleRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e848d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.AwaitForAllAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> (*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e84890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.AwaitForAllAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> (*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e84720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.AwaitForAllAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> (*)(::UnityEngine::AssetBundleRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e84760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest> (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181e851b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e86b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WaitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::Unity::Jobs::JobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WaitAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e86c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WaitAsync", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_Awaiter (*)(::Unity::Jobs::JobHandle)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181e850e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::Unity::Jobs::JobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e869b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.StartAsyncCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::MonoBehaviour*, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::StartAsyncCoroutine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e86410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"StartAsyncCoroutine", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::AsyncOperation*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::AsyncOperation*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::AsyncOperation*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181e86850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter (*)(::UnityEngine::ResourceRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e848d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::ResourceRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::ResourceRequest*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::ResourceRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e865f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter (*)(::UnityEngine::AssetBundleRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e848d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::AssetBundleRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e86720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter (*)(::UnityEngine::AssetBundleCreateRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e848d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> (*)(::UnityEngine::AssetBundleCreateRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> (*)(::UnityEngine::AssetBundleCreateRequest*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> (*)(::UnityEngine::AssetBundleCreateRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e86a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e848d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e86e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, bool)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181e86470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AsyncUnityEventHandler* (*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEventHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e84af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEventHandler", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnInvokeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181e85830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsync", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnInvokeAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e857d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncClickEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncClickEventHandler* (*)(::UnityEngine::UI::Button*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncClickEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncClickEventHandler* (*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::UI::Button*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e85470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181e85530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::UnityEngine::UI::Button*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e85380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* (*)(::UnityEngine::UI::Toggle*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e84bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* (*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (*)(::UnityEngine::UI::Toggle*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e85db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e85fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* (*)(::UnityEngine::UI::Toggle*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* (*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e85c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e84c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Scrollbar*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e86270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e86390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e859b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> (*)(::UnityEngine::UI::ScrollRect*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e860d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> (*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e85f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e85ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Slider*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e84d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Slider*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e86300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e85e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Slider*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e858d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e85b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e84a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e85740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e856c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e855f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e84b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e861e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e86050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e85a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e84cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e84eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int32_t> (*)(::UnityEngine::UI::Dropdown*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181e85ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int32_t> (*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e86160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e85a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e85c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>>>(nullptr, ___internal_method, asyncOperation, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest> Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>(nullptr, ___internal_method, asyncOperation, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>(nullptr, ___internal_method, asyncOperation, timing, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::WaitAsync(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WaitAsync", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, jobHandle, waitTiming, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_Awaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::Unity::Jobs::JobHandle  jobHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_Awaiter>(nullptr, ___internal_method, jobHandle);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, jobHandle, waitTiming);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::StartAsyncCoroutine(::UnityEngine::MonoBehaviour*  monoBehaviour, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  asyncCoroutine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"StartAsyncCoroutine", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, monoBehaviour, asyncCoroutine);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, asyncOperation, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::AsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::ResourceRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::ResourceRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>>>(nullptr, ___internal_method, asyncOperation, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>>(nullptr, ___internal_method, asyncOperation, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken, cancelImmediately);
}
inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEventHandler(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEventHandler", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsync(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsync", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEventHandler(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                    {"GetAsyncEventHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsync(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                    {"OnInvokeAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                    {"OnInvokeAsAsyncEnumerable", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(nullptr, ___internal_method, button);
}
inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(nullptr, ___internal_method, button, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync(::UnityEngine::UI::Button*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, button);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, button, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, button);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, button, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>*>(nullptr, ___internal_method, toggle);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>*>(nullptr, ___internal_method, toggle, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, toggle);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, toggle, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(nullptr, ___internal_method, toggle);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(nullptr, ___internal_method, toggle, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, scrollbar);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, scrollbar, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, scrollbar);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, scrollbar, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, scrollbar);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, scrollbar, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2>>(nullptr, ___internal_method, scrollRect);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2>>(nullptr, ___internal_method, scrollRect, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, slider);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, slider, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Slider*  slider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, slider);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, slider, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, slider);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, slider, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>*>(nullptr, ___internal_method, dropdown);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>*>(nullptr, ___internal_method, dropdown, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, dropdown);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, dropdown, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(nullptr, ___internal_method, dropdown);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(nullptr, ___internal_method, dropdown, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions::UnityAsyncExtensions()   {
}
