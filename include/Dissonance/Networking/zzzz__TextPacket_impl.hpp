#pragma once
// IWYU pragma private; include "Dissonance/Networking/TextPacket.hpp"
#include "Dissonance/zzzz__ChannelType_impl.hpp"
#include "Dissonance/Networking/zzzz__TextPacket_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::TextPacket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::TextPacket::*)(uint16_t, ::Dissonance::ChannelType, uint16_t, ::StringW)>(&::Dissonance::Networking::TextPacket::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805eb8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TextPacket>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::TextPacket::_ctor(uint16_t  sender, ::Dissonance::ChannelType  recipientType, uint16_t  recipient, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::TextPacket>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender, recipientType, recipient, text);
}
// Ctor Parameters [CppParam { name: "Sender", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RecipientType", ty: "::Dissonance::ChannelType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Recipient", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::TextPacket::TextPacket(uint16_t  Sender, ::Dissonance::ChannelType  RecipientType, uint16_t  Recipient, ::StringW  Text) noexcept  {
this->Sender = Sender;
this->RecipientType = RecipientType;
this->Recipient = Recipient;
this->Text = Text;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::TextPacket::TextPacket()   {
}
