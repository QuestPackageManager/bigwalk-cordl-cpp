#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/GUIDFieldValidatorAttribute.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorAttribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__GUIDFieldValidatorAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute.FieldValueIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::*)(::System::Object*, ::by_ref<::StringW>)>(&::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::FieldValueIsValid)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180540660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::FieldValueIsValid(::System::Object*  toValidate, ::by_ref<::StringW>  configurationProblemMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toValidate, configurationProblemMessage);
}
inline void PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute* PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::GUIDFieldValidatorAttribute::GUIDFieldValidatorAttribute()   {
}
