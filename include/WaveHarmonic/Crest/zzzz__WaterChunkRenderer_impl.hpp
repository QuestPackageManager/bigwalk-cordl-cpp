#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterChunkRenderer.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterChunkRenderer_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SurfaceRenderer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.get_Rend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::get_Rend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"get_Rend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.set_Rend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)(::UnityEngine::Renderer*)>(&::WaveHarmonic::Crest::WaterChunkRenderer::set_Rend)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"set_Rend", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.get_UnexpandedBoundsXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::get_UnexpandedBoundsXZ)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b65ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"get_UnexpandedBoundsXZ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.get_MaterialOverridden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::get_MaterialOverridden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180371700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"get_MaterialOverridden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.set_MaterialOverridden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterChunkRenderer::set_MaterialOverridden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825a6220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"set_MaterialOverridden", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)(int32_t, ::UnityEngine::Renderer*, ::UnityEngine::Mesh*)>(&::WaveHarmonic::Crest::WaterChunkRenderer::Initialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825a5930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.OnStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::OnStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.UpdateMeshBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)(::WaveHarmonic::Crest::WaterRenderer*, ::WaveHarmonic::Crest::SurfaceRenderer*)>(&::WaveHarmonic::Crest::WaterChunkRenderer::UpdateMeshBounds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1825a5f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"UpdateMeshBounds", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::WaterChunkRenderer::*)(bool)>(&::WaveHarmonic::Crest::WaterChunkRenderer::ShouldRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a5f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::OnLateUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1825a59c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"OnLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.RenderMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)(::WaveHarmonic::Crest::SurfaceRenderer*, ::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::WaterChunkRenderer::RenderMotionVectors)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1825a5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"RenderMotionVectors", {}, {::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.UpdateMeshBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::UpdateMeshBounds)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1825a5fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"UpdateMeshBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::Bind)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1825a5190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"Bind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1825a5990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.OnWillRenderObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::OnWillRenderObject)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1825a5af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"OnWillRenderObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.ComputeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::WaveHarmonic::Crest::WaterChunkRenderer::*)(::UnityEngine::Transform*, ::UnityEngine::Bounds)>(&::WaveHarmonic::Crest::WaterChunkRenderer::ComputeBounds)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1825a5260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer.ExpandBoundsForDisplacements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::WaveHarmonic::Crest::WaterChunkRenderer::*)(::UnityEngine::Transform*, ::UnityEngine::Bounds)>(&::WaveHarmonic::Crest::WaterChunkRenderer::ExpandBoundsForDisplacements)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1825a5380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"ExpandBoundsForDisplacements", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterChunkRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterChunkRenderer::*)()>(&::WaveHarmonic::Crest::WaterChunkRenderer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825a6200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__DrawRenderBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawRenderBounds;
}
constexpr bool const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__DrawRenderBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DrawRenderBounds;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__DrawRenderBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DrawRenderBounds = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Transform;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Transform = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mesh;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__Mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mesh = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Rend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rend_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Rend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rend_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__Rend_k__BackingField(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rend_k__BackingField = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__MaterialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__MaterialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialPropertyBlock;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaterialPropertyBlock = value;
}
constexpr ::UnityEngine::Matrix4x4& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__CurrentObjectToWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObjectToWorld;
}
constexpr ::UnityEngine::Matrix4x4 const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__CurrentObjectToWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentObjectToWorld;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__CurrentObjectToWorld(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentObjectToWorld = value;
}
constexpr ::UnityEngine::Matrix4x4& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__PreviousObjectToWorld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousObjectToWorld;
}
constexpr ::UnityEngine::Matrix4x4 const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__PreviousObjectToWorld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreviousObjectToWorld;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__PreviousObjectToWorld(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreviousObjectToWorld = value;
}
constexpr ::UnityW<::UnityEngine::Material>& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__MotionVectorMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MotionVectorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__MotionVectorMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MotionVectorMaterial;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__MotionVectorMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MotionVectorMaterial = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__SortingOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortingOrder;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__SortingOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SortingOrder;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__SortingOrder(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SortingOrder = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__SiblingIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SiblingIndex;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__SiblingIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SiblingIndex;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__SiblingIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SiblingIndex = value;
}
constexpr ::UnityEngine::Rect& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__UnexpandedBoundsXZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnexpandedBoundsXZ;
}
constexpr ::UnityEngine::Rect const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__UnexpandedBoundsXZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UnexpandedBoundsXZ;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__UnexpandedBoundsXZ(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UnexpandedBoundsXZ = value;
}
constexpr ::UnityEngine::Bounds& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__LocalBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalBounds;
}
constexpr ::UnityEngine::Bounds const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__LocalBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalBounds;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__LocalBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalBounds = value;
}
constexpr float_t& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__LocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalScale;
}
constexpr float_t const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__LocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalScale;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__LocalScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalScale = value;
}
constexpr bool& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Culled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Culled;
}
constexpr bool const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Culled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Culled;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__Culled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Culled = value;
}
constexpr bool& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Visible;
}
constexpr bool const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Visible;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__Visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Visible = value;
}
constexpr bool& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__CulledByVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CulledByVolume;
}
constexpr bool const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__CulledByVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CulledByVolume;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__CulledByVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CulledByVolume = value;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Water()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__Water() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Water;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Water = value;
}
constexpr bool& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__MaterialOverridden_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialOverridden_k__BackingField;
}
constexpr bool const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__MaterialOverridden_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialOverridden_k__BackingField;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__MaterialOverridden_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaterialOverridden_k__BackingField = value;
}
constexpr bool& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__WaterDataHasBeenBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterDataHasBeenBound;
}
constexpr bool const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__WaterDataHasBeenBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaterDataHasBeenBound;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__WaterDataHasBeenBound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaterDataHasBeenBound = value;
}
constexpr int32_t& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__LodIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodIndex;
}
constexpr int32_t const& WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_get__LodIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LodIndex;
}
constexpr void WaveHarmonic::Crest::WaterChunkRenderer::__cordl_internal_set__LodIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LodIndex = value;
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::setStaticF_s_UpdateMeshBoundsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateMeshBoundsMarker", ::WaveHarmonic::Crest::WaterChunkRenderer*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker WaveHarmonic::Crest::WaterChunkRenderer::getStaticF_s_UpdateMeshBoundsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateMeshBoundsMarker", ::WaveHarmonic::Crest::WaterChunkRenderer*>();
}
inline ::UnityW<::UnityEngine::Renderer> WaveHarmonic::Crest::WaterChunkRenderer::get_Rend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"get_Rend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::set_Rend(::UnityEngine::Renderer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"set_Rend", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::WaterChunkRenderer::get_UnexpandedBoundsXZ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"get_UnexpandedBoundsXZ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::WaterChunkRenderer::get_MaterialOverridden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"get_MaterialOverridden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::set_MaterialOverridden(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"set_MaterialOverridden", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::Initialize(int32_t  index, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"Initialize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, renderer, mesh);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::OnStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::UpdateMeshBounds(::WaveHarmonic::Crest::WaterRenderer*  water, ::WaveHarmonic::Crest::SurfaceRenderer*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"UpdateMeshBounds", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water, surface);
}
inline bool WaveHarmonic::Crest::WaterChunkRenderer::ShouldRender(bool  culled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"ShouldRender", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, culled);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::OnLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"OnLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::RenderMotionVectors(::WaveHarmonic::Crest::SurfaceRenderer*  surface, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"RenderMotionVectors", {}, {::i2c::type_of<::WaveHarmonic::Crest::SurfaceRenderer*>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface, camera);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::UpdateMeshBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"UpdateMeshBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::Bind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"Bind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::OnWillRenderObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"OnWillRenderObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds WaveHarmonic::Crest::WaterChunkRenderer::ComputeBounds(::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, transform, bounds);
}
inline ::UnityEngine::Bounds WaveHarmonic::Crest::WaterChunkRenderer::ExpandBoundsForDisplacements(::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {"ExpandBoundsForDisplacements", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, transform, bounds);
}
inline void WaveHarmonic::Crest::WaterChunkRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterChunkRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterChunkRenderer* WaveHarmonic::Crest::WaterChunkRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterChunkRenderer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterChunkRenderer::WaterChunkRenderer()   {
}
