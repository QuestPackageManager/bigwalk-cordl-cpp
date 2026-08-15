#pragma once
// IWYU pragma private; include "Mirror/NetworkDiagnostics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkDiagnostics_def.hpp"
#include "Mirror/zzzz__NetworkDiagnostics_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkDiagnostics_MessageInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkDiagnostics_MessageInfo::*)(::Mirror::NetworkMessage*, int32_t, int32_t, int32_t)>(&::Mirror::NetworkDiagnostics_MessageInfo::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181537600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics_MessageInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::NetworkMessage*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkDiagnostics_MessageInfo::_ctor(::Mirror::NetworkMessage*  message, int32_t  channel, int32_t  bytes, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics_MessageInfo>(),
                        {".ctor", {}, {::i2c::type_of<::Mirror::NetworkMessage*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, message, channel, bytes, count);
}
// Ctor Parameters [CppParam { name: "message", ty: "::Mirror::NetworkMessage*", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkDiagnostics_MessageInfo::NetworkDiagnostics_MessageInfo(::Mirror::NetworkMessage*  message, int32_t  channel, int32_t  bytes, int32_t  count) noexcept  {
this->message = message;
this->channel = channel;
this->bytes = bytes;
this->count = count;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkDiagnostics_MessageInfo::NetworkDiagnostics_MessageInfo()   {
}
//  Writing Method size for method: ::Mirror::NetworkDiagnostics.add_OutMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*)>(&::Mirror::NetworkDiagnostics::add_OutMessageEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181542d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"add_OutMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkDiagnostics.remove_OutMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*)>(&::Mirror::NetworkDiagnostics::remove_OutMessageEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181542e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"remove_OutMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkDiagnostics.add_InMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*)>(&::Mirror::NetworkDiagnostics::add_InMessageEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181542c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"add_InMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkDiagnostics.remove_InMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*)>(&::Mirror::NetworkDiagnostics::remove_InMessageEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181542db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"remove_InMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkDiagnostics.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Mirror::NetworkDiagnostics::ResetStatics)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181542be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkDiagnostics::setStaticF_OutMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*, "OutMessageEvent", ::Mirror::NetworkDiagnostics*>(std::forward<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>(value));
}
inline ::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>* Mirror::NetworkDiagnostics::getStaticF_OutMessageEvent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*, "OutMessageEvent", ::Mirror::NetworkDiagnostics*>();
}
inline void Mirror::NetworkDiagnostics::setStaticF_InMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*, "InMessageEvent", ::Mirror::NetworkDiagnostics*>(std::forward<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>(value));
}
inline ::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>* Mirror::NetworkDiagnostics::getStaticF_InMessageEvent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*, "InMessageEvent", ::Mirror::NetworkDiagnostics*>();
}
inline void Mirror::NetworkDiagnostics::add_OutMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"add_OutMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::NetworkDiagnostics::remove_OutMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"remove_OutMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::NetworkDiagnostics::add_InMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"add_InMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::NetworkDiagnostics::remove_InMessageEvent(::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"remove_InMessageEvent", {}, {::i2c::type_of<::System::Action_1<::Mirror::NetworkDiagnostics_MessageInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Mirror::NetworkDiagnostics::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void Mirror::NetworkDiagnostics::OnSend(T  message, int32_t  channel, int32_t  bytes, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                    {"OnSend", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, channel, bytes, count);
}
template<typename T>
inline void Mirror::NetworkDiagnostics::OnReceive(T  message, int32_t  channel, int32_t  bytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkDiagnostics*>(),
                    {"OnReceive", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, channel, bytes);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkDiagnostics::NetworkDiagnostics()   {
}
