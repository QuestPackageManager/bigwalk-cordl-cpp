#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/Utility/JsonUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/Utility/zzzz__JsonUtility_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, bool)>(&::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::ToJson)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180540ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::setStaticF_s_serializerSettings(::Newtonsoft::Json::JsonSerializerSettings*  value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "s_serializerSettings", ::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>(std::forward<::Newtonsoft::Json::JsonSerializerSettings*>(value));
}
inline ::Newtonsoft::Json::JsonSerializerSettings* PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::getStaticF_s_serializerSettings()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::JsonSerializerSettings*, "s_serializerSettings", ::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>();
}
template<typename T>
inline bool PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::TryFromJson(::StringW  json, ::by_ref<T>  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>(),
                    {"TryFromJson", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, json, obj);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::ToJson(::System::Object*  obj, bool  pretty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, pretty);
}
template<typename T>
inline T PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::FromJson(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>(),
                    {"FromJson", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, json);
}
template<typename T>
inline T PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::FromJsonFile(::StringW  filepath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>(),
                    {"FromJsonFile", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, filepath);
}
template<typename T>
inline void PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::FromJsonOverwrite(::StringW  json, T  obj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility*>(),
                    {"FromJsonOverwrite", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json, obj);
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::Utility::JsonUtility::JsonUtility()   {
}
