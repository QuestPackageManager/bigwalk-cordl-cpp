#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Logging/LogMessage.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_impl.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogMessage_def.hpp"
#include "Epic/OnlineServices/Logging/zzzz__LogLevel_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessage.get_Category
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Logging::LogMessage::*)()>(&::Epic::OnlineServices::Logging::LogMessage::get_Category)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"get_Category", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessage.set_Category
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LogMessage::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Logging::LogMessage::set_Category)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"set_Category", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessage.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Logging::LogMessage::*)()>(&::Epic::OnlineServices::Logging::LogMessage::get_Message)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessage.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LogMessage::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Logging::LogMessage::set_Message)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"set_Message", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessage.get_Level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Logging::LogLevel (::Epic::OnlineServices::Logging::LogMessage::*)()>(&::Epic::OnlineServices::Logging::LogMessage::get_Level)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"get_Level", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Logging::LogMessage.set_Level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Logging::LogMessage::*)(::Epic::OnlineServices::Logging::LogLevel)>(&::Epic::OnlineServices::Logging::LogMessage::set_Level)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"set_Level", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Logging::LogMessage::get_Category()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"get_Category", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Logging::LogMessage::set_Category(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"set_Category", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Logging::LogMessage::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Logging::LogMessage::set_Message(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"set_Message", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Logging::LogLevel Epic::OnlineServices::Logging::LogMessage::get_Level()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"get_Level", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Logging::LogLevel>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Logging::LogMessage::set_Level(::Epic::OnlineServices::Logging::LogLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Logging::LogMessage>(),
                        {"set_Level", {}, {::i2c::type_of<::Epic::OnlineServices::Logging::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Category_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Message_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Level_k__BackingField", ty: "::Epic::OnlineServices::Logging::LogLevel", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Logging::LogMessage::LogMessage(::Epic::OnlineServices::Utf8String*  _Category_k__BackingField, ::Epic::OnlineServices::Utf8String*  _Message_k__BackingField, ::Epic::OnlineServices::Logging::LogLevel  _Level_k__BackingField) noexcept  {
this->_Category_k__BackingField = _Category_k__BackingField;
this->_Message_k__BackingField = _Message_k__BackingField;
this->_Level_k__BackingField = _Level_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Logging::LogMessage::LogMessage()   {
}
