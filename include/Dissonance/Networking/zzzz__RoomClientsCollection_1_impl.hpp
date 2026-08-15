#pragma once
// IWYU pragma private; include "Dissonance/Networking/RoomClientsCollection_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Networking/zzzz__RoomClientsCollection_1_def.hpp"
#include "Dissonance/Datastructures/zzzz__Pool_1_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/Networking/zzzz__RoomClientsCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
inline int32_t Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>::Compare(::Dissonance::Networking::ClientInfo_1<T>*  x, ::Dissonance::Networking::ClientInfo_1<T>*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>*>(),
                        {"Compare", {}, {::i2c::type_of<::Dissonance::Networking::ClientInfo_1<T>*>(), ::i2c::type_of<::Dissonance::Networking::ClientInfo_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>* Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>"
template<typename T>
constexpr  Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>::operator ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>"
template<typename T>
constexpr ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>* Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>::i___System__Collections__Generic__IComparer_1___Dissonance__Networking__ClientInfo_1_T___() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Networking::RoomClientsCollection_1_ClientIdComparer<T>::RoomClientsCollection_1_ClientIdComparer()   {
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1___c<T>::setStaticF___9(::Dissonance::Networking::RoomClientsCollection_1___c<T>*  value)  {
::cordl_internals::setStaticField<::Dissonance::Networking::RoomClientsCollection_1___c<T>*, "<>9", ::Dissonance::Networking::RoomClientsCollection_1___c<T>*>(std::forward<::Dissonance::Networking::RoomClientsCollection_1___c<T>*>(value));
}
template<typename T>
inline ::Dissonance::Networking::RoomClientsCollection_1___c<T>* Dissonance::Networking::RoomClientsCollection_1___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Networking::RoomClientsCollection_1___c<T>*, "<>9", ::Dissonance::Networking::RoomClientsCollection_1___c<T>*>();
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1___c<T>::setStaticF___9__13_0(::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>*, "<>9__13_0", ::Dissonance::Networking::RoomClientsCollection_1___c<T>*>(std::forward<::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>*>(value));
}
template<typename T>
inline ::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>* Dissonance::Networking::RoomClientsCollection_1___c<T>::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::List_1<::StringW>*>*, "<>9__13_0", ::Dissonance::Networking::RoomClientsCollection_1___c<T>*>();
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::List_1<::StringW>* Dissonance::Networking::RoomClientsCollection_1___c<T>::__ctor_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1___c<T>*>(),
                        {"<.ctor>b__13_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Networking::RoomClientsCollection_1___c<T>* Dissonance::Networking::RoomClientsCollection_1___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::RoomClientsCollection_1___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Networking::RoomClientsCollection_1___c<T>::RoomClientsCollection_1___c()   {
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>*& Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_get__clientByRoomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientByRoomName;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>* const& Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_get__clientByRoomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientByRoomName;
}
template<typename T>
constexpr void Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_set__clientByRoomName(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientByRoomName = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>*& Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_get__roomNamesByHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNamesByHash;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>* const& Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_get__roomNamesByHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roomNamesByHash;
}
template<typename T>
constexpr void Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_set__roomNamesByHash(::System::Collections::Generic::Dictionary_2<uint16_t,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roomNamesByHash = value;
}
template<typename T>
constexpr ::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>*& Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_get__listStringPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listStringPool;
}
template<typename T>
constexpr ::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>* const& Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_get__listStringPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listStringPool;
}
template<typename T>
constexpr void Dissonance::Networking::RoomClientsCollection_1<T>::__cordl_internal_set__listStringPool(::Dissonance::Datastructures::Pool_1<::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____listStringPool = value;
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1<T>::setStaticF_ClientComparer(::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*, "ClientComparer", ::Dissonance::Networking::RoomClientsCollection_1<T>*>(std::forward<::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>* Dissonance::Networking::RoomClientsCollection_1<T>::getStaticF_ClientComparer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::Dissonance::Networking::ClientInfo_1<T>*>*, "ClientComparer", ::Dissonance::Networking::RoomClientsCollection_1<T>*>();
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1<T>::AddToHashCache(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"AddToHashCache", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1<T>::RemoveFromHashCache(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"RemoveFromHashCache", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1<T>::Add(::StringW  room, ::Dissonance::Networking::ClientInfo_1<T>*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Networking::ClientInfo_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room, client);
}
template<typename T>
inline bool Dissonance::Networking::RoomClientsCollection_1<T>::Remove(::StringW  room, ::Dissonance::Networking::ClientInfo_1<T>*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Networking::ClientInfo_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, room, client);
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Dissonance::Networking::RoomClientsCollection_1<T>::TryGetClientsInRoom(::StringW  room, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"TryGetClientsInRoom", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, room, output);
}
template<typename T>
inline bool Dissonance::Networking::RoomClientsCollection_1<T>::TryGetClientsInRoom(uint16_t  roomId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"TryGetClientsInRoom", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<T>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomId, output);
}
template<typename T>
inline int32_t Dissonance::Networking::RoomClientsCollection_1<T>::ClientCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {"ClientCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Dissonance::Networking::RoomClientsCollection_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::RoomClientsCollection_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Dissonance::Networking::RoomClientsCollection_1<T>* Dissonance::Networking::RoomClientsCollection_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::RoomClientsCollection_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Dissonance::Networking::RoomClientsCollection_1<T>::RoomClientsCollection_1()   {
}
