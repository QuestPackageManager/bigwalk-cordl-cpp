#pragma once
// IWYU pragma private; include "Rewired/Data/EditorPlatformData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__TextAsset_impl.hpp"
#include "Rewired/Data/zzzz__EditorPlatformData_def.hpp"
#include "Rewired/Data/zzzz__EditorPlatformData_def.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Rewired::Data::EditorPlatformData_Platform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::EditorPlatformData_Platform::*)()>(&::Rewired::Data::EditorPlatformData_Platform::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData_Platform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>>& Rewired::Data::EditorPlatformData_Platform::__cordl_internal_get_libraries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___libraries;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>> const& Rewired::Data::EditorPlatformData_Platform::__cordl_internal_get_libraries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___libraries;
}
constexpr void Rewired::Data::EditorPlatformData_Platform::__cordl_internal_set_libraries(::ArrayW<::UnityW<::UnityEngine::TextAsset>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___libraries = value;
}
inline void Rewired::Data::EditorPlatformData_Platform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData_Platform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::EditorPlatformData_Platform* Rewired::Data::EditorPlatformData_Platform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::EditorPlatformData_Platform*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::EditorPlatformData_Platform::EditorPlatformData_Platform()   {
}
//  Writing Method size for method: ::Rewired::Data::EditorPlatformData.GetLibraries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::TextAsset>> (::Rewired::Data::EditorPlatformData::*)(::Rewired::Platforms::Platform, ::Rewired::Platforms::WebplayerPlatform, ::Rewired::Platforms::EditorPlatform)>(&::Rewired::Data::EditorPlatformData::GetLibraries)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18188db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData*>(),
                        {"GetLibraries", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::EditorPlatformData.GetPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::EditorPlatformData_Platform* (::Rewired::Data::EditorPlatformData::*)(::Rewired::Platforms::Platform, ::Rewired::Platforms::WebplayerPlatform, ::Rewired::Platforms::EditorPlatform)>(&::Rewired::Data::EditorPlatformData::GetPlatform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18188dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData*>(),
                        {"GetPlatform", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::EditorPlatformData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::EditorPlatformData::*)()>(&::Rewired::Data::EditorPlatformData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Data::EditorPlatformData_Platform*& Rewired::Data::EditorPlatformData::__cordl_internal_get_windowsStandalone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsStandalone;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform* const& Rewired::Data::EditorPlatformData::__cordl_internal_get_windowsStandalone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsStandalone;
}
constexpr void Rewired::Data::EditorPlatformData::__cordl_internal_set_windowsStandalone(::Rewired::Data::EditorPlatformData_Platform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowsStandalone = value;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform*& Rewired::Data::EditorPlatformData::__cordl_internal_get_windowsStore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsStore;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform* const& Rewired::Data::EditorPlatformData::__cordl_internal_get_windowsStore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsStore;
}
constexpr void Rewired::Data::EditorPlatformData::__cordl_internal_set_windowsStore(::Rewired::Data::EditorPlatformData_Platform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowsStore = value;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform*& Rewired::Data::EditorPlatformData::__cordl_internal_get_osxStandalone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osxStandalone;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform* const& Rewired::Data::EditorPlatformData::__cordl_internal_get_osxStandalone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osxStandalone;
}
constexpr void Rewired::Data::EditorPlatformData::__cordl_internal_set_osxStandalone(::Rewired::Data::EditorPlatformData_Platform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osxStandalone = value;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform*& Rewired::Data::EditorPlatformData::__cordl_internal_get_linuxStandalone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linuxStandalone;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform* const& Rewired::Data::EditorPlatformData::__cordl_internal_get_linuxStandalone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linuxStandalone;
}
constexpr void Rewired::Data::EditorPlatformData::__cordl_internal_set_linuxStandalone(::Rewired::Data::EditorPlatformData_Platform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linuxStandalone = value;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform*& Rewired::Data::EditorPlatformData::__cordl_internal_get_webplayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webplayer;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform* const& Rewired::Data::EditorPlatformData::__cordl_internal_get_webplayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webplayer;
}
constexpr void Rewired::Data::EditorPlatformData::__cordl_internal_set_webplayer(::Rewired::Data::EditorPlatformData_Platform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webplayer = value;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform*& Rewired::Data::EditorPlatformData::__cordl_internal_get_fallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallback;
}
constexpr ::Rewired::Data::EditorPlatformData_Platform* const& Rewired::Data::EditorPlatformData::__cordl_internal_get_fallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallback;
}
constexpr void Rewired::Data::EditorPlatformData::__cordl_internal_set_fallback(::Rewired::Data::EditorPlatformData_Platform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallback = value;
}
inline ::ArrayW<::UnityW<::UnityEngine::TextAsset>> Rewired::Data::EditorPlatformData::GetLibraries(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, ::Rewired::Platforms::EditorPlatform  editorPlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData*>(),
                        {"GetLibraries", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::TextAsset>>>(this, ___internal_method, platform, webplayerPlatform, editorPlatform);
}
inline ::Rewired::Data::EditorPlatformData_Platform* Rewired::Data::EditorPlatformData::GetPlatform(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, ::Rewired::Platforms::EditorPlatform  editorPlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData*>(),
                        {"GetPlatform", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::EditorPlatformData_Platform*>(this, ___internal_method, platform, webplayerPlatform, editorPlatform);
}
inline void Rewired::Data::EditorPlatformData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::EditorPlatformData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::EditorPlatformData* Rewired::Data::EditorPlatformData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::EditorPlatformData*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::EditorPlatformData::EditorPlatformData()   {
}
