#pragma once
// IWYU pragma private; include "MA/Flora/InstanceRegistry.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "MA/Flora/zzzz__InstanceRegistry_def.hpp"
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
#include "MA/Flora/zzzz__DetailInTerrain_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__InstanceInChunk_def.hpp"
#include "MA/Flora/zzzz__InstanceInContainer_def.hpp"
#include "MA/Flora/zzzz__InstanceInSourceRecord_def.hpp"
#include "MA/Flora/zzzz__InstanceRegistry_def.hpp"
#include "MA/Flora/zzzz__InstanceRendererIndex_def.hpp"
#include "MA/Flora/zzzz__TreeInTerrain_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer::InstanceRegistry__m_DataBlocks_e__FixedBuffer(uint64_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer::InstanceRegistry__m_DataBlocks_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer::InstanceRegistry__m_InstanceCount_e__FixedBuffer(int32_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer::InstanceRegistry__m_InstanceCount_e__FixedBuffer()   {
}
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::MA::Flora::InstanceRegistry> (*)()>(&::MA::Flora::InstanceRegistry::get_Data)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181483480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.get_ThreadUnsafeInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::InstanceRegistry::*)()>(&::MA::Flora::InstanceRegistry::get_ThreadUnsafeInstanceCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814834a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"get_ThreadUnsafeInstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.ValidateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)()>(&::MA::Flora::InstanceRegistry::ValidateInstances)> {
  constexpr static std::size_t size = 0xa670;
  constexpr static std::size_t addrs = 0x180631430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"ValidateInstances", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.DebugOnlyThrowIfInstanceDoesntExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::InstanceRegistry_DataBlock*, int32_t)>(&::MA::Flora::InstanceRegistry::DebugOnlyThrowIfInstanceDoesntExist)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181482b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DebugOnlyThrowIfInstanceDoesntExist", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceRegistry_DataBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetInstanceByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FloraInstanceHandle (::MA::Flora::InstanceRegistry::*)(int32_t)>(&::MA::Flora::InstanceRegistry::GetInstanceByIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181482db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::Exists)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181482cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetInstanceVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, int32_t)>(&::MA::Flora::InstanceRegistry::SetInstanceVersion)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181483310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceVersion", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetInstanceInChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInChunk (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::GetInstanceInChunk)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181482e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceInChunk", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetInstanceInChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::InstanceInChunk)>(&::MA::Flora::InstanceRegistry::SetInstanceInChunk)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181483190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceInChunk", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceInChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetInstanceInSourceRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInSourceRecord (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::GetInstanceInSourceRecord)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181482f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceInSourceRecord", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetInstanceInSourceRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::InstanceInSourceRecord)>(&::MA::Flora::InstanceRegistry::SetInstanceInSourceRecord)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181483250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceInSourceRecord", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceInSourceRecord>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetInstanceInContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceInContainer (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::GetInstanceInContainer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181482e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetInstanceInContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::InstanceInContainer)>(&::MA::Flora::InstanceRegistry::SetInstanceInContainer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814831f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceInContainer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetTreeInTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TreeInTerrain (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::GetTreeInTerrain)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814830b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetTreeInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetTreeInTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::TreeInTerrain)>(&::MA::Flora::InstanceRegistry::SetTreeInTerrain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814833d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetTreeInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::TreeInTerrain>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetDetailInTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DetailInTerrain (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::GetDetailInTerrain)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181482d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetDetailInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetDetailInTerrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::DetailInTerrain)>(&::MA::Flora::InstanceRegistry::SetDetailInTerrain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181483130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetDetailInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::DetailInTerrain>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetSceneEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EntityId (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::GetSceneEntityId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181483020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetSceneEntityId", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetSceneEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::UnityEngine::EntityId)>(&::MA::Flora::InstanceRegistry::SetSceneEntityId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181483370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetSceneEntityId", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.GetInstanceRendererIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::InstanceRendererIndex (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle)>(&::MA::Flora::InstanceRegistry::GetInstanceRendererIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181482f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceRendererIndex", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.SetInstanceRendererIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle, ::MA::Flora::InstanceRendererIndex)>(&::MA::Flora::InstanceRegistry::SetInstanceRendererIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814832b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceRendererIndex", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceRendererIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.AllocateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>)>(&::MA::Flora::InstanceRegistry::AllocateInstances)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181482490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"AllocateInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.AllocateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle*, int32_t)>(&::MA::Flora::InstanceRegistry::AllocateInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181482430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"AllocateInstances", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.AllocateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle*, int32_t, ::MA::Flora::ChunkIndex, int32_t)>(&::MA::Flora::InstanceRegistry::AllocateInstances)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x181482500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"AllocateInstances", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.DeallocateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>)>(&::MA::Flora::InstanceRegistry::DeallocateInstances)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181482860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DeallocateInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.DeallocateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::System::Span_1<::MA::Flora::FloraInstanceHandle>)>(&::MA::Flora::InstanceRegistry::DeallocateInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DeallocateInstances", {}, {::i2c::type_of<::System::Span_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.DeallocateInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)(::MA::Flora::FloraInstanceHandle*, int32_t)>(&::MA::Flora::InstanceRegistry::DeallocateInstances)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181482900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DeallocateInstances", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::InstanceRegistry::*)()>(&::MA::Flora::InstanceRegistry::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181482c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::InstanceRegistry._DebugOnlyThrowIfInstanceDoesntExist_g__MissingInBitmask_13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::MA::Flora::InstanceRegistry___c__DisplayClass13_0>)>(&::MA::Flora::InstanceRegistry::_DebugOnlyThrowIfInstanceDoesntExist_g__MissingInBitmask_13_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181483430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"<DebugOnlyThrowIfInstanceDoesntExist>g__MissingInBitmask|13_0", {}, {::i2c::type_of<::by_ref<::MA::Flora::InstanceRegistry___c__DisplayClass13_0>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::by_ref<::MA::Flora::InstanceRegistry> MA::Flora::InstanceRegistry::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::MA::Flora::InstanceRegistry>>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::InstanceRegistry::get_ThreadUnsafeInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"get_ThreadUnsafeInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::InstanceRegistry::ValidateInstances()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"ValidateInstances", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::InstanceRegistry::DebugOnlyThrowIfInstanceDoesntExist(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceRegistry_DataBlock*  block, int32_t  indexInBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DebugOnlyThrowIfInstanceDoesntExist", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceRegistry_DataBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, block, indexInBlock);
}
inline ::MA::Flora::FloraInstanceHandle MA::Flora::InstanceRegistry::GetInstanceByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FloraInstanceHandle>(*this, ___internal_method, index);
}
inline bool MA::Flora::InstanceRegistry::Exists(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetInstanceVersion(::MA::Flora::FloraInstanceHandle  instance, int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceVersion", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, version);
}
inline ::MA::Flora::InstanceInChunk MA::Flora::InstanceRegistry::GetInstanceInChunk(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceInChunk", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInChunk>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetInstanceInChunk(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceInChunk  instanceInChunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceInChunk", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceInChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, instanceInChunk);
}
inline ::MA::Flora::InstanceInSourceRecord MA::Flora::InstanceRegistry::GetInstanceInSourceRecord(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceInSourceRecord", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInSourceRecord>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetInstanceInSourceRecord(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceInSourceRecord  instanceInSourceRecord)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceInSourceRecord", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceInSourceRecord>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, instanceInSourceRecord);
}
inline ::MA::Flora::InstanceInContainer MA::Flora::InstanceRegistry::GetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceInContainer>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetInstanceInContainer(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceInContainer  instanceInContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceInContainer", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceInContainer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, instanceInContainer);
}
inline ::MA::Flora::TreeInTerrain MA::Flora::InstanceRegistry::GetTreeInTerrain(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetTreeInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TreeInTerrain>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetTreeInTerrain(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::TreeInTerrain  treeInTerrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetTreeInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::TreeInTerrain>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, treeInTerrain);
}
inline ::MA::Flora::DetailInTerrain MA::Flora::InstanceRegistry::GetDetailInTerrain(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetDetailInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DetailInTerrain>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetDetailInTerrain(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::DetailInTerrain  detailInTerrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetDetailInTerrain", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::DetailInTerrain>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, detailInTerrain);
}
inline ::UnityEngine::EntityId MA::Flora::InstanceRegistry::GetSceneEntityId(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetSceneEntityId", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EntityId>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetSceneEntityId(::MA::Flora::FloraInstanceHandle  instance, ::UnityEngine::EntityId  entityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetSceneEntityId", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, entityId);
}
inline ::MA::Flora::InstanceRendererIndex MA::Flora::InstanceRegistry::GetInstanceRendererIndex(::MA::Flora::FloraInstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"GetInstanceRendererIndex", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::InstanceRendererIndex>(*this, ___internal_method, instance);
}
inline void MA::Flora::InstanceRegistry::SetInstanceRendererIndex(::MA::Flora::FloraInstanceHandle  instance, ::MA::Flora::InstanceRendererIndex  instanceRendererIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"SetInstanceRendererIndex", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle>(), ::i2c::type_of<::MA::Flora::InstanceRendererIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instance, instanceRendererIndex);
}
inline void MA::Flora::InstanceRegistry::AllocateInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"AllocateInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances);
}
inline void MA::Flora::InstanceRegistry::AllocateInstances(::MA::Flora::FloraInstanceHandle*  instances, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"AllocateInstances", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances, instanceCount);
}
inline void MA::Flora::InstanceRegistry::AllocateInstances(::MA::Flora::FloraInstanceHandle*  instances, int32_t  totalCount, ::MA::Flora::ChunkIndex  chunkIndex, int32_t  firstInstanceInChunkIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"AllocateInstances", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::ChunkIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances, totalCount, chunkIndex, firstInstanceInChunkIndex);
}
inline void MA::Flora::InstanceRegistry::DeallocateInstances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DeallocateInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances);
}
inline void MA::Flora::InstanceRegistry::DeallocateInstances(::System::Span_1<::MA::Flora::FloraInstanceHandle>  instances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DeallocateInstances", {}, {::i2c::type_of<::System::Span_1<::MA::Flora::FloraInstanceHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances);
}
inline void MA::Flora::InstanceRegistry::DeallocateInstances(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"DeallocateInstances", {}, {::i2c::type_of<::MA::Flora::FloraInstanceHandle*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances, count);
}
inline void MA::Flora::InstanceRegistry::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::InstanceRegistry::_DebugOnlyThrowIfInstanceDoesntExist_g__MissingInBitmask_13_0(::by_ref<::MA::Flora::InstanceRegistry___c__DisplayClass13_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::InstanceRegistry>(),
                        {"<DebugOnlyThrowIfInstanceDoesntExist>g__MissingInBitmask|13_0", {}, {::i2c::type_of<::by_ref<::MA::Flora::InstanceRegistry___c__DisplayClass13_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::InstanceRegistry::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::InstanceRegistry::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_DataBlocks", ty: "::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InstanceCount", ty: "::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceRegistry::InstanceRegistry(::MA::Flora::InstanceRegistry__m_DataBlocks_e__FixedBuffer  m_DataBlocks, ::MA::Flora::InstanceRegistry__m_InstanceCount_e__FixedBuffer  m_InstanceCount) noexcept  {
this->m_DataBlocks = m_DataBlocks;
this->m_InstanceCount = m_InstanceCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRegistry::InstanceRegistry()   {
}
inline void MA::Flora::InstanceRegistry_StaticIdentifier::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry>, "Ref", ::MA::Flora::InstanceRegistry_StaticIdentifier>(std::forward<::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry> MA::Flora::InstanceRegistry_StaticIdentifier::getStaticF_Ref()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::InstanceRegistry>, "Ref", ::MA::Flora::InstanceRegistry_StaticIdentifier>();
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRegistry_StaticIdentifier::InstanceRegistry_StaticIdentifier()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer(uint64_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer(uint64_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer(uint64_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer(uint64_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer(uint64_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer(int32_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer(int32_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer(uint64_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer::DataBlock_InstanceRegistry__Versions_e__FixedBuffer(int32_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer::DataBlock_InstanceRegistry__Versions_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "Allocated", ty: "::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceInChunk", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceInSource", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceInContainer", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreeInTerrain", ty: "::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailInTerrain", ty: "::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "SceneEntityId", ty: "::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceRenderer", ty: "::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "Versions", ty: "::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceRegistry_DataBlock::InstanceRegistry_DataBlock(::MA::Flora::DataBlock_InstanceRegistry__Allocated_e__FixedBuffer  Allocated, ::MA::Flora::DataBlock_InstanceRegistry__InstanceInChunk_e__FixedBuffer  InstanceInChunk, ::MA::Flora::DataBlock_InstanceRegistry__InstanceInSource_e__FixedBuffer  InstanceInSource, ::MA::Flora::DataBlock_InstanceRegistry__InstanceInContainer_e__FixedBuffer  InstanceInContainer, ::MA::Flora::DataBlock_InstanceRegistry__TreeInTerrain_e__FixedBuffer  TreeInTerrain, ::MA::Flora::DataBlock_InstanceRegistry__DetailInTerrain_e__FixedBuffer  DetailInTerrain, ::MA::Flora::DataBlock_InstanceRegistry__SceneEntityId_e__FixedBuffer  SceneEntityId, ::MA::Flora::DataBlock_InstanceRegistry__InstanceRenderer_e__FixedBuffer  InstanceRenderer, ::MA::Flora::DataBlock_InstanceRegistry__Versions_e__FixedBuffer  Versions) noexcept  {
this->Allocated = Allocated;
this->InstanceInChunk = InstanceInChunk;
this->InstanceInSource = InstanceInSource;
this->InstanceInContainer = InstanceInContainer;
this->TreeInTerrain = TreeInTerrain;
this->DetailInTerrain = DetailInTerrain;
this->SceneEntityId = SceneEntityId;
this->InstanceRenderer = InstanceRenderer;
this->Versions = Versions;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRegistry_DataBlock::InstanceRegistry_DataBlock()   {
}
// Ctor Parameters [CppParam { name: "block", ty: "::MA::Flora::InstanceRegistry_DataBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name: "indexInBlock", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceRegistry___c__DisplayClass13_0::InstanceRegistry___c__DisplayClass13_0(::MA::Flora::InstanceRegistry_DataBlock*  block, int32_t  indexInBlock) noexcept  {
this->block = block;
this->indexInBlock = indexInBlock;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceRegistry___c__DisplayClass13_0::InstanceRegistry___c__DisplayClass13_0()   {
}
