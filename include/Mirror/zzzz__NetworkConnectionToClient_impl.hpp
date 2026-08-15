#pragma once
// IWYU pragma private; include "Mirror/NetworkConnectionToClient.hpp"
#include "Mirror/zzzz__ExponentialMovingAverage_impl.hpp"
#include "Mirror/zzzz__NetworkConnection_impl.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "Mirror/zzzz__RpcMessage_def.hpp"
#include "Mirror/zzzz__TimeSnapshot_def.hpp"
#include "Mirror/zzzz__Unbatcher_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.get_address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::get_address)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181542520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.get_clientOwnedObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>* (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::get_clientOwnedObjects)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"get_clientOwnedObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.get_bufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::get_bufferTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181542560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"get_bufferTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(int32_t)>(&::Mirror::NetworkConnectionToClient::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181542280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.OnTimeSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::TimeSnapshot)>(&::Mirror::NetworkConnectionToClient::OnTimeSnapshot)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181541d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"OnTimeSnapshot", {}, {::i2c::type_of<::Mirror::TimeSnapshot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.UpdateTimeInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::UpdateTimeInterpolation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1815420c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"UpdateTimeInterpolation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.SendToTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkConnectionToClient::SendToTransport)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181542060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.FlushRpcs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::NetworkWriter*, int32_t)>(&::Mirror::NetworkConnectionToClient::FlushRpcs)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181541cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"FlushRpcs", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.BufferRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::RpcMessage, ::Mirror::NetworkWriter*, int32_t, int32_t)>(&::Mirror::NetworkConnectionToClient::BufferRpc)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181541840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"BufferRpc", {}, {::i2c::type_of<::Mirror::RpcMessage>(), ::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.BufferRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::RpcMessage, int32_t)>(&::Mirror::NetworkConnectionToClient::BufferRpc)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181541ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"BufferRpc", {}, {::i2c::type_of<::Mirror::RpcMessage>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181542150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::Disconnect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181541c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                    {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.AddToObserving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkConnectionToClient::AddToObserving)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815417f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"AddToObserving", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.RemoveFromObserving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::NetworkIdentity*, bool)>(&::Mirror::NetworkConnectionToClient::RemoveFromObserving)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181541f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"RemoveFromObserving", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.RemoveFromObservingsObservers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::RemoveFromObservingsObservers)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181541f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"RemoveFromObservingsObservers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.AddOwnedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkConnectionToClient::AddOwnedObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1815417c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"AddOwnedObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.RemoveOwnedObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkConnectionToClient::RemoveOwnedObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181542030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"RemoveOwnedObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnectionToClient.DestroyOwnedObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnectionToClient::*)()>(&::Mirror::NetworkConnectionToClient::DestroyOwnedObjects)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181541b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"DestroyOwnedObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mirror::NetworkWriter*& Mirror::NetworkConnectionToClient::__cordl_internal_get_reliableRpcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableRpcs;
}
constexpr ::Mirror::NetworkWriter* const& Mirror::NetworkConnectionToClient::__cordl_internal_get_reliableRpcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableRpcs;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_reliableRpcs(::Mirror::NetworkWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableRpcs = value;
}
constexpr ::Mirror::NetworkWriter*& Mirror::NetworkConnectionToClient::__cordl_internal_get_unreliableRpcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableRpcs;
}
constexpr ::Mirror::NetworkWriter* const& Mirror::NetworkConnectionToClient::__cordl_internal_get_unreliableRpcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unreliableRpcs;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_unreliableRpcs(::Mirror::NetworkWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unreliableRpcs = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*& Mirror::NetworkConnectionToClient::__cordl_internal_get_observing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observing;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>* const& Mirror::NetworkConnectionToClient::__cordl_internal_get_observing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observing;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_observing(::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observing = value;
}
constexpr ::Mirror::Unbatcher*& Mirror::NetworkConnectionToClient::__cordl_internal_get_unbatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unbatcher;
}
constexpr ::Mirror::Unbatcher* const& Mirror::NetworkConnectionToClient::__cordl_internal_get_unbatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unbatcher;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_unbatcher(::Mirror::Unbatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unbatcher = value;
}
constexpr ::Mirror::ExponentialMovingAverage& Mirror::NetworkConnectionToClient::__cordl_internal_get_driftEma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driftEma;
}
constexpr ::Mirror::ExponentialMovingAverage const& Mirror::NetworkConnectionToClient::__cordl_internal_get_driftEma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___driftEma;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_driftEma(::Mirror::ExponentialMovingAverage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___driftEma = value;
}
constexpr ::Mirror::ExponentialMovingAverage& Mirror::NetworkConnectionToClient::__cordl_internal_get_deliveryTimeEma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deliveryTimeEma;
}
constexpr ::Mirror::ExponentialMovingAverage const& Mirror::NetworkConnectionToClient::__cordl_internal_get_deliveryTimeEma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deliveryTimeEma;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_deliveryTimeEma(::Mirror::ExponentialMovingAverage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deliveryTimeEma = value;
}
constexpr double_t& Mirror::NetworkConnectionToClient::__cordl_internal_get_remoteTimeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteTimeline;
}
constexpr double_t const& Mirror::NetworkConnectionToClient::__cordl_internal_get_remoteTimeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteTimeline;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_remoteTimeline(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteTimeline = value;
}
constexpr double_t& Mirror::NetworkConnectionToClient::__cordl_internal_get_remoteTimescale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteTimescale;
}
constexpr double_t const& Mirror::NetworkConnectionToClient::__cordl_internal_get_remoteTimescale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteTimescale;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_remoteTimescale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteTimescale = value;
}
constexpr double_t& Mirror::NetworkConnectionToClient::__cordl_internal_get_bufferTimeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferTimeMultiplier;
}
constexpr double_t const& Mirror::NetworkConnectionToClient::__cordl_internal_get_bufferTimeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferTimeMultiplier;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_bufferTimeMultiplier(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferTimeMultiplier = value;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*& Mirror::NetworkConnectionToClient::__cordl_internal_get_snapshots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshots;
}
constexpr ::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>* const& Mirror::NetworkConnectionToClient::__cordl_internal_get_snapshots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshots;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_snapshots(::System::Collections::Generic::SortedList_2<double_t,::Mirror::TimeSnapshot>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapshots = value;
}
constexpr int32_t& Mirror::NetworkConnectionToClient::__cordl_internal_get_snapshotBufferSizeLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshotBufferSizeLimit;
}
constexpr int32_t const& Mirror::NetworkConnectionToClient::__cordl_internal_get_snapshotBufferSizeLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapshotBufferSizeLimit;
}
constexpr void Mirror::NetworkConnectionToClient::__cordl_internal_set_snapshotBufferSizeLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapshotBufferSizeLimit = value;
}
inline ::StringW Mirror::NetworkConnectionToClient::get_address()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>* Mirror::NetworkConnectionToClient::get_clientOwnedObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"get_clientOwnedObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*>(this, ___internal_method);
}
inline double_t Mirror::NetworkConnectionToClient::get_bufferTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"get_bufferTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Mirror::NetworkConnectionToClient::_ctor(int32_t  networkConnectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkConnectionId);
}
inline void Mirror::NetworkConnectionToClient::OnTimeSnapshot(::Mirror::TimeSnapshot  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"OnTimeSnapshot", {}, {::i2c::type_of<::Mirror::TimeSnapshot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline void Mirror::NetworkConnectionToClient::UpdateTimeInterpolation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"UpdateTimeInterpolation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkConnectionToClient::SendToTransport(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::NetworkConnectionToClient::FlushRpcs(::Mirror::NetworkWriter*  buffer, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"FlushRpcs", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, channelId);
}
inline void Mirror::NetworkConnectionToClient::BufferRpc(::Mirror::RpcMessage  message, ::Mirror::NetworkWriter*  buffer, int32_t  channelId, int32_t  maxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"BufferRpc", {}, {::i2c::type_of<::Mirror::RpcMessage>(), ::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, buffer, channelId, maxMessageSize);
}
inline void Mirror::NetworkConnectionToClient::BufferRpc(::Mirror::RpcMessage  message, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"BufferRpc", {}, {::i2c::type_of<::Mirror::RpcMessage>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, channelId);
}
inline void Mirror::NetworkConnectionToClient::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkConnectionToClient::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnectionToClient*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkConnectionToClient::AddToObserving(::Mirror::NetworkIdentity*  netIdentity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"AddToObserving", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netIdentity);
}
inline void Mirror::NetworkConnectionToClient::RemoveFromObserving(::Mirror::NetworkIdentity*  netIdentity, bool  isDestroyed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"RemoveFromObserving", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netIdentity, isDestroyed);
}
inline void Mirror::NetworkConnectionToClient::RemoveFromObservingsObservers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"RemoveFromObservingsObservers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkConnectionToClient::AddOwnedObject(::Mirror::NetworkIdentity*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"AddOwnedObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Mirror::NetworkConnectionToClient::RemoveOwnedObject(::Mirror::NetworkIdentity*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"RemoveOwnedObject", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void Mirror::NetworkConnectionToClient::DestroyOwnedObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnectionToClient*>(),
                        {"DestroyOwnedObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkConnectionToClient* Mirror::NetworkConnectionToClient::New_ctor(int32_t  networkConnectionId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkConnectionToClient*>(networkConnectionId));
}
// Ctor Parameters []
constexpr ::Mirror::NetworkConnectionToClient::NetworkConnectionToClient()   {
}
