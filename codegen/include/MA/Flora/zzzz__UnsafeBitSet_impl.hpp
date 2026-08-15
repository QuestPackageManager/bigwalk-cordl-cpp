#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeBitSet.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "MA/Flora/zzzz__UnsafeBitSet_def.hpp"
#include "MA/Flora/zzzz__SetBitChunkEnumerator_def.hpp"
#include "MA/Flora/zzzz__SetBitEnumerator_1_def.hpp"
#include "MA/Flora/zzzz__SetBitReverseEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ff710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::get_IsEmpty)> {
  constexpr static std::size_t size = 0x4360;
  constexpr static std::size_t addrs = 0x1807ebcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.get_MaxLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::get_MaxLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181455890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_MaxLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::get_Capacity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181455850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181455860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t, bool)>(&::MA::Flora::UnsafeBitSet::set_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814558b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::UnsafeBitSet* (*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::UnsafeBitSet::Create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181462f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::UnsafeBitSet*)>(&::MA::Flora::UnsafeBitSet::Destroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181463000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::UnsafeBitSet*, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::UnsafeBitSet::Destroy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181463050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::UnsafeBitSet::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814641f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814630a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::UnsafeBitSet::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814630e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::IsSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.SetBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t, bool)>(&::MA::Flora::UnsafeBitSet::SetBit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181455810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.UpdateMinMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::UpdateMinMax)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1814640f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"UpdateMinMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181462a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::UnsafeBitSet (::MA::Flora::UnsafeBitSet::*)(::Unity::Collections::Allocator)>(&::MA::Flora::UnsafeBitSet::Clone)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x181462a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Clone", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.ReserveCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::ReserveCapacity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181463610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ReserveCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.EnsureLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::EnsureLength)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181463150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"EnsureLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(::MA::Flora::UnsafeBitSet)>(&::MA::Flora::UnsafeBitSet::CopyFrom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181462c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::Count)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181462f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.CountInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeBitSet::CountInRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181462ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CountInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.CountChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::CountChunks)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181462e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CountChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.UnionWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(::MA::Flora::UnsafeBitSet)>(&::MA::Flora::UnsafeBitSet::UnionWith)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181463f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"UnionWith", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.UnionAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeBitSet::UnionAt)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181463e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"UnionAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.IntersectWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(::MA::Flora::UnsafeBitSet)>(&::MA::Flora::UnsafeBitSet::IntersectWith)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814633d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"IntersectWith", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.ExceptWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(::by_ref<::MA::Flora::UnsafeBitSet>)>(&::MA::Flora::UnsafeBitSet::ExceptWith)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181463180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ExceptWith", {}, {::i2c::type_of<::by_ref<::MA::Flora::UnsafeBitSet>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::Add)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181455700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.AddNoResize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::AddNoResize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814556a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddNoResize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.TryAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::TryAdd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181463da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"TryAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t*, int32_t)>(&::MA::Flora::UnsafeBitSet::AddRange)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181462840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.AddRangeNoResize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t*, int32_t)>(&::MA::Flora::UnsafeBitSet::AddRangeNoResize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181462700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeBitSet::AddRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814627a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::Remove)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181463580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.RemoveRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeBitSet::RemoveRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814634e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)(int32_t)>(&::MA::Flora::UnsafeBitSet::Contains)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181455860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.AnyInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeBitSet::AnyInRange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181462950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AnyInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.FindFreeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeBitSet::FindFreeIndex)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181463200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"FindFreeIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.CopyToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeBitSet::*)(::Unity::Collections::NativeList_1<int32_t>)>(&::MA::Flora::UnsafeBitSet::CopyToList)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181462d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CopyToList", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::UnsafeBitSet::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::UnsafeBitSet::ToArray)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181463880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::UnsafeBitSet::*)(::by_ref<::Unity::Collections::RewindableAllocator>)>(&::MA::Flora::UnsafeBitSet::ToArray)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181463700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.ToChunkArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::UnsafeBitSet::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::UnsafeBitSet::ToChunkArray)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181463a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.ToChunkArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::UnsafeBitSet::*)(::by_ref<::Unity::Collections::RewindableAllocator>)>(&::MA::Flora::UnsafeBitSet::ToChunkArray)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181463bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.IndicesInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (::MA::Flora::UnsafeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeBitSet::IndicesInRange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814632b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"IndicesInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.GetChunkEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitChunkEnumerator (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::GetChunkEnumerator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181455790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"GetChunkEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1807f0030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.GetReverseEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitReverseEnumerator_1<int32_t> (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::GetReverseEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1807f0030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"GetReverseEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181463650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::MA::Flora::UnsafeBitSet::*)()>(&::MA::Flora::UnsafeBitSet::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181463650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeBitSet.CheckNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::MA::Flora::UnsafeBitSet::CheckNegative)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CheckNegative", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::UnsafeBitSet::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::UnsafeBitSet::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeBitSet::get_MaxLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_MaxLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeBitSet::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::UnsafeBitSet::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void MA::Flora::UnsafeBitSet::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline ::MA::Flora::UnsafeBitSet* MA::Flora::UnsafeBitSet::Create(int32_t  capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::UnsafeBitSet*>(nullptr, ___internal_method, capacity, allocator);
}
inline void MA::Flora::UnsafeBitSet::Destroy(::MA::Flora::UnsafeBitSet*  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set);
}
inline void MA::Flora::UnsafeBitSet::Destroy(::MA::Flora::UnsafeBitSet*  set, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set, allocator);
}
inline void MA::Flora::UnsafeBitSet::_ctor(int32_t  capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, allocator);
}
inline void MA::Flora::UnsafeBitSet::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::UnsafeBitSet::Dispose(::Unity::Jobs::JobHandle  jobs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, jobs);
}
inline bool MA::Flora::UnsafeBitSet::IsSet(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void MA::Flora::UnsafeBitSet::SetBit(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"SetBit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void MA::Flora::UnsafeBitSet::UpdateMinMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"UpdateMinMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::UnsafeBitSet::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::MA::Flora::UnsafeBitSet MA::Flora::UnsafeBitSet::Clone(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Clone", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::UnsafeBitSet>(*this, ___internal_method, allocator);
}
inline void MA::Flora::UnsafeBitSet::ReserveCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ReserveCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void MA::Flora::UnsafeBitSet::EnsureLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"EnsureLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
inline void MA::Flora::UnsafeBitSet::CopyFrom(::MA::Flora::UnsafeBitSet  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::UnsafeBitSet::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeBitSet::CountInRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CountInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline int32_t MA::Flora::UnsafeBitSet::CountChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CountChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::UnsafeBitSet::UnionWith(::MA::Flora::UnsafeBitSet  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"UnionWith", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::UnsafeBitSet::UnionAt(int32_t  srcIndex, int32_t  dstIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"UnionAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, srcIndex, dstIndex);
}
inline void MA::Flora::UnsafeBitSet::IntersectWith(::MA::Flora::UnsafeBitSet  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"IntersectWith", {}, {::i2c::type_of<::MA::Flora::UnsafeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::UnsafeBitSet::ExceptWith(::by_ref<::MA::Flora::UnsafeBitSet>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ExceptWith", {}, {::i2c::type_of<::by_ref<::MA::Flora::UnsafeBitSet>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::UnsafeBitSet::Add(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void MA::Flora::UnsafeBitSet::AddNoResize(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddNoResize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline bool MA::Flora::UnsafeBitSet::TryAdd(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"TryAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void MA::Flora::UnsafeBitSet::AddRange(int32_t*  indices, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indices, count);
}
inline void MA::Flora::UnsafeBitSet::AddRangeNoResize(int32_t*  indices, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indices, count);
}
inline void MA::Flora::UnsafeBitSet::AddRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
inline bool MA::Flora::UnsafeBitSet::Remove(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline bool MA::Flora::UnsafeBitSet::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index, count);
}
inline bool MA::Flora::UnsafeBitSet::Contains(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline bool MA::Flora::UnsafeBitSet::AnyInRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"AnyInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, startIndex, count);
}
inline int32_t MA::Flora::UnsafeBitSet::FindFreeIndex(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"FindFreeIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline void MA::Flora::UnsafeBitSet::CopyToList(::Unity::Collections::NativeList_1<int32_t>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CopyToList", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::UnsafeBitSet::ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::UnsafeBitSet::ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::UnsafeBitSet::ToChunkArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::UnsafeBitSet::ToChunkArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::UnsafeBitSet::ToArray(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                    {"ToArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::UnsafeBitSet::ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                    {"ToArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::UnsafeBitSet::IndicesInRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"IndicesInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(*this, ___internal_method, startIndex, count);
}
template<typename T>
inline ::MA::Flora::SetBitEnumerator_1<T> MA::Flora::UnsafeBitSet::AsType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                    {"AsType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<T>>(*this, ___internal_method);
}
inline ::MA::Flora::SetBitChunkEnumerator MA::Flora::UnsafeBitSet::GetChunkEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"GetChunkEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitChunkEnumerator>(*this, ___internal_method);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::UnsafeBitSet::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::SetBitReverseEnumerator_1<int32_t> MA::Flora::UnsafeBitSet::GetReverseEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"GetReverseEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitReverseEnumerator_1<int32_t>>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* MA::Flora::UnsafeBitSet::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* MA::Flora::UnsafeBitSet::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(*this, ___internal_method);
}
inline void MA::Flora::UnsafeBitSet::CheckNegative(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeBitSet>(),
                        {"CheckNegative", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::UnsafeBitSet::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::UnsafeBitSet::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  MA::Flora::UnsafeBitSet::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* MA::Flora::UnsafeBitSet::i___System__Collections__Generic__IEnumerable_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  MA::Flora::UnsafeBitSet::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* MA::Flora::UnsafeBitSet::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Bits", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint64_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MinIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::UnsafeBitSet::UnsafeBitSet(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint64_t>  m_Bits, int32_t  m_MinIndex, int32_t  m_MaxIndex) noexcept  {
this->m_Bits = m_Bits;
this->m_MinIndex = m_MinIndex;
this->m_MaxIndex = m_MaxIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::UnsafeBitSet::UnsafeBitSet()   {
}
