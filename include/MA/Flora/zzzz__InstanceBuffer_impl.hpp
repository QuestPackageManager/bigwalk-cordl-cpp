#pragma once
// IWYU pragma private; include "MA/Flora/InstanceBuffer.hpp"
#include "MA/Flora/zzzz__BatchCullingAddresses_impl.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__BatchDomainLayout_impl.hpp"
#include "MA/Flora/zzzz__BatchMetadataDescriptor_impl.hpp"
#include "MA/Flora/zzzz__BatchTransformAddresses_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_impl.hpp"
#include "MA/Flora/zzzz__InstanceManager_impl.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_impl.hpp"
#include "MA/Flora/zzzz__NativeRegionAllocator_impl.hpp"
#include "MA/Flora/zzzz__PersistentGraphicsBufferRef_1_impl.hpp"
#include "MA/Flora/zzzz__UnsafeBitSet_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_impl.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_def.hpp"
#include "MA/Flora/zzzz__BatchAllocation_def.hpp"
#include "MA/Flora/zzzz__BatchBuiltinPropertyFlags_def.hpp"
#include "MA/Flora/zzzz__BatchCullingAddresses_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__BatchMetadataDescriptor_def.hpp"
#include "MA/Flora/zzzz__BatchTransformAddresses_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__PersistentGraphicsBufferRef_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_LayoutVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_LayoutVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_LayoutVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_ContentVersionScheduled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_ContentVersionScheduled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_ContentVersionScheduled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_ContentVersionApplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_ContentVersionApplied)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_ContentVersionApplied", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainBatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainBatches)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainBatches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainDescriptors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainDescriptors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180de9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainDescriptors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainRandomIdAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainRandomIdAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814542d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainRandomIdAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainVariationColorAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainVariationColorAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainVariationColorAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainLightmapSTAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainLightmapSTAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814542b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainLightmapSTAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainSHCoefficientsAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainSHCoefficientsAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814542f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainSHCoefficientsAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainEntityIdAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainEntityIdAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainEntityIdAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainCullingAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainCullingAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainCullingAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DomainTransformAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses> (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DomainTransformAddresses)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainTransformAddresses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_DataBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_DataBuffer)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x18145f050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DataBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.get_AllocatedSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::get_AllocatedSizeInBytes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18145efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_AllocatedSizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceBuffer::*)(::MA::Flora::InstanceContext, ::MA::Flora::FloraRuntimeResources*)>(&::MA::Flora::InstanceBuffer::Initialize)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x18145d870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::Dispose)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x18145d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceBuffer::*)(::MA::Flora::BatchDomainIndex)>(&::MA::Flora::InstanceBuffer::Exists)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18145d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.GetBatchID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchID (::MA::Flora::InstanceBuffer::*)(::MA::Flora::BatchDomainIndex)>(&::MA::Flora::InstanceBuffer::GetBatchID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"GetBatchID", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.InstanceAddressOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceBuffer::*)(::MA::Flora::BatchDomainIndex, int32_t)>(&::MA::Flora::InstanceBuffer::InstanceAddressOf)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18145dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"InstanceAddressOf", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.GetOrCreateDomain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchDomainIndex (::MA::Flora::InstanceBuffer::*)(::MA::Flora::BatchBuiltinPropertyFlags)>(&::MA::Flora::InstanceBuffer::GetOrCreateDomain)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18145d740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"GetOrCreateDomain", {}, {::i2c::type_of<::MA::Flora::BatchBuiltinPropertyFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.GetOrCreateDomain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchDomainIndex (::MA::Flora::InstanceBuffer::*)(::by_ref<::MA::Flora::BatchMetadataDescriptor>)>(&::MA::Flora::InstanceBuffer::GetOrCreateDomain)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18145d500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"GetOrCreateDomain", {}, {::i2c::type_of<::by_ref<::MA::Flora::BatchMetadataDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::BatchAllocation (::MA::Flora::InstanceBuffer::*)(::MA::Flora::BatchDomainIndex, int32_t)>(&::MA::Flora::InstanceBuffer::Allocate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18145d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Allocate", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceBuffer::*)(::MA::Flora::BatchAllocation)>(&::MA::Flora::InstanceBuffer::Free)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18145d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Free", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.UpdateLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceBuffer::*)(::UnityEngine::Rendering::BatchRendererGroup*, bool)>(&::MA::Flora::InstanceBuffer::UpdateLayout)> {
  constexpr static std::size_t size = 0x1120;
  constexpr static std::size_t addrs = 0x18145dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"UpdateLayout", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.IsUploadScheduled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::IsUploadScheduled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"IsUploadScheduled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.IsUploadScheduledFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceBuffer::*)(uint32_t)>(&::MA::Flora::InstanceBuffer::IsUploadScheduledFor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145de40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"IsUploadScheduledFor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.HasStaleScheduledUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceBuffer::*)(uint32_t)>(&::MA::Flora::InstanceBuffer::HasStaleScheduledUpload)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18145d840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"HasStaleScheduledUpload", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.ScheduleUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceBuffer::*)(uint32_t)>(&::MA::Flora::InstanceBuffer::ScheduleUpload)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18145de80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"ScheduleUpload", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceBuffer.ApplyUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceBuffer::*)()>(&::MA::Flora::InstanceBuffer::ApplyUpload)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18145d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"ApplyUpload", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t MA::Flora::InstanceBuffer::get_LayoutVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_LayoutVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t MA::Flora::InstanceBuffer::get_ContentVersionScheduled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_ContentVersionScheduled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t MA::Flora::InstanceBuffer::get_ContentVersionApplied()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_ContentVersionApplied", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::InstanceBuffer::get_DomainCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID> MA::Flora::InstanceBuffer::get_DomainBatches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainBatches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor> MA::Flora::InstanceBuffer::get_DomainDescriptors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainDescriptors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor>>(*this, ___internal_method);
}
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> MA::Flora::InstanceBuffer::get_DomainRandomIdAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainRandomIdAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> MA::Flora::InstanceBuffer::get_DomainVariationColorAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainVariationColorAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> MA::Flora::InstanceBuffer::get_DomainLightmapSTAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainLightmapSTAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> MA::Flora::InstanceBuffer::get_DomainSHCoefficientsAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainSHCoefficientsAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> MA::Flora::InstanceBuffer::get_DomainEntityIdAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainEntityIdAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses> MA::Flora::InstanceBuffer::get_DomainCullingAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainCullingAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses>>(*this, ___internal_method);
}
inline ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses> MA::Flora::InstanceBuffer::get_DomainTransformAddresses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DomainTransformAddresses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses>>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* MA::Flora::InstanceBuffer::get_DataBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_DataBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline int64_t MA::Flora::InstanceBuffer::get_AllocatedSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"get_AllocatedSizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline void MA::Flora::InstanceBuffer::Initialize(::MA::Flora::InstanceContext  instanceContext, ::MA::Flora::FloraRuntimeResources*  runtimeResources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::InstanceContext>(), ::i2c::type_of<::MA::Flora::FloraRuntimeResources*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instanceContext, runtimeResources);
}
inline void MA::Flora::InstanceBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::InstanceBuffer::Exists(::MA::Flora::BatchDomainIndex  domainIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, domainIndex);
}
inline ::UnityEngine::Rendering::BatchID MA::Flora::InstanceBuffer::GetBatchID(::MA::Flora::BatchDomainIndex  domainIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"GetBatchID", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchID>(*this, ___internal_method, domainIndex);
}
inline int32_t MA::Flora::InstanceBuffer::InstanceAddressOf(::MA::Flora::BatchDomainIndex  domainIndex, int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"InstanceAddressOf", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, domainIndex, nameID);
}
inline ::MA::Flora::BatchDomainIndex MA::Flora::InstanceBuffer::GetOrCreateDomain(::MA::Flora::BatchBuiltinPropertyFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"GetOrCreateDomain", {}, {::i2c::type_of<::MA::Flora::BatchBuiltinPropertyFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchDomainIndex>(*this, ___internal_method, flags);
}
inline ::MA::Flora::BatchDomainIndex MA::Flora::InstanceBuffer::GetOrCreateDomain(::by_ref<::MA::Flora::BatchMetadataDescriptor>  metadata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"GetOrCreateDomain", {}, {::i2c::type_of<::by_ref<::MA::Flora::BatchMetadataDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchDomainIndex>(*this, ___internal_method, metadata);
}
inline ::MA::Flora::BatchAllocation MA::Flora::InstanceBuffer::Allocate(::MA::Flora::BatchDomainIndex  domainIndex, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Allocate", {}, {::i2c::type_of<::MA::Flora::BatchDomainIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::BatchAllocation>(*this, ___internal_method, domainIndex, instanceCount);
}
inline void MA::Flora::InstanceBuffer::Free(::MA::Flora::BatchAllocation  batchAllocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"Free", {}, {::i2c::type_of<::MA::Flora::BatchAllocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, batchAllocation);
}
inline bool MA::Flora::InstanceBuffer::UpdateLayout(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"UpdateLayout", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, batchRendererGroup, forceUpdate);
}
inline bool MA::Flora::InstanceBuffer::IsUploadScheduled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"IsUploadScheduled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::InstanceBuffer::IsUploadScheduledFor(uint32_t  contentVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"IsUploadScheduledFor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, contentVersion);
}
inline bool MA::Flora::InstanceBuffer::HasStaleScheduledUpload(uint32_t  contentVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"HasStaleScheduledUpload", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, contentVersion);
}
inline bool MA::Flora::InstanceBuffer::ScheduleUpload(uint32_t  contentVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"ScheduleUpload", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, contentVersion);
}
inline void MA::Flora::InstanceBuffer::ApplyUpload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceBuffer>(),
                        {"ApplyUpload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::InstanceBuffer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::InstanceBuffer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SceneHasLightProbes", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LayoutDirty", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextTypeId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainHash", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::BatchMetadataDescriptor,::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatedDomains", ty: "::MA::Flora::UnsafeBitSet", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FreeDomainsIDs", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainBatches", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainDescriptors", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainAllocators", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::NativeRegionAllocator>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainLayouts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainLayout>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainRandomIdAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainVariationColorAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainLightmapSTAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainSHCoefficientsAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainEntityIdAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainCullingAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainTransformAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DomainCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DataBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LayoutVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContentVersionScheduled", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContentVersionApplied", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceBuffer::InstanceBuffer(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, bool  m_SceneHasLightProbes, bool  m_LayoutDirty, int32_t  m_NextTypeId, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::BatchMetadataDescriptor,::MA::Flora::BatchDomainIndex>  m_DomainHash, ::MA::Flora::UnsafeBitSet  m_AllocatedDomains, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchDomainIndex>  m_FreeDomainsIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  m_DomainBatches, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor>  m_DomainDescriptors, ::Unity::Collections::NativeArray_1<::MA::Flora::NativeRegionAllocator>  m_DomainAllocators, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainLayout>  m_DomainLayouts, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainRandomIdAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainVariationColorAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainLightmapSTAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainSHCoefficientsAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainEntityIdAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses>  m_DomainCullingAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses>  m_DomainTransformAddresses, int32_t  m_DomainCount, ::MA::Flora::GraphicsBufferRef  m_DataBuffer, uint32_t  m_LayoutVersion, uint32_t  m_ContentVersionScheduled, uint32_t  m_ContentVersionApplied) noexcept  {
this->m_InstanceManager = m_InstanceManager;
this->m_SceneHasLightProbes = m_SceneHasLightProbes;
this->m_LayoutDirty = m_LayoutDirty;
this->m_NextTypeId = m_NextTypeId;
this->m_DomainHash = m_DomainHash;
this->m_AllocatedDomains = m_AllocatedDomains;
this->m_FreeDomainsIDs = m_FreeDomainsIDs;
this->m_DomainBatches = m_DomainBatches;
this->m_DomainDescriptors = m_DomainDescriptors;
this->m_DomainAllocators = m_DomainAllocators;
this->m_DomainLayouts = m_DomainLayouts;
this->m_DomainRandomIdAddresses = m_DomainRandomIdAddresses;
this->m_DomainVariationColorAddresses = m_DomainVariationColorAddresses;
this->m_DomainLightmapSTAddresses = m_DomainLightmapSTAddresses;
this->m_DomainSHCoefficientsAddresses = m_DomainSHCoefficientsAddresses;
this->m_DomainEntityIdAddresses = m_DomainEntityIdAddresses;
this->m_DomainCullingAddresses = m_DomainCullingAddresses;
this->m_DomainTransformAddresses = m_DomainTransformAddresses;
this->m_DomainCount = m_DomainCount;
this->m_DataBuffer = m_DataBuffer;
this->m_LayoutVersion = m_LayoutVersion;
this->m_ContentVersionScheduled = m_ContentVersionScheduled;
this->m_ContentVersionApplied = m_ContentVersionApplied;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceBuffer::InstanceBuffer()   {
}
