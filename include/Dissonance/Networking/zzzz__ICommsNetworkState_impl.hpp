#pragma once
// IWYU pragma private; include "Dissonance/Networking/ICommsNetworkState.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetworkState_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetworkState.get_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::ICommsNetworkState::*)()>(&::Dissonance::Networking::ICommsNetworkState::get_PlayerName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetworkState.get_Rooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Rooms* (::Dissonance::Networking::ICommsNetworkState::*)()>(&::Dissonance::Networking::ICommsNetworkState::get_Rooms)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetworkState.get_PlayerChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::PlayerChannels* (::Dissonance::Networking::ICommsNetworkState::*)()>(&::Dissonance::Networking::ICommsNetworkState::get_PlayerChannels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetworkState.get_RoomChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomChannels* (::Dissonance::Networking::ICommsNetworkState::*)()>(&::Dissonance::Networking::ICommsNetworkState::get_RoomChannels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ICommsNetworkState.get_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (::Dissonance::Networking::ICommsNetworkState::*)()>(&::Dissonance::Networking::ICommsNetworkState::get_CodecSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(),
                    {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::Networking::ICommsNetworkState::get_PlayerName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Dissonance::Rooms* Dissonance::Networking::ICommsNetworkState::get_Rooms()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Rooms*>(this, ___internal_method);
}
inline ::Dissonance::PlayerChannels* Dissonance::Networking::ICommsNetworkState::get_PlayerChannels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::PlayerChannels*>(this, ___internal_method);
}
inline ::Dissonance::RoomChannels* Dissonance::Networking::ICommsNetworkState::get_RoomChannels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomChannels*>(this, ___internal_method);
}
inline ::Dissonance::CodecSettings Dissonance::Networking::ICommsNetworkState::get_CodecSettings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::ICommsNetworkState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(this, ___internal_method);
}
