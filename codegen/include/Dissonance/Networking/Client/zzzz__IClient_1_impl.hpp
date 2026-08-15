#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/IClient_1.hpp"
#include "Dissonance/Networking/Client/zzzz__IClient_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename TPeer>
inline void Dissonance::Networking::Client::IClient_1<TPeer>::SendReliable(::System::ArraySegment_1<uint8_t>  arraySegment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IClient_1<TPeer>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arraySegment);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::IClient_1<TPeer>::SendUnreliable(::System::ArraySegment_1<uint8_t>  arraySegment)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IClient_1<TPeer>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arraySegment);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::IClient_1<TPeer>::SendReliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IClient_1<TPeer>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinations, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Client::IClient_1<TPeer>::SendUnreliableP2P(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<::System::Nullable_1<TPeer>>*>*  destinations, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::IClient_1<TPeer>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinations, packet);
}
