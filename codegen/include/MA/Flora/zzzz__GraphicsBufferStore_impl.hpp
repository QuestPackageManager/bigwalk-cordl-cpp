#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferStore.hpp"
#include "MA/Flora/zzzz__GraphicsBufferDescriptor_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferStoreType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_impl.hpp"
#include "MA/Flora/zzzz__GraphicsBufferStore_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferAlignment_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferDescriptor_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferStoreType_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "StoreType", ty: "::MA::Flora::GraphicsBufferStoreType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Descriptor", ty: "::MA::Flora::GraphicsBufferDescriptor", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferStore_DebugBufferInfo::GraphicsBufferStore_DebugBufferInfo(::MA::Flora::GraphicsBufferStoreType  StoreType, ::MA::Flora::GraphicsBufferDescriptor  Descriptor) noexcept  {
this->StoreType = StoreType;
this->Descriptor = Descriptor;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferStore_DebugBufferInfo::GraphicsBufferStore_DebugBufferInfo()   {
}
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo.Lock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::*)()>(&::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::Lock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814fa660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"Lock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::*)()>(&::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::Unlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814fa6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"Unlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo.LockForWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::*)()>(&::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::LockForWrite)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814fa610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"LockForWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo.UnlockForWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::*)()>(&::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::UnlockForWrite)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fa680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"UnlockForWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo.get_IsLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::*)()>(&::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::get_IsLocked)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814fa790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"get_IsLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo.get_InFlight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::*)()>(&::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::get_InFlight)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814fa700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"get_InFlight", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::Unlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"Unlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::LockForWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"LockForWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::UnlockForWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"UnlockForWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::get_IsLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"get_IsLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::get_InFlight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>(),
                        {"get_InFlight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "IsCreated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Hash", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexInPool", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexInAllocated", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "StoreType", ty: "::MA::Flora::GraphicsBufferStoreType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Descriptor", ty: "::MA::Flora::GraphicsBufferDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastUsedFrame", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FenceFrame", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::GraphicsBufferStore_GraphicsBufferInfo(bool  IsCreated, int32_t  Hash, int32_t  IndexInPool, int32_t  IndexInAllocated, ::MA::Flora::GraphicsBufferStoreType  StoreType, ::MA::Flora::GraphicsBufferDescriptor  Descriptor, int32_t  LastUsedFrame, int32_t  FenceFrame) noexcept  {
this->IsCreated = IsCreated;
this->Hash = Hash;
this->IndexInPool = IndexInPool;
this->IndexInAllocated = IndexInAllocated;
this->StoreType = StoreType;
this->Descriptor = Descriptor;
this->LastUsedFrame = LastUsedFrame;
this->FenceFrame = FenceFrame;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo::GraphicsBufferStore_GraphicsBufferInfo()   {
}
// Ctor Parameters [CppParam { name: "IsInitialized", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FreeIndices", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PooledBufferIndices", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllocatedBufferIndices", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "BufferInfoArray", ty: "::ArrayW<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buffers", ty: "::ArrayW<::UnityEngine::GraphicsBuffer*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "NextBufferIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferStore_SharedData::GraphicsBufferStore_SharedData(bool  IsInitialized, int32_t  FrameIndex, ::System::Collections::Generic::List_1<int32_t>*  FreeIndices, ::System::Collections::Generic::List_1<int32_t>*  PooledBufferIndices, ::System::Collections::Generic::List_1<int32_t>*  AllocatedBufferIndices, ::ArrayW<::MA::Flora::GraphicsBufferStore_GraphicsBufferInfo>  BufferInfoArray, ::ArrayW<::UnityEngine::GraphicsBuffer*>  Buffers, int32_t  NextBufferIndex) noexcept  {
this->IsInitialized = IsInitialized;
this->FrameIndex = FrameIndex;
this->FreeIndices = FreeIndices;
this->PooledBufferIndices = PooledBufferIndices;
this->AllocatedBufferIndices = AllocatedBufferIndices;
this->BufferInfoArray = BufferInfoArray;
this->Buffers = Buffers;
this->NextBufferIndex = NextBufferIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferStore_SharedData::GraphicsBufferStore_SharedData()   {
}
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferStore___c::*)()>(&::MA::Flora::GraphicsBufferStore___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore___c._Initialize_b__47_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferStore___c::*)(::System::Object*, ::System::EventArgs*)>(&::MA::Flora::GraphicsBufferStore___c::_Initialize_b__47_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815095a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore___c*>(),
                        {"<Initialize>b__47_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore___c._Initialize_b__47_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferStore___c::*)(::System::Object*, ::System::EventArgs*)>(&::MA::Flora::GraphicsBufferStore___c::_Initialize_b__47_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815095a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore___c*>(),
                        {"<Initialize>b__47_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::GraphicsBufferStore___c::setStaticF___9(::MA::Flora::GraphicsBufferStore___c*  value)  {
::cordl_internals::setStaticField<::MA::Flora::GraphicsBufferStore___c*, "<>9", ::MA::Flora::GraphicsBufferStore___c*>(std::forward<::MA::Flora::GraphicsBufferStore___c*>(value));
}
inline ::MA::Flora::GraphicsBufferStore___c* MA::Flora::GraphicsBufferStore___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::MA::Flora::GraphicsBufferStore___c*, "<>9", ::MA::Flora::GraphicsBufferStore___c*>();
}
inline void MA::Flora::GraphicsBufferStore___c::setStaticF___9__47_1(::System::EventHandler*  value)  {
::cordl_internals::setStaticField<::System::EventHandler*, "<>9__47_1", ::MA::Flora::GraphicsBufferStore___c*>(std::forward<::System::EventHandler*>(value));
}
inline ::System::EventHandler* MA::Flora::GraphicsBufferStore___c::getStaticF___9__47_1()  {
return ::cordl_internals::getStaticField<::System::EventHandler*, "<>9__47_1", ::MA::Flora::GraphicsBufferStore___c*>();
}
inline void MA::Flora::GraphicsBufferStore___c::setStaticF___9__47_2(::System::EventHandler*  value)  {
::cordl_internals::setStaticField<::System::EventHandler*, "<>9__47_2", ::MA::Flora::GraphicsBufferStore___c*>(std::forward<::System::EventHandler*>(value));
}
inline ::System::EventHandler* MA::Flora::GraphicsBufferStore___c::getStaticF___9__47_2()  {
return ::cordl_internals::getStaticField<::System::EventHandler*, "<>9__47_2", ::MA::Flora::GraphicsBufferStore___c*>();
}
inline void MA::Flora::GraphicsBufferStore___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferStore___c::_Initialize_b__47_1(::System::Object*  _, ::System::EventArgs*  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore___c*>(),
                        {"<Initialize>b__47_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline void MA::Flora::GraphicsBufferStore___c::_Initialize_b__47_2(::System::Object*  _, ::System::EventArgs*  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore___c*>(),
                        {"<Initialize>b__47_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline ::MA::Flora::GraphicsBufferStore___c* MA::Flora::GraphicsBufferStore___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::GraphicsBufferStore___c*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferStore___c::GraphicsBufferStore___c()   {
}
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.get_AllocatedBufferCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::GraphicsBufferStore::get_AllocatedBufferCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814fe0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"get_AllocatedBufferCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.ComputeAllocatedSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::MA::Flora::GraphicsBufferStore::ComputeAllocatedSizeInBytes)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814fbe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ComputeAllocatedSizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.GetDebugBufferInfos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::MA::Flora::GraphicsBufferStore_DebugBufferInfo>*)>(&::MA::Flora::GraphicsBufferStore::GetDebugBufferInfos)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814fc660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetDebugBufferInfos", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::MA::Flora::GraphicsBufferStore_DebugBufferInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.NextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferStore::NextFrame)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1814fcbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"NextFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.ReleaseAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferStore::ReleaseAll)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814fcd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ReleaseAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::Exists)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fc510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::IsValid)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814fcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"IsValid", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (*)(::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::GraphicsBuffer_UsageFlags, int32_t, int32_t, ::StringW)>(&::MA::Flora::GraphicsBufferStore::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814fc2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::Release)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814fcf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Release", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.GetBufferUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::GetBufferUnchecked)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814fc5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetBufferUnchecked", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.GetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferDescriptor (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::GetDescriptor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fc7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.GetBufferHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBufferHandle (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::GetBufferHandle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fc570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetBufferHandle", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.GetDebugName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::GetDebugName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetDebugName", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.SetDebugName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef, ::StringW)>(&::MA::Flora::GraphicsBufferStore::SetDebugName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetDebugName", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef, ::Unity::Collections::NativeArray_1<uint8_t>, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferStore::SetData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814fd860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetData", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef, void*, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferStore::SetData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814fd920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetData", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef, ::System::Array*, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferStore::SetData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814fd9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetData", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.Resize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef, int32_t, bool)>(&::MA::Flora::GraphicsBufferStore::Resize)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1814fd5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Resize", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.ResizeAndCopySOA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferStore::ResizeAndCopySOA)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814fd4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ResizeAndCopySOA", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.UnlockBufferAfterWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef, int32_t)>(&::MA::Flora::GraphicsBufferStore::UnlockBufferAfterWrite)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814fde70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"UnlockBufferAfterWrite", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.LockBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::LockBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fcb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"LockBuffer", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.UnlockBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::UnlockBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fdf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"UnlockBuffer", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.UnlockBufferAfterWriteInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferStore::UnlockBufferAfterWriteInternal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814fdd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"UnlockBufferAfterWriteInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.RequestDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::MA::Flora::GraphicsBufferRef, int64_t, int64_t)>(&::MA::Flora::GraphicsBufferStore::RequestDataAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814fd0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestDataAsync", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.RequestDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (*)(::MA::Flora::GraphicsBufferRef, ::Unity::Collections::NativeArray_1<uint8_t>)>(&::MA::Flora::GraphicsBufferStore::RequestDataAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814fd040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestDataAsync", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (*)(::MA::Flora::GraphicsBufferDescriptor, ::StringW, ::MA::Flora::GraphicsBufferAlignment)>(&::MA::Flora::GraphicsBufferStore::Request)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1814fd260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Request", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.RequestRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (*)(int32_t, int32_t, ::StringW, ::MA::Flora::GraphicsBufferAlignment)>(&::MA::Flora::GraphicsBufferStore::RequestRaw)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814fd220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestRaw", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.RequestRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (*)(int32_t, ::StringW, ::MA::Flora::GraphicsBufferAlignment)>(&::MA::Flora::GraphicsBufferStore::RequestRaw)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814fd1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestRaw", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.RequestIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (*)(int32_t, int32_t, ::StringW, ::MA::Flora::GraphicsBufferAlignment)>(&::MA::Flora::GraphicsBufferStore::RequestIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814fd1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestIndirect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.RequestIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (*)(int32_t, ::StringW, ::MA::Flora::GraphicsBufferAlignment)>(&::MA::Flora::GraphicsBufferStore::RequestIndirect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814fd160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestIndirect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferStore::Initialize)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1814fc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.AllocateBufferIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::GraphicsBufferStore::AllocateBufferIndex)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814fbd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"AllocateBufferIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.TryFindPooledBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::MA::Flora::GraphicsBufferDescriptor>, ::by_ref<::MA::Flora::GraphicsBufferRef>)>(&::MA::Flora::GraphicsBufferStore::TryFindPooledBuffer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814fda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"TryFindPooledBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::GraphicsBufferDescriptor>>(), ::i2c::type_of<::by_ref<::MA::Flora::GraphicsBufferRef>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.AlignDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferDescriptor (*)(::MA::Flora::GraphicsBufferDescriptor, ::MA::Flora::GraphicsBufferAlignment)>(&::MA::Flora::GraphicsBufferStore::AlignDescriptor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814fbca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"AlignDescriptor", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.CreateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferRef (*)(::MA::Flora::GraphicsBufferDescriptor, ::StringW, ::MA::Flora::GraphicsBufferStoreType)>(&::MA::Flora::GraphicsBufferStore::CreateInternal)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x1814fbf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"CreateInternal", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferStoreType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.ReleaseBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::MA::Flora::GraphicsBufferStore::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814fcf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ReleaseBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.DestroyBufferImmediate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::MA::Flora::GraphicsBufferStore::DestroyBufferImmediate)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1814fc2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"DestroyBufferImmediate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore.CheckExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferStore::CheckExists)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"CheckExists", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferStore._Initialize_g__Shutdown_47_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::GraphicsBufferStore::_Initialize_g__Shutdown_47_0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814fdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"<Initialize>g__Shutdown|47_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::GraphicsBufferStore::setStaticF_s_Shared(::MA::Flora::GraphicsBufferStore_SharedData  value)  {
::cordl_internals::setStaticField<::MA::Flora::GraphicsBufferStore_SharedData, "s_Shared", ::MA::Flora::GraphicsBufferStore*>(std::forward<::MA::Flora::GraphicsBufferStore_SharedData>(value));
}
inline ::MA::Flora::GraphicsBufferStore_SharedData MA::Flora::GraphicsBufferStore::getStaticF_s_Shared()  {
return ::cordl_internals::getStaticField<::MA::Flora::GraphicsBufferStore_SharedData, "s_Shared", ::MA::Flora::GraphicsBufferStore*>();
}
inline int32_t MA::Flora::GraphicsBufferStore::get_AllocatedBufferCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"get_AllocatedBufferCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int64_t MA::Flora::GraphicsBufferStore::ComputeAllocatedSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ComputeAllocatedSizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline void MA::Flora::GraphicsBufferStore::GetDebugBufferInfos(::System::Collections::Generic::List_1<::MA::Flora::GraphicsBufferStore_DebugBufferInfo>*  outInfos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetDebugBufferInfos", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::MA::Flora::GraphicsBufferStore_DebugBufferInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outInfos);
}
inline void MA::Flora::GraphicsBufferStore::NextFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"NextFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::GraphicsBufferStore::ReleaseAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ReleaseAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferStore::Exists(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Exists", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer);
}
inline bool MA::Flora::GraphicsBufferStore::IsValid(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"IsValid", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::Create(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  count, int32_t  stride, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, target, usageFlags, count, stride, name);
}
inline void MA::Flora::GraphicsBufferStore::Release(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Release", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline ::UnityEngine::GraphicsBuffer* MA::Flora::GraphicsBufferStore::GetBufferUnchecked(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetBufferUnchecked", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, buffer);
}
inline ::MA::Flora::GraphicsBufferDescriptor MA::Flora::GraphicsBufferStore::GetDescriptor(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetDescriptor", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferDescriptor>(nullptr, ___internal_method, buffer);
}
inline ::UnityEngine::GraphicsBufferHandle MA::Flora::GraphicsBufferStore::GetBufferHandle(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetBufferHandle", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBufferHandle>(nullptr, ___internal_method, buffer);
}
inline ::StringW MA::Flora::GraphicsBufferStore::GetDebugName(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"GetDebugName", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, buffer);
}
inline void MA::Flora::GraphicsBufferStore::SetDebugName(::MA::Flora::GraphicsBufferRef  buffer, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetDebugName", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, name);
}
inline void MA::Flora::GraphicsBufferStore::SetData(::MA::Flora::GraphicsBufferRef  buffer, ::Unity::Collections::NativeArray_1<uint8_t>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elementSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetData", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elementSize);
}
inline void MA::Flora::GraphicsBufferStore::SetData(::MA::Flora::GraphicsBufferRef  buffer, void*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elementSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetData", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, elementSize);
}
inline void MA::Flora::GraphicsBufferStore::SetData(::MA::Flora::GraphicsBufferRef  buffer, ::System::Array*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"SetData", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void MA::Flora::GraphicsBufferStore::Resize(::MA::Flora::GraphicsBufferRef  buffer, int32_t  newLength, bool  copyContents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Resize", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, newLength, copyContents);
}
inline void MA::Flora::GraphicsBufferStore::ResizeAndCopySOA(::MA::Flora::GraphicsBufferRef  buffer, int32_t  newLength, int32_t  arrayCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ResizeAndCopySOA", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, newLength, arrayCount);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::GraphicsBufferStore::LockBufferForWrite(::MA::Flora::GraphicsBufferRef  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"LockBufferForWrite", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, buffer, index, count);
}
template<typename T>
inline void MA::Flora::GraphicsBufferStore::UnlockBufferAfterWrite(::MA::Flora::GraphicsBufferRef  buffer, int32_t  countWritten)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"UnlockBufferAfterWrite", {::i2c::class_of<T>()}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, countWritten);
}
inline void MA::Flora::GraphicsBufferStore::UnlockBufferAfterWrite(::MA::Flora::GraphicsBufferRef  buffer, int32_t  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"UnlockBufferAfterWrite", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, bytesWritten);
}
inline void MA::Flora::GraphicsBufferStore::LockBuffer(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"LockBuffer", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void MA::Flora::GraphicsBufferStore::UnlockBuffer(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"UnlockBuffer", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void MA::Flora::GraphicsBufferStore::UnlockBufferAfterWriteInternal(int32_t  bufferIndex, int32_t  countWritten, int32_t  elemSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"UnlockBufferAfterWriteInternal", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bufferIndex, countWritten, elemSize);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest MA::Flora::GraphicsBufferStore::RequestDataAsync(::MA::Flora::GraphicsBufferRef  buffer, int64_t  offsetInBytes, int64_t  sizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestDataAsync", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, buffer, offsetInBytes, sizeInBytes);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest MA::Flora::GraphicsBufferStore::RequestDataAsync(::MA::Flora::GraphicsBufferRef  buffer, ::Unity::Collections::NativeArray_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestDataAsync", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(nullptr, ___internal_method, buffer, data);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::Request(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Request", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, descriptor, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::Request(::UnityEngine::GraphicsBuffer_Target  target, int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"Request", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, target, count, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestStructured(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestStructured", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, count, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestStructured(::ArrayW<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestStructured", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, data, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestStructured(::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestStructured", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, data, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestStructured(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestStructured", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, cmd, data, name, alignment);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestRaw(int32_t  count, int32_t  stride, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestRaw", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, count, stride, name, alignment);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestRaw(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestRaw", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, count, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestRaw(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestRaw", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, count, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestRaw(::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestRaw", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, data, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestRaw(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Collections::NativeArray_1<T>  data, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestRaw", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, cmd, data, name, alignment);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestIndirect(int32_t  count, int32_t  stride, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestIndirect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, count, stride, name, alignment);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestIndirect(int32_t  count, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"RequestIndirect", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, count, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestIndirect(::Unity::Collections::NativeArray_1<T>  args, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestIndirect", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, args, name, alignment);
}
template<typename T>
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::RequestIndirect(::UnityEngine::Rendering::CommandBuffer*  cmd, ::Unity::Collections::NativeArray_1<T>  args, ::StringW  name, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                    {"RequestIndirect", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, cmd, args, name, alignment);
}
inline void MA::Flora::GraphicsBufferStore::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::GraphicsBufferStore::AllocateBufferIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"AllocateBufferIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferStore::TryFindPooledBuffer(int32_t  descriptorHash, ::by_ref<::MA::Flora::GraphicsBufferDescriptor>  descriptor, ::by_ref<::MA::Flora::GraphicsBufferRef>  pooledBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"TryFindPooledBuffer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::GraphicsBufferDescriptor>>(), ::i2c::type_of<::by_ref<::MA::Flora::GraphicsBufferRef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, descriptorHash, descriptor, pooledBuffer);
}
inline ::MA::Flora::GraphicsBufferDescriptor MA::Flora::GraphicsBufferStore::AlignDescriptor(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::MA::Flora::GraphicsBufferAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"AlignDescriptor", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::MA::Flora::GraphicsBufferAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferDescriptor>(nullptr, ___internal_method, descriptor, alignment);
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferStore::CreateInternal(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::StringW  debugName, ::MA::Flora::GraphicsBufferStoreType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"CreateInternal", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::MA::Flora::GraphicsBufferStoreType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferRef>(nullptr, ___internal_method, descriptor, debugName, type);
}
inline void MA::Flora::GraphicsBufferStore::ReleaseBuffer(int32_t  bufferIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"ReleaseBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bufferIndex);
}
inline void MA::Flora::GraphicsBufferStore::DestroyBufferImmediate(int32_t  bufferIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"DestroyBufferImmediate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bufferIndex);
}
inline void MA::Flora::GraphicsBufferStore::CheckExists(::MA::Flora::GraphicsBufferRef  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"CheckExists", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void MA::Flora::GraphicsBufferStore::_Initialize_g__Shutdown_47_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferStore*>(),
                        {"<Initialize>g__Shutdown|47_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferStore::GraphicsBufferStore()   {
}
