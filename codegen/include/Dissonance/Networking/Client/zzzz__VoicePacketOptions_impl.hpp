#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/VoicePacketOptions.hpp"
#include "Dissonance/Networking/Client/zzzz__VoicePacketOptions_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::Client::VoicePacketOptions.get_ChannelSessionRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Networking::Client::VoicePacketOptions::*)()>(&::Dissonance::Networking::Client::VoicePacketOptions::get_ChannelSessionRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_ChannelSessionRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::VoicePacketOptions.get_IsChannelSessionExtendedRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::VoicePacketOptions::*)()>(&::Dissonance::Networking::Client::VoicePacketOptions::get_IsChannelSessionExtendedRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_IsChannelSessionExtendedRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::VoicePacketOptions.get_ChannelSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Dissonance::Networking::Client::VoicePacketOptions::*)()>(&::Dissonance::Networking::Client::VoicePacketOptions::get_ChannelSession)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805ed880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_ChannelSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::VoicePacketOptions.get_Bitfield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Dissonance::Networking::Client::VoicePacketOptions::*)()>(&::Dissonance::Networking::Client::VoicePacketOptions::get_Bitfield)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_Bitfield", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::VoicePacketOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::VoicePacketOptions::*)(uint8_t)>(&::Dissonance::Networking::Client::VoicePacketOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::VoicePacketOptions.Unpack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::Client::VoicePacketOptions (*)(uint8_t)>(&::Dissonance::Networking::Client::VoicePacketOptions::Unpack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"Unpack", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::VoicePacketOptions.Pack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::Client::VoicePacketOptions (*)(uint8_t)>(&::Dissonance::Networking::Client::VoicePacketOptions::Pack)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805ed840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"Pack", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Dissonance::Networking::Client::VoicePacketOptions::get_ChannelSessionRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_ChannelSessionRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Dissonance::Networking::Client::VoicePacketOptions::get_IsChannelSessionExtendedRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_IsChannelSessionExtendedRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint8_t Dissonance::Networking::Client::VoicePacketOptions::get_ChannelSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_ChannelSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint8_t Dissonance::Networking::Client::VoicePacketOptions::get_Bitfield()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"get_Bitfield", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void Dissonance::Networking::Client::VoicePacketOptions::_ctor(uint8_t  bitfield)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitfield);
}
inline ::Dissonance::Networking::Client::VoicePacketOptions Dissonance::Networking::Client::VoicePacketOptions::Unpack(uint8_t  bitfield)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"Unpack", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::VoicePacketOptions>(nullptr, ___internal_method, bitfield);
}
inline ::Dissonance::Networking::Client::VoicePacketOptions Dissonance::Networking::Client::VoicePacketOptions::Pack(uint8_t  channelSession)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::VoicePacketOptions>(),
                        {"Pack", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::VoicePacketOptions>(nullptr, ___internal_method, channelSession);
}
// Ctor Parameters [CppParam { name: "_bitfield", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Client::VoicePacketOptions::VoicePacketOptions(uint8_t  _bitfield) noexcept  {
this->_bitfield = _bitfield;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::VoicePacketOptions::VoicePacketOptions()   {
}
