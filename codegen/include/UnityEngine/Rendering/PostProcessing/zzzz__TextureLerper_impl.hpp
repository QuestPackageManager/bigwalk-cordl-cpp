#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureLerper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureLerper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessResources_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PropertySheetFactory_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::TextureLerper* (*)()>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::get_instance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181fd3910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TextureLerper::*)()>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181fd3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper.BeginFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TextureLerper::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::BeginFrame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181fd27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"BeginFrame", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper.EndFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TextureLerper::*)()>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::EndFrame)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fd2900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"EndFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::UnityEngine::Rendering::PostProcessing::TextureLerper::*)(::UnityEngine::RenderTextureFormat, int32_t, int32_t, int32_t, bool, bool)>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::Get)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181fd29f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::PostProcessing::TextureLerper::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*, float_t)>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::Lerp)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x181fd2c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::Rendering::PostProcessing::TextureLerper::*)(::UnityEngine::Texture*, ::UnityEngine::Color, float_t)>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::Lerp)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x181fd32d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureLerper.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::TextureLerper::*)()>(&::UnityEngine::Rendering::PostProcessing::TextureLerper::Clear)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181fd27f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Command()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Command;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Command() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Command;
}
constexpr void UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_set_m_Command(::UnityEngine::Rendering::CommandBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Command = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_PropertySheets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheets;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* const& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_PropertySheets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertySheets;
}
constexpr void UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_set_m_PropertySheets(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertySheets = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Resources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Resources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Resources;
}
constexpr void UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Resources = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Recycled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recycled;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Recycled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Recycled;
}
constexpr void UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_set_m_Recycled(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Recycled = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Actives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actives;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_get_m_Actives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actives;
}
constexpr void UnityEngine::Rendering::PostProcessing::TextureLerper::__cordl_internal_set_m_Actives(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Actives = value;
}
inline void UnityEngine::Rendering::PostProcessing::TextureLerper::setStaticF_m_Instance(::UnityEngine::Rendering::PostProcessing::TextureLerper*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::PostProcessing::TextureLerper*, "m_Instance", ::UnityEngine::Rendering::PostProcessing::TextureLerper*>(std::forward<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(value));
}
inline ::UnityEngine::Rendering::PostProcessing::TextureLerper* UnityEngine::Rendering::PostProcessing::TextureLerper::getStaticF_m_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::PostProcessing::TextureLerper*, "m_Instance", ::UnityEngine::Rendering::PostProcessing::TextureLerper*>();
}
inline ::UnityEngine::Rendering::PostProcessing::TextureLerper* UnityEngine::Rendering::PostProcessing::TextureLerper::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::TextureLerper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::TextureLerper::BeginFrame(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"BeginFrame", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::TextureLerper::EndFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"EndFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::PostProcessing::TextureLerper::Get(::UnityEngine::RenderTextureFormat  format, int32_t  w, int32_t  h, int32_t  d, bool  enableRandomWrite, bool  force3D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, format, w, h, d, enableRandomWrite, force3D);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::PostProcessing::TextureLerper::Lerp(::UnityEngine::Texture*  from, ::UnityEngine::Texture*  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method, from, to, t);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::Rendering::PostProcessing::TextureLerper::Lerp(::UnityEngine::Texture*  from, ::UnityEngine::Color  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Lerp", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method, from, to, t);
}
inline void UnityEngine::Rendering::PostProcessing::TextureLerper::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureLerper*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::TextureLerper* UnityEngine::Rendering::PostProcessing::TextureLerper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::TextureLerper*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TextureLerper::TextureLerper()   {
}
