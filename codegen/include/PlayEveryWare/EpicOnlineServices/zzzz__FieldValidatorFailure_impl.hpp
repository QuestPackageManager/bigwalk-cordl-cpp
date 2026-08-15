#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FieldValidatorFailure.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorFailure_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure::*)(::System::Reflection::FieldInfo*, ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*, ::StringW)>(&::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18053eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>(),
                        {".ctor", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::FieldValidatorFailure::_ctor(::System::Reflection::FieldInfo*  failingField, ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*  failingAttribute, ::StringW  failingMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>(),
                        {".ctor", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failingField, failingAttribute, failingMessage);
}
// Ctor Parameters [CppParam { name: "FieldInfo", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FailingAttribute", ty: "::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FailingMessage", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure::FieldValidatorFailure(::System::Reflection::FieldInfo*  FieldInfo, ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*  FailingAttribute, ::StringW  FailingMessage) noexcept  {
this->FieldInfo = FieldInfo;
this->FailingAttribute = FailingAttribute;
this->FailingMessage = FailingMessage;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure::FieldValidatorFailure()   {
}
