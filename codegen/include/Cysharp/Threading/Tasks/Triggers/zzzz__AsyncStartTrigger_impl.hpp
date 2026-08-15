#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncStartTrigger.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncTriggerBase_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/Triggers/zzzz__AsyncStartTrigger_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181e7a120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger.StartAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::StartAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181e7a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*>(),
                        {"StartAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::*)()>(&::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::__cordl_internal_get_called()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
constexpr bool const& Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::__cordl_internal_get_called() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
constexpr void Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::__cordl_internal_set_called(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___called = value;
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::StartAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*>(),
                        {"StartAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger* Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Triggers::AsyncStartTrigger::AsyncStartTrigger()   {
}
