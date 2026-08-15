#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionCuller.hpp"
#include "MA/Flora/zzzz__ConstantBufferRef_1_impl.hpp"
#include "MA/Flora/zzzz__OcclusionCullingCommonShaderVariables_impl.hpp"
#include "MA/Flora/zzzz__OcclusionCullingDebugShaderVariables_impl.hpp"
#include "MA/Flora/zzzz__SilhouettePlaneCache_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__OcclusionCuller_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "MA/Flora/zzzz__OccluderHandles_def.hpp"
#include "MA/Flora/zzzz__OccluderParameters_def.hpp"
#include "MA/Flora/zzzz__OcclusionContext_def.hpp"
#include "MA/Flora/zzzz__OcclusionCuller_def.hpp"
#include "MA/Flora/zzzz__OcclusionDebugOutput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingSettings_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "Valid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCuller_ContextSlot::OcclusionCuller_ContextSlot(bool  Valid, int32_t  LastUsedFrameIndex, ::UnityEngine::EntityId  ViewId) noexcept  {
this->Valid = Valid;
this->LastUsedFrameIndex = LastUsedFrameIndex;
this->ViewId = ViewId;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCuller_ContextSlot::OcclusionCuller_ContextSlot()   {
}
//  Writing Method size for method: ::MA::Flora::OcclusionCuller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::OcclusionCuller::_ctor)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x1814d2fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)()>(&::MA::Flora::OcclusionCuller::Dispose)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814d17b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.NewContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::OcclusionCuller::*)(::UnityEngine::EntityId)>(&::MA::Flora::OcclusionCuller::NewContext)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1814d1af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"NewContext", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.DeleteContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::UnityEngine::EntityId)>(&::MA::Flora::OcclusionCuller::DeleteContext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814d1340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"DeleteContext", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.TryGetContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::OcclusionCuller::*)(::UnityEngine::EntityId, ::by_ref<::MA::Flora::OcclusionContext>)>(&::MA::Flora::OcclusionCuller::TryGetContext)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814d2e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"TryGetContext", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.PrepareOcclusionHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OccluderHandles (::MA::Flora::OcclusionCuller::*)(::by_ref<::MA::Flora::OccluderParameters>)>(&::MA::Flora::OcclusionCuller::PrepareOcclusionHandles)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814d2320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"PrepareOcclusionHandles", {}, {::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.PrepareOcclusionHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OccluderHandles (::MA::Flora::OcclusionCuller::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::MA::Flora::OccluderParameters>)>(&::MA::Flora::OcclusionCuller::PrepareOcclusionHandles)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814d2540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"PrepareOcclusionHandles", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.NextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)()>(&::MA::Flora::OcclusionCuller::NextFrame)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814d1d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"NextFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.GetOcclusionTestDebugOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OcclusionDebugOutput (::MA::Flora::OcclusionCuller::*)(::UnityEngine::EntityId)>(&::MA::Flora::OcclusionCuller::GetOcclusionTestDebugOutput)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814d1960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"GetOcclusionTestDebugOutput", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.UpdateSilhouettePlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::UnityEngine::EntityId, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>)>(&::MA::Flora::OcclusionCuller::UpdateSilhouettePlanes)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"UpdateSilhouettePlanes", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.CreateDepthPyramid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::UnityEngine::Rendering::CommandBuffer*, ::MA::Flora::OccluderParameters, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>, ::by_ref<::MA::Flora::OccluderHandles>)>(&::MA::Flora::OcclusionCuller::CreateDepthPyramid)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814d10b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"CreateDepthPyramid", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::OccluderParameters>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderHandles>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.PrepareForCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::OcclusionContext>, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>, ::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>)>(&::MA::Flora::OcclusionCuller::PrepareForCulling)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x1814d1ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"PrepareForCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.BuildOcclusionDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::OcclusionCuller::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::MA::Flora::OccluderParameters>, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(&::MA::Flora::OcclusionCuller::BuildOcclusionDepth)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1814d0bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"BuildOcclusionDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.DispatchDebugClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::EntityId)>(&::MA::Flora::OcclusionCuller::DispatchDebugClear)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1814d14d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"DispatchDebugClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.RenderDebugTestOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::EntityId)>(&::MA::Flora::OcclusionCuller::RenderDebugTestOverlay)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1814d2760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"RenderDebugTestOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OcclusionCuller.RenderDebugViewOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCuller::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::EntityId, ::UnityEngine::Vector2, float_t)>(&::MA::Flora::OcclusionCuller::RenderDebugViewOverlay)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x1814d2a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"RenderDebugViewOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::SilhouettePlaneCache& MA::Flora::OcclusionCuller::__cordl_internal_get_SilhouettePlaneCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SilhouettePlaneCache;
}
constexpr ::MA::Flora::SilhouettePlaneCache const& MA::Flora::OcclusionCuller::__cordl_internal_get_SilhouettePlaneCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SilhouettePlaneCache;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_SilhouettePlaneCache(::MA::Flora::SilhouettePlaneCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SilhouettePlaneCache = value;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>& MA::Flora::OcclusionCuller::__cordl_internal_get_ViewIDToSlotMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ViewIDToSlotMap;
}
constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t> const& MA::Flora::OcclusionCuller::__cordl_internal_get_ViewIDToSlotMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ViewIDToSlotMap;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_ViewIDToSlotMap(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ViewIDToSlotMap = value;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>*& MA::Flora::OcclusionCuller::__cordl_internal_get_Contexts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Contexts;
}
constexpr ::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>* const& MA::Flora::OcclusionCuller::__cordl_internal_get_Contexts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Contexts;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_Contexts(::System::Collections::Generic::List_1<::MA::Flora::OcclusionContext>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Contexts = value;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot>& MA::Flora::OcclusionCuller::__cordl_internal_get_ContextSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContextSlots;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot> const& MA::Flora::OcclusionCuller::__cordl_internal_get_ContextSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContextSlots;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_ContextSlots(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::OcclusionCuller_ContextSlot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContextSlots = value;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>& MA::Flora::OcclusionCuller::__cordl_internal_get_FreeContextSlots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FreeContextSlots;
}
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t> const& MA::Flora::OcclusionCuller::__cordl_internal_get_FreeContextSlots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FreeContextSlots;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_FreeContextSlots(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FreeContextSlots = value;
}
constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables>& MA::Flora::OcclusionCuller::__cordl_internal_get_CommonConstantBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommonConstantBuffer;
}
constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables> const& MA::Flora::OcclusionCuller::__cordl_internal_get_CommonConstantBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CommonConstantBuffer;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_CommonConstantBuffer(::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingCommonShaderVariables>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CommonConstantBuffer = value;
}
constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables>& MA::Flora::OcclusionCuller::__cordl_internal_get_DebugConstantBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugConstantBuffer;
}
constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables> const& MA::Flora::OcclusionCuller::__cordl_internal_get_DebugConstantBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DebugConstantBuffer;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_DebugConstantBuffer(::MA::Flora::ConstantBufferRef_1<::MA::Flora::OcclusionCullingDebugShaderVariables>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DebugConstantBuffer = value;
}
constexpr int32_t& MA::Flora::OcclusionCuller::__cordl_internal_get_FrameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameIndex;
}
constexpr int32_t const& MA::Flora::OcclusionCuller::__cordl_internal_get_FrameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrameIndex;
}
constexpr void MA::Flora::OcclusionCuller::__cordl_internal_set_FrameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrameIndex = value;
}
inline void MA::Flora::OcclusionCuller::_ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runtimeResources);
}
inline void MA::Flora::OcclusionCuller::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t MA::Flora::OcclusionCuller::NewContext(::UnityEngine::EntityId  viewId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"NewContext", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, viewId);
}
inline void MA::Flora::OcclusionCuller::DeleteContext(::UnityEngine::EntityId  viewId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"DeleteContext", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewId);
}
inline bool MA::Flora::OcclusionCuller::TryGetContext(::UnityEngine::EntityId  viewId, ::by_ref<::MA::Flora::OcclusionContext>  occlusionContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"TryGetContext", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, viewId, occlusionContext);
}
inline ::MA::Flora::OccluderHandles MA::Flora::OcclusionCuller::PrepareOcclusionHandles(::by_ref<::MA::Flora::OccluderParameters>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"PrepareOcclusionHandles", {}, {::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OccluderHandles>(this, ___internal_method, input);
}
inline ::MA::Flora::OccluderHandles MA::Flora::OcclusionCuller::PrepareOcclusionHandles(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::by_ref<::MA::Flora::OccluderParameters>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"PrepareOcclusionHandles", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OccluderHandles>(this, ___internal_method, renderGraph, input);
}
inline void MA::Flora::OcclusionCuller::NextFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"NextFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::OcclusionDebugOutput MA::Flora::OcclusionCuller::GetOcclusionTestDebugOutput(::UnityEngine::EntityId  viewId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"GetOcclusionTestDebugOutput", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OcclusionDebugOutput>(this, ___internal_method, viewId);
}
inline void MA::Flora::OcclusionCuller::UpdateSilhouettePlanes(::UnityEngine::EntityId  viewId, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"UpdateSilhouettePlanes", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewId, planes);
}
inline void MA::Flora::OcclusionCuller::CreateDepthPyramid(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::OccluderParameters  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviewUpdates, ::by_ref<::MA::Flora::OccluderHandles>  handles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"CreateDepthPyramid", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::MA::Flora::OccluderParameters>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderHandles>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, input, subviewUpdates, handles);
}
inline void MA::Flora::OcclusionCuller::PrepareForCulling(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OcclusionContext>  occlusionContext, ::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>  settings, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  testSubviewSettings, ::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>  shaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"PrepareForCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::OcclusionCullingSettings>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<::System::Span_1<::UnityW<::UnityEngine::ComputeShader>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, occlusionContext, settings, testSubviewSettings, shaders);
}
inline bool MA::Flora::OcclusionCuller::BuildOcclusionDepth(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::OccluderParameters>  input, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>  subviewUpdates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"BuildOcclusionDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::MA::Flora::OccluderParameters>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, input, subviewUpdates);
}
inline void MA::Flora::OcclusionCuller::DispatchDebugClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"DispatchDebugClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, viewEntityId);
}
inline void MA::Flora::OcclusionCuller::RenderDebugTestOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"RenderDebugTestOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, viewId);
}
inline void MA::Flora::OcclusionCuller::RenderDebugViewOverlay(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::EntityId  viewId, ::UnityEngine::Vector2  positionScreen, float_t  maxHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCuller*>(),
                        {"RenderDebugViewOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, viewId, positionScreen, maxHeight);
}
inline ::MA::Flora::OcclusionCuller* MA::Flora::OcclusionCuller::New_ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::OcclusionCuller*>(runtimeResources));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::OcclusionCuller::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::OcclusionCuller::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCuller::OcclusionCuller()   {
}
