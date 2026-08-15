#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlayablePlatform.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlayablePlatform_impl.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlayablePlatform_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Shipmate/Porting/Mocked/zzzz__MockedPlayablePlatform_def.hpp"
#include "Shipmate/Porting/zzzz__AbstractPlatformManager_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
template<typename T>
inline void Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Shipmate::Porting::Mocked::MockedPlayablePlatform*", modifiers: "", def_value: Some("{}") }, CppParam { name: "aManager", ty: "::UnityW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>::MockedPlayablePlatform__Init_d__0_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Shipmate::Porting::Mocked::MockedPlayablePlatform*  __4__this, ::UnityW<T>  aManager, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->aManager = aManager;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename T>
constexpr ::Shipmate::Porting::Mocked::MockedPlayablePlatform__Init_d__0_1<T>::MockedPlayablePlatform__Init_d__0_1()   {
}
//  Writing Method size for method: ::Shipmate::Porting::Mocked::MockedPlayablePlatform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::Mocked::MockedPlayablePlatform::*)()>(&::Shipmate::Porting::Mocked::MockedPlayablePlatform::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlayablePlatform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlayablePlatform::Init(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlayablePlatform*>(), 5}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<T>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aManager);
}
inline void Shipmate::Porting::Mocked::MockedPlayablePlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlayablePlatform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Shipmate::Porting::Mocked::MockedPlayablePlatform::__n__0(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Shipmate::Porting::Mocked::MockedPlayablePlatform*>(),
                    {"<>n__0", {::i2c::class_of<T>()}, {::i2c::type_of<::Shipmate::Porting::AbstractPlatformManager_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, aManager);
}
inline ::Shipmate::Porting::Mocked::MockedPlayablePlatform* Shipmate::Porting::Mocked::MockedPlayablePlatform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::Mocked::MockedPlayablePlatform*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::Mocked::MockedPlayablePlatform::MockedPlayablePlatform()   {
}
