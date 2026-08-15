#pragma once
// IWYU pragma private; include "MA/Flora/InstanceBufferUpload.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "MA/Flora/zzzz__InstanceBufferUpload_def.hpp"
#include "MA/Flora/zzzz__BufferCopyCommand_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__GraphicsMatrix_def.hpp"
#include "MA/Flora/zzzz__InstanceBufferUpload_def.hpp"
#include "MA/Flora/zzzz__PackedChunkUploadHeader_def.hpp"
#include "MA/Flora/zzzz__SHUpdatePacket_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_InstanceUploadShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "InstanceUploadShader", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::InstanceBufferUpload_Compute::getStaticF_InstanceUploadShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "InstanceUploadShader", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterStaticTransformsKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterStaticTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterStaticTransformsKernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterStaticTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterInitDynamicTransformsKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterInitDynamicTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterInitDynamicTransformsKernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterInitDynamicTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterUpdateDynamicTransformsKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterUpdateDynamicTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterUpdateDynamicTransformsKernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterUpdateDynamicTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterUpdatePrevTransformsKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterUpdatePrevTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterUpdatePrevTransformsKernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterUpdatePrevTransformsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterSHKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterSHKernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterSHKernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterSHKernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterUintKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterUintKernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterUintKernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterUintKernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterUint2Kernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterUint2Kernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterUint2Kernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterUint2Kernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_ScatterUint4Kernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterUint4Kernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_ScatterUint4Kernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterUint4Kernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
inline void MA::Flora::InstanceBufferUpload_Compute::setStaticF_CopyComponentsKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "CopyComponentsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_Compute::getStaticF_CopyComponentsKernel()  {
return ::cordl_internals::getStaticField<int32_t, "CopyComponentsKernel", ::MA::Flora::InstanceBufferUpload_Compute*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceBufferUpload_Compute::InstanceBufferUpload_Compute()   {
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__ChunkUploadCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkUploadCount", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__ChunkUploadCount()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkUploadCount", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__ChunkUploadHeaders(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ChunkUploadHeaders", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__ChunkUploadHeaders()  {
return ::cordl_internals::getStaticField<int32_t, "_ChunkUploadHeaders", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__BatchDomainAddresses(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BatchDomainAddresses", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__BatchDomainAddresses()  {
return ::cordl_internals::getStaticField<int32_t, "_BatchDomainAddresses", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__BatchTransformAddresses(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BatchTransformAddresses", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__BatchTransformAddresses()  {
return ::cordl_internals::getStaticField<int32_t, "_BatchTransformAddresses", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__GraphicsMatrices(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_GraphicsMatrices", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__GraphicsMatrices()  {
return ::cordl_internals::getStaticField<int32_t, "_GraphicsMatrices", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__SHPackets(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SHPackets", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__SHPackets()  {
return ::cordl_internals::getStaticField<int32_t, "_SHPackets", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__Occlusion(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Occlusion", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__Occlusion()  {
return ::cordl_internals::getStaticField<int32_t, "_Occlusion", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__ValuesUint1(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ValuesUint1", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__ValuesUint1()  {
return ::cordl_internals::getStaticField<int32_t, "_ValuesUint1", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__ValuesUint2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ValuesUint2", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__ValuesUint2()  {
return ::cordl_internals::getStaticField<int32_t, "_ValuesUint2", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__ValuesUint4(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_ValuesUint4", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__ValuesUint4()  {
return ::cordl_internals::getStaticField<int32_t, "_ValuesUint4", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__InstanceBufferRW(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InstanceBufferRW", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__InstanceBufferRW()  {
return ::cordl_internals::getStaticField<int32_t, "_InstanceBufferRW", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__CommandCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CommandCount", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__CommandCount()  {
return ::cordl_internals::getStaticField<int32_t, "_CommandCount", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__CopyCommands(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_CopyCommands", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__CopyCommands()  {
return ::cordl_internals::getStaticField<int32_t, "_CopyCommands", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__SrcBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_SrcBuffer", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__SrcBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_SrcBuffer", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
inline void MA::Flora::InstanceBufferUpload_LocalNameID::setStaticF__DstBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_DstBuffer", ::MA::Flora::InstanceBufferUpload_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::InstanceBufferUpload_LocalNameID::getStaticF__DstBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "_DstBuffer", ::MA::Flora::InstanceBufferUpload_LocalNameID*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceBufferUpload_LocalNameID::InstanceBufferUpload_LocalNameID()   {
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_ScatterStaticTransforms(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterStaticTransforms", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_ScatterStaticTransforms()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterStaticTransforms", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_ScatterInitDynamicTransforms(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterInitDynamicTransforms", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_ScatterInitDynamicTransforms()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterInitDynamicTransforms", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_ScatterUpdateDynamicTransforms(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUpdateDynamicTransforms", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_ScatterUpdateDynamicTransforms()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUpdateDynamicTransforms", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_ScatterSH(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterSH", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_ScatterSH()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterSH", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_ScatterUint(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUint", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_ScatterUint()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUint", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_ScatterUint2(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUint2", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_ScatterUint2()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUint2", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_ScatterUint4(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUint4", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_ScatterUint4()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterUint4", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
inline void MA::Flora::InstanceBufferUpload_Profiling::setStaticF_Copy(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "Copy", ::MA::Flora::InstanceBufferUpload_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::InstanceBufferUpload_Profiling::getStaticF_Copy()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "Copy", ::MA::Flora::InstanceBufferUpload_Profiling*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceBufferUpload_Profiling::InstanceBufferUpload_Profiling()   {
}
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::InstanceBufferUpload::Initialize)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18145bc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.ScatterStaticTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>)>(&::MA::Flora::InstanceBufferUpload::ScatterStaticTransforms)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18145c430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterStaticTransforms", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.ScatterInitDynamicTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>)>(&::MA::Flora::InstanceBufferUpload::ScatterInitDynamicTransforms)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18145bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterInitDynamicTransforms", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.ScatterUpdateDynamicTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>)>(&::MA::Flora::InstanceBufferUpload::ScatterUpdateDynamicTransforms)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18145cde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUpdateDynamicTransforms", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.ScatterSH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>, ::Unity::Collections::NativeArray_1<::MA::Flora::SHUpdatePacket>, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>)>(&::MA::Flora::InstanceBufferUpload::ScatterSH)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18145c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterSH", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::SHUpdatePacket>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.ScatterUint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>, ::Unity::Collections::NativeArray_1<uint32_t>)>(&::MA::Flora::InstanceBufferUpload::ScatterUint)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18145cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUint", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.ScatterUint2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>)>(&::MA::Flora::InstanceBufferUpload::ScatterUint2)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18145c690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUint2", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.ScatterUint4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>)>(&::MA::Flora::InstanceBufferUpload::ScatterUint4)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18145c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUint4", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBufferUpload.CopyComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::Unity::Collections::NativeArray_1<::MA::Flora::BufferCopyCommand>)>(&::MA::Flora::InstanceBufferUpload::CopyComponents)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18145bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"CopyComponents", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::BufferCopyCommand>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::InstanceBufferUpload::Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runtimeResources);
}
inline void MA::Flora::InstanceBufferUpload::ScatterStaticTransforms(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  transformAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  matrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterStaticTransforms", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, instanceBuffer, transformAddressBuffer, chunkHeaders, matrices);
}
inline void MA::Flora::InstanceBufferUpload::ScatterInitDynamicTransforms(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  transformAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  matrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterInitDynamicTransforms", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, instanceBuffer, transformAddressBuffer, chunkHeaders, matrices);
}
inline void MA::Flora::InstanceBufferUpload::ScatterUpdateDynamicTransforms(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  transformAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  matrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUpdateDynamicTransforms", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, instanceBuffer, transformAddressBuffer, chunkHeaders, matrices);
}
inline void MA::Flora::InstanceBufferUpload::ScatterSH(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::SHUpdatePacket>  shPackets, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  occlusion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterSH", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::SHUpdatePacket>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, instanceBuffer, batchAddressBuffer, chunkHeaders, shPackets, occlusion);
}
inline void MA::Flora::InstanceBufferUpload::ScatterUint(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<uint32_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUint", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, instanceBuffer, batchAddressBuffer, chunkHeaders, values);
}
inline void MA::Flora::InstanceBufferUpload::ScatterUint2(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUint2", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, instanceBuffer, batchAddressBuffer, chunkHeaders, values);
}
inline void MA::Flora::InstanceBufferUpload::ScatterUint4(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"ScatterUint4", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, instanceBuffer, batchAddressBuffer, chunkHeaders, values);
}
inline void MA::Flora::InstanceBufferUpload::CopyComponents(::UnityEngine::GraphicsBuffer*  srcBuffer, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::BufferCopyCommand>  commands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBufferUpload*>(),
                        {"CopyComponents", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::BufferCopyCommand>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, srcBuffer, dstBuffer, commands);
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceBufferUpload::InstanceBufferUpload()   {
}
