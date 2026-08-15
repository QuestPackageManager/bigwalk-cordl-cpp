#pragma once
// IWYU pragma private; include "Mirror/Examples/SnapshotInterpolationDemo/ServerCube.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/Examples/SnapshotInterpolationDemo/zzzz__ServerCube_def.hpp"
#include "Mirror/Examples/SnapshotInterpolationDemo/zzzz__ClientCube_def.hpp"
#include "Mirror/Examples/SnapshotInterpolationDemo/zzzz__Snapshot3D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube.get_sendInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::get_sendInterval)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181563d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"get_sendInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube.SimulateLatency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::SimulateLatency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181563a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"SimulateLatency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181563a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181563a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::*)(::UnityEngine::Vector3)>(&::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Send)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181563810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Send", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Flush)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181563720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::*)()>(&::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181563cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube>& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube> const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_client(::UnityW<::Mirror::Examples::SnapshotInterpolationDemo::ClientCube>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr float_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr float_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distance;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distance = value;
}
constexpr float_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_start(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr int32_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_sendRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendRate;
}
constexpr int32_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_sendRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendRate;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_sendRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendRate = value;
}
constexpr float_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_lastSendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendTime;
}
constexpr float_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_lastSendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendTime;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_lastSendTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSendTime = value;
}
constexpr float_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_latency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latency;
}
constexpr float_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_latency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latency;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_latency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latency = value;
}
constexpr float_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_jitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitter;
}
constexpr float_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_jitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jitter;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_jitter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jitter = value;
}
constexpr float_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_loss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loss;
}
constexpr float_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_loss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loss;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_loss(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loss = value;
}
constexpr float_t& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_scramble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scramble;
}
constexpr float_t const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_scramble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scramble;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_scramble(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scramble = value;
}
constexpr ::System::Random*& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr ::System::Random* const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_random(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___random = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>*& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>* const& Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
constexpr void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::__cordl_internal_set_queue(::System::Collections::Generic::List_1<::System::ValueTuple_2<double_t,::Mirror::Examples::SnapshotInterpolationDemo::Snapshot3D>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
inline float_t Mirror::Examples::SnapshotInterpolationDemo::ServerCube::get_sendInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"get_sendInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Mirror::Examples::SnapshotInterpolationDemo::ServerCube::SimulateLatency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"SimulateLatency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Send(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Send", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::SnapshotInterpolationDemo::ServerCube::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube* Mirror::Examples::SnapshotInterpolationDemo::ServerCube::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::SnapshotInterpolationDemo::ServerCube*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::SnapshotInterpolationDemo::ServerCube::ServerCube()   {
}
