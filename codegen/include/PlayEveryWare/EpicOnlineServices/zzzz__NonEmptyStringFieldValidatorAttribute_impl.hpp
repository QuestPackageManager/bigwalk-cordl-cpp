#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/NonEmptyStringFieldValidatorAttribute.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__NonEmptyStringFieldValidatorAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute.FieldValueIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::*)(::System::Object*, ::by_ref<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::FieldValueIsValid)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180541940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toValidate, configurationProblemMessage);
}
inline void PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute* PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::NonEmptyStringFieldValidatorAttribute::NonEmptyStringFieldValidatorAttribute()   {
}
