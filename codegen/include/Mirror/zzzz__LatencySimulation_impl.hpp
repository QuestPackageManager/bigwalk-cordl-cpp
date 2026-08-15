#pragma once
// IWYU pragma private; include "Mirror/LatencySimulation.hpp"
#include "Mirror/zzzz__Transport_impl.hpp"
#include "Mirror/zzzz__LatencySimulation_def.hpp"
#include "Mirror/zzzz__QueuedMessage_def.hpp"
#include "Mirror/zzzz__Transport_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Mirror::LatencySimulation.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.Noise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::LatencySimulation::*)(float_t)>(&::Mirror::LatencySimulation::Noise)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181574f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.SimulateLatency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::LatencySimulation::*)(int32_t)>(&::Mirror::LatencySimulation::SimulateLatency)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1815754d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"SimulateLatency", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.SimulateSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t, float_t, ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*, ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*)>(&::Mirror::LatencySimulation::SimulateSend)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181575570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"SimulateSend", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::Available)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)(::StringW)>(&::Mirror::LatencySimulation::ClientConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1815749c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ClientConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)(::System::Uri*)>(&::Mirror::LatencySimulation::ClientConnect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181574a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ClientConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ClientConnected)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ClientDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ClientDisconnect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181574b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ClientSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::LatencySimulation::ClientSend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181574e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ServerUri)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ServerActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerGetClientAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::LatencySimulation::*)(int32_t)>(&::Mirror::LatencySimulation::ServerGetClientAddress)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)(int32_t)>(&::Mirror::LatencySimulation::ServerDisconnect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)(int32_t, ::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::LatencySimulation::ServerSend)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1815752c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ServerStart)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181575340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ServerStop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815753e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ClientEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ClientEarlyUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerEarlyUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ServerEarlyUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181575000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ClientLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ClientLateUpdate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181574c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ServerLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ServerLateUpdate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181575060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.GetBatchThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::LatencySimulation::*)(int32_t)>(&::Mirror::LatencySimulation::GetBatchThreshold)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.GetMaxPacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mirror::LatencySimulation::*)(int32_t)>(&::Mirror::LatencySimulation::GetMaxPacketSize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181574f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::Shutdown)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815754a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181575860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::LatencySimulation*>(),
                    {::i2c::class_of<::Mirror::LatencySimulation*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::LatencySimulation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::LatencySimulation::*)()>(&::Mirror::LatencySimulation::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181575880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::Transport>& Mirror::LatencySimulation::__cordl_internal_get_wrap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrap;
}
constexpr ::UnityW<::Mirror::Transport> const& Mirror::LatencySimulation::__cordl_internal_get_wrap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrap;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_wrap(::UnityW<::Mirror::Transport>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrap = value;
}
constexpr float_t& Mirror::LatencySimulation::__cordl_internal_get_jitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitter;
}
constexpr float_t const& Mirror::LatencySimulation::__cordl_internal_get_jitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitter;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_jitter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitter = value;
}
constexpr float_t& Mirror::LatencySimulation::__cordl_internal_get_jitterSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSpeed;
}
constexpr float_t const& Mirror::LatencySimulation::__cordl_internal_get_jitterSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitterSpeed;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_jitterSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitterSpeed = value;
}
constexpr float_t& Mirror::LatencySimulation::__cordl_internal_get_reliableLatency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableLatency;
}
constexpr float_t const& Mirror::LatencySimulation::__cordl_internal_get_reliableLatency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableLatency;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_reliableLatency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableLatency = value;
}
constexpr float_t& Mirror::LatencySimulation::__cordl_internal_get_unreliableLoss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableLoss;
}
constexpr float_t const& Mirror::LatencySimulation::__cordl_internal_get_unreliableLoss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableLoss;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_unreliableLoss(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableLoss = value;
}
constexpr float_t& Mirror::LatencySimulation::__cordl_internal_get_unreliableLatency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableLatency;
}
constexpr float_t const& Mirror::LatencySimulation::__cordl_internal_get_unreliableLatency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableLatency;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_unreliableLatency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableLatency = value;
}
constexpr float_t& Mirror::LatencySimulation::__cordl_internal_get_unreliableScramble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableScramble;
}
constexpr float_t const& Mirror::LatencySimulation::__cordl_internal_get_unreliableScramble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableScramble;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_unreliableScramble(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableScramble = value;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& Mirror::LatencySimulation::__cordl_internal_get_reliableClientToServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableClientToServer;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& Mirror::LatencySimulation::__cordl_internal_get_reliableClientToServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableClientToServer;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_reliableClientToServer(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableClientToServer = value;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& Mirror::LatencySimulation::__cordl_internal_get_reliableServerToClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableServerToClient;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& Mirror::LatencySimulation::__cordl_internal_get_reliableServerToClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableServerToClient;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_reliableServerToClient(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableServerToClient = value;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& Mirror::LatencySimulation::__cordl_internal_get_unreliableClientToServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableClientToServer;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& Mirror::LatencySimulation::__cordl_internal_get_unreliableClientToServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableClientToServer;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_unreliableClientToServer(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableClientToServer = value;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*& Mirror::LatencySimulation::__cordl_internal_get_unreliableServerToClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableServerToClient;
}
constexpr ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>* const& Mirror::LatencySimulation::__cordl_internal_get_unreliableServerToClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableServerToClient;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_unreliableServerToClient(::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableServerToClient = value;
}
constexpr ::System::Random*& Mirror::LatencySimulation::__cordl_internal_get_random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr ::System::Random* const& Mirror::LatencySimulation::__cordl_internal_get_random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr void Mirror::LatencySimulation::__cordl_internal_set_random(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___random = value;
}
inline void Mirror::LatencySimulation::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Mirror::LatencySimulation::Noise(float_t  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, time);
}
inline float_t Mirror::LatencySimulation::SimulateLatency(int32_t  channeldId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"SimulateLatency", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, channeldId);
}
inline void Mirror::LatencySimulation::SimulateSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId, float_t  latency, ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  reliableQueue, ::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*  unreliableQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {"SimulateSend", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Mirror::QueuedMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId, latency, reliableQueue, unreliableQueue);
}
inline bool Mirror::LatencySimulation::Available()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ClientConnect(::StringW  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Mirror::LatencySimulation::ClientConnect(::System::Uri*  uri)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline bool Mirror::LatencySimulation::ClientConnected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ClientDisconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ClientSend(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline ::System::Uri* Mirror::LatencySimulation::ServerUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline bool Mirror::LatencySimulation::ServerActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Mirror::LatencySimulation::ServerGetClientAddress(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, connectionId);
}
inline void Mirror::LatencySimulation::ServerDisconnect(int32_t  connectionId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId);
}
inline void Mirror::LatencySimulation::ServerSend(int32_t  connectionId, ::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, segment, channelId);
}
inline void Mirror::LatencySimulation::ServerStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ServerStop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ClientEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ServerEarlyUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ClientLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::ServerLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mirror::LatencySimulation::GetBatchThreshold(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline int32_t Mirror::LatencySimulation::GetMaxPacketSize(int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelId);
}
inline void Mirror::LatencySimulation::Shutdown()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::LatencySimulation::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::LatencySimulation*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mirror::LatencySimulation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::LatencySimulation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::LatencySimulation* Mirror::LatencySimulation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::LatencySimulation*>());
}
// Ctor Parameters []
constexpr ::Mirror::LatencySimulation::LatencySimulation()   {
}
