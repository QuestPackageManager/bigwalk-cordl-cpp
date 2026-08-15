#pragma once
// IWYU pragma private; include "Dissonance/PlayerChannels.hpp"
#include "Dissonance/zzzz__Channels_2_impl.hpp"
#include "Dissonance/zzzz__PlayerChannel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IChannelPriorityProvider_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__PlayerChannel_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Dissonance::PlayerChannels___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannels___c::*)()>(&::Dissonance::PlayerChannels___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannels___c.__ctor_b__0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannels___c::*)(::StringW, ::Dissonance::ChannelProperties*)>(&::Dissonance::PlayerChannels___c::__ctor_b__0_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels___c*>(),
                        {"<.ctor>b__0_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannels___c.__ctor_b__0_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannels___c::*)(::StringW, ::Dissonance::ChannelProperties*)>(&::Dissonance::PlayerChannels___c::__ctor_b__0_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels___c*>(),
                        {"<.ctor>b__0_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::PlayerChannels___c::setStaticF___9(::Dissonance::PlayerChannels___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::PlayerChannels___c*, "<>9", ::Dissonance::PlayerChannels___c*>(std::forward<::Dissonance::PlayerChannels___c*>(value));
}
inline ::Dissonance::PlayerChannels___c* Dissonance::PlayerChannels___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::PlayerChannels___c*, "<>9", ::Dissonance::PlayerChannels___c*>();
}
inline void Dissonance::PlayerChannels___c::setStaticF___9__0_0(::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*, "<>9__0_0", ::Dissonance::PlayerChannels___c*>(std::forward<::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*>(value));
}
inline ::System::Action_2<::StringW,::Dissonance::ChannelProperties*>* Dissonance::PlayerChannels___c::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*, "<>9__0_0", ::Dissonance::PlayerChannels___c*>();
}
inline void Dissonance::PlayerChannels___c::setStaticF___9__0_1(::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*, "<>9__0_1", ::Dissonance::PlayerChannels___c*>(std::forward<::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*>(value));
}
inline ::System::Action_2<::StringW,::Dissonance::ChannelProperties*>* Dissonance::PlayerChannels___c::getStaticF___9__0_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::Dissonance::ChannelProperties*>*, "<>9__0_1", ::Dissonance::PlayerChannels___c*>();
}
inline void Dissonance::PlayerChannels___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::PlayerChannels___c::__ctor_b__0_0(::StringW  id, ::Dissonance::ChannelProperties*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels___c*>(),
                        {"<.ctor>b__0_0", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, _);
}
inline void Dissonance::PlayerChannels___c::__ctor_b__0_1(::StringW  id, ::Dissonance::ChannelProperties*  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels___c*>(),
                        {"<.ctor>b__0_1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, _);
}
inline ::Dissonance::PlayerChannels___c* Dissonance::PlayerChannels___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::PlayerChannels___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::PlayerChannels___c::PlayerChannels___c()   {
}
//  Writing Method size for method: ::Dissonance::PlayerChannels._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::PlayerChannels::*)(::Dissonance::Audio::Capture::IChannelPriorityProvider*)>(&::Dissonance::PlayerChannels::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805cd7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::PlayerChannels.CreateChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::PlayerChannel (::Dissonance::PlayerChannels::*)(uint16_t, ::StringW, ::Dissonance::ChannelProperties*)>(&::Dissonance::PlayerChannels::CreateChannel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805cd740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::PlayerChannels*>(),
                    {::i2c::class_of<::Dissonance::PlayerChannels*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::PlayerChannels::_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::PlayerChannels*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priorityProvider);
}
inline ::Dissonance::PlayerChannel Dissonance::PlayerChannels::CreateChannel(uint16_t  subscriptionId, ::StringW  channelId, ::Dissonance::ChannelProperties*  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::PlayerChannels*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::PlayerChannel>(this, ___internal_method, subscriptionId, channelId, properties);
}
inline ::Dissonance::PlayerChannels* Dissonance::PlayerChannels::New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::PlayerChannels*>(priorityProvider));
}
// Ctor Parameters []
constexpr ::Dissonance::PlayerChannels::PlayerChannels()   {
}
