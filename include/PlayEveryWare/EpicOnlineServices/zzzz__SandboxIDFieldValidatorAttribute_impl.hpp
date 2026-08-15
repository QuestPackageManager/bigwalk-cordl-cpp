#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/SandboxIDFieldValidatorAttribute.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__SandboxIDFieldValidatorAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute.FieldValueIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::*)(::System::Object*, ::by_ref<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::FieldValueIsValid)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180546410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toValidate, configurationProblemMessage);
}
inline void PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute* PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::SandboxIDFieldValidatorAttribute::SandboxIDFieldValidatorAttribute()   {
}
