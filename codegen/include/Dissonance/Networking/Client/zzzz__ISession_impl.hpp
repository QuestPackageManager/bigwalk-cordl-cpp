#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ISession.hpp"
#include "Dissonance/Networking/Client/zzzz__ISession_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::Client::ISession.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Networking::Client::ISession::*)()>(&::Dissonance::Networking::Client::ISession::get_SessionId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::ISession*>(),
                    {::i2c::class_of<::Dissonance::Networking::Client::ISession*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::ISession.get_LocalId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<uint16_t> (::Dissonance::Networking::Client::ISession::*)()>(&::Dissonance::Networking::Client::ISession::get_LocalId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::ISession*>(),
                    {::i2c::class_of<::Dissonance::Networking::Client::ISession*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::ISession.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::Client::ISession::*)()>(&::Dissonance::Networking::Client::ISession::get_LocalName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::Client::ISession*>(),
                    {::i2c::class_of<::Dissonance::Networking::Client::ISession*>(), 2}
                ));
    return ___internal_method;
  }
};
inline uint32_t Dissonance::Networking::Client::ISession::get_SessionId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISession*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::Nullable_1<uint16_t> Dissonance::Networking::Client::ISession::get_LocalId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISession*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<uint16_t>>(this, ___internal_method);
}
inline ::StringW Dissonance::Networking::Client::ISession::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::Client::ISession*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
