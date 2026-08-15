#pragma once
// IWYU pragma private; include "TheVisualEngine/TVETerrainRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVETerrainBaking_impl.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_impl.hpp"
#include "TheVisualEngine/zzzz__TVETerrainRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVETerrainRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVETerrainRenderer::*)()>(&::TheVisualEngine::TVETerrainRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804b9950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrainRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TheVisualEngine::TVETerrainBaking& TheVisualEngine::TVETerrainRenderer::__cordl_internal_get_bakeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeMode;
}
constexpr ::TheVisualEngine::TVETerrainBaking const& TheVisualEngine::TVETerrainRenderer::__cordl_internal_get_bakeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeMode;
}
constexpr void TheVisualEngine::TVETerrainRenderer::__cordl_internal_set_bakeMode(::TheVisualEngine::TVETerrainBaking  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeMode = value;
}
constexpr ::TheVisualEngine::TVETextureSize& TheVisualEngine::TVETerrainRenderer::__cordl_internal_get_bakeTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeTexture;
}
constexpr ::TheVisualEngine::TVETextureSize const& TheVisualEngine::TVETerrainRenderer::__cordl_internal_get_bakeTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeTexture;
}
constexpr void TheVisualEngine::TVETerrainRenderer::__cordl_internal_set_bakeTexture(::TheVisualEngine::TVETextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TheVisualEngine::TVETerrainRenderer::__cordl_internal_get_bakeMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TheVisualEngine::TVETerrainRenderer::__cordl_internal_get_bakeMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bakeMaterial;
}
constexpr void TheVisualEngine::TVETerrainRenderer::__cordl_internal_set_bakeMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bakeMaterial = value;
}
inline void TheVisualEngine::TVETerrainRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVETerrainRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVETerrainRenderer* TheVisualEngine::TVETerrainRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVETerrainRenderer*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVETerrainRenderer::TVETerrainRenderer()   {
}
