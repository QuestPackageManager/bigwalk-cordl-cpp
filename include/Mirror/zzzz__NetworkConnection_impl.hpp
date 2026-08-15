#pragma once
// IWYU pragma private; include "Mirror/NetworkConnection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__Batcher_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkConnection.get_identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkIdentity> (::Mirror::NetworkConnection::*)()>(&::Mirror::NetworkConnection::get_identity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"get_identity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.set_identity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)(::Mirror::NetworkIdentity*)>(&::Mirror::NetworkConnection::set_identity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"set_identity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.get_remoteTimeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Mirror::NetworkConnection::*)()>(&::Mirror::NetworkConnection::get_remoteTimeStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"get_remoteTimeStamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.set_remoteTimeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)(double_t)>(&::Mirror::NetworkConnection::set_remoteTimeStamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"set_remoteTimeStamp", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)()>(&::Mirror::NetworkConnection::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181542b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)(int32_t)>(&::Mirror::NetworkConnection::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181542b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.GetBatchForChannelId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mirror::Batcher* (::Mirror::NetworkConnection::*)(int32_t)>(&::Mirror::NetworkConnection::GetBatchForChannelId)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181542660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"GetBatchForChannelId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.ValidatePacketSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkConnection::ValidatePacketSize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181542a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"ValidatePacketSize", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkConnection::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181542790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnection*>(),
                    {::i2c::class_of<::Mirror::NetworkConnection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.SendToTransport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)(::System::ArraySegment_1<uint8_t>, int32_t)>(&::Mirror::NetworkConnection::SendToTransport)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnection*>(),
                    {::i2c::class_of<::Mirror::NetworkConnection*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)()>(&::Mirror::NetworkConnection::Update)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181542830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnection*>(),
                    {::i2c::class_of<::Mirror::NetworkConnection*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.IsAlive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkConnection::*)(float_t)>(&::Mirror::NetworkConnection::IsAlive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181542760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnection*>(),
                    {::i2c::class_of<::Mirror::NetworkConnection*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkConnection::*)()>(&::Mirror::NetworkConnection::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnection*>(),
                    {::i2c::class_of<::Mirror::NetworkConnection*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkConnection.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mirror::NetworkConnection::*)()>(&::Mirror::NetworkConnection::ToString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815427f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnection*>(),
                    {::i2c::class_of<::Mirror::NetworkConnection*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::NetworkConnection::__cordl_internal_get_connectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionId;
}
constexpr int32_t const& Mirror::NetworkConnection::__cordl_internal_get_connectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionId;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set_connectionId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionId = value;
}
constexpr bool& Mirror::NetworkConnection::__cordl_internal_get_isAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAuthenticated;
}
constexpr bool const& Mirror::NetworkConnection::__cordl_internal_get_isAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAuthenticated;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set_isAuthenticated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAuthenticated = value;
}
constexpr ::System::Object*& Mirror::NetworkConnection::__cordl_internal_get_authenticationData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationData;
}
constexpr ::System::Object* const& Mirror::NetworkConnection::__cordl_internal_get_authenticationData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationData;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set_authenticationData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticationData = value;
}
constexpr bool& Mirror::NetworkConnection::__cordl_internal_get_isReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReady;
}
constexpr bool const& Mirror::NetworkConnection::__cordl_internal_get_isReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReady;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set_isReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isReady = value;
}
constexpr float_t& Mirror::NetworkConnection::__cordl_internal_get_lastMessageTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMessageTime;
}
constexpr float_t const& Mirror::NetworkConnection::__cordl_internal_get_lastMessageTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMessageTime;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set_lastMessageTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMessageTime = value;
}
constexpr ::UnityW<::Mirror::NetworkIdentity>& Mirror::NetworkConnection::__cordl_internal_get__identity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identity_k__BackingField;
}
constexpr ::UnityW<::Mirror::NetworkIdentity> const& Mirror::NetworkConnection::__cordl_internal_get__identity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identity_k__BackingField;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set__identity_k__BackingField(::UnityW<::Mirror::NetworkIdentity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identity_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*& Mirror::NetworkConnection::__cordl_internal_get_owned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owned;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>* const& Mirror::NetworkConnection::__cordl_internal_get_owned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owned;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set_owned(::System::Collections::Generic::HashSet_1<::UnityW<::Mirror::NetworkIdentity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owned = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>*& Mirror::NetworkConnection::__cordl_internal_get_batches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batches;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>* const& Mirror::NetworkConnection::__cordl_internal_get_batches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___batches;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set_batches(::System::Collections::Generic::Dictionary_2<int32_t,::Mirror::Batcher*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___batches = value;
}
constexpr double_t& Mirror::NetworkConnection::__cordl_internal_get__remoteTimeStamp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteTimeStamp_k__BackingField;
}
constexpr double_t const& Mirror::NetworkConnection::__cordl_internal_get__remoteTimeStamp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteTimeStamp_k__BackingField;
}
constexpr void Mirror::NetworkConnection::__cordl_internal_set__remoteTimeStamp_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteTimeStamp_k__BackingField = value;
}
inline ::UnityW<::Mirror::NetworkIdentity> Mirror::NetworkConnection::get_identity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"get_identity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkIdentity>>(this, ___internal_method);
}
inline void Mirror::NetworkConnection::set_identity(::Mirror::NetworkIdentity*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"set_identity", {}, {::i2c::type_of<::Mirror::NetworkIdentity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Mirror::NetworkConnection::get_remoteTimeStamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"get_remoteTimeStamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Mirror::NetworkConnection::set_remoteTimeStamp(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"set_remoteTimeStamp", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkConnection::_ctor(int32_t  networkConnectionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkConnectionId);
}
inline ::Mirror::Batcher* Mirror::NetworkConnection::GetBatchForChannelId(int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"GetBatchForChannelId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mirror::Batcher*>(this, ___internal_method, channelId);
}
inline bool Mirror::NetworkConnection::ValidatePacketSize(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkConnection*>(),
                        {"ValidatePacketSize", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, segment, channelId);
}
template<typename T>
inline void Mirror::NetworkConnection::Send(T  message, int32_t  channelId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkConnection*>(),
                    {"Send", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, channelId);
}
inline void Mirror::NetworkConnection::Send(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::NetworkConnection::SendToTransport(::System::ArraySegment_1<uint8_t>  segment, int32_t  channelId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnection*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment, channelId);
}
inline void Mirror::NetworkConnection::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnection*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkConnection::IsAlive(float_t  timeout)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnection*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, timeout);
}
inline void Mirror::NetworkConnection::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnection*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mirror::NetworkConnection::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkConnection*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mirror::NetworkConnection* Mirror::NetworkConnection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkConnection*>());
}
inline ::Mirror::NetworkConnection* Mirror::NetworkConnection::New_ctor(int32_t  networkConnectionId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkConnection*>(networkConnectionId));
}
// Ctor Parameters []
constexpr ::Mirror::NetworkConnection::NetworkConnection()   {
}
