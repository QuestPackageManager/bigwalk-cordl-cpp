#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/SendQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__SendQueue_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__ConcurrentPool_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__Pool_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__IClient_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__ISendQueue_1_def.hpp"
#include "Dissonance/Networking/Client/zzzz__SendQueue_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Threading/zzzz__ReadonlyLockedValue_1_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1___c<TPeer>::setStaticF___9(::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*  value)  {
::cordl_internals::setStaticField<::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*, "<>9", ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>(std::forward<::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>(value));
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>* Dissonance::Networking::Client::SendQueue_1___c<TPeer>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*, "<>9", ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1___c<TPeer>::setStaticF___9__9_0(::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*, "<>9__9_0", ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>(std::forward<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*>(value));
}
template<typename TPeer>
inline ::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>* Dissonance::Networking::Client::SendQueue_1___c<TPeer>::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*, "<>9__9_0", ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1___c<TPeer>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>* Dissonance::Networking::Client::SendQueue_1___c<TPeer>::__ctor_b__9_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>(),
                        {"<.ctor>b__9_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>(this, ___internal_method);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>* Dissonance::Networking::Client::SendQueue_1___c<TPeer>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::SendQueue_1___c<TPeer>*>());
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::SendQueue_1___c<TPeer>::SendQueue_1___c()   {
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::IClient_1<TPeer>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::IClient_1<TPeer>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__client(::Dissonance::Networking::Client::IClient_1<TPeer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client = value;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__serverReliableQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverReliableQueue;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__serverReliableQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverReliableQueue;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__serverReliableQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverReliableQueue = value;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__serverUnreliableQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverUnreliableQueue;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__serverUnreliableQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverUnreliableQueue;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__serverUnreliableQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverUnreliableQueue = value;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__reliableP2PQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliableP2PQueue;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__reliableP2PQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reliableP2PQueue;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__reliableP2PQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reliableP2PQueue = value;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__unreliableP2PQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unreliableP2PQueue;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__unreliableP2PQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unreliableP2PQueue;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__unreliableP2PQueue(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unreliableP2PQueue = value;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__sendBufferPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendBufferPool;
}
template<typename TPeer>
constexpr ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__sendBufferPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendBufferPool;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__sendBufferPool(::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendBufferPool = value;
}
template<typename TPeer>
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__listPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listPool;
}
template<typename TPeer>
constexpr ::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__listPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listPool;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__listPool(::Dissonance::Datastructures::ConcurrentPool_1<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____listPool = value;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__tmpRecycleQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRecycleQueue;
}
template<typename TPeer>
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_get__tmpRecycleQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tmpRecycleQueue;
}
template<typename TPeer>
constexpr void Dissonance::Networking::Client::SendQueue_1<TPeer>::__cordl_internal_set__tmpRecycleQueue(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tmpRecycleQueue = value;
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(std::forward<::Dissonance::Log*>(value));
}
template<typename TPeer>
inline ::Dissonance::Log* Dissonance::Networking::Client::SendQueue_1<TPeer>::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::SendQueue_1<TPeer>*>();
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::_ctor(::Dissonance::Networking::Client::IClient_1<TPeer>*  client, ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  bytePool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::Client::IClient_1<TPeer>*>(), ::i2c::type_of<::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client, bytePool);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
template<typename T>
inline int32_t Dissonance::Networking::Client::SendQueue_1<TPeer>::Drop(::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<T>*>*  l)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                    {"Drop", {::i2c::class_of<T>()}, {::i2c::type_of<::Dissonance::Threading::ReadonlyLockedValue_1<::System::Collections::Generic::List_1<T>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, l);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::EnqueueReliable(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"EnqueueReliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::EnqeueUnreliable(::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"EnqeueUnreliable", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::EnqueueReliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"EnqueueReliableP2P", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localId, destinations, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::EnqueueUnreliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"EnqueueUnreliableP2P", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localId, destinations, packet);
}
template<typename TPeer>
inline ::ArrayW<uint8_t> Dissonance::Networking::Client::SendQueue_1<TPeer>::GetSendBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"GetSendBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::RecycleSendBuffer(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"RecycleSendBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::SendQueue_1<TPeer>::EnqueueP2P(uint16_t  localId, ::System::Collections::Generic::ICollection_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*  queue, ::System::ArraySegment_1<uint8_t>  packet)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(),
                        {"EnqueueP2P", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*,::System::ArraySegment_1<uint8_t>>>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localId, destinations, queue, packet);
}
template<typename TPeer>
inline ::Dissonance::Networking::Client::SendQueue_1<TPeer>* Dissonance::Networking::Client::SendQueue_1<TPeer>::New_ctor(::Dissonance::Networking::Client::IClient_1<TPeer>*  client, ::Dissonance::Threading::ReadonlyLockedValue_1<::Dissonance::Datastructures::Pool_1<::ArrayW<uint8_t>>*>*  bytePool)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::Client::SendQueue_1<TPeer>*>(client, bytePool));
}
/// @brief Convert operator to "::Dissonance::Networking::Client::ISendQueue_1<TPeer>"
template<typename TPeer>
constexpr  Dissonance::Networking::Client::SendQueue_1<TPeer>::operator ::Dissonance::Networking::Client::ISendQueue_1<TPeer>*() noexcept {
return static_cast<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::Client::ISendQueue_1<TPeer>"
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::ISendQueue_1<TPeer>* Dissonance::Networking::Client::SendQueue_1<TPeer>::i___Dissonance__Networking__Client__ISendQueue_1_TPeer_() noexcept {
return static_cast<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TPeer>
constexpr ::Dissonance::Networking::Client::SendQueue_1<TPeer>::SendQueue_1()   {
}
