#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEProxyData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEProxyData_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrain_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEProxyData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEProxyData::*)()>(&::TheVisualEngine::TVEProxyData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804b98b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEProxyData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitGameObject;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_blitGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitGameObject = value;
}
constexpr ::UnityW<::TheVisualEngine::TVETerrain>& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitTVETerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitTVETerrain;
}
constexpr ::UnityW<::TheVisualEngine::TVETerrain> const& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitTVETerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitTVETerrain;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_blitTVETerrain(::UnityW<::TheVisualEngine::TVETerrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitTVETerrain = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMesh;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_blitMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitMesh = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitShader;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_blitShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitShader = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TheVisualEngine::TVEProxyData::__cordl_internal_get_blitMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMaterial;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_blitMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitMaterial = value;
}
constexpr int32_t& TheVisualEngine::TVEProxyData::__cordl_internal_get_bakeCoord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeCoord;
}
constexpr int32_t const& TheVisualEngine::TVEProxyData::__cordl_internal_get_bakeCoord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeCoord;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_bakeCoord(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeCoord = value;
}
constexpr int32_t& TheVisualEngine::TVEProxyData::__cordl_internal_get_bakeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeData;
}
constexpr int32_t const& TheVisualEngine::TVEProxyData::__cordl_internal_get_bakeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeData;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_bakeData(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeData = value;
}
constexpr bool& TheVisualEngine::TVEProxyData::__cordl_internal_get_bakeAlbedoAsSRGB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeAlbedoAsSRGB;
}
constexpr bool const& TheVisualEngine::TVEProxyData::__cordl_internal_get_bakeAlbedoAsSRGB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeAlbedoAsSRGB;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_bakeAlbedoAsSRGB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeAlbedoAsSRGB = value;
}
constexpr int32_t& TheVisualEngine::TVEProxyData::__cordl_internal_get_saveSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveSize;
}
constexpr int32_t const& TheVisualEngine::TVEProxyData::__cordl_internal_get_saveSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveSize;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_saveSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveSize = value;
}
constexpr bool& TheVisualEngine::TVEProxyData::__cordl_internal_get_saveAsSRGB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAsSRGB;
}
constexpr bool const& TheVisualEngine::TVEProxyData::__cordl_internal_get_saveAsSRGB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAsSRGB;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_saveAsSRGB(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveAsSRGB = value;
}
constexpr bool& TheVisualEngine::TVEProxyData::__cordl_internal_get_saveAsDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAsDefault;
}
constexpr bool const& TheVisualEngine::TVEProxyData::__cordl_internal_get_saveAsDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveAsDefault;
}
constexpr void TheVisualEngine::TVEProxyData::__cordl_internal_set_saveAsDefault(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveAsDefault = value;
}
inline void TheVisualEngine::TVEProxyData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEProxyData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEProxyData* TheVisualEngine::TVEProxyData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEProxyData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEProxyData::TVEProxyData()   {
}
