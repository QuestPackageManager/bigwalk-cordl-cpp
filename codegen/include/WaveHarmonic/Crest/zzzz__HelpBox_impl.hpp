#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/HelpBox.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__HelpBox_def.hpp"
#include "WaveHarmonic/Crest/zzzz__HelpBox_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::HelpBox_MessageType::HelpBox_MessageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::HelpBox_MessageType::HelpBox_MessageType()   {
}
constexpr ::WaveHarmonic::Crest::HelpBox_MessageType  WaveHarmonic::Crest::HelpBox_MessageType::Info{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::HelpBox_MessageType  WaveHarmonic::Crest::HelpBox_MessageType::Warning{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::HelpBox_MessageType  WaveHarmonic::Crest::HelpBox_MessageType::Error{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::HelpBox_Visibility::HelpBox_Visibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::HelpBox_Visibility::HelpBox_Visibility()   {
}
constexpr ::WaveHarmonic::Crest::HelpBox_Visibility  WaveHarmonic::Crest::HelpBox_Visibility::Always{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::HelpBox_Visibility  WaveHarmonic::Crest::HelpBox_Visibility::PropertyEnabled{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::HelpBox_Visibility  WaveHarmonic::Crest::HelpBox_Visibility::PropertyDisabled{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::WaveHarmonic::Crest::HelpBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::HelpBox::*)(::StringW, ::WaveHarmonic::Crest::HelpBox_MessageType, ::WaveHarmonic::Crest::HelpBox_Visibility)>(&::WaveHarmonic::Crest::HelpBox::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::HelpBox*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::HelpBox_MessageType>(), ::i2c::type_of<::WaveHarmonic::Crest::HelpBox_Visibility>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::HelpBox::_ctor(::StringW  message, ::WaveHarmonic::Crest::HelpBox_MessageType  messageType, ::WaveHarmonic::Crest::HelpBox_Visibility  visibility)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::HelpBox*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::HelpBox_MessageType>(), ::i2c::type_of<::WaveHarmonic::Crest::HelpBox_Visibility>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, messageType, visibility);
}
inline ::WaveHarmonic::Crest::HelpBox* WaveHarmonic::Crest::HelpBox::New_ctor(::StringW  message, ::WaveHarmonic::Crest::HelpBox_MessageType  messageType, ::WaveHarmonic::Crest::HelpBox_Visibility  visibility)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::HelpBox*>(message, messageType, visibility));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::HelpBox::HelpBox()   {
}
