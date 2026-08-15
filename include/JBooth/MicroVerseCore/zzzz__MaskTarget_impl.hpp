#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MaskTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskTarget_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MaskTarget_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution::MaskTarget_Resolution(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution::MaskTarget_Resolution()   {
}
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution  JBooth::MicroVerseCore::MaskTarget_Resolution::k128{static_cast<int32_t>(0x80)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution  JBooth::MicroVerseCore::MaskTarget_Resolution::k256{static_cast<int32_t>(0x100)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution  JBooth::MicroVerseCore::MaskTarget_Resolution::k512{static_cast<int32_t>(0x200)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution  JBooth::MicroVerseCore::MaskTarget_Resolution::k1024{static_cast<int32_t>(0x400)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution  JBooth::MicroVerseCore::MaskTarget_Resolution::k2048{static_cast<int32_t>(0x800)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution  JBooth::MicroVerseCore::MaskTarget_Resolution::k4096{static_cast<int32_t>(0x1000)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat::MaskTarget_TargetFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat::MaskTarget_TargetFormat()   {
}
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat  JBooth::MicroVerseCore::MaskTarget_TargetFormat::R8{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat  JBooth::MicroVerseCore::MaskTarget_TargetFormat::RGBAColor{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat  JBooth::MicroVerseCore::MaskTarget_TargetFormat::RGBALinear{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat  JBooth::MicroVerseCore::MaskTarget_TargetFormat::SDFMask{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskTarget_TextureEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskTarget_TextureEntry::*)()>(&::JBooth::MicroVerseCore::MaskTarget_TextureEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TerrainData>& JBooth::MicroVerseCore::MaskTarget_TextureEntry::__cordl_internal_get_terrainData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainData;
}
constexpr ::UnityW<::UnityEngine::TerrainData> const& JBooth::MicroVerseCore::MaskTarget_TextureEntry::__cordl_internal_get_terrainData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainData;
}
constexpr void JBooth::MicroVerseCore::MaskTarget_TextureEntry::__cordl_internal_set_terrainData(::UnityW<::UnityEngine::TerrainData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainData = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::MaskTarget_TextureEntry::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::MaskTarget_TextureEntry::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void JBooth::MicroVerseCore::MaskTarget_TextureEntry::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
inline void JBooth::MicroVerseCore::MaskTarget_TextureEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MaskTarget_TextureEntry* JBooth::MicroVerseCore::MaskTarget_TextureEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskTarget_TextureEntry::MaskTarget_TextureEntry()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskTarget.RenderToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskTarget::*)(::UnityEngine::Terrain*, ::UnityEngine::Material*)>(&::JBooth::MicroVerseCore::MaskTarget::RenderToBuffer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181408870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"RenderToBuffer", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskTarget.ConvertToSDF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::JBooth::MicroVerseCore::MaskTarget::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::MaskTarget::ConvertToSDF)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181408560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"ConvertToSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskTarget.SetRenderBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskTarget::*)(::UnityEngine::Terrain*, ::UnityEngine::RenderTexture*)>(&::JBooth::MicroVerseCore::MaskTarget::SetRenderBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181408960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"SetRenderBuffer", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskTarget.InitTempData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskTarget::*)(::ArrayW<::UnityEngine::Terrain*>)>(&::JBooth::MicroVerseCore::MaskTarget::InitTempData)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181408660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"InitTempData", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MaskTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MaskTarget::*)()>(&::JBooth::MicroVerseCore::MaskTarget::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181408990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr ::JBooth::MicroVerseCore::MaskTarget_Resolution const& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr void JBooth::MicroVerseCore::MaskTarget::__cordl_internal_set_resolution(::JBooth::MicroVerseCore::MaskTarget_Resolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolution = value;
}
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr ::JBooth::MicroVerseCore::MaskTarget_TargetFormat const& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___format;
}
constexpr void JBooth::MicroVerseCore::MaskTarget::__cordl_internal_set_format(::JBooth::MicroVerseCore::MaskTarget_TargetFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___format = value;
}
constexpr ::UnityEngine::Color& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_clearColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearColor;
}
constexpr ::UnityEngine::Color const& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_clearColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearColor;
}
constexpr void JBooth::MicroVerseCore::MaskTarget::__cordl_internal_set_clearColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearColor = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>*& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_textures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>* const& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_textures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr void JBooth::MicroVerseCore::MaskTarget::__cordl_internal_set_textures(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::MaskTarget_TextureEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textures = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_tempRenderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRenderData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>* const& JBooth::MicroVerseCore::MaskTarget::__cordl_internal_get_tempRenderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRenderData;
}
constexpr void JBooth::MicroVerseCore::MaskTarget::__cordl_internal_set_tempRenderData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRenderData = value;
}
inline void JBooth::MicroVerseCore::MaskTarget::RenderToBuffer(::UnityEngine::Terrain*  t, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"RenderToBuffer", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, mat);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MaskTarget::ConvertToSDF(::UnityEngine::Terrain*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"ConvertToSDF", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, t);
}
inline void JBooth::MicroVerseCore::MaskTarget::SetRenderBuffer(::UnityEngine::Terrain*  t, ::UnityEngine::RenderTexture*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"SetRenderBuffer", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, tex);
}
inline void JBooth::MicroVerseCore::MaskTarget::InitTempData(::ArrayW<::UnityEngine::Terrain*>  terrains)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {"InitTempData", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Terrain*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrains);
}
inline void JBooth::MicroVerseCore::MaskTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MaskTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MaskTarget* JBooth::MicroVerseCore::MaskTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MaskTarget*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MaskTarget::MaskTarget()   {
}
