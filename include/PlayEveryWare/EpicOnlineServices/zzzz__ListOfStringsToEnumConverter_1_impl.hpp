#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ListOfStringsToEnumConverter_1.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ListOfStringsToEnumConverter_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JArray_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename TEnum>
constexpr ::System::Type*& PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::__cordl_internal_get__targetType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetType;
}
template<typename TEnum>
constexpr ::System::Type* const& PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::__cordl_internal_get__targetType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetType;
}
template<typename TEnum>
constexpr void PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::__cordl_internal_set__targetType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetType = value;
}
template<typename TEnum>
inline bool PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
template<typename TEnum>
inline ::System::Object* PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
template<typename TEnum>
inline TEnum PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::FromStringArray(::Newtonsoft::Json::Linq::JArray*  array)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<TEnum>(this, ___internal_method, array);
}
template<typename TEnum>
inline TEnum PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::FromNumberValue(::Newtonsoft::Json::Linq::JToken*  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>(),
                        {"FromNumberValue", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JToken*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEnum>(this, ___internal_method, token);
}
template<typename TEnum>
inline TEnum PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::FromStringArrayWithCustomMapping(::Newtonsoft::Json::Linq::JArray*  array, ::System::Collections::Generic::IDictionary_2<::StringW,TEnum>*  customMappings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>(),
                        {"FromStringArrayWithCustomMapping", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JArray*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,TEnum>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEnum>(this, ___internal_method, array, customMappings);
}
template<typename TEnum>
inline void PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
template<typename TEnum>
inline void PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TEnum>
inline ::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>* PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>*>());
}
// Ctor Parameters []
template<typename TEnum>
constexpr ::PlayEveryWare::EpicOnlineServices::ListOfStringsToEnumConverter_1<TEnum>::ListOfStringsToEnumConverter_1()   {
}
