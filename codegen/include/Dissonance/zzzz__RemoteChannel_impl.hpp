#pragma once
// IWYU pragma private; include "Dissonance/RemoteChannel.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_impl.hpp"
#include "Dissonance/zzzz__ChannelType_impl.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__PlaybackOptions_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
//  Writing Method size for method: ::Dissonance::RemoteChannel.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelType (::Dissonance::RemoteChannel::*)()>(&::Dissonance::RemoteChannel::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteChannel.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Playback::PlaybackOptions (::Dissonance::RemoteChannel::*)()>(&::Dissonance::RemoteChannel::get_Options)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c3280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteChannel.get_TargetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::RemoteChannel::*)()>(&::Dissonance::RemoteChannel::get_TargetName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {"get_TargetName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RemoteChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RemoteChannel::*)(::StringW, ::Dissonance::ChannelType, ::Dissonance::Audio::Playback::PlaybackOptions)>(&::Dissonance::RemoteChannel::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805ce3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::Dissonance::Audio::Playback::PlaybackOptions>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Dissonance::ChannelType Dissonance::RemoteChannel::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelType>(*this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::PlaybackOptions Dissonance::RemoteChannel::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Playback::PlaybackOptions>(*this, ___internal_method);
}
inline ::StringW Dissonance::RemoteChannel::get_TargetName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {"get_TargetName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Dissonance::RemoteChannel::_ctor(::StringW  targetName, ::Dissonance::ChannelType  type, ::Dissonance::Audio::Playback::PlaybackOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RemoteChannel>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::Dissonance::Audio::Playback::PlaybackOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, targetName, type, options);
}
// Ctor Parameters [CppParam { name: "_Type_k__BackingField", ty: "::Dissonance::ChannelType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Options_k__BackingField", ty: "::Dissonance::Audio::Playback::PlaybackOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "_TargetName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::RemoteChannel::RemoteChannel(::Dissonance::ChannelType  _Type_k__BackingField, ::Dissonance::Audio::Playback::PlaybackOptions  _Options_k__BackingField, ::StringW  _TargetName_k__BackingField) noexcept  {
this->_Type_k__BackingField = _Type_k__BackingField;
this->_Options_k__BackingField = _Options_k__BackingField;
this->_TargetName_k__BackingField = _TargetName_k__BackingField;
}
// Ctor Parameters []
constexpr ::Dissonance::RemoteChannel::RemoteChannel()   {
}
