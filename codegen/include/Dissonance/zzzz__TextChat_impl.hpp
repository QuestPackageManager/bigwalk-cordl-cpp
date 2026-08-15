#pragma once
// IWYU pragma private; include "Dissonance/TextChat.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__TextChat_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Dissonance::TextChat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TextChat::*)(::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*)>(&::Dissonance::TextChat::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d1750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TextChat.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TextChat::*)(::StringW, ::StringW)>(&::Dissonance::TextChat::Send)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d1610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TextChat.Whisper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TextChat::*)(::StringW, ::StringW)>(&::Dissonance::TextChat::Whisper)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805d16b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"Whisper", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TextChat.add_MessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TextChat::*)(::System::Action_1<::Dissonance::Networking::TextMessage>*)>(&::Dissonance::TextChat::add_MessageReceived)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d1780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"add_MessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TextChat.remove_MessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TextChat::*)(::System::Action_1<::Dissonance::Networking::TextMessage>*)>(&::Dissonance::TextChat::remove_MessageReceived)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d1810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"remove_MessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::TextChat.OnMessageReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::TextChat::*)(::Dissonance::Networking::TextMessage)>(&::Dissonance::TextChat::OnMessageReceived)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d15d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*& Dissonance::TextChat::__cordl_internal_get__getNetwork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getNetwork;
}
constexpr ::System::Func_1<::Dissonance::Networking::ICommsNetwork*>* const& Dissonance::TextChat::__cordl_internal_get__getNetwork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getNetwork;
}
constexpr void Dissonance::TextChat::__cordl_internal_set__getNetwork(::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getNetwork = value;
}
constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>*& Dissonance::TextChat::__cordl_internal_get_MessageReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageReceived;
}
constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>* const& Dissonance::TextChat::__cordl_internal_get_MessageReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageReceived;
}
constexpr void Dissonance::TextChat::__cordl_internal_set_MessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessageReceived = value;
}
inline void Dissonance::TextChat::_ctor(::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  getNetwork)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, getNetwork);
}
inline void Dissonance::TextChat::Send(::StringW  roomName, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomName, message);
}
inline void Dissonance::TextChat::Whisper(::StringW  playerName, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"Whisper", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, message);
}
inline void Dissonance::TextChat::add_MessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"add_MessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::TextChat::remove_MessageReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"remove_MessageReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Dissonance::TextChat::OnMessageReceived(::Dissonance::Networking::TextMessage  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::TextChat*>(),
                        {"OnMessageReceived", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::Dissonance::TextChat* Dissonance::TextChat::New_ctor(::System::Func_1<::Dissonance::Networking::ICommsNetwork*>*  getNetwork)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::TextChat*>(getNetwork));
}
// Ctor Parameters []
constexpr ::Dissonance::TextChat::TextChat()   {
}
