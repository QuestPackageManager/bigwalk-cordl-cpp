#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/AndroidFileIOHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__AndroidFileIOHelper_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper.FileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::FileExists)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805348e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper.ReadAllText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::ReadAllText)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180534c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper.ProcessRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::UnityEngine::Networking::UnityWebRequest*)>(&::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::ProcessRequest)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180534a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {"ProcessRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::*)()>(&::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::FileExists(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {"FileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filePath);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::ReadAllText(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {"ReadAllText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filePath);
}
inline ::StringW PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::ProcessRequest(::StringW  filePath, ::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {"ProcessRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filePath, request);
}
inline void PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper* PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::AndroidFileIOHelper::AndroidFileIOHelper()   {
}
