#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/OpenChannel.hpp"
#include "Dissonance/zzzz__ChannelType_impl.hpp"
#include "Dissonance/Networking/Client/zzzz__OpenChannel_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_Config
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelProperties* (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_Config)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Config", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_Bitfield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_Bitfield)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e1920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Bitfield", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_Recipient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_Recipient)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d74a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Recipient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelType (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_Type)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_IsClosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_IsClosing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_IsClosing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_IsPositional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_IsPositional)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e19b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_IsPositional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_Priority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805e19e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_AmplitudeMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_AmplitudeMultiplier)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805e18f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_SessionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_SessionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d74b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_SessionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::Client::OpenChannel::*)(::Dissonance::ChannelType, uint16_t, ::Dissonance::ChannelProperties*, bool, uint16_t, ::StringW, bool)>(&::Dissonance::Networking::Client::OpenChannel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::ChannelProperties*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.AsClosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::Client::OpenChannel (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::AsClosing)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805e1540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"AsClosing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.AsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::Client::OpenChannel (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::AsOpen)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805e1650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"AsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::Client::OpenChannel.AsSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::Client::OpenChannel (::Dissonance::Networking::Client::OpenChannel::*)()>(&::Dissonance::Networking::Client::OpenChannel::AsSent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805e1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"AsSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::Client::OpenChannel::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::OpenChannel>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Networking::Client::OpenChannel::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::Client::OpenChannel>();
}
inline ::Dissonance::ChannelProperties* Dissonance::Networking::Client::OpenChannel::get_Config()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Config", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelProperties*>(*this, ___internal_method);
}
inline uint16_t Dissonance::Networking::Client::OpenChannel::get_Bitfield()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Bitfield", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint16_t Dissonance::Networking::Client::OpenChannel::get_Recipient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Recipient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline ::Dissonance::ChannelType Dissonance::Networking::Client::OpenChannel::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelType>(*this, ___internal_method);
}
inline bool Dissonance::Networking::Client::OpenChannel::get_IsClosing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_IsClosing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Dissonance::Networking::Client::OpenChannel::get_IsPositional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_IsPositional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Dissonance::ChannelPriority Dissonance::Networking::Client::OpenChannel::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(*this, ___internal_method);
}
inline float_t Dissonance::Networking::Client::OpenChannel::get_AmplitudeMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_AmplitudeMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline uint16_t Dissonance::Networking::Client::OpenChannel::get_SessionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_SessionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline ::StringW Dissonance::Networking::Client::OpenChannel::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Dissonance::Networking::Client::OpenChannel::_ctor(::Dissonance::ChannelType  type, uint16_t  sessionId, ::Dissonance::ChannelProperties*  config, bool  closing, uint16_t  recipient, ::StringW  name, bool  sent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::ChannelProperties*>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, sessionId, config, closing, recipient, name, sent);
}
inline ::Dissonance::Networking::Client::OpenChannel Dissonance::Networking::Client::OpenChannel::AsClosing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"AsClosing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::OpenChannel>(*this, ___internal_method);
}
inline ::Dissonance::Networking::Client::OpenChannel Dissonance::Networking::Client::OpenChannel::AsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"AsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::OpenChannel>(*this, ___internal_method);
}
inline ::Dissonance::Networking::Client::OpenChannel Dissonance::Networking::Client::OpenChannel::AsSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::Client::OpenChannel>(),
                        {"AsSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Client::OpenChannel>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_config", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_type", ty: "::Dissonance::ChannelType", modifiers: "", def_value: Some("{}") }, CppParam { name: "_recipient", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isClosing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sessionId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sent", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Client::OpenChannel::OpenChannel(::Dissonance::ChannelProperties*  _config, ::Dissonance::ChannelType  _type, uint16_t  _recipient, ::StringW  _name, bool  _isClosing, uint16_t  _sessionId, bool  _sent) noexcept  {
this->_config = _config;
this->_type = _type;
this->_recipient = _recipient;
this->_name = _name;
this->_isClosing = _isClosing;
this->_sessionId = _sessionId;
this->_sent = _sent;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::OpenChannel::OpenChannel()   {
}
