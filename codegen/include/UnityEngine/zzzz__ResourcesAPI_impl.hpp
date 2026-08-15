#pragma once
// IWYU pragma private; include "UnityEngine/ResourcesAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ResourcesAPI_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.get_ActiveAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourcesAPI* (*)()>(&::UnityEngine::ResourcesAPI::get_ActiveAPI)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182278de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                        {"get_ActiveAPI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.get_overrideAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourcesAPI* (*)()>(&::UnityEngine::ResourcesAPI::get_overrideAPI)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182278e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                        {"get_overrideAPI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourcesAPI::*)()>(&::UnityEngine::ResourcesAPI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.FindObjectsOfTypeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::UnityEngine::ResourcesAPI::*)(::System::Type*)>(&::UnityEngine::ResourcesAPI::FindObjectsOfTypeAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182278d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                    {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.FindShaderByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::ResourcesAPI::*)(::StringW)>(&::UnityEngine::ResourcesAPI::FindShaderByName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182278d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                    {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::ResourcesAPI::*)(::StringW, ::System::Type*)>(&::UnityEngine::ResourcesAPI::Load)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182278d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                    {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourcesAPI.UnloadAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourcesAPI::*)(::UnityEngine::Object*)>(&::UnityEngine::ResourcesAPI::UnloadAsset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182278d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                    {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourcesAPI::setStaticF_s_DefaultAPI(::UnityEngine::ResourcesAPI*  value)  {
::cordl_internals::setStaticField<::UnityEngine::ResourcesAPI*, "s_DefaultAPI", ::UnityEngine::ResourcesAPI*>(std::forward<::UnityEngine::ResourcesAPI*>(value));
}
inline ::UnityEngine::ResourcesAPI* UnityEngine::ResourcesAPI::getStaticF_s_DefaultAPI()  {
return ::cordl_internals::getStaticField<::UnityEngine::ResourcesAPI*, "s_DefaultAPI", ::UnityEngine::ResourcesAPI*>();
}
inline void UnityEngine::ResourcesAPI::setStaticF__overrideAPI_k__BackingField(::UnityEngine::ResourcesAPI*  value)  {
::cordl_internals::setStaticField<::UnityEngine::ResourcesAPI*, "<overrideAPI>k__BackingField", ::UnityEngine::ResourcesAPI*>(std::forward<::UnityEngine::ResourcesAPI*>(value));
}
inline ::UnityEngine::ResourcesAPI* UnityEngine::ResourcesAPI::getStaticF__overrideAPI_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::ResourcesAPI*, "<overrideAPI>k__BackingField", ::UnityEngine::ResourcesAPI*>();
}
inline ::UnityEngine::ResourcesAPI* UnityEngine::ResourcesAPI::get_ActiveAPI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                        {"get_ActiveAPI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourcesAPI*>(nullptr, ___internal_method);
}
inline ::UnityEngine::ResourcesAPI* UnityEngine::ResourcesAPI::get_overrideAPI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                        {"get_overrideAPI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourcesAPI*>(nullptr, ___internal_method);
}
inline void UnityEngine::ResourcesAPI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourcesAPI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::ResourcesAPI::FindObjectsOfTypeAll(::System::Type*  systemTypeInstance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method, systemTypeInstance);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::ResourcesAPI::FindShaderByName(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method, name);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::ResourcesAPI::Load(::StringW  path, ::System::Type*  systemTypeInstance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, path, systemTypeInstance);
}
inline void UnityEngine::ResourcesAPI::UnloadAsset(::UnityEngine::Object*  assetToUnload)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ResourcesAPI*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assetToUnload);
}
inline ::UnityEngine::ResourcesAPI* UnityEngine::ResourcesAPI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourcesAPI*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourcesAPI::ResourcesAPI()   {
}
