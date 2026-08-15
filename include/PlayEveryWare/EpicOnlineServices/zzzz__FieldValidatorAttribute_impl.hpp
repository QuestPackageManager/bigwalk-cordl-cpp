#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FieldValidatorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute.FieldValueIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::*)(::System::Object*, ::by_ref<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::FieldValueIsValid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toValidate, configurationProblemMessage);
}
inline void PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute* PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::FieldValidatorAttribute::FieldValidatorAttribute()   {
}
