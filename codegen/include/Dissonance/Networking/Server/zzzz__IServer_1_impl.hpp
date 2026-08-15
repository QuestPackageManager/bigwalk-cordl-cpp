#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/IServer_1.hpp"
#include "Dissonance/Networking/Server/zzzz__IServer_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename TPeer>
inline uint32_t Dissonance::Networking::Server::IServer_1<TPeer>::get_SessionId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::IServer_1<TPeer>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::IServer_1<TPeer>::SendUnreliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::IServer_1<TPeer>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::IServer_1<TPeer>::SendReliable(TPeer  connection, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::IServer_1<TPeer>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::IServer_1<TPeer>::SendReliable(::System::Collections::Generic::List_1<TPeer>*  connections, ::System::ArraySegment_1<uint8_t>  packet)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::IServer_1<TPeer>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections, packet);
}
template<typename TPeer>
inline void Dissonance::Networking::Server::IServer_1<TPeer>::AddClient(::Dissonance::Networking::ClientInfo_1<TPeer>*  client)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Server::IServer_1<TPeer>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
