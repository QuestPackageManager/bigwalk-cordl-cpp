#pragma once
// IWYU pragma private; include "MA/Flora/SilhouettePlaneCache.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "MA/Flora/zzzz__SilhouettePlaneCache_def.hpp"
#include "MA/Flora/zzzz__SilhouettePlaneCache_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::MA::Flora::SilhouettePlaneCache_Slot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SilhouettePlaneCache_Slot::*)(::UnityEngine::EntityId, int32_t, int32_t)>(&::MA::Flora::SilhouettePlaneCache_Slot::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814d7d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache_Slot>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::SilhouettePlaneCache_Slot::_ctor(::UnityEngine::EntityId  viewEntityId, int32_t  planeCount, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache_Slot>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EntityId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewEntityId, planeCount, frameIndex);
}
// Ctor Parameters [CppParam { name: "IsActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ViewEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "PlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::SilhouettePlaneCache_Slot::SilhouettePlaneCache_Slot(bool  IsActive, ::UnityEngine::EntityId  ViewEntityId, int32_t  PlaneCount, int32_t  LastUsedFrameIndex) noexcept  {
this->IsActive = IsActive;
this->ViewEntityId = ViewEntityId;
this->PlaneCount = PlaneCount;
this->LastUsedFrameIndex = LastUsedFrameIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::SilhouettePlaneCache_Slot::SilhouettePlaneCache_Slot()   {
}
//  Writing Method size for method: ::MA::Flora::SilhouettePlaneCache.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SilhouettePlaneCache::*)()>(&::MA::Flora::SilhouettePlaneCache::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814d7a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SilhouettePlaneCache.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SilhouettePlaneCache::*)()>(&::MA::Flora::SilhouettePlaneCache::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d7850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SilhouettePlaneCache.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SilhouettePlaneCache::*)(int32_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, int32_t)>(&::MA::Flora::SilhouettePlaneCache::Update)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814d7b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SilhouettePlaneCache.FreeUnusedSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::SilhouettePlaneCache::*)(int32_t, int32_t)>(&::MA::Flora::SilhouettePlaneCache::FreeUnusedSlots)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814d78a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"FreeUnusedSlots", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::SilhouettePlaneCache.GetSubArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::MA::Flora::SilhouettePlaneCache::*)(::UnityEngine::EntityId)>(&::MA::Flora::SilhouettePlaneCache::GetSubArray)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814d7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"GetSubArray", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::SilhouettePlaneCache::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::SilhouettePlaneCache::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::SilhouettePlaneCache::Update(int32_t  viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"Update", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewInstanceID, planes, frameIndex);
}
inline void MA::Flora::SilhouettePlaneCache::FreeUnusedSlots(int32_t  frameIndex, int32_t  maximumAge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"FreeUnusedSlots", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frameIndex, maximumAge);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> MA::Flora::SilhouettePlaneCache::GetSubArray(::UnityEngine::EntityId  viewEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::SilhouettePlaneCache>(),
                        {"GetSubArray", {}, {::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(*this, ___internal_method, viewEntityId);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::SilhouettePlaneCache::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::SilhouettePlaneCache::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SubviewIDToIndexMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SlotFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Slots", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SilhouettePlaneCache_Slot>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlaneStorage", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::SilhouettePlaneCache::SilhouettePlaneCache(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  m_SubviewIDToIndexMap, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  m_SlotFreeList, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SilhouettePlaneCache_Slot>  m_Slots, ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  m_PlaneStorage) noexcept  {
this->m_SubviewIDToIndexMap = m_SubviewIDToIndexMap;
this->m_SlotFreeList = m_SlotFreeList;
this->m_Slots = m_Slots;
this->m_PlaneStorage = m_PlaneStorage;
}
// Ctor Parameters []
constexpr ::MA::Flora::SilhouettePlaneCache::SilhouettePlaneCache()   {
}
