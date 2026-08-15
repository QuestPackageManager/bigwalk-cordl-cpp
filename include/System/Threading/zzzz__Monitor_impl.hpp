#pragma once
// IWYU pragma private; include "System/Threading/Monitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Monitor_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Monitor.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Enter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181763740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Enter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<bool>)>(&::System::Threading::Monitor::Enter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181763700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ThrowLockTakenException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Monitor::ThrowLockTakenException)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181763a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ThrowLockTakenException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Exit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Exit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181763750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.TryEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<bool>)>(&::System::Threading::Monitor::TryEnter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181763a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"TryEnter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, int32_t, bool)>(&::System::Threading::Monitor::Wait)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181763ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Wait", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, int32_t)>(&::System::Threading::Monitor::Wait)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181763ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Wait", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Pulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Pulse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181763970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Pulse", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.PulseAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::PulseAll)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1817638f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"PulseAll", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_test_synchronised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Threading::Monitor::Monitor_test_synchronised)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181763780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_test_synchronised", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_pulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Monitor_pulse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181763770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_pulse", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ObjPulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::ObjPulse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181763800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ObjPulse", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_pulse_all
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::Monitor_pulse_all)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181763760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_pulse_all", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ObjPulseAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::Monitor::ObjPulseAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1817637a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ObjPulseAll", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.Monitor_wait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, int32_t)>(&::System::Threading::Monitor::Monitor_wait)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181763790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_wait", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ObjWait
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, int32_t, ::System::Object*)>(&::System::Threading::Monitor::ObjWait)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181763860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ObjWait", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.try_enter_with_atomic_var
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, int32_t, ::by_ref<bool>)>(&::System::Threading::Monitor::try_enter_with_atomic_var)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181763b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"try_enter_with_atomic_var", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ReliableEnterTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, int32_t, ::by_ref<bool>)>(&::System::Threading::Monitor::ReliableEnterTimeout)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1817639f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ReliableEnterTimeout", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Monitor.ReliableEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::by_ref<bool>)>(&::System::Threading::Monitor::ReliableEnter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181763a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ReliableEnter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::Monitor::Enter(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::Enter(::System::Object*  obj, ::by_ref<bool>  lockTaken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Enter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, lockTaken);
}
inline void System::Threading::Monitor::ThrowLockTakenException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ThrowLockTakenException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::Monitor::Exit(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Exit", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::TryEnter(::System::Object*  obj, ::by_ref<bool>  lockTaken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"TryEnter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, lockTaken);
}
inline bool System::Threading::Monitor::Wait(::System::Object*  obj, int32_t  millisecondsTimeout, bool  exitContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Wait", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, millisecondsTimeout, exitContext);
}
inline bool System::Threading::Monitor::Wait(::System::Object*  obj, int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Wait", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, millisecondsTimeout);
}
inline void System::Threading::Monitor::Pulse(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Pulse", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::PulseAll(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"PulseAll", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool System::Threading::Monitor::Monitor_test_synchronised(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_test_synchronised", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::Monitor_pulse(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_pulse", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::ObjPulse(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ObjPulse", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::Monitor_pulse_all(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_pulse_all", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::Monitor::ObjPulseAll(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ObjPulseAll", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline bool System::Threading::Monitor::Monitor_wait(::System::Object*  obj, int32_t  ms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"Monitor_wait", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, ms);
}
inline bool System::Threading::Monitor::ObjWait(bool  exitContext, int32_t  millisecondsTimeout, ::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ObjWait", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exitContext, millisecondsTimeout, obj);
}
inline void System::Threading::Monitor::try_enter_with_atomic_var(::System::Object*  obj, int32_t  millisecondsTimeout, ::by_ref<bool>  lockTaken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"try_enter_with_atomic_var", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, millisecondsTimeout, lockTaken);
}
inline void System::Threading::Monitor::ReliableEnterTimeout(::System::Object*  obj, int32_t  timeout, ::by_ref<bool>  lockTaken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ReliableEnterTimeout", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, timeout, lockTaken);
}
inline void System::Threading::Monitor::ReliableEnter(::System::Object*  obj, ::by_ref<bool>  lockTaken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Monitor*>(),
                        {"ReliableEnter", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, lockTaken);
}
// Ctor Parameters []
constexpr ::System::Threading::Monitor::Monitor()   {
}
