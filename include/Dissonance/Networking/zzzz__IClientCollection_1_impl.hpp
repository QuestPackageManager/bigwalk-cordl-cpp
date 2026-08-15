#pragma once
// IWYU pragma private; include "Dissonance/Networking/IClientCollection_1.hpp"
#include "Dissonance/Networking/zzzz__IClientCollection_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename TPeer>
inline bool Dissonance::Networking::IClientCollection_1<TPeer>::TryGetClientInfoById(uint16_t  clientId, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::IClientCollection_1<TPeer>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clientId, info);
}
template<typename TPeer>
inline bool Dissonance::Networking::IClientCollection_1<TPeer>::TryGetClientInfoByName(::StringW  clientName, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::IClientCollection_1<TPeer>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clientName, info);
}
template<typename TPeer>
inline bool Dissonance::Networking::IClientCollection_1<TPeer>::TryGetClientsInRoom(::StringW  room, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::IClientCollection_1<TPeer>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, room, output);
}
template<typename TPeer>
inline bool Dissonance::Networking::IClientCollection_1<TPeer>::TryGetClientsInRoom(uint16_t  roomId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::IClientCollection_1<TPeer>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomId, output);
}
