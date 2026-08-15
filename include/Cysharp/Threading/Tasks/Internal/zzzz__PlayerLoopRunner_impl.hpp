#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/PlayerLoopRunner.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__PlayerLoopRunner_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__MinimumQueue_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__PlayerLoopRunner_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c.__ctor_b__9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::*)(::System::Exception*)>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::__ctor_b__9_0)> {
  constexpr static std::size_t size = 0x3090;
  constexpr static std::size_t addrs = 0x180e7de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>(),
                        {"<.ctor>b__9_0", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::setStaticF___9(::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*, "<>9", ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>(std::forward<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>(value));
}
inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c* Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*, "<>9", ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>();
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::setStaticF___9__9_0(::System::Action_1<::System::Exception*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Exception*>*, "<>9__9_0", ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>(std::forward<::System::Action_1<::System::Exception*>*>(value));
}
inline ::System::Action_1<::System::Exception*>* Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Exception*>*, "<>9__9_0", ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>();
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::__ctor_b__9_0(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>(),
                        {"<.ctor>b__9_0", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c* Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c::PlayerLoopRunner___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181e7f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.AddAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)(::Cysharp::Threading::Tasks::IPlayerLoopItem*)>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::AddAction)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181e7eb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"AddAction", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IPlayerLoopItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Clear)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e7edb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Run)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.Initialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Initialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Initialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastInitialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.EarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::EarlyUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"EarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastEarlyUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastEarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::FixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastFixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.PreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::PreUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"PreUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastPreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastPreUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastPreUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.PreLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::PreLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"PreLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastPreLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastPreLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastPreLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.PostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::PostLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"PostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastPostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastPostLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastPostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.TimeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::TimeUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"TimeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.LastTimeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastTimeUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastTimeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner.RunCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::*)()>(&::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::RunCore)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x181e7eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"RunCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_timing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timing;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_timing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timing;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_timing(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timing = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_runningAndQueueLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runningAndQueueLock;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_runningAndQueueLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runningAndQueueLock;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_runningAndQueueLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runningAndQueueLock = value;
}
constexpr ::System::Object*& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_arrayLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayLock;
}
constexpr ::System::Object* const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_arrayLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrayLock;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_arrayLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arrayLock = value;
}
constexpr ::System::Action_1<::System::Exception*>*& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_unhandledExceptionCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unhandledExceptionCallback;
}
constexpr ::System::Action_1<::System::Exception*>* const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_unhandledExceptionCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unhandledExceptionCallback;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_unhandledExceptionCallback(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unhandledExceptionCallback = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tail;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_tail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tail = value;
}
constexpr bool& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_running()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
constexpr bool const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_running() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___running;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_running(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___running = value;
}
constexpr ::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*>& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_loopItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopItems;
}
constexpr ::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*> const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_loopItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopItems;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_loopItems(::ArrayW<::Cysharp::Threading::Tasks::IPlayerLoopItem*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopItems = value;
}
constexpr ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>*& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_waitQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitQueue;
}
constexpr ::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>* const& Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_get_waitQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitQueue;
}
constexpr void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::__cordl_internal_set_waitQueue(::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Cysharp::Threading::Tasks::IPlayerLoopItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitQueue = value;
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timing);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::AddAction(::Cysharp::Threading::Tasks::IPlayerLoopItem*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"AddAction", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IPlayerLoopItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline int32_t Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Initialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Initialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::EarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"EarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastEarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastEarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastFixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::PreUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"PreUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastPreUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastPreUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::PreLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"PreLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastPreLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastPreLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::PostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"PostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastPostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastPostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::TimeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"TimeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::LastTimeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"LastTimeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::RunCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(),
                        {"RunCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner* Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner*>(timing));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner::PlayerLoopRunner()   {
}
