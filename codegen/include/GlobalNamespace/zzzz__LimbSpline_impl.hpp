#pragma once
// IWYU pragma private; include "GlobalNamespace/LimbSpline.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LimbSpline_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LimbSpline.get_materialInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::LimbSpline::*)()>(&::GlobalNamespace::LimbSpline::get_materialInstance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803ed0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"get_materialInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LimbSpline.RefreshShaderMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LimbSpline::*)()>(&::GlobalNamespace::LimbSpline::RefreshShaderMode)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1803ecd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"RefreshShaderMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LimbSpline.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LimbSpline::*)()>(&::GlobalNamespace::LimbSpline::Refresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LimbSpline.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LimbSpline::*)()>(&::GlobalNamespace::LimbSpline::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1803ecb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LimbSpline.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LimbSpline::*)()>(&::GlobalNamespace::LimbSpline::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ecb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LimbSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LimbSpline::*)()>(&::GlobalNamespace::LimbSpline::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LimbSpline::__cordl_internal_get_startTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LimbSpline::__cordl_internal_get_startTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTransform;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_startTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LimbSpline::__cordl_internal_get_handleTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LimbSpline::__cordl_internal_get_handleTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleTransform;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_handleTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LimbSpline::__cordl_internal_get_endTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LimbSpline::__cordl_internal_get_endTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endTransform;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_endTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endTransform = value;
}
constexpr ::StringW& GlobalNamespace::LimbSpline::__cordl_internal_get_startName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startName;
}
constexpr ::StringW const& GlobalNamespace::LimbSpline::__cordl_internal_get_startName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startName;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_startName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startName = value;
}
constexpr ::StringW& GlobalNamespace::LimbSpline::__cordl_internal_get_handleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleName;
}
constexpr ::StringW const& GlobalNamespace::LimbSpline::__cordl_internal_get_handleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleName;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_handleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleName = value;
}
constexpr ::StringW& GlobalNamespace::LimbSpline::__cordl_internal_get_endName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endName;
}
constexpr ::StringW const& GlobalNamespace::LimbSpline::__cordl_internal_get_endName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endName;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_endName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endName = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::LimbSpline::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::LimbSpline::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::LimbSpline::__cordl_internal_get_originalMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::LimbSpline::__cordl_internal_get_originalMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMesh;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_originalMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalMesh = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& GlobalNamespace::LimbSpline::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& GlobalNamespace::LimbSpline::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr float_t& GlobalNamespace::LimbSpline::__cordl_internal_get_startX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startX;
}
constexpr float_t const& GlobalNamespace::LimbSpline::__cordl_internal_get_startX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startX;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_startX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startX = value;
}
constexpr float_t& GlobalNamespace::LimbSpline::__cordl_internal_get_endX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endX;
}
constexpr float_t const& GlobalNamespace::LimbSpline::__cordl_internal_get_endX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endX;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_endX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endX = value;
}
constexpr float_t& GlobalNamespace::LimbSpline::__cordl_internal_get_armThickness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armThickness;
}
constexpr float_t const& GlobalNamespace::LimbSpline::__cordl_internal_get_armThickness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armThickness;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_armThickness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armThickness = value;
}
constexpr bool& GlobalNamespace::LimbSpline::__cordl_internal_get_showGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGizmos;
}
constexpr bool const& GlobalNamespace::LimbSpline::__cordl_internal_get_showGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGizmos;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_showGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGizmos = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::LimbSpline::__cordl_internal_get_originalVerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalVerts;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::LimbSpline::__cordl_internal_get_originalVerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalVerts;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_originalVerts(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalVerts = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::LimbSpline::__cordl_internal_get_newVerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newVerts;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::LimbSpline::__cordl_internal_get_newVerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newVerts;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_newVerts(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newVerts = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::LimbSpline::__cordl_internal_get_originalNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalNormals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::LimbSpline::__cordl_internal_get_originalNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalNormals;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_originalNormals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalNormals = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::LimbSpline::__cordl_internal_get_newNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newNormals;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::LimbSpline::__cordl_internal_get_newNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newNormals;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_newNormals(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newNormals = value;
}
constexpr bool& GlobalNamespace::LimbSpline::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::LimbSpline::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::LimbSpline::__cordl_internal_get__materialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::LimbSpline::__cordl_internal_get__materialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____materialInstance;
}
constexpr void GlobalNamespace::LimbSpline::__cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____materialInstance = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::LimbSpline::get_materialInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"get_materialInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::LimbSpline::RefreshShaderMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"RefreshShaderMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LimbSpline::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LimbSpline::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LimbSpline::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LimbSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimbSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LimbSpline* GlobalNamespace::LimbSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LimbSpline*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LimbSpline::LimbSpline()   {
}
