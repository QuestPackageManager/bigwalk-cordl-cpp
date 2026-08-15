#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/FieldValidator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidator_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__FieldValidatorFailure_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidator.GetFailingValidatorAttributeOnObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* (*)(::System::Reflection::FieldInfo*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::FieldValidator::GetFailingValidatorAttributeOnObject)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18053f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"GetFailingValidatorAttributeOnObject", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidator.GetFailingValidatorAttributeOnField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* (*)(::System::Reflection::FieldInfo*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::FieldValidator::GetFailingValidatorAttributeOnField)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18053f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"GetFailingValidatorAttributeOnField", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidator.GetFailingValidatorAttributeOnClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* (*)(::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::FieldValidator::GetFailingValidatorAttributeOnClass)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18053ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"GetFailingValidatorAttributeOnClass", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidator.TryGetFailingValidatorAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::by_ref<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>)>(&::PlayEveryWare::EpicOnlineServices::FieldValidator::TryGetFailingValidatorAttributes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18053f530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"TryGetFailingValidatorAttributes", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::FieldValidator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::FieldValidator::*)()>(&::PlayEveryWare::EpicOnlineServices::FieldValidator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* PlayEveryWare::EpicOnlineServices::FieldValidator::GetFailingValidatorAttributeOnObject(::System::Reflection::FieldInfo*  fieldInfo, ::System::Object*  singularValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"GetFailingValidatorAttributeOnObject", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>(nullptr, ___internal_method, fieldInfo, singularValue);
}
inline ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* PlayEveryWare::EpicOnlineServices::FieldValidator::GetFailingValidatorAttributeOnField(::System::Reflection::FieldInfo*  fieldInfo, ::System::Object*  fieldValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"GetFailingValidatorAttributeOnField", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>(nullptr, ___internal_method, fieldInfo, fieldValue);
}
inline ::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>* PlayEveryWare::EpicOnlineServices::FieldValidator::GetFailingValidatorAttributeOnClass(::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"GetFailingValidatorAttributeOnClass", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>(nullptr, ___internal_method, target);
}
inline bool PlayEveryWare::EpicOnlineServices::FieldValidator::TryGetFailingValidatorAttributes(::System::Object*  target, ::by_ref<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>  failingValidatorAttributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {"TryGetFailingValidatorAttributes", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::PlayEveryWare::EpicOnlineServices::FieldValidatorFailure>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, target, failingValidatorAttributes);
}
inline void PlayEveryWare::EpicOnlineServices::FieldValidator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::FieldValidator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::FieldValidator* PlayEveryWare::EpicOnlineServices::FieldValidator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::FieldValidator*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::FieldValidator::FieldValidator()   {
}
