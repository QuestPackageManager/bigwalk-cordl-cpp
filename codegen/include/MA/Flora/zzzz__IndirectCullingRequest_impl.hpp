#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingRequest.hpp"
#include "MA/Flora/zzzz__ConstantBufferRef_1_impl.hpp"
#include "MA/Flora/zzzz__CullingViewShaderVariables_impl.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_impl.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingOutput_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchPackedCullingViewID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequest_def.hpp"
#include "MA/Flora/zzzz__AnimatedCrossFadeData_def.hpp"
#include "MA/Flora/zzzz__GPUCullingStats_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingOutput_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestHandles_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestParameters_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeStack_def.hpp"
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IndirectCullingRequest::*)()>(&::MA::Flora::IndirectCullingRequest::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814cdb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IndirectCullingRequest::*)()>(&::MA::Flora::IndirectCullingRequest::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814cdb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.get_IsScheduled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IndirectCullingRequest::*)()>(&::MA::Flora::IndirectCullingRequest::get_IsScheduled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814cdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsScheduled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IndirectCullingRequest::*)()>(&::MA::Flora::IndirectCullingRequest::get_IsCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814cdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequest::*)(int32_t)>(&::MA::Flora::IndirectCullingRequest::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1814cd860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequest::*)()>(&::MA::Flora::IndirectCullingRequest::Dispose)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814cc7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequest::*)()>(&::MA::Flora::IndirectCullingRequest::Release)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814ccbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequest::*)(::by_ref<::MA::Flora::IndirectCullingRequestParameters>)>(&::MA::Flora::IndirectCullingRequest::Initialize)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814cc9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingRequestParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.Schedule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::IndirectCullingRequest::*)(::by_ref<::UnityEngine::Rendering::BatchCullingOutput>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::IndirectCullingRequest::Schedule)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814cccd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Schedule", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingOutput>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.ImportBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::IndirectCullingRequestHandles (::MA::Flora::IndirectCullingRequest::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::MA::Flora::IndirectCullingRequest::ImportBuffers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814cc920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"ImportBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.CompleteAndUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IndirectCullingRequest::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::VolumeStack*, ::by_ref<::MA::Flora::AnimatedCrossFadeData>, ::by_ref<::MA::Flora::IndirectCullingOutput>)>(&::MA::Flora::IndirectCullingRequest::CompleteAndUpdate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1814cc560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"CompleteAndUpdate", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::MA::Flora::AnimatedCrossFadeData>>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingOutput>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.HasDebugDispatchCounters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::IndirectCullingRequest::*)()>(&::MA::Flora::IndirectCullingRequest::HasDebugDispatchCounters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"HasDebugDispatchCounters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.RequestDebugDispatchCounters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequest::*)(::UnityEngine::Rendering::CommandBuffer*, ::System::Action_1<::MA::Flora::GPUCullingStats>*)>(&::MA::Flora::IndirectCullingRequest::RequestDebugDispatchCounters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"RequestDebugDispatchCounters", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::System::Action_1<::MA::Flora::GPUCullingStats>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.OnPostDispatchCulling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequest::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::MA::Flora::IndirectCullingRequest::OnPostDispatchCulling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"OnPostDispatchCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::IndirectCullingRequest.UpdateVariablesData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::IndirectCullingRequest::*)(::UnityEngine::Rendering::VolumeStack*, ::by_ref<::MA::Flora::AnimatedCrossFadeData>)>(&::MA::Flora::IndirectCullingRequest::UpdateVariablesData)> {
  constexpr static std::size_t size = 0xb60;
  constexpr static std::size_t addrs = 0x1814ccd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"UpdateVariablesData", {}, {::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::MA::Flora::AnimatedCrossFadeData>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& MA::Flora::IndirectCullingRequest::__cordl_internal_get_RequestID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestID;
}
constexpr int32_t const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_RequestID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestID;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_RequestID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestID = value;
}
constexpr int32_t& MA::Flora::IndirectCullingRequest::__cordl_internal_get_LastUsedFrameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUsedFrameIndex;
}
constexpr int32_t const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_LastUsedFrameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastUsedFrameIndex;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_LastUsedFrameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastUsedFrameIndex = value;
}
constexpr ::MA::Flora::IndirectCullingRequestState& MA::Flora::IndirectCullingRequest::__cordl_internal_get_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr ::MA::Flora::IndirectCullingRequestState const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_State(::MA::Flora::IndirectCullingRequestState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___State = value;
}
constexpr ::UnityEngine::Rendering::BatchCullingViewType& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ViewType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ViewType;
}
constexpr ::UnityEngine::Rendering::BatchCullingViewType const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ViewType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ViewType;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_ViewType(::UnityEngine::Rendering::BatchCullingViewType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ViewType = value;
}
constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ViewID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ViewID;
}
constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ViewID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ViewID;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_ViewID(::UnityEngine::Rendering::BatchPackedCullingViewID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ViewID = value;
}
constexpr ::UnityEngine::Rendering::LODParameters& MA::Flora::IndirectCullingRequest::__cordl_internal_get_LODParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LODParameters;
}
constexpr ::UnityEngine::Rendering::LODParameters const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_LODParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LODParameters;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_LODParameters(::UnityEngine::Rendering::LODParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LODParameters = value;
}
constexpr int32_t& MA::Flora::IndirectCullingRequest::__cordl_internal_get_SplitCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplitCount;
}
constexpr int32_t const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_SplitCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplitCount;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_SplitCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplitCount = value;
}
constexpr float_t& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ScreenRelativeMetric()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScreenRelativeMetric;
}
constexpr float_t const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ScreenRelativeMetric() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScreenRelativeMetric;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_ScreenRelativeMetric(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScreenRelativeMetric = value;
}
constexpr float_t& MA::Flora::IndirectCullingRequest::__cordl_internal_get_MeshLodSelectionConstant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshLodSelectionConstant;
}
constexpr float_t const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_MeshLodSelectionConstant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MeshLodSelectionConstant;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_MeshLodSelectionConstant(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MeshLodSelectionConstant = value;
}
constexpr ::Unity::Jobs::JobHandle& MA::Flora::IndirectCullingRequest::__cordl_internal_get_CullingHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingHandle;
}
constexpr ::Unity::Jobs::JobHandle const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_CullingHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingHandle;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_CullingHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CullingHandle = value;
}
constexpr ::MA::Flora::DrawBinConfig& MA::Flora::IndirectCullingRequest::__cordl_internal_get_BinConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BinConfig;
}
constexpr ::MA::Flora::DrawBinConfig const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_BinConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BinConfig;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_BinConfig(::MA::Flora::DrawBinConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BinConfig = value;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>& MA::Flora::IndirectCullingRequest::__cordl_internal_get_CullingOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingOutput;
}
constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput> const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_CullingOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingOutput;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_CullingOutput(::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CullingOutput = value;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Plane>& MA::Flora::IndirectCullingRequest::__cordl_internal_get_Planes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Planes;
}
constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Plane> const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_Planes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Planes;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_Planes(::Unity::Collections::NativeList_1<::UnityEngine::Plane>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Planes = value;
}
constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>& MA::Flora::IndirectCullingRequest::__cordl_internal_get_SplitInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplitInfos;
}
constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo> const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_SplitInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplitInfos;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_SplitInfos(::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplitInfos = value;
}
constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ShaderVariables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShaderVariables;
}
constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables> const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_ShaderVariables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShaderVariables;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_ShaderVariables(::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShaderVariables = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawChunkBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawChunkBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawChunkBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawChunkBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_DrawChunkBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawChunkBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawTemplateBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawTemplateBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawTemplateBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawTemplateBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_DrawTemplateBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawTemplateBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawBinBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawBinBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawBinBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawBinBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_DrawBinBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawBinBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawInfoBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawInfoBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawInfoBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawInfoBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_DrawInfoBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawInfoBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawArgsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawArgsBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_DrawArgsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DrawArgsBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_DrawArgsBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DrawArgsBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_WorkGroupDataBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkGroupDataBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_WorkGroupDataBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkGroupDataBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_WorkGroupDataBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorkGroupDataBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_WorkGroupArgsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkGroupArgsBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_WorkGroupArgsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkGroupArgsBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_WorkGroupArgsBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorkGroupArgsBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_WorkGroupCounterBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkGroupCounterBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_WorkGroupCounterBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WorkGroupCounterBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_WorkGroupCounterBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WorkGroupCounterBuffer = value;
}
constexpr ::MA::Flora::GraphicsBufferRef& MA::Flora::IndirectCullingRequest::__cordl_internal_get_VisibilityBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisibilityBuffer;
}
constexpr ::MA::Flora::GraphicsBufferRef const& MA::Flora::IndirectCullingRequest::__cordl_internal_get_VisibilityBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisibilityBuffer;
}
constexpr void MA::Flora::IndirectCullingRequest::__cordl_internal_set_VisibilityBuffer(::MA::Flora::GraphicsBufferRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VisibilityBuffer = value;
}
inline bool MA::Flora::IndirectCullingRequest::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::IndirectCullingRequest::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::IndirectCullingRequest::get_IsScheduled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsScheduled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool MA::Flora::IndirectCullingRequest::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::IndirectCullingRequest::_ctor(int32_t  requestID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestID);
}
inline void MA::Flora::IndirectCullingRequest::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::IndirectCullingRequest::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::IndirectCullingRequest::Initialize(::by_ref<::MA::Flora::IndirectCullingRequestParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Initialize", {}, {::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingRequestParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::Unity::Jobs::JobHandle MA::Flora::IndirectCullingRequest::Schedule(::by_ref<::UnityEngine::Rendering::BatchCullingOutput>  batchCullingOutput, ::Unity::Jobs::JobHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"Schedule", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingOutput>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, batchCullingOutput, dependency);
}
inline ::MA::Flora::IndirectCullingRequestHandles MA::Flora::IndirectCullingRequest::ImportBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"ImportBuffers", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::IndirectCullingRequestHandles>(this, ___internal_method, renderGraph);
}
inline bool MA::Flora::IndirectCullingRequest::CompleteAndUpdate(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::MA::Flora::AnimatedCrossFadeData>  animatedCrossFadeData, ::by_ref<::MA::Flora::IndirectCullingOutput>  indirectCullingOutput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"CompleteAndUpdate", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::MA::Flora::AnimatedCrossFadeData>>(), ::i2c::type_of<::by_ref<::MA::Flora::IndirectCullingOutput>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cmd, volumeStack, animatedCrossFadeData, indirectCullingOutput);
}
inline bool MA::Flora::IndirectCullingRequest::HasDebugDispatchCounters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"HasDebugDispatchCounters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::IndirectCullingRequest::RequestDebugDispatchCounters(::UnityEngine::Rendering::CommandBuffer*  cmd, ::System::Action_1<::MA::Flora::GPUCullingStats>*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"RequestDebugDispatchCounters", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::System::Action_1<::MA::Flora::GPUCullingStats>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, onComplete);
}
inline void MA::Flora::IndirectCullingRequest::OnPostDispatchCulling(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"OnPostDispatchCulling", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void MA::Flora::IndirectCullingRequest::UpdateVariablesData(::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::MA::Flora::AnimatedCrossFadeData>  animatedCrossFadeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::IndirectCullingRequest*>(),
                        {"UpdateVariablesData", {}, {::i2c::type_of<::UnityEngine::Rendering::VolumeStack*>(), ::i2c::type_of<::by_ref<::MA::Flora::AnimatedCrossFadeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volumeStack, animatedCrossFadeData);
}
inline ::MA::Flora::IndirectCullingRequest* MA::Flora::IndirectCullingRequest::New_ctor(int32_t  requestID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::IndirectCullingRequest*>(requestID));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::IndirectCullingRequest::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::IndirectCullingRequest::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::IndirectCullingRequest::IndirectCullingRequest()   {
}
