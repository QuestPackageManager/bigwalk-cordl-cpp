#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureResource.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureUVOriginSelection_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureResource_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::GetName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18207b640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource.GetDescHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::GetDescHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18207b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource.CreateGraphicsResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::CreateGraphicsResource)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18207b3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource.UpdateGraphicsResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::UpdateGraphicsResource)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18207b800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource.ReleaseGraphicsResource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::ReleaseGraphicsResource)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18207b7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource.LogCreation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*)>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::LogCreation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18207b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource.LogRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*)>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::LogRelease)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18207b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::TextureResource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::TextureResource::*)()>(&::UnityEngine::Rendering::RenderGraphModule::TextureResource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection& UnityEngine::Rendering::RenderGraphModule::TextureResource::__cordl_internal_get_textureUVOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureUVOrigin;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection const& UnityEngine::Rendering::RenderGraphModule::TextureResource::__cordl_internal_get_textureUVOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureUVOrigin;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::TextureResource::__cordl_internal_set_textureUVOrigin(::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureUVOrigin = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureResource::setStaticF_m_TextureCreationIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "m_TextureCreationIndex", ::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::TextureResource::getStaticF_m_TextureCreationIndex()  {
return ::cordl_internals::getStaticField<int32_t, "m_TextureCreationIndex", ::UnityEngine::Rendering::RenderGraphModule::TextureResource*>();
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::TextureResource::GetName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::RenderGraphModule::TextureResource::GetDescHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureResource::CreateGraphicsResource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureResource::UpdateGraphicsResource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureResource::ReleaseGraphicsResource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureResource::LogCreation(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*  logger)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureResource::LogRelease(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*  logger)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline void UnityEngine::Rendering::RenderGraphModule::TextureResource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* UnityEngine::Rendering::RenderGraphModule::TextureResource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::TextureResource*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureResource::TextureResource()   {
}
