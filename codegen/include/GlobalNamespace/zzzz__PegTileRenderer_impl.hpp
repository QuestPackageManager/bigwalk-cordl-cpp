#pragma once
// IWYU pragma private; include "GlobalNamespace/PegTileRenderer.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PegTileRenderer_def.hpp"
#include "GlobalNamespace/zzzz__PegTileDataSet_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PegTileRenderer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileRenderer::*)()>(&::GlobalNamespace::PegTileRenderer::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180406610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileRenderer.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileRenderer::*)()>(&::GlobalNamespace::PegTileRenderer::Refresh)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1804066b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileRenderer.SetAndRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileRenderer::*)(::GlobalNamespace::PropGroup)>(&::GlobalNamespace::PegTileRenderer::SetAndRefresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180406a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"SetAndRefresh", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileRenderer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileRenderer::*)()>(&::GlobalNamespace::PegTileRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180406680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PegTileRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PegTileRenderer::*)()>(&::GlobalNamespace::PegTileRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet>& GlobalNamespace::PegTileRenderer::__cordl_internal_get_pegTileDataSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr ::UnityW<::GlobalNamespace::PegTileDataSet> const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_pegTileDataSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pegTileDataSet;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_pegTileDataSet(::UnityW<::GlobalNamespace::PegTileDataSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pegTileDataSet = value;
}
constexpr ::GlobalNamespace::PropGroup& GlobalNamespace::PegTileRenderer::__cordl_internal_get_propGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propGroup;
}
constexpr ::GlobalNamespace::PropGroup const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_propGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propGroup;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_propGroup(::GlobalNamespace::PropGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propGroup = value;
}
constexpr bool& GlobalNamespace::PegTileRenderer::__cordl_internal_get_hidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidden;
}
constexpr bool const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_hidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidden;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_hidden(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hidden = value;
}
constexpr bool& GlobalNamespace::PegTileRenderer::__cordl_internal_get_hasCustomGlyphColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomGlyphColor;
}
constexpr bool const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_hasCustomGlyphColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomGlyphColor;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_hasCustomGlyphColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCustomGlyphColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PegTileRenderer::__cordl_internal_get_glyphColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glyphColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_glyphColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glyphColor;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_glyphColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glyphColor = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::PegTileRenderer::__cordl_internal_get_targetRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_targetRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRenderer;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRenderer = value;
}
constexpr int32_t& GlobalNamespace::PegTileRenderer::__cordl_internal_get_targetSubmesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmesh;
}
constexpr int32_t const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_targetSubmesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSubmesh;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_targetSubmesh(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSubmesh = value;
}
constexpr bool& GlobalNamespace::PegTileRenderer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PegTileRenderer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PegTileRenderer::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PegTileRenderer::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
constexpr int32_t& GlobalNamespace::PegTileRenderer::__cordl_internal_get__materialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialIndex;
}
constexpr int32_t const& GlobalNamespace::PegTileRenderer::__cordl_internal_get__materialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialIndex;
}
constexpr void GlobalNamespace::PegTileRenderer::__cordl_internal_set__materialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialIndex = value;
}
inline void GlobalNamespace::PegTileRenderer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileRenderer::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileRenderer::SetAndRefresh(::GlobalNamespace::PropGroup  propGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"SetAndRefresh", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propGroup);
}
inline void GlobalNamespace::PegTileRenderer::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PegTileRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PegTileRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PegTileRenderer* GlobalNamespace::PegTileRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PegTileRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PegTileRenderer::PegTileRenderer()   {
}
