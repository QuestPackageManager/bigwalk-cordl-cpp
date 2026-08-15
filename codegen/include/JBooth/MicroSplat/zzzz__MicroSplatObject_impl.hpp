#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_def.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatKeywords_def.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatObject_def.hpp"
#include "JBooth/MicroSplat/zzzz__MicroSplatPropData_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "heightMap", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normalMap", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "heightMapScale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor::MicroSplatObject_TerrainDescriptor(::UnityW<::UnityEngine::Texture>  heightMap, ::UnityW<::UnityEngine::Texture>  normalMap, ::UnityEngine::Vector3  heightMapScale) noexcept  {
this->heightMap = heightMap;
this->normalMap = normalMap;
this->heightMapScale = heightMapScale;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor::MicroSplatObject_TerrainDescriptor()   {
}
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061c0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.GetOverrideHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::GetOverrideHash)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x181400540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"GetOverrideHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.SetMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)(::UnityEngine::Material*, ::StringW, ::UnityEngine::Texture*)>(&::JBooth::MicroSplat::MicroSplatObject::SetMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814008f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"SetMap", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.ApplySharedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)(::UnityEngine::Material*)>(&::JBooth::MicroSplat::MicroSplatObject::ApplySharedData)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1813fff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplySharedData", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.ApplyMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)(::UnityEngine::Material*)>(&::JBooth::MicroSplat::MicroSplatObject::ApplyMaps)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1813ffc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplyMaps", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.ApplyControlTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)(::ArrayW<::UnityEngine::Texture2D*>, ::UnityEngine::Material*)>(&::JBooth::MicroSplat::MicroSplatObject::ApplyControlTextures)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1813ffa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplyControlTextures", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.SyncBlendMat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)(::UnityEngine::Vector3)>(&::JBooth::MicroSplat::MicroSplatObject::SyncBlendMat)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181400a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"SyncBlendMat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.GetTerrainDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::GetTerrainDescriptor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180cd1680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::GetBounds)> {
  constexpr static std::size_t size = 0xeb0;
  constexpr static std::size_t addrs = 0x180974130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                    {::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.GetBlendMatInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::GetBlendMatInstance)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181400370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"GetBlendMatInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.ApplyBlendMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::ApplyBlendMap)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1813ff980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplyBlendMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.RevisionFromMat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::RevisionFromMat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"RevisionFromMat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject.SyncAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::JBooth::MicroSplat::MicroSplatObject::SyncAll)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181400960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"SyncAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::MicroSplatObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::MicroSplatObject::*)()>(&::JBooth::MicroSplat::MicroSplatObject::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_templateMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_templateMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___templateMaterial;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_templateMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___templateMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_matInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_matInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matInstance;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_matInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matInstance = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_blendMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_blendMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMat;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_blendMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_blendMatInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMatInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_blendMatInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendMatInstance;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_blendMatInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendMatInstance = value;
}
constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatKeywords>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_keywordSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywordSO;
}
constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatKeywords> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_keywordSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywordSO;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_keywordSO(::UnityW<::JBooth::MicroSplat::MicroSplatKeywords>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keywordSO = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_perPixelNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPixelNormal;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_perPixelNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perPixelNormal;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_perPixelNormal(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perPixelNormal = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_streamTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_streamTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamTexture;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_streamTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___streamTexture = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_tintMapOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintMapOverride;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_tintMapOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintMapOverride;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_tintMapOverride(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintMapOverride = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_tintMapOverride2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintMapOverride2;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_tintMapOverride2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tintMapOverride2;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_tintMapOverride2(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tintMapOverride2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_globalNormalOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalNormalOverride;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_globalNormalOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalNormalOverride;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_globalNormalOverride(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalNormalOverride = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_globalSAOMOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalSAOMOverride;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_globalSAOMOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalSAOMOverride;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_globalSAOMOverride(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalSAOMOverride = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_globalEmisOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalEmisOverride;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_globalEmisOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalEmisOverride;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_globalEmisOverride(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalEmisOverride = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_geoTextureOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geoTextureOverride;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_geoTextureOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geoTextureOverride;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_geoTextureOverride(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___geoTextureOverride = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_vsGrassMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vsGrassMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_vsGrassMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vsGrassMap;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_vsGrassMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vsGrassMap = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_vsShadowMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vsShadowMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_vsShadowMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vsShadowMap;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_vsShadowMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vsShadowMap = value;
}
constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatPropData>& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_propData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propData;
}
constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatPropData> const& JBooth::MicroSplat::MicroSplatObject::__cordl_internal_get_propData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propData;
}
constexpr void JBooth::MicroSplat::MicroSplatObject::__cordl_internal_set_propData(::UnityW<::JBooth::MicroSplat::MicroSplatPropData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propData = value;
}
inline void JBooth::MicroSplat::MicroSplatObject::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t JBooth::MicroSplat::MicroSplatObject::GetOverrideHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"GetOverrideHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatObject::SetMap(::UnityEngine::Material*  m, ::StringW  name, ::UnityEngine::Texture*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"SetMap", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, name, tex);
}
inline void JBooth::MicroSplat::MicroSplatObject::ApplySharedData(::UnityEngine::Material*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplySharedData", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void JBooth::MicroSplat::MicroSplatObject::ApplyMaps(::UnityEngine::Material*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplyMaps", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void JBooth::MicroSplat::MicroSplatObject::ApplyControlTextures(::ArrayW<::UnityEngine::Texture2D*>  controls, ::UnityEngine::Material*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplyControlTextures", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controls, m);
}
inline void JBooth::MicroSplat::MicroSplatObject::SyncBlendMat(::UnityEngine::Vector3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"SyncBlendMat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline ::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor JBooth::MicroSplat::MicroSplatObject::GetTerrainDescriptor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::JBooth::MicroSplat::MicroSplatObject_TerrainDescriptor>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroSplat::MicroSplatObject::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> JBooth::MicroSplat::MicroSplatObject::GetBlendMatInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"GetBlendMatInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatObject::ApplyBlendMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"ApplyBlendMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatObject::RevisionFromMat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"RevisionFromMat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatObject::SyncAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {"SyncAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void JBooth::MicroSplat::MicroSplatObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::MicroSplatObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::MicroSplatObject* JBooth::MicroSplat::MicroSplatObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::MicroSplatObject*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::MicroSplatObject::MicroSplatObject()   {
}
