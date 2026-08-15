#pragma once
// IWYU pragma private; include "Dissonance/PlayerChannel.hpp"
#include "Dissonance/zzzz__PlayerChannel_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__IChannel_1_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::PlayerChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannel::*)(uint16_t, ::StringW, ::Dissonance::PlayerChannels*, ::Dissonance::ChannelProperties*)>(&::Dissonance::PlayerChannel::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805cd340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.get_SubscriptionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::get_SubscriptionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_SubscriptionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.get_TargetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::get_TargetId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_TargetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.Dissonance_IChannel_System_String__get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelProperties* (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::Dissonance_IChannel_System_String__get_Properties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"Dissonance.IChannel<System.String>.get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelProperties* (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::get_Properties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.get_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::get_IsOpen)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cd3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_IsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.get_Positional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::get_Positional)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cd400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Positional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.set_Positional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannel::*)(bool)>(&::Dissonance::PlayerChannel::set_Positional)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cd580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"set_Positional", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::get_Priority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cd480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannel::*)(::Dissonance::ChannelPriority)>(&::Dissonance::PlayerChannel::set_Priority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cd600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::get_Volume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cd500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannel::*)(float_t)>(&::Dissonance::PlayerChannel::set_Volume)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805cd680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cd1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.CheckValidProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::CheckValidProperties)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cd160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"CheckValidProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::PlayerChannel::*)(::Dissonance::PlayerChannel)>(&::Dissonance::PlayerChannel::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::PlayerChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::PlayerChannel::*)(::System::Object*)>(&::Dissonance::PlayerChannel::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805cd230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::PlayerChannel>(),
                    {::i2c::class_of<::Dissonance::PlayerChannel>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannel.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::PlayerChannel::*)()>(&::Dissonance::PlayerChannel::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cd300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::PlayerChannel>(),
                    {::i2c::class_of<::Dissonance::PlayerChannel>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::PlayerChannel::_ctor(uint16_t  subscriptionId, ::StringW  playerId, ::Dissonance::PlayerChannels*  channels, ::Dissonance::ChannelProperties*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, subscriptionId, playerId, channels, properties);
}
inline uint16_t Dissonance::PlayerChannel::get_SubscriptionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_SubscriptionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline ::StringW Dissonance::PlayerChannel::get_TargetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_TargetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Dissonance::ChannelProperties* Dissonance::PlayerChannel::Dissonance_IChannel_System_String__get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"Dissonance.IChannel<System.String>.get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelProperties*>(*this, ___internal_method);
}
inline ::Dissonance::ChannelProperties* Dissonance::PlayerChannel::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelProperties*>(*this, ___internal_method);
}
inline bool Dissonance::PlayerChannel::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_IsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Dissonance::PlayerChannel::get_Positional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Positional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Dissonance::PlayerChannel::set_Positional(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"set_Positional", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Dissonance::ChannelPriority Dissonance::PlayerChannel::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(*this, ___internal_method);
}
inline void Dissonance::PlayerChannel::set_Priority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Dissonance::PlayerChannel::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::PlayerChannel::set_Volume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Dissonance::PlayerChannel::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Dissonance::PlayerChannel::CheckValidProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"CheckValidProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Dissonance::PlayerChannel::Equals(::Dissonance::PlayerChannel  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannel>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::PlayerChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Dissonance::PlayerChannel::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::PlayerChannel>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Dissonance::PlayerChannel::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::PlayerChannel>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::Dissonance::IChannel_1<::StringW>"
constexpr  Dissonance::PlayerChannel::operator ::Dissonance::IChannel_1<::StringW>*()  {
return static_cast<::Dissonance::IChannel_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Dissonance::IChannel_1<::StringW>"
constexpr ::Dissonance::IChannel_1<::StringW>* Dissonance::PlayerChannel::i___Dissonance__IChannel_1___StringW_()  {
return static_cast<::Dissonance::IChannel_1<::StringW>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::PlayerChannel::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::PlayerChannel::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::PlayerChannel>"
constexpr  Dissonance::PlayerChannel::operator ::System::IEquatable_1<::Dissonance::PlayerChannel>*()  {
return static_cast<::System::IEquatable_1<::Dissonance::PlayerChannel>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::PlayerChannel>"
constexpr ::System::IEquatable_1<::Dissonance::PlayerChannel>* Dissonance::PlayerChannel::i___System__IEquatable_1___Dissonance__PlayerChannel_()  {
return static_cast<::System::IEquatable_1<::Dissonance::PlayerChannel>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_subscriptionId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_playerId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_properties", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_channels", ty: "::Dissonance::PlayerChannels*", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::PlayerChannel::PlayerChannel(uint16_t  _subscriptionId, ::StringW  _playerId, ::Dissonance::ChannelProperties*  _properties, ::Dissonance::PlayerChannels*  _channels) noexcept  {
this->_subscriptionId = _subscriptionId;
this->_playerId = _playerId;
this->_properties = _properties;
this->_channels = _channels;
}
// Ctor Parameters []
constexpr ::Dissonance::PlayerChannel::PlayerChannel()   {
}
