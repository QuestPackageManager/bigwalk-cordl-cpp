#pragma once
// IWYU pragma private; include "System/Threading/Tasks/SynchronizationContextTaskScheduler.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__SynchronizationContextTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__SynchronizationContextTaskScheduler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextTaskScheduler___c::*)()>(&::System::Threading::Tasks::SynchronizationContextTaskScheduler___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c.__cctor_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextTaskScheduler___c::*)(::System::Object*)>(&::System::Threading::Tasks::SynchronizationContextTaskScheduler___c::__cctor_b__8_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18177ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>(),
                        {"<.cctor>b__8_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler___c::setStaticF___9(::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*, "<>9", ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>(std::forward<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>(value));
}
inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c* System::Threading::Tasks::SynchronizationContextTaskScheduler___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*, "<>9", ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>();
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler___c::__cctor_b__8_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>(),
                        {"<.cctor>b__8_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c* System::Threading::Tasks::SynchronizationContextTaskScheduler___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::SynchronizationContextTaskScheduler___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::SynchronizationContextTaskScheduler___c::SynchronizationContextTaskScheduler___c()   {
}
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextTaskScheduler::*)()>(&::System::Threading::Tasks::SynchronizationContextTaskScheduler::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181770920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler.QueueTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::SynchronizationContextTaskScheduler::*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::SynchronizationContextTaskScheduler::QueueTask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1817707d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(),
                    {::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::SynchronizationContextTaskScheduler.TryExecuteTaskInline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::SynchronizationContextTaskScheduler::*)(::System::Threading::Tasks::Task*, bool)>(&::System::Threading::Tasks::SynchronizationContextTaskScheduler::TryExecuteTaskInline)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181770830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(),
                    {::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& System::Threading::Tasks::SynchronizationContextTaskScheduler::__cordl_internal_get_m_synchronizationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_synchronizationContext;
}
constexpr ::System::Threading::SynchronizationContext* const& System::Threading::Tasks::SynchronizationContextTaskScheduler::__cordl_internal_get_m_synchronizationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_synchronizationContext;
}
constexpr void System::Threading::Tasks::SynchronizationContextTaskScheduler::__cordl_internal_set_m_synchronizationContext(::System::Threading::SynchronizationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_synchronizationContext = value;
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler::setStaticF_s_postCallback(::System::Threading::SendOrPostCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback", ::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Threading::Tasks::SynchronizationContextTaskScheduler::getStaticF_s_postCallback()  {
return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "s_postCallback", ::System::Threading::Tasks::SynchronizationContextTaskScheduler*>();
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Tasks::SynchronizationContextTaskScheduler::QueueTask(::System::Threading::Tasks::Task*  task)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::SynchronizationContextTaskScheduler::TryExecuteTaskInline(::System::Threading::Tasks::Task*  task, bool  taskWasPreviouslyQueued)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, task, taskWasPreviouslyQueued);
}
inline ::System::Threading::Tasks::SynchronizationContextTaskScheduler* System::Threading::Tasks::SynchronizationContextTaskScheduler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::SynchronizationContextTaskScheduler*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::SynchronizationContextTaskScheduler::SynchronizationContextTaskScheduler()   {
}
