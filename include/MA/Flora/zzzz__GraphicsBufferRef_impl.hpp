#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferRef.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferDescriptor_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferGrowPolicy_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferTrimPolicy_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_IsCreated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180785420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_Exists)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Exists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_Descriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::GraphicsBufferDescriptor (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_Descriptor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814fb7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Descriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_Target (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_Target)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f58e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_UsageFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer_UsageFlags (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_UsageFlags)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f5950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_UsageFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_Stride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_Stride)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f5870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Stride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_Length)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814fb870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_SizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_SizeInBytes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814fb8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_SizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_BufferHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBufferHandle (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_BufferHandle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814fb750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_BufferHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_Value)> {
  constexpr static std::size_t size = 0x48f0;
  constexpr static std::size_t addrs = 0x180cb54d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.get_DebugName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::get_DebugName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180393520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_DebugName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.set_DebugName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(::StringW)>(&::MA::Flora::GraphicsBufferRef::set_DebugName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"set_DebugName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(::UnityEngine::GraphicsBuffer_Target, int32_t, int32_t, ::StringW)>(&::MA::Flora::GraphicsBufferRef::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fb6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(::UnityEngine::GraphicsBuffer_Target, int32_t, int32_t, ::by_ref<::Unity::Collections::FixedString64Bytes>)>(&::MA::Flora::GraphicsBufferRef::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814fb630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(::UnityEngine::GraphicsBuffer_Target, ::UnityEngine::GraphicsBuffer_UsageFlags, int32_t, int32_t, ::StringW)>(&::MA::Flora::GraphicsBufferRef::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fb550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(::MA::Flora::GraphicsBufferDescriptor, ::StringW)>(&::MA::Flora::GraphicsBufferRef::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814fb5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::Dispose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814fa990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::IsValid)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814fabe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::ToString)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814fb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {::i2c::class_of<::MA::Flora::GraphicsBufferRef>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.ResizeAndDiscardContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(int32_t)>(&::MA::Flora::GraphicsBufferRef::ResizeAndDiscardContents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814faef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeAndDiscardContents", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.ResizeAndCopyContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(int32_t)>(&::MA::Flora::GraphicsBufferRef::ResizeAndCopyContents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814faed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeAndCopyContents", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.ResizeAndCopyContentsSOA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(int32_t, int32_t)>(&::MA::Flora::GraphicsBufferRef::ResizeAndCopyContentsSOA)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814fadf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeAndCopyContentsSOA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.GrowIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(int32_t, ::MA::Flora::GraphicsBufferGrowPolicy, bool)>(&::MA::Flora::GraphicsBufferRef::GrowIfNeeded)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1814faa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"GrowIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.TrimIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(int32_t, ::MA::Flora::GraphicsBufferTrimPolicy, bool)>(&::MA::Flora::GraphicsBufferRef::TrimIfNeeded)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1814fb2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"TrimIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.ResizeIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(int32_t, ::MA::Flora::GraphicsBufferGrowPolicy, ::MA::Flora::GraphicsBufferTrimPolicy, bool)>(&::MA::Flora::GraphicsBufferRef::ResizeIfNeeded)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814faf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.CalculateNewGrowthSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::MA::Flora::GraphicsBufferGrowPolicy)>(&::MA::Flora::GraphicsBufferRef::CalculateNewGrowthSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814fa830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CalculateNewGrowthSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.CalculateNewTrimSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::MA::Flora::GraphicsBufferTrimPolicy)>(&::MA::Flora::GraphicsBufferRef::CalculateNewTrimSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814fa940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CalculateNewTrimSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.CalculateNewSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::MA::Flora::GraphicsBufferGrowPolicy, ::MA::Flora::GraphicsBufferTrimPolicy)>(&::MA::Flora::GraphicsBufferRef::CalculateNewSize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814fa890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CalculateNewSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.Lock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::Lock)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814faca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Lock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::Unlock)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814fb4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Unlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.UnlockBytesAfterWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(int32_t)>(&::MA::Flora::GraphicsBufferRef::UnlockBytesAfterWrite)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814fb410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"UnlockBytesAfterWrite", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(void*, int32_t, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferRef::SetData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814fb1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"SetData", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::GraphicsBufferRef::*)(::System::Array*, int32_t, int32_t, int32_t)>(&::MA::Flora::GraphicsBufferRef::SetData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814fb0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"SetData", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.RequestData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (::MA::Flora::GraphicsBufferRef::*)(int64_t, int64_t)>(&::MA::Flora::GraphicsBufferRef::RequestData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814fad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"RequestData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.op_Implicit___UnityEngine__GraphicsBuffer_
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferRef::op_Implicit___UnityEngine__GraphicsBuffer_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814fb990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::GraphicsBufferRef::*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferRef::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferRef::*)(::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferRef::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805a82e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GraphicsBufferRef::*)(::System::Object*)>(&::MA::Flora::GraphicsBufferRef::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180646390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {::i2c::class_of<::MA::Flora::GraphicsBufferRef>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::GraphicsBufferRef::*)()>(&::MA::Flora::GraphicsBufferRef::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {::i2c::class_of<::MA::Flora::GraphicsBufferRef>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsBufferRef, ::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferRef::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::GraphicsBufferRef.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::GraphicsBufferRef, ::MA::Flora::GraphicsBufferRef)>(&::MA::Flora::GraphicsBufferRef::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805a8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::GraphicsBufferRef::setStaticF_Null(::MA::Flora::GraphicsBufferRef  value)  {
::cordl_internals::setStaticField<::MA::Flora::GraphicsBufferRef, "Null", ::MA::Flora::GraphicsBufferRef>(std::forward<::MA::Flora::GraphicsBufferRef>(value));
}
inline ::MA::Flora::GraphicsBufferRef MA::Flora::GraphicsBufferRef::getStaticF_Null()  {
return ::cordl_internals::getStaticField<::MA::Flora::GraphicsBufferRef, "Null", ::MA::Flora::GraphicsBufferRef>();
}
inline bool MA::Flora::GraphicsBufferRef::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferRef::get_Exists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Exists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::MA::Flora::GraphicsBufferDescriptor MA::Flora::GraphicsBufferRef::get_Descriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Descriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::GraphicsBufferDescriptor>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer_Target MA::Flora::GraphicsBufferRef::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_Target>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer_UsageFlags MA::Flora::GraphicsBufferRef::get_UsageFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_UsageFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer_UsageFlags>(*this, ___internal_method);
}
inline int32_t MA::Flora::GraphicsBufferRef::get_Stride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Stride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::GraphicsBufferRef::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t MA::Flora::GraphicsBufferRef::get_SizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_SizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBufferHandle MA::Flora::GraphicsBufferRef::get_BufferHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_BufferHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBufferHandle>(*this, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* MA::Flora::GraphicsBufferRef::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(*this, ___internal_method);
}
inline ::StringW MA::Flora::GraphicsBufferRef::get_DebugName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"get_DebugName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferRef::set_DebugName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"set_DebugName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void MA::Flora::GraphicsBufferRef::_ctor(::UnityEngine::GraphicsBuffer_Target  target, int32_t  length, int32_t  stride, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, length, stride, name);
}
inline void MA::Flora::GraphicsBufferRef::_ctor(::UnityEngine::GraphicsBuffer_Target  target, int32_t  length, int32_t  stride, ::by_ref<::Unity::Collections::FixedString64Bytes>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, length, stride, name);
}
inline void MA::Flora::GraphicsBufferRef::_ctor(::UnityEngine::GraphicsBuffer_Target  target, ::UnityEngine::GraphicsBuffer_UsageFlags  usageFlags, int32_t  length, int32_t  stride, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer_Target>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer_UsageFlags>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, target, usageFlags, length, stride, name);
}
inline void MA::Flora::GraphicsBufferRef::_ctor(::MA::Flora::GraphicsBufferDescriptor  descriptor, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferDescriptor>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, descriptor, name);
}
inline void MA::Flora::GraphicsBufferRef::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferRef::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::StringW MA::Flora::GraphicsBufferRef::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsBufferRef>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferRef::ResizeAndDiscardContents(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeAndDiscardContents", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
inline void MA::Flora::GraphicsBufferRef::ResizeAndCopyContents(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeAndCopyContents", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
inline void MA::Flora::GraphicsBufferRef::ResizeAndCopyContentsSOA(int32_t  arrayCount, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeAndCopyContentsSOA", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, arrayCount, length);
}
inline void MA::Flora::GraphicsBufferRef::GrowIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, bool  keepContents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"GrowIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requiredLength, growPolicy, keepContents);
}
inline void MA::Flora::GraphicsBufferRef::TrimIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy, bool  keepContents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"TrimIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requiredLength, trimPolicy, keepContents);
}
inline void MA::Flora::GraphicsBufferRef::ResizeIfNeeded(int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy, bool  keepContents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"ResizeIfNeeded", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, requiredLength, growPolicy, trimPolicy, keepContents);
}
inline int32_t MA::Flora::GraphicsBufferRef::CalculateNewGrowthSize(int32_t  currentLength, int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CalculateNewGrowthSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, currentLength, requiredLength, growPolicy);
}
inline int32_t MA::Flora::GraphicsBufferRef::CalculateNewTrimSize(int32_t  currentLength, int32_t  requiredLength, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CalculateNewTrimSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, currentLength, requiredLength, trimPolicy);
}
inline int32_t MA::Flora::GraphicsBufferRef::CalculateNewSize(int32_t  currentLength, int32_t  requiredLength, ::MA::Flora::GraphicsBufferGrowPolicy  growPolicy, ::MA::Flora::GraphicsBufferTrimPolicy  trimPolicy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CalculateNewSize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::MA::Flora::GraphicsBufferGrowPolicy>(), ::i2c::type_of<::MA::Flora::GraphicsBufferTrimPolicy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, currentLength, requiredLength, growPolicy, trimPolicy);
}
inline void MA::Flora::GraphicsBufferRef::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::GraphicsBufferRef::Unlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Unlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::GraphicsBufferRef::LockForWrite(int32_t  startIndex, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {"LockForWrite", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, startIndex, length);
}
template<typename T>
inline void MA::Flora::GraphicsBufferRef::UnlockAfterWrite(int32_t  countWritten)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {"UnlockAfterWrite", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, countWritten);
}
inline void MA::Flora::GraphicsBufferRef::UnlockBytesAfterWrite(int32_t  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"UnlockBytesAfterWrite", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bytesWritten);
}
template<typename T>
inline void MA::Flora::GraphicsBufferRef::SetData(::Unity::Collections::NativeArray_1<T>  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {"SetData", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template<typename T>
inline void MA::Flora::GraphicsBufferRef::SetData(::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {"SetData", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
template<typename T>
inline void MA::Flora::GraphicsBufferRef::SetData(T*  data, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {"SetData", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, count);
}
template<typename T>
inline void MA::Flora::GraphicsBufferRef::SetData(T*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {"SetData", {::i2c::class_of<T>()}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline void MA::Flora::GraphicsBufferRef::SetData(void*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  stride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"SetData", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, nativeBufferStartIndex, graphicsBufferStartIndex, count, stride);
}
inline void MA::Flora::GraphicsBufferRef::SetData(::System::Array*  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"SetData", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, nativeBufferStartIndex, graphicsBufferStartIndex, count);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest MA::Flora::GraphicsBufferRef::RequestData(int64_t  offsetInBytes, int64_t  sizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"RequestData", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(*this, ___internal_method, offsetInBytes, sizeInBytes);
}
template<typename T>
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest MA::Flora::GraphicsBufferRef::RequestData(::by_ref<::Unity::Collections::NativeArray_1<T>>  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                    {"RequestData", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(*this, ___internal_method, data);
}
inline ::UnityEngine::GraphicsBuffer* MA::Flora::GraphicsBufferRef::op_Implicit___UnityEngine__GraphicsBuffer_(::MA::Flora::GraphicsBufferRef  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method, value);
}
inline int32_t MA::Flora::GraphicsBufferRef::CompareTo(::MA::Flora::GraphicsBufferRef  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool MA::Flora::GraphicsBufferRef::Equals(::MA::Flora::GraphicsBufferRef  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::GraphicsBufferRef::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsBufferRef>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::GraphicsBufferRef::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::GraphicsBufferRef>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::GraphicsBufferRef::op_Equality(::MA::Flora::GraphicsBufferRef  lhs, ::MA::Flora::GraphicsBufferRef  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool MA::Flora::GraphicsBufferRef::op_Inequality(::MA::Flora::GraphicsBufferRef  lhs, ::MA::Flora::GraphicsBufferRef  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GraphicsBufferRef>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::GraphicsBufferRef>(), ::i2c::type_of<::MA::Flora::GraphicsBufferRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::GraphicsBufferRef::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::GraphicsBufferRef::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>"
constexpr  MA::Flora::GraphicsBufferRef::operator ::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>"
constexpr ::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>* MA::Flora::GraphicsBufferRef::i___System__IEquatable_1___MA__Flora__GraphicsBufferRef_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::GraphicsBufferRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::GraphicsBufferRef>"
constexpr  MA::Flora::GraphicsBufferRef::operator ::System::IComparable_1<::MA::Flora::GraphicsBufferRef>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::GraphicsBufferRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::GraphicsBufferRef>"
constexpr ::System::IComparable_1<::MA::Flora::GraphicsBufferRef>* MA::Flora::GraphicsBufferRef::i___System__IComparable_1___MA__Flora__GraphicsBufferRef_()  {
return static_cast<::System::IComparable_1<::MA::Flora::GraphicsBufferRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GraphicsBufferRef::GraphicsBufferRef(int32_t  Index) noexcept  {
this->Index = Index;
}
// Ctor Parameters []
constexpr ::MA::Flora::GraphicsBufferRef::GraphicsBufferRef()   {
}
