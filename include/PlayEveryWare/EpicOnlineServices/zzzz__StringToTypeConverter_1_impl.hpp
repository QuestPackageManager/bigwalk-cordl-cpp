#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/StringToTypeConverter_1.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__StringToTypeConverter_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
constexpr ::System::Type*& PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::__cordl_internal_get__targetType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetType;
}
template<typename T>
constexpr ::System::Type* const& PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::__cordl_internal_get__targetType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetType;
}
template<typename T>
constexpr void PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::__cordl_internal_set__targetType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetType = value;
}
template<typename T>
constexpr ::System::Type*& PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::__cordl_internal_get__underlyingType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____underlyingType;
}
template<typename T>
constexpr ::System::Type* const& PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::__cordl_internal_get__underlyingType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____underlyingType;
}
template<typename T>
constexpr void PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::__cordl_internal_set__underlyingType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____underlyingType = value;
}
template<typename T>
inline bool PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template<typename T>
inline ::System::Object* PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template<typename T>
inline ::System::Object* PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::ConvertToken(::Newtonsoft::Json::Linq::JToken*  token, ::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>*>(),
                        {"ConvertToken", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, token, targetType);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>* PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::PlayEveryWare::EpicOnlineServices::StringToTypeConverter_1<T>::StringToTypeConverter_1()   {
}
