#pragma once
// IWYU pragma private; include "Dissonance/Networking/ClientInfo.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::ClientInfo.get_PlayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::ClientInfo::*)()>(&::Dissonance::Networking::ClientInfo::get_PlayerName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {"get_PlayerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientInfo.get_PlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::ClientInfo::*)()>(&::Dissonance::Networking::ClientInfo::get_PlayerId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {"get_PlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientInfo.get_CodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (::Dissonance::Networking::ClientInfo::*)()>(&::Dissonance::Networking::ClientInfo::get_CodecSettings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802d5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {"get_CodecSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::ClientInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::ClientInfo::*)(::StringW, uint16_t, ::Dissonance::CodecSettings)>(&::Dissonance::Networking::ClientInfo::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805db170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Dissonance::Networking::ClientInfo::get_PlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {"get_PlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint16_t Dissonance::Networking::ClientInfo::get_PlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {"get_PlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline ::Dissonance::CodecSettings Dissonance::Networking::ClientInfo::get_CodecSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {"get_CodecSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(*this, ___internal_method);
}
inline void Dissonance::Networking::ClientInfo::_ctor(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::ClientInfo>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, playerName, playerId, codecSettings);
}
// Ctor Parameters [CppParam { name: "_PlayerName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_PlayerId_k__BackingField", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CodecSettings_k__BackingField", ty: "::Dissonance::CodecSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::ClientInfo::ClientInfo(::StringW  _PlayerName_k__BackingField, uint16_t  _PlayerId_k__BackingField, ::Dissonance::CodecSettings  _CodecSettings_k__BackingField) noexcept  {
this->_PlayerName_k__BackingField = _PlayerName_k__BackingField;
this->_PlayerId_k__BackingField = _PlayerId_k__BackingField;
this->_CodecSettings_k__BackingField = _CodecSettings_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::ClientInfo::ClientInfo()   {
}
