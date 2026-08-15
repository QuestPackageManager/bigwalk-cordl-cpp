#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/PlayerLoopHelper.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ContinuationQueue_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__PlayerLoopRunner_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopHelper_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ContinuationQueue_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__PlayerLoopRunner_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__InjectPlayerLoopTimings_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopHelper_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopHelper___c::*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper___c._InsertUniTaskSynchronizationContext_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::PlayerLoopHelper___c::*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper___c::_InsertUniTaskSynchronizationContext_b__21_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e68280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {"<InsertUniTaskSynchronizationContext>b__21_0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper___c._InsertUniTaskSynchronizationContext_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::PlayerLoopHelper___c::*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper___c::_InsertUniTaskSynchronizationContext_b__21_1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e682b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {"<InsertUniTaskSynchronizationContext>b__21_1", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper___c._InsertUniTaskSynchronizationContext_b__21_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::PlayerLoopHelper___c::*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper___c::_InsertUniTaskSynchronizationContext_b__21_2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e682f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {"<InsertUniTaskSynchronizationContext>b__21_2", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::PlayerLoopHelper___c::setStaticF___9(::Cysharp::Threading::Tasks::PlayerLoopHelper___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*, "<>9", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(std::forward<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(value));
}
inline ::Cysharp::Threading::Tasks::PlayerLoopHelper___c* Cysharp::Threading::Tasks::PlayerLoopHelper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*, "<>9", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper___c::setStaticF___9__21_0(::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>*, "<>9__21_0", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(std::forward<::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>* Cysharp::Threading::Tasks::PlayerLoopHelper___c::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem,bool>*, "<>9__21_0", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper___c::setStaticF___9__21_1(::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*, "<>9__21_1", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(std::forward<::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>* Cysharp::Threading::Tasks::PlayerLoopHelper___c::getStaticF___9__21_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*, "<>9__21_1", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper___c::setStaticF___9__21_2(::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*, "<>9__21_2", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(std::forward<::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>* Cysharp::Threading::Tasks::PlayerLoopHelper___c::getStaticF___9__21_2()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>*, "<>9__21_2", ::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper___c::_InsertUniTaskSynchronizationContext_b__21_0(::UnityEngine::LowLevel::PlayerLoopSystem  ls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {"<InsertUniTaskSynchronizationContext>b__21_0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ls);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper___c::_InsertUniTaskSynchronizationContext_b__21_1(::UnityEngine::LowLevel::PlayerLoopSystem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {"<InsertUniTaskSynchronizationContext>b__21_1", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper___c::_InsertUniTaskSynchronizationContext_b__21_2(::UnityEngine::LowLevel::PlayerLoopSystem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>(),
                        {"<InsertUniTaskSynchronizationContext>b__21_2", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Cysharp::Threading::Tasks::PlayerLoopHelper___c* Cysharp::Threading::Tasks::PlayerLoopHelper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::PlayerLoopHelper___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::PlayerLoopHelper___c::PlayerLoopHelper___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0._RemoveRunner_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::_RemoveRunner_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e68850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0*>(),
                        {"<RemoveRunner>b__0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::__cordl_internal_get_loopRunnerYieldType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopRunnerYieldType;
}
constexpr ::System::Type* const& Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::__cordl_internal_get_loopRunnerYieldType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopRunnerYieldType;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::__cordl_internal_set_loopRunnerYieldType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopRunnerYieldType = value;
}
constexpr ::System::Type*& Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::__cordl_internal_get_loopRunnerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopRunnerType;
}
constexpr ::System::Type* const& Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::__cordl_internal_get_loopRunnerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopRunnerType;
}
constexpr void Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::__cordl_internal_set_loopRunnerType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopRunnerType = value;
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::_RemoveRunner_b__0(::UnityEngine::LowLevel::PlayerLoopSystem  ls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0*>(),
                        {"<RemoveRunner>b__0", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ls);
}
inline ::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0* Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::PlayerLoopHelper___c__DisplayClass20_0::PlayerLoopHelper___c__DisplayClass20_0()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.get_UnitySynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::get_UnitySynchronizationContext)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e62970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_UnitySynchronizationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.get_MainThreadId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::get_MainThreadId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e62930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_MainThreadId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.get_ApplicationDataPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::get_ApplicationDataPath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e62850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_ApplicationDataPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.get_IsMainThread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::get_IsMainThread)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e628d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_IsMainThread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.get_IsEditorApplicationQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::get_IsEditorApplicationQuitting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e62890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_IsEditorApplicationQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.set_IsEditorApplicationQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::set_IsEditorApplicationQuitting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181e629b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"set_IsEditorApplicationQuitting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.InsertRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> (*)(::UnityEngine::LowLevel::PlayerLoopSystem, bool, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue*, ::System::Type*, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::InsertRunner)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181e62010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"InsertRunner", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.RemoveRunner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> (*)(::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Type*, ::System::Type*)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::RemoveRunner)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e626a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"RemoveRunner", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.InsertUniTaskSynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> (*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::InsertUniTaskSynchronizationContext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181e622f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"InsertUniTaskSynchronizationContext", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::Init)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181e61350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.FindLoopSystemIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>, ::System::Type*)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::FindLoopSystemIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181e612a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"FindLoopSystemIndex", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.InsertLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, ::System::Type*, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings, int32_t, bool, ::System::Type*, ::System::Type*, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::InsertLoop)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x181e61d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"InsertLoop", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::InjectPlayerLoopTimings>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::InjectPlayerLoopTimings>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::Initialize)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x181e614c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::InjectPlayerLoopTimings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.AddAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::Cysharp::Threading::Tasks::IPlayerLoopItem*)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::AddAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e60f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"AddAction", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IPlayerLoopItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.ThrowInvalidLoopTiming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::ThrowInvalidLoopTiming)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181e62750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"ThrowInvalidLoopTiming", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.AddContinuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Action*)>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::AddContinuation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181e60fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"AddContinuation", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.DumpCurrentPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::DumpCurrentPlayerLoop)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181e61050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"DumpCurrentPlayerLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::PlayerLoopHelper.IsInjectedUniTaskPlayerLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Cysharp::Threading::Tasks::PlayerLoopHelper::IsInjectedUniTaskPlayerLoop)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181e625b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"IsInjectedUniTaskPlayerLoop", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF_ThrowMarkerContinuationQueue(::Cysharp::Threading::Tasks::Internal::ContinuationQueue*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*, "ThrowMarkerContinuationQueue", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(value));
}
inline ::Cysharp::Threading::Tasks::Internal::ContinuationQueue* Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF_ThrowMarkerContinuationQueue()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*, "ThrowMarkerContinuationQueue", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF_ThrowMarkerPlayerLoopRunner(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*, "ThrowMarkerPlayerLoopRunner", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(value));
}
inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF_ThrowMarkerPlayerLoopRunner()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*, "ThrowMarkerPlayerLoopRunner", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF_mainThreadId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "mainThreadId", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<int32_t>(value));
}
inline int32_t Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF_mainThreadId()  {
return ::cordl_internals::getStaticField<int32_t, "mainThreadId", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF_applicationDataPath(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "applicationDataPath", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<::StringW>(value));
}
inline ::StringW Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF_applicationDataPath()  {
return ::cordl_internals::getStaticField<::StringW, "applicationDataPath", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF_unitySynchronizationContext(::System::Threading::SynchronizationContext*  value)  {
::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "unitySynchronizationContext", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF_unitySynchronizationContext()  {
return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "unitySynchronizationContext", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF_yielders(::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>, "yielders", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>>(value));
}
inline ::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*> Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF_yielders()  {
return ::cordl_internals::getStaticField<::ArrayW<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>, "yielders", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF_runners(::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>, "runners", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>>(value));
}
inline ::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*> Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF_runners()  {
return ::cordl_internals::getStaticField<::ArrayW<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>, "runners", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::setStaticF__IsEditorApplicationQuitting_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsEditorApplicationQuitting>k__BackingField", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>(std::forward<bool>(value));
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper::getStaticF__IsEditorApplicationQuitting_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsEditorApplicationQuitting>k__BackingField", ::Cysharp::Threading::Tasks::PlayerLoopHelper*>();
}
inline ::System::Threading::SynchronizationContext* Cysharp::Threading::Tasks::PlayerLoopHelper::get_UnitySynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_UnitySynchronizationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(nullptr, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::PlayerLoopHelper::get_MainThreadId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_MainThreadId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW Cysharp::Threading::Tasks::PlayerLoopHelper::get_ApplicationDataPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_ApplicationDataPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper::get_IsMainThread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_IsMainThread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper::get_IsEditorApplicationQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"get_IsEditorApplicationQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::set_IsEditorApplicationQuitting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"set_IsEditorApplicationQuitting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> Cysharp::Threading::Tasks::PlayerLoopHelper::InsertRunner(::UnityEngine::LowLevel::PlayerLoopSystem  loopSystem, bool  injectOnFirst, ::System::Type*  loopRunnerYieldType, ::Cysharp::Threading::Tasks::Internal::ContinuationQueue*  cq, ::System::Type*  loopRunnerType, ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"InsertRunner", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(nullptr, ___internal_method, loopSystem, injectOnFirst, loopRunnerYieldType, cq, loopRunnerType, runner);
}
inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> Cysharp::Threading::Tasks::PlayerLoopHelper::RemoveRunner(::UnityEngine::LowLevel::PlayerLoopSystem  loopSystem, ::System::Type*  loopRunnerYieldType, ::System::Type*  loopRunnerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"RemoveRunner", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(nullptr, ___internal_method, loopSystem, loopRunnerYieldType, loopRunnerType);
}
inline ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem> Cysharp::Threading::Tasks::PlayerLoopHelper::InsertUniTaskSynchronizationContext(::UnityEngine::LowLevel::PlayerLoopSystem  loopSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"InsertUniTaskSynchronizationContext", {}, {::i2c::type_of<::UnityEngine::LowLevel::PlayerLoopSystem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(nullptr, ___internal_method, loopSystem);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::PlayerLoopHelper::FindLoopSystemIndex(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoopList, ::System::Type*  systemType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"FindLoopSystemIndex", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, playerLoopList, systemType);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::InsertLoop(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>  copyList, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  injectTimings, ::System::Type*  loopType, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  targetTimings, int32_t  index, bool  injectOnFirst, ::System::Type*  loopRunnerYieldType, ::System::Type*  loopRunnerType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"InsertLoop", {}, {::i2c::type_of<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::InjectPlayerLoopTimings>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::InjectPlayerLoopTimings>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, copyList, injectTimings, loopType, targetTimings, index, injectOnFirst, loopRunnerYieldType, loopRunnerType, playerLoopTiming);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::Initialize(::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>  playerLoop, ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  injectTimings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::UnityEngine::LowLevel::PlayerLoopSystem>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::InjectPlayerLoopTimings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerLoop, injectTimings);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::AddAction(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::Cysharp::Threading::Tasks::IPlayerLoopItem*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"AddAction", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IPlayerLoopItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timing, action);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::ThrowInvalidLoopTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"ThrowInvalidLoopTiming", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerLoopTiming);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::AddContinuation(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"AddContinuation", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timing, continuation);
}
inline void Cysharp::Threading::Tasks::PlayerLoopHelper::DumpCurrentPlayerLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"DumpCurrentPlayerLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::PlayerLoopHelper::IsInjectedUniTaskPlayerLoop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::PlayerLoopHelper*>(),
                        {"IsInjectedUniTaskPlayerLoop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::PlayerLoopHelper::PlayerLoopHelper()   {
}
