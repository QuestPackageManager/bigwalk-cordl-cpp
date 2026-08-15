#pragma once
// IWYU pragma private; include "Dissonance/Networking/TextMessage.hpp"
#include "Dissonance/zzzz__ChannelType_impl.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::TextMessage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::TextMessage::*)(::StringW, ::Dissonance::ChannelType, ::StringW, ::StringW)>(&::Dissonance::Networking::TextMessage::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805eb730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TextMessage>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::TextMessage::_ctor(::StringW  sender, ::Dissonance::ChannelType  recipientType, ::StringW  recipient, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TextMessage>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender, recipientType, recipient, message);
}
// Ctor Parameters [CppParam { name: "Sender", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "RecipientType", ty: "::Dissonance::ChannelType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Recipient", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::TextMessage::TextMessage(::StringW  Sender, ::Dissonance::ChannelType  RecipientType, ::StringW  Recipient, ::StringW  Message) noexcept  {
this->Sender = Sender;
this->RecipientType = RecipientType;
this->Recipient = Recipient;
this->Message = Message;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::TextMessage::TextMessage()   {
}
