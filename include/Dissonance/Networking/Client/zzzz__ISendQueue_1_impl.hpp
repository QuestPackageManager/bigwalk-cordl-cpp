#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ISendQueue_1.hpp"
#include "Dissonance/Networking/Client/zzzz__ISendQueue_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
inline void Dissonance::Networking::Client::ISendQueue_1<TPeer>::EnqueueReliable(::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ISendQueue_1<TPeer>::EnqeueUnreliable(::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ISendQueue_1<TPeer>::EnqueueReliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localId, destinations, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ISendQueue_1<TPeer>::EnqueueUnreliableP2P(uint16_t  localId, ::System::Collections::Generic::IList_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localId, destinations, packet);
}
template<typename TPeer>
inline ::ArrayW<uint8_t> Dissonance::Networking::Client::ISendQueue_1<TPeer>::GetSendBuffer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::ISendQueue_1<TPeer>::RecycleSendBuffer(::ArrayW<uint8_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISendQueue_1<TPeer>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
