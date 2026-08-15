#pragma once
// IWYU pragma private; include "Dissonance/RoomChannel.hpp"
#include "Dissonance/zzzz__RoomName_impl.hpp"
#include "Dissonance/zzzz__RoomChannel_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__IChannel_1_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::RoomChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannel::*)(uint16_t, ::Dissonance::RoomName, ::Dissonance::RoomChannels*, ::Dissonance::ChannelProperties*)>(&::Dissonance::RoomChannel::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805cf5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.get_SubscriptionId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::get_SubscriptionId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18052ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_SubscriptionId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.get_TargetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::get_TargetId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_TargetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.Dissonance_IChannel_Dissonance_RoomName__get_TargetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomName (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::Dissonance_IChannel_Dissonance_RoomName__get_TargetId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Dissonance.IChannel<Dissonance.RoomName>.get_TargetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.Dissonance_IChannel_Dissonance_RoomName__get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelProperties* (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::Dissonance_IChannel_Dissonance_RoomName__get_Properties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Dissonance.IChannel<Dissonance.RoomName>.get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelProperties* (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::get_Properties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.get_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::get_IsOpen)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805cf650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_IsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.get_Positional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::get_Positional)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cf6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Positional", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.set_Positional
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannel::*)(bool)>(&::Dissonance::RoomChannel::set_Positional)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cf770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"set_Positional", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::ChannelPriority (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::get_Priority)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cf6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannel::*)(::Dissonance::ChannelPriority)>(&::Dissonance::RoomChannel::set_Priority)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cf7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.get_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::get_Volume)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cf730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Volume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.set_Volume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannel::*)(float_t)>(&::Dissonance::RoomChannel::set_Volume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805cf800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805cf450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.CheckValidProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::CheckValidProperties)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805cf370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"CheckValidProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RoomChannel::*)(::Dissonance::RoomChannel)>(&::Dissonance::RoomChannel::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805cd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::RoomChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::RoomChannel::*)(::System::Object*)>(&::Dissonance::RoomChannel::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805cf4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RoomChannel>(),
                    {::i2c::class_of<::Dissonance::RoomChannel>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannel.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::RoomChannel::*)()>(&::Dissonance::RoomChannel::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805cd300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RoomChannel>(),
                    {::i2c::class_of<::Dissonance::RoomChannel>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::RoomChannel::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::RoomChannel>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::RoomChannel::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::RoomChannel>();
}
inline void Dissonance::RoomChannel::_ctor(uint16_t  subscriptionId, ::Dissonance::RoomName  roomId, ::Dissonance::RoomChannels*  channels, ::Dissonance::ChannelProperties*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, subscriptionId, roomId, channels, properties);
}
inline uint16_t Dissonance::RoomChannel::get_SubscriptionId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_SubscriptionId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline ::StringW Dissonance::RoomChannel::get_TargetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_TargetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Dissonance::RoomName Dissonance::RoomChannel::Dissonance_IChannel_Dissonance_RoomName__get_TargetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Dissonance.IChannel<Dissonance.RoomName>.get_TargetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomName>(*this, ___internal_method);
}
inline ::Dissonance::ChannelProperties* Dissonance::RoomChannel::Dissonance_IChannel_Dissonance_RoomName__get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Dissonance.IChannel<Dissonance.RoomName>.get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelProperties*>(*this, ___internal_method);
}
inline ::Dissonance::ChannelProperties* Dissonance::RoomChannel::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelProperties*>(*this, ___internal_method);
}
inline bool Dissonance::RoomChannel::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_IsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Dissonance::RoomChannel::get_Positional()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Positional", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Dissonance::RoomChannel::set_Positional(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"set_Positional", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Dissonance::ChannelPriority Dissonance::RoomChannel::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelPriority>(*this, ___internal_method);
}
inline void Dissonance::RoomChannel::set_Priority(::Dissonance::ChannelPriority  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"set_Priority", {}, {::i2c::type_of<::Dissonance::ChannelPriority>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Dissonance::RoomChannel::get_Volume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"get_Volume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Dissonance::RoomChannel::set_Volume(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"set_Volume", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Dissonance::RoomChannel::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Dissonance::RoomChannel::CheckValidProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"CheckValidProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Dissonance::RoomChannel::Equals(::Dissonance::RoomChannel  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannel>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::RoomChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Dissonance::RoomChannel::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RoomChannel>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Dissonance::RoomChannel::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RoomChannel>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::Dissonance::IChannel_1<::Dissonance::RoomName>"
constexpr  Dissonance::RoomChannel::operator ::Dissonance::IChannel_1<::Dissonance::RoomName>*()  {
return static_cast<::Dissonance::IChannel_1<::Dissonance::RoomName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Dissonance::IChannel_1<::Dissonance::RoomName>"
constexpr ::Dissonance::IChannel_1<::Dissonance::RoomName>* Dissonance::RoomChannel::i___Dissonance__IChannel_1___Dissonance__RoomName_()  {
return static_cast<::Dissonance::IChannel_1<::Dissonance::RoomName>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::RoomChannel::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::RoomChannel::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::RoomChannel>"
constexpr  Dissonance::RoomChannel::operator ::System::IEquatable_1<::Dissonance::RoomChannel>*()  {
return static_cast<::System::IEquatable_1<::Dissonance::RoomChannel>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::RoomChannel>"
constexpr ::System::IEquatable_1<::Dissonance::RoomChannel>* Dissonance::RoomChannel::i___System__IEquatable_1___Dissonance__RoomChannel_()  {
return static_cast<::System::IEquatable_1<::Dissonance::RoomChannel>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_subscriptionId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_roomId", ty: "::Dissonance::RoomName", modifiers: "", def_value: Some("{}") }, CppParam { name: "_properties", ty: "::Dissonance::ChannelProperties*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_channels", ty: "::Dissonance::RoomChannels*", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::RoomChannel::RoomChannel(uint16_t  _subscriptionId, ::Dissonance::RoomName  _roomId, ::Dissonance::ChannelProperties*  _properties, ::Dissonance::RoomChannels*  _channels) noexcept  {
this->_subscriptionId = _subscriptionId;
this->_roomId = _roomId;
this->_properties = _properties;
this->_channels = _channels;
}
// Ctor Parameters []
constexpr ::Dissonance::RoomChannel::RoomChannel()   {
}
