#pragma once
// IWYU pragma private; include "LobbyNetworking/TicketOffice.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "LobbyNetworking/zzzz__TicketOffice_def.hpp"
#include "LobbyNetworking/zzzz__ITicketed_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::LobbyNetworking::TicketOffice.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LobbyNetworking::TicketOffice::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803d0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::TicketOffice.AddTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LobbyNetworking::ITicketed*)>(&::LobbyNetworking::TicketOffice::AddTicket)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803d0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {"AddTicket", {}, {::i2c::type_of<::LobbyNetworking::ITicketed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::TicketOffice.RemoveTicket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LobbyNetworking::ITicketed*)>(&::LobbyNetworking::TicketOffice::RemoveTicket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803d0f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {"RemoveTicket", {}, {::i2c::type_of<::LobbyNetworking::ITicketed*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LobbyNetworking::TicketOffice._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LobbyNetworking::TicketOffice::*)()>(&::LobbyNetworking::TicketOffice::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>*& LobbyNetworking::TicketOffice::__cordl_internal_get_tickets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickets;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>* const& LobbyNetworking::TicketOffice::__cordl_internal_get_tickets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickets;
}
constexpr void LobbyNetworking::TicketOffice::__cordl_internal_set_tickets(::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickets = value;
}
inline void LobbyNetworking::TicketOffice::setStaticF_instance(::UnityW<::LobbyNetworking::TicketOffice>  value)  {
::cordl_internals::setStaticField<::UnityW<::LobbyNetworking::TicketOffice>, "instance", ::LobbyNetworking::TicketOffice*>(std::forward<::UnityW<::LobbyNetworking::TicketOffice>>(value));
}
inline ::UnityW<::LobbyNetworking::TicketOffice> LobbyNetworking::TicketOffice::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::LobbyNetworking::TicketOffice>, "instance", ::LobbyNetworking::TicketOffice*>();
}
inline void LobbyNetworking::TicketOffice::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LobbyNetworking::TicketOffice::AddTicket(::LobbyNetworking::ITicketed*  ticketed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {"AddTicket", {}, {::i2c::type_of<::LobbyNetworking::ITicketed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ticketed);
}
inline void LobbyNetworking::TicketOffice::RemoveTicket(::LobbyNetworking::ITicketed*  ticketed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {"RemoveTicket", {}, {::i2c::type_of<::LobbyNetworking::ITicketed*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ticketed);
}
template<typename T>
inline T LobbyNetworking::TicketOffice::GetWithTicket(uint16_t  ticket)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                    {"GetWithTicket", {::i2c::class_of<T>()}, {::i2c::type_of<uint16_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, ticket);
}
inline void LobbyNetworking::TicketOffice::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LobbyNetworking::TicketOffice*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LobbyNetworking::TicketOffice* LobbyNetworking::TicketOffice::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LobbyNetworking::TicketOffice*>());
}
// Ctor Parameters []
constexpr ::LobbyNetworking::TicketOffice::TicketOffice()   {
}
