#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/GuidConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__GuidConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::GuidConverter.WriteJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::GuidConverter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::PlayEveryWare::EpicOnlineServices::GuidConverter::WriteJson)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180540920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::GuidConverter.ReadJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayEveryWare::EpicOnlineServices::GuidConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::PlayEveryWare::EpicOnlineServices::GuidConverter::ReadJson)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180540790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::GuidConverter.CanConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::GuidConverter::*)(::System::Type*)>(&::PlayEveryWare::EpicOnlineServices::GuidConverter::CanConvert)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180540730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::GuidConverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::GuidConverter::*)()>(&::PlayEveryWare::EpicOnlineServices::GuidConverter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::GuidConverter::WriteJson(::Newtonsoft::Json::JsonWriter*  writer, ::System::Object*  value, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* PlayEveryWare::EpicOnlineServices::GuidConverter::ReadJson(::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType, ::System::Object*  existingValue, ::Newtonsoft::Json::JsonSerializer*  serializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline bool PlayEveryWare::EpicOnlineServices::GuidConverter::CanConvert(::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline void PlayEveryWare::EpicOnlineServices::GuidConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::GuidConverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::GuidConverter* PlayEveryWare::EpicOnlineServices::GuidConverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::GuidConverter*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::GuidConverter::GuidConverter()   {
}
