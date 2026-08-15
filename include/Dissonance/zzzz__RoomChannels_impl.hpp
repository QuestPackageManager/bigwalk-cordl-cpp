#pragma once
// IWYU pragma private; include "Dissonance/RoomChannels.hpp"
#include "Dissonance/zzzz__Channels_2_impl.hpp"
#include "Dissonance/zzzz__RoomChannel_impl.hpp"
#include "Dissonance/zzzz__RoomName_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IChannelPriorityProvider_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__RoomChannel_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__RoomName_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Dissonance::RoomChannels___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannels___c::*)()>(&::Dissonance::RoomChannels___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannels___c.__ctor_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannels___c::*)(::Dissonance::RoomName, ::Dissonance::ChannelProperties*)>(&::Dissonance::RoomChannels___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels___c*>(),
                        {"<.ctor>b__0_0", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannels___c.__ctor_b__0_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannels___c::*)(::Dissonance::RoomName, ::Dissonance::ChannelProperties*)>(&::Dissonance::RoomChannels___c::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels___c*>(),
                        {"<.ctor>b__0_1", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::RoomChannels___c::setStaticF___9(::Dissonance::RoomChannels___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::RoomChannels___c*, "<>9", ::Dissonance::RoomChannels___c*>(std::forward<::Dissonance::RoomChannels___c*>(value));
}
inline ::Dissonance::RoomChannels___c* Dissonance::RoomChannels___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::RoomChannels___c*, "<>9", ::Dissonance::RoomChannels___c*>();
}
inline void Dissonance::RoomChannels___c::setStaticF___9__0_0(::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*, "<>9__0_0", ::Dissonance::RoomChannels___c*>(std::forward<::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*>(value));
}
inline ::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>* Dissonance::RoomChannels___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*, "<>9__0_0", ::Dissonance::RoomChannels___c*>();
}
inline void Dissonance::RoomChannels___c::setStaticF___9__0_1(::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*, "<>9__0_1", ::Dissonance::RoomChannels___c*>(std::forward<::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*>(value));
}
inline ::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>* Dissonance::RoomChannels___c::getStaticF___9__0_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Dissonance::RoomName,::Dissonance::ChannelProperties*>*, "<>9__0_1", ::Dissonance::RoomChannels___c*>();
}
inline void Dissonance::RoomChannels___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::RoomChannels___c::__ctor_b__0_0(::Dissonance::RoomName  id, ::Dissonance::ChannelProperties*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels___c*>(),
                        {"<.ctor>b__0_0", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, _);
}
inline void Dissonance::RoomChannels___c::__ctor_b__0_1(::Dissonance::RoomName  id, ::Dissonance::ChannelProperties*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels___c*>(),
                        {"<.ctor>b__0_1", {}, {::i2c::type_of<::Dissonance::RoomName>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, _);
}
inline ::Dissonance::RoomChannels___c* Dissonance::RoomChannels___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::RoomChannels___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::RoomChannels___c::RoomChannels___c()   {
}
//  Writing Method size for method: ::Dissonance::RoomChannels._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::RoomChannels::*)(::Dissonance::Audio::Capture::IChannelPriorityProvider*)>(&::Dissonance::RoomChannels::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805cf910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::RoomChannels.CreateChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::RoomChannel (::Dissonance::RoomChannels::*)(uint16_t, ::Dissonance::RoomName, ::Dissonance::ChannelProperties*)>(&::Dissonance::RoomChannels::CreateChannel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805cf8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::RoomChannels*>(),
                    {::i2c::class_of<::Dissonance::RoomChannels*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::RoomChannels::_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::RoomChannels*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priorityProvider);
}
inline ::Dissonance::RoomChannel Dissonance::RoomChannels::CreateChannel(uint16_t  subscriptionId, ::Dissonance::RoomName  channelId, ::Dissonance::ChannelProperties*  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::RoomChannels*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomChannel>(this, ___internal_method, subscriptionId, channelId, properties);
}
inline ::Dissonance::RoomChannels* Dissonance::RoomChannels::New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::RoomChannels*>(priorityProvider));
}
// Ctor Parameters []
constexpr ::Dissonance::RoomChannels::RoomChannels()   {
}
