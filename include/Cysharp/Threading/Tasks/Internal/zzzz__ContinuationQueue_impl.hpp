#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/ContinuationQueue.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__SpinLock_impl.hpp"
#include "System/zzzz__Action_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__ContinuationQueue_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e7d220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)(::System::Action*)>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::Enqueue)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181e7cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181e7cd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::Run)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.Initialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::Initialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Initialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastInitialization)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.EarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::EarlyUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"EarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastEarlyUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastEarlyUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::FixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastFixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastFixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.PreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::PreUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"PreUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastPreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastPreUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastPreUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.PreLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::PreLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"PreLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastPreLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastPreLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastPreLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.PostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::PostLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"PostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastPostLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastPostLateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastPostLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.TimeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::TimeUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"TimeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.LastTimeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastTimeUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e7cd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastTimeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::Internal::ContinuationQueue.RunCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::Internal::ContinuationQueue::*)()>(&::Cysharp::Threading::Tasks::Internal::ContinuationQueue::RunCore)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181e7cfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"RunCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_timing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timing;
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_timing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timing;
}
constexpr void Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_set_timing(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timing = value;
}
constexpr ::System::Threading::SpinLock& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_gate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr ::System::Threading::SpinLock const& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_gate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gate;
}
constexpr void Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_set_gate(::System::Threading::SpinLock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gate = value;
}
constexpr bool& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_dequing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dequing;
}
constexpr bool const& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_dequing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dequing;
}
constexpr void Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_set_dequing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dequing = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_actionListCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionListCount;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_actionListCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionListCount;
}
constexpr void Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_set_actionListCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionListCount = value;
}
constexpr ::ArrayW<::System::Action*>& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_actionList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionList;
}
constexpr ::ArrayW<::System::Action*> const& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_actionList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionList;
}
constexpr void Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_set_actionList(::ArrayW<::System::Action*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionList = value;
}
constexpr int32_t& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_waitingListCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingListCount;
}
constexpr int32_t const& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_waitingListCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingListCount;
}
constexpr void Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_set_waitingListCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingListCount = value;
}
constexpr ::ArrayW<::System::Action*>& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_waitingList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingList;
}
constexpr ::ArrayW<::System::Action*> const& Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_get_waitingList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingList;
}
constexpr void Cysharp::Threading::Tasks::Internal::ContinuationQueue::__cordl_internal_set_waitingList(::ArrayW<::System::Action*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingList = value;
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timing);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::Enqueue(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Enqueue", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation);
}
inline int32_t Cysharp::Threading::Tasks::Internal::ContinuationQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::Initialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Initialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::EarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"EarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastEarlyUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastEarlyUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastFixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::PreUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"PreUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastPreUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastPreUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::PreLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"PreLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastPreLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastPreLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::PostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"PostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastPostLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastPostLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::TimeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"TimeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::LastTimeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"LastTimeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::Internal::ContinuationQueue::RunCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(),
                        {"RunCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::Internal::ContinuationQueue* Cysharp::Threading::Tasks::Internal::ContinuationQueue::New_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Internal::ContinuationQueue*>(timing));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Internal::ContinuationQueue::ContinuationQueue()   {
}
