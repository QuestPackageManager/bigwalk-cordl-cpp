#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/DualThreadLowLevelInputEventQueue.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__LockedObject_1_impl.hpp"
#include "Rewired/zzzz__LowLevelInputEvent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__DualThreadLowLevelInputEventQueue_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__DualThreadLowLevelInputEventQueue_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__LowLevelInputEventQueue_def.hpp"
#include "Rewired/zzzz__LowLevelInputEvent_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb.get_Event
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::LowLevelInputEvent (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::get_Event)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180432220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*>(),
                        {"get_Event", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb.set_Event
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::*)(::Rewired::LowLevelInputEvent)>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::set_Event)> {
  constexpr static std::size_t size = 0xf7a0;
  constexpr static std::size_t addrs = 0x180effe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*>(),
                        {"set_Event", {}, {::i2c::type_of<::Rewired::LowLevelInputEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::*)(::System::Object*)>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181943c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::LowLevelInputEvent Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::get_Event()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*>(),
                        {"get_Event", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::LowLevelInputEvent>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::set_Event(::Rewired::LowLevelInputEvent  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*>(),
                        {"set_Event", {}, {::i2c::type_of<::Rewired::LowLevelInputEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb* Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper"
constexpr  Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::operator ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*() noexcept {
return static_cast<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper"
constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper* Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::i___Rewired__Utils__Classes__Utility__DualThreadLowLevelInputEventQueue_INewEventWrapper() noexcept {
return static_cast<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb()   {
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper.get_Event
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::LowLevelInputEvent (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::get_Event)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper.set_Event
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::*)(::Rewired::LowLevelInputEvent)>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::set_Event)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::LowLevelInputEvent Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::get_Event()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::LowLevelInputEvent>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::set_Event(::Rewired::LowLevelInputEvent  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.get_lastProcessedEventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_lastProcessedEventId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_lastProcessedEventId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_count)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18192c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.get_capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_capacity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18192c020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.get_capacityBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_capacityBytes)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18192bf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_capacityBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)(int32_t, int32_t, int32_t, int32_t)>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18192be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.T_CreateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper* (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::T_CreateEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18192bce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"T_CreateEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Update)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18192bdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Clear)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18192b700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.ProcessNewEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::ProcessNewEvents)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18192bb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"ProcessNewEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.StopProcessingEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::StopProcessingEvents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18192bcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"StopProcessingEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.ImportAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*)>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::ImportAll)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18192b950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"ImportAll", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18192b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)()>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18192b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                    {::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::*)(bool)>(&::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Dispose)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18192b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_wrpBysDverOSKHnYZMHbsjKMEJzXA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrpBysDverOSKHnYZMHbsjKMEJzXA;
}
constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_wrpBysDverOSKHnYZMHbsjKMEJzXA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrpBysDverOSKHnYZMHbsjKMEJzXA;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_wrpBysDverOSKHnYZMHbsjKMEJzXA(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrpBysDverOSKHnYZMHbsjKMEJzXA = value;
}
constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_CEFvZViCQkSxTuJYZhbobwEAFezE()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CEFvZViCQkSxTuJYZhbobwEAFezE;
}
constexpr ::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue* const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_CEFvZViCQkSxTuJYZhbobwEAFezE() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CEFvZViCQkSxTuJYZhbobwEAFezE;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_CEFvZViCQkSxTuJYZhbobwEAFezE(::Rewired::Utils::Classes::Utility::LowLevelInputEventQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CEFvZViCQkSxTuJYZhbobwEAFezE = value;
}
constexpr ::System::Object*& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_sqTpUwmCxhfYpGwHzEHmWcCNFDePA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sqTpUwmCxhfYpGwHzEHmWcCNFDePA;
}
constexpr ::System::Object* const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_sqTpUwmCxhfYpGwHzEHmWcCNFDePA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sqTpUwmCxhfYpGwHzEHmWcCNFDePA;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_sqTpUwmCxhfYpGwHzEHmWcCNFDePA(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sqTpUwmCxhfYpGwHzEHmWcCNFDePA = value;
}
constexpr uint32_t& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_YXIdFfgOlCJjCrCxxpGxPtuNhKSib()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YXIdFfgOlCJjCrCxxpGxPtuNhKSib;
}
constexpr uint32_t const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_YXIdFfgOlCJjCrCxxpGxPtuNhKSib() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YXIdFfgOlCJjCrCxxpGxPtuNhKSib;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_YXIdFfgOlCJjCrCxxpGxPtuNhKSib(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YXIdFfgOlCJjCrCxxpGxPtuNhKSib = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_MadTVgFDETFUvJyXWsZNSPQtENgo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MadTVgFDETFUvJyXWsZNSPQtENgo;
}
constexpr bool const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_MadTVgFDETFUvJyXWsZNSPQtENgo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MadTVgFDETFUvJyXWsZNSPQtENgo;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_MadTVgFDETFUvJyXWsZNSPQtENgo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MadTVgFDETFUvJyXWsZNSPQtENgo = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_TvcACEhgrlJRuEXgyfpAkxUdQgbf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TvcACEhgrlJRuEXgyfpAkxUdQgbf;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_TvcACEhgrlJRuEXgyfpAkxUdQgbf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TvcACEhgrlJRuEXgyfpAkxUdQgbf;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_TvcACEhgrlJRuEXgyfpAkxUdQgbf(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TvcACEhgrlJRuEXgyfpAkxUdQgbf = value;
}
constexpr int32_t& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_PBjbogNaKXdmFfcCftYbpgMcGJsDb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PBjbogNaKXdmFfcCftYbpgMcGJsDb;
}
constexpr int32_t const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_PBjbogNaKXdmFfcCftYbpgMcGJsDb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PBjbogNaKXdmFfcCftYbpgMcGJsDb;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_PBjbogNaKXdmFfcCftYbpgMcGJsDb(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PBjbogNaKXdmFfcCftYbpgMcGJsDb = value;
}
constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_PWKAjQKJMOZpEmLdVcgbKIqqXTst()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PWKAjQKJMOZpEmLdVcgbKIqqXTst;
}
constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb* const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_PWKAjQKJMOZpEmLdVcgbKIqqXTst() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PWKAjQKJMOZpEmLdVcgbKIqqXTst;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_PWKAjQKJMOZpEmLdVcgbKIqqXTst(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_XZUDOkLYMiyAcCBkkyDdRYohglkb*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PWKAjQKJMOZpEmLdVcgbKIqqXTst = value;
}
constexpr ::Rewired::LowLevelInputEvent& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_currentEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEvent;
}
constexpr ::Rewired::LowLevelInputEvent const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_currentEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEvent;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_currentEvent(::Rewired::LowLevelInputEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentEvent = value;
}
constexpr bool& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_bPSooZNAhETwHGzaKhNHHZHnkBHp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bPSooZNAhETwHGzaKhNHHZHnkBHp;
}
constexpr bool const& Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_get_bPSooZNAhETwHGzaKhNHHZHnkBHp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bPSooZNAhETwHGzaKhNHHZHnkBHp;
}
constexpr void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::__cordl_internal_set_bPSooZNAhETwHGzaKhNHHZHnkBHp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bPSooZNAhETwHGzaKhNHHZHnkBHp = value;
}
inline uint32_t Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_lastProcessedEventId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_lastProcessedEventId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::get_capacityBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"get_capacityBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper* Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::T_CreateEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"T_CreateEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue_INewEventWrapper*>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::ProcessNewEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"ProcessNewEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::StopProcessingEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"StopProcessingEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::ImportAll(::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"ImportAll", {}, {::i2c::type_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(),
                        {"Dispose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue* Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Classes::Utility::DualThreadLowLevelInputEventQueue::DualThreadLowLevelInputEventQueue()   {
}
