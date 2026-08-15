#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferUtility.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferUtility_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferUtility_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ComputeCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
inline void MA::Flora::GraphicsBufferUtility_Profiling::setStaticF_MemsetMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MemsetMarker", ::MA::Flora::GraphicsBufferUtility_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::GraphicsBufferUtility_Profiling::getStaticF_MemsetMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MemsetMarker", ::MA::Flora::GraphicsBufferUtility_Profiling*>();
}
inline void MA::Flora::GraphicsBufferUtility_Profiling::setStaticF_MemcpyMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "MemcpyMarker", ::MA::Flora::GraphicsBufferUtility_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::GraphicsBufferUtility_Profiling::getStaticF_MemcpyMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "MemcpyMarker", ::MA::Flora::GraphicsBufferUtility_Profiling*>();
}
inline void MA::Flora::GraphicsBufferUtility_Profiling::setStaticF_ScatterMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "ScatterMarker", ::MA::Flora::GraphicsBufferUtility_Profiling*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker MA::Flora::GraphicsBufferUtility_Profiling::getStaticF_ScatterMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "ScatterMarker", ::MA::Flora::GraphicsBufferUtility_Profiling*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferUtility_Profiling::GraphicsBufferUtility_Profiling()   {
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_Shader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "Shader", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::GraphicsBufferUtility_Compute::getStaticF_Shader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "Shader", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_CommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::CommandBuffer*, "CommandBuffer", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityEngine::Rendering::CommandBuffer*>(value));
}
inline ::UnityEngine::Rendering::CommandBuffer* MA::Flora::GraphicsBufferUtility_Compute::getStaticF_CommandBuffer()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CommandBuffer*, "CommandBuffer", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_MemsetKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MemsetKernel", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_Compute::getStaticF_MemsetKernel()  {
return ::cordl_internals::getStaticField<int32_t, "MemsetKernel", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_MemcpyKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MemcpyKernel", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_Compute::getStaticF_MemcpyKernel()  {
return ::cordl_internals::getStaticField<int32_t, "MemcpyKernel", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_ScatterKernel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterKernel", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_Compute::getStaticF_ScatterKernel()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterKernel", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_RawUIntKeyword(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "RawUIntKeyword", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword MA::Flora::GraphicsBufferUtility_Compute::getStaticF_RawUIntKeyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "RawUIntKeyword", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_RawUInt4AlignedKeyword(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "RawUInt4AlignedKeyword", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword MA::Flora::GraphicsBufferUtility_Compute::getStaticF_RawUInt4AlignedKeyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "RawUInt4AlignedKeyword", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_StructuredUInt1Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt1Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword MA::Flora::GraphicsBufferUtility_Compute::getStaticF_StructuredUInt1Keyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt1Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_StructuredUInt2Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt2Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword MA::Flora::GraphicsBufferUtility_Compute::getStaticF_StructuredUInt2Keyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt2Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_StructuredUInt4Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt4Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword MA::Flora::GraphicsBufferUtility_Compute::getStaticF_StructuredUInt4Keyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt4Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
inline void MA::Flora::GraphicsBufferUtility_Compute::setStaticF_StructuredUInt8Keyword(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt8Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword MA::Flora::GraphicsBufferUtility_Compute::getStaticF_StructuredUInt8Keyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "StructuredUInt8Keyword", ::MA::Flora::GraphicsBufferUtility_Compute*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferUtility_Compute::GraphicsBufferUtility_Compute()   {
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_Value(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Value", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_Value()  {
return ::cordl_internals::getStaticField<int32_t, "Value", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_Size(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Size", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_Size()  {
return ::cordl_internals::getStaticField<int32_t, "Size", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_SrcOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SrcOffset", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_SrcOffset()  {
return ::cordl_internals::getStaticField<int32_t, "SrcOffset", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_DstOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DstOffset", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_DstOffset()  {
return ::cordl_internals::getStaticField<int32_t, "DstOffset", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_SrcByteBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SrcByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_SrcByteBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "SrcByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_DstByteBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DstByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_DstByteBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "DstByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_ScatterCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterCount", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_ScatterCount()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterCount", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_ScatterByteBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_ScatterByteBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_UploadByteBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UploadByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_UploadByteBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "UploadByteBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_ScatterStructuredBuffer(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ScatterStructuredBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_ScatterStructuredBuffer()  {
return ::cordl_internals::getStaticField<int32_t, "ScatterStructuredBuffer", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_UploadStructuredBuffer1(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UploadStructuredBuffer1", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_UploadStructuredBuffer1()  {
return ::cordl_internals::getStaticField<int32_t, "UploadStructuredBuffer1", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_UploadStructuredBuffer2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UploadStructuredBuffer2", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_UploadStructuredBuffer2()  {
return ::cordl_internals::getStaticField<int32_t, "UploadStructuredBuffer2", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_UploadStructuredBuffer4(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UploadStructuredBuffer4", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_UploadStructuredBuffer4()  {
return ::cordl_internals::getStaticField<int32_t, "UploadStructuredBuffer4", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_UploadStructuredBuffer8(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "UploadStructuredBuffer8", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_UploadStructuredBuffer8()  {
return ::cordl_internals::getStaticField<int32_t, "UploadStructuredBuffer8", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_SrcStructuredBuffer1(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SrcStructuredBuffer1", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_SrcStructuredBuffer1()  {
return ::cordl_internals::getStaticField<int32_t, "SrcStructuredBuffer1", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_SrcStructuredBuffer2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SrcStructuredBuffer2", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_SrcStructuredBuffer2()  {
return ::cordl_internals::getStaticField<int32_t, "SrcStructuredBuffer2", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_SrcStructuredBuffer4(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SrcStructuredBuffer4", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_SrcStructuredBuffer4()  {
return ::cordl_internals::getStaticField<int32_t, "SrcStructuredBuffer4", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_SrcStructuredBuffer8(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SrcStructuredBuffer8", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_SrcStructuredBuffer8()  {
return ::cordl_internals::getStaticField<int32_t, "SrcStructuredBuffer8", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_DstStructuredBuffer1(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DstStructuredBuffer1", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_DstStructuredBuffer1()  {
return ::cordl_internals::getStaticField<int32_t, "DstStructuredBuffer1", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_DstStructuredBuffer2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DstStructuredBuffer2", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_DstStructuredBuffer2()  {
return ::cordl_internals::getStaticField<int32_t, "DstStructuredBuffer2", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_DstStructuredBuffer4(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DstStructuredBuffer4", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_DstStructuredBuffer4()  {
return ::cordl_internals::getStaticField<int32_t, "DstStructuredBuffer4", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
inline void MA::Flora::GraphicsBufferUtility_LocalNameID::setStaticF_DstStructuredBuffer8(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DstStructuredBuffer8", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>(std::forward<int32_t>(value));
}
inline int32_t MA::Flora::GraphicsBufferUtility_LocalNameID::getStaticF_DstStructuredBuffer8()  {
return ::cordl_internals::getStaticField<int32_t, "DstStructuredBuffer8", ::MA::Flora::GraphicsBufferUtility_LocalNameID*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferUtility_LocalNameID::GraphicsBufferUtility_LocalNameID()   {
}
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814fbbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::*)(::UnityEngine::GraphicsBuffer*, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1790;
  constexpr static std::size_t addrs = 0x181309030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::*)(::UnityEngine::GraphicsBuffer*, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814fb9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::Invoke(::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elemSize);
}
inline ::System::IAsyncResult* MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::BeginInvoke(::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elemSize, callback, object);
}
inline void MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate* MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1814f7590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804a33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x1814f7010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::Invoke(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elemSize);
}
inline ::System::IAsyncResult* MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::BeginInvoke(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, cmd, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elemSize, callback, object);
}
inline void MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate* MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate()   {
}
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::_ctor)> {
  constexpr static std::size_t size = 0x7ce0;
  constexpr static std::size_t addrs = 0x18139c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::*)(::UnityEngine::Rendering::ComputeCommandBuffer*)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::*)(::UnityEngine::Rendering::ComputeCommandBuffer*, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::*)(::System::IAsyncResult*)>(&::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(),
                    {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::Rendering::CommandBuffer* MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::Invoke(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method, cmd);
}
inline ::System::IAsyncResult* MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::BeginInvoke(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, cmd, callback, object);
}
inline ::UnityEngine::Rendering::CommandBuffer* MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method, result);
}
inline ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate* MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate()   {
}
inline void MA::Flora::GraphicsBufferUtility_Delegates::setStaticF_GraphicsBufferSetData(::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*  value)  {
::cordl_internals::setStaticField<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*, "GraphicsBufferSetData", ::MA::Flora::GraphicsBufferUtility_Delegates*>(std::forward<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*>(value));
}
inline ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate* MA::Flora::GraphicsBufferUtility_Delegates::getStaticF_GraphicsBufferSetData()  {
return ::cordl_internals::getStaticField<::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*, "GraphicsBufferSetData", ::MA::Flora::GraphicsBufferUtility_Delegates*>();
}
inline void MA::Flora::GraphicsBufferUtility_Delegates::setStaticF_CmdSetDataBufferDataGb(::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*  value)  {
::cordl_internals::setStaticField<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*, "CmdSetDataBufferDataGb", ::MA::Flora::GraphicsBufferUtility_Delegates*>(std::forward<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*>(value));
}
inline ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate* MA::Flora::GraphicsBufferUtility_Delegates::getStaticF_CmdSetDataBufferDataGb()  {
return ::cordl_internals::getStaticField<::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*, "CmdSetDataBufferDataGb", ::MA::Flora::GraphicsBufferUtility_Delegates*>();
}
inline void MA::Flora::GraphicsBufferUtility_Delegates::setStaticF_GetWrappedCommandBuffer(::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*  value)  {
::cordl_internals::setStaticField<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*, "GetWrappedCommandBuffer", ::MA::Flora::GraphicsBufferUtility_Delegates*>(std::forward<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*>(value));
}
inline ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate* MA::Flora::GraphicsBufferUtility_Delegates::getStaticF_GetWrappedCommandBuffer()  {
return ::cordl_internals::getStaticField<::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*, "GetWrappedCommandBuffer", ::MA::Flora::GraphicsBufferUtility_Delegates*>();
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferUtility_Delegates::GraphicsBufferUtility_Delegates()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize::GraphicsBufferUtility_StructuredBufferSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize::GraphicsBufferUtility_StructuredBufferSize()   {
}
constexpr ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize  MA::Flora::GraphicsBufferUtility_StructuredBufferSize::Size1{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize  MA::Flora::GraphicsBufferUtility_StructuredBufferSize::Size2{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize  MA::Flora::GraphicsBufferUtility_StructuredBufferSize::Size4{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize  MA::Flora::GraphicsBufferUtility_StructuredBufferSize::Size8{static_cast<int32_t>(0x3)};
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferUtility___InteropDelegates::GraphicsBufferUtility___InteropDelegates()   {
}
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.InitializeOnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferUtility::InitializeOnLoad)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1814fe230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::GraphicsBufferUtility::Initialize)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1814fe500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.ResetInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferUtility::ResetInternal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814ff2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResetInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.ResetKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferUtility::ResetKeywords)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814ff500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResetKeywords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.ResetKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(&::MA::Flora::GraphicsBufferUtility::ResetKeywords)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814ff3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResetKeywords", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.GetStructuredBufferElementSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferUtility_StructuredBufferSize (*)(int32_t)>(&::MA::Flora::GraphicsBufferUtility::GetStructuredBufferElementSize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814fe130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"GetStructuredBufferElementSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.Memset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::Memset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814ff200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memset", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.Memset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::Memset)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1814fee20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memset", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.Memcpy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::Memcpy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814fed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memcpy", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.Memcpy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::Memcpy)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1814fe8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memcpy", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.Scatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::Scatter)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x1814ff990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Scatter", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.ResizeIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::GraphicsBuffer*>, int32_t, int32_t, ::UnityEngine::GraphicsBuffer_Target, ::StringW)>(&::MA::Flora::GraphicsBufferUtility::ResizeIfNeeded)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814ff660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResizeIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.ResizeSOAIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::GraphicsBuffer*>, int32_t, int32_t, int32_t, ::UnityEngine::GraphicsBuffer_Target, ::StringW)>(&::MA::Flora::GraphicsBufferUtility::ResizeSOAIfNeeded)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814ff7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResizeSOAIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.GetWrappedCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::CommandBuffer* (*)(::UnityEngine::Rendering::ComputeCommandBuffer*)>(&::MA::Flora::GraphicsBufferUtility::GetWrappedCommandBuffer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814fe1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"GetWrappedCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*, void*, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::SetData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fffd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetData", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.SetBufferData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, void*, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::SetBufferData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814fff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetBufferData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*, void*, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::SetData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fff70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetData", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.SetBufferData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::GraphicsBuffer*, void*, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferUtility::SetBufferData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814c2590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetBufferData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility.__InteropIsBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::MA::Flora::GraphicsBufferUtility::__InteropIsBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181477870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"__InteropIsBurst", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility._EarlyInitInterop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferUtility::_EarlyInitInterop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181500030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"_EarlyInitInterop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferUtility._LateInitInterop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferUtility::_LateInitInterop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"_LateInitInterop", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::GraphicsBufferUtility::InitializeOnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"InitializeOnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::GraphicsBufferUtility::Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runtimeResources);
}
inline void MA::Flora::GraphicsBufferUtility::ResetInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResetInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::GraphicsBufferUtility::ResetKeywords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResetKeywords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::GraphicsBufferUtility::ResetKeywords(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResetKeywords", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd);
}
inline ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize MA::Flora::GraphicsBufferUtility::GetStructuredBufferElementSize(int32_t  strideInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"GetStructuredBufferElementSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferUtility_StructuredBufferSize>(nullptr, ___internal_method, strideInBytes);
}
inline void MA::Flora::GraphicsBufferUtility::Memset(::UnityEngine::GraphicsBuffer*  buffer, int32_t  value, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memset", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, value, offset, count);
}
inline void MA::Flora::GraphicsBufferUtility::Memset(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  value, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memset", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, value, offset, count);
}
inline void MA::Flora::GraphicsBufferUtility::Memcpy(::UnityEngine::GraphicsBuffer*  dstBuffer, ::UnityEngine::GraphicsBuffer*  srcBuffer, int32_t  srcOffset, int32_t  dstOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memcpy", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dstBuffer, srcBuffer, srcOffset, dstOffset, count);
}
inline void MA::Flora::GraphicsBufferUtility::Memcpy(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::UnityEngine::GraphicsBuffer*  srcBuffer, int32_t  srcOffset, int32_t  dstOffset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Memcpy", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, dstBuffer, srcBuffer, srcOffset, dstOffset, count);
}
template<typename T>
inline void MA::Flora::GraphicsBufferUtility::Scatter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::Unity::Collections::NativeArray_1<T>  values, ::Unity::Collections::NativeArray_1<uint32_t>  offsets)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                    {"Scatter", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, dstBuffer, values, offsets);
}
template<typename T>
inline void MA::Flora::GraphicsBufferUtility::Scatter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::Unity::Collections::NativeArray_1<T>  values, ::UnityEngine::GraphicsBuffer*  offsetBuffer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                    {"Scatter", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, dstBuffer, values, offsetBuffer);
}
inline void MA::Flora::GraphicsBufferUtility::Scatter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::UnityEngine::GraphicsBuffer*  valueBuffer, ::UnityEngine::GraphicsBuffer*  offsetBuffer, int32_t  count, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"Scatter", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, dstBuffer, valueBuffer, offsetBuffer, count, stride);
}
inline bool MA::Flora::GraphicsBufferUtility::ResizeIfNeeded(::by_ref<::UnityEngine::GraphicsBuffer*>  buffer, int32_t  stride, int32_t  sizeInBytes, ::UnityEngine::GraphicsBuffer_Target  target, ::StringW  debugName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResizeIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, stride, sizeInBytes, target, debugName);
}
inline bool MA::Flora::GraphicsBufferUtility::ResizeSOAIfNeeded(::by_ref<::UnityEngine::GraphicsBuffer*>  buffer, int32_t  stride, int32_t  sizeInBytes, int32_t  arrayCount, ::UnityEngine::GraphicsBuffer_Target  target, ::StringW  debugName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"ResizeSOAIfNeeded", {}, {::i2c::type_of<::by_ref<::UnityEngine::GraphicsBuffer*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, stride, sizeInBytes, arrayCount, target, debugName);
}
inline ::UnityEngine::Rendering::CommandBuffer* MA::Flora::GraphicsBufferUtility::GetWrappedCommandBuffer(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"GetWrappedCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::ComputeCommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(nullptr, ___internal_method, cmd);
}
inline void MA::Flora::GraphicsBufferUtility::SetData(::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetData", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, ptr, nativeBufferStartIndex, graphicsBufferStartIndex, count, stride);
}
inline void MA::Flora::GraphicsBufferUtility::SetBufferData(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetBufferData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, ptr, nativeBufferStartIndex, graphicsBufferStartIndex, count, stride);
}
inline void MA::Flora::GraphicsBufferUtility::SetData(::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  count, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetData", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, ptr, count, stride);
}
inline void MA::Flora::GraphicsBufferUtility::SetBufferData(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  count, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"SetBufferData", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, ptr, count, stride);
}
inline void MA::Flora::GraphicsBufferUtility::__InteropIsBurst(::by_ref<bool>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"__InteropIsBurst", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status);
}
inline void MA::Flora::GraphicsBufferUtility::_EarlyInitInterop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"_EarlyInitInterop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::GraphicsBufferUtility::_LateInitInterop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferUtility*>(),
                        {"_LateInitInterop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferUtility::GraphicsBufferUtility()   {
}
