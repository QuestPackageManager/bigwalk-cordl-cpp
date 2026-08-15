#pragma once
// IWYU pragma private; include "MA/Flora/NativeBitSet.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__ParallelBitArray_def.hpp"
#include "MA/Flora/zzzz__SetBitChunkEnumerator_def.hpp"
#include "MA/Flora/zzzz__SetBitEnumerator_1_def.hpp"
#include "MA/Flora/zzzz__SetBitReverseEnumerator_1_def.hpp"
#include "MA/Flora/zzzz__UnsafeBitSet_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__RewindableAllocator_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::MA::Flora::NativeBitSet_NativeBitSetDispose.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet_NativeBitSetDispose::*)()>(&::MA::Flora::NativeBitSet_NativeBitSetDispose::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18145f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet_NativeBitSetDispose>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::NativeBitSet_NativeBitSetDispose::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet_NativeBitSetDispose>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::MA::Flora::UnsafeBitSet*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeBitSet_NativeBitSetDispose::NativeBitSet_NativeBitSetDispose(::MA::Flora::UnsafeBitSet*  m_Data) noexcept  {
this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeBitSet_NativeBitSetDispose::NativeBitSet_NativeBitSetDispose()   {
}
//  Writing Method size for method: ::MA::Flora::NativeBitSet_NativeBitSetDisposeJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet_NativeBitSetDisposeJob::*)()>(&::MA::Flora::NativeBitSet_NativeBitSetDisposeJob::Execute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18145f580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet_NativeBitSetDisposeJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::NativeBitSet_NativeBitSetDisposeJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet_NativeBitSetDisposeJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  MA::Flora::NativeBitSet_NativeBitSetDisposeJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* MA::Flora::NativeBitSet_NativeBitSetDisposeJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "::MA::Flora::NativeBitSet_NativeBitSetDispose", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeBitSet_NativeBitSetDisposeJob::NativeBitSet_NativeBitSetDisposeJob(::MA::Flora::NativeBitSet_NativeBitSetDispose  Data) noexcept  {
this->Data = Data;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeBitSet_NativeBitSetDisposeJob::NativeBitSet_NativeBitSetDisposeJob()   {
}
//  Writing Method size for method: ::MA::Flora::NativeBitSet.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ff710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.get_MaxLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::get_MaxLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814543d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_MaxLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)(int32_t)>(&::MA::Flora::NativeBitSet::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814543a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t, bool)>(&::MA::Flora::NativeBitSet::set_Item)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814543f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeBitSet::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181460360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18145fd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::NativeBitSet::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::NativeBitSet::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18145fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18145f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.GetUnsafeSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::UnsafeBitSet* (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::GetUnsafeSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetUnsafeSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::NativeBitSet (::MA::Flora::NativeBitSet::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeBitSet::Clone)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18145f910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Clone", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.ReserveCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t)>(&::MA::Flora::NativeBitSet::ReserveCapacity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814600c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ReserveCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(::MA::Flora::NativeBitSet)>(&::MA::Flora::NativeBitSet::CopyFrom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18145faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::Count)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18145fc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.CountInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::NativeBitSet::CountInRange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18145fc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CountInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.CountChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::CountChunks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18145fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CountChunks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.UnionWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(::MA::Flora::NativeBitSet)>(&::MA::Flora::NativeBitSet::UnionWith)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181460320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"UnionWith", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.UnionAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::NativeBitSet::UnionAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181460300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"UnionAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.IntersectWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(::MA::Flora::NativeBitSet)>(&::MA::Flora::NativeBitSet::IntersectWith)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181460040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"IntersectWith", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.ExceptWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(::MA::Flora::NativeBitSet)>(&::MA::Flora::NativeBitSet::ExceptWith)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18145fe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ExceptWith", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AddNoResize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t)>(&::MA::Flora::NativeBitSet::AddNoResize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18145f5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddNoResize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t)>(&::MA::Flora::NativeBitSet::Add)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145f730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.TryAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)(int32_t)>(&::MA::Flora::NativeBitSet::TryAdd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814602e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"TryAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::Flora::NativeBitSet::AddRange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18145f6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AddRangeNoResize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t*, int32_t)>(&::MA::Flora::NativeBitSet::AddRangeNoResize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AddRangeNoResize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::Flora::NativeBitSet::AddRangeNoResize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18145f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t*, int32_t)>(&::MA::Flora::NativeBitSet::AddRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145f6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AddRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::NativeBitSet::AddRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)(int32_t)>(&::MA::Flora::NativeBitSet::Remove)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814600a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.RemoveRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::NativeBitSet::RemoveRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181460080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)(int32_t)>(&::MA::Flora::NativeBitSet::Contains)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814543a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AnyInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::NativeBitSet::AnyInRange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145f750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AnyInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.FindFreeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::NativeBitSet::FindFreeIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18145fe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"FindFreeIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AsChunkArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint64_t> (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::AsChunkArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18145f770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AsChunkArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.AsParallelBitArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ParallelBitArray (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::AsParallelBitArray)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18145f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AsParallelBitArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.CopyToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)(::Unity::Collections::NativeList_1<int32_t>)>(&::MA::Flora::NativeBitSet::CopyToList)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18145fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CopyToList", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::NativeBitSet::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeBitSet::ToArray)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814601a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.ToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::NativeBitSet::*)(::by_ref<::Unity::Collections::RewindableAllocator>)>(&::MA::Flora::NativeBitSet::ToArray)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814601f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.ToChunkArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::NativeBitSet::*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeBitSet::ToChunkArray)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181460240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.ToChunkArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<int32_t> (::MA::Flora::NativeBitSet::*)(::by_ref<::Unity::Collections::RewindableAllocator>)>(&::MA::Flora::NativeBitSet::ToChunkArray)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181460290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.IndicesInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (::MA::Flora::NativeBitSet::*)(int32_t, int32_t)>(&::MA::Flora::NativeBitSet::IndicesInRange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18145ffd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"IndicesInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.GetChunkEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitChunkEnumerator (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::GetChunkEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18145ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetChunkEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitEnumerator_1<int32_t> (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::GetEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18145ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.GetReverseEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::SetBitReverseEnumerator_1<int32_t> (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::GetReverseEnumerator)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18145ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetReverseEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814600f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814600f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.CheckRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::CheckRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CheckRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBitSet.CheckWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeBitSet::*)()>(&::MA::Flora::NativeBitSet::CheckWrite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CheckWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::NativeBitSet::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::NativeBitSet::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t MA::Flora::NativeBitSet::get_MaxLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_MaxLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::NativeBitSet::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void MA::Flora::NativeBitSet::set_Item(int32_t  index, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
inline void MA::Flora::NativeBitSet::_ctor(int32_t  capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, allocator);
}
inline void MA::Flora::NativeBitSet::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle MA::Flora::NativeBitSet::Dispose(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
inline void MA::Flora::NativeBitSet::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::MA::Flora::UnsafeBitSet* MA::Flora::NativeBitSet::GetUnsafeSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetUnsafeSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::UnsafeBitSet*>(*this, ___internal_method);
}
inline ::MA::Flora::NativeBitSet MA::Flora::NativeBitSet::Clone(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Clone", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::NativeBitSet>(*this, ___internal_method, allocator);
}
inline void MA::Flora::NativeBitSet::ReserveCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ReserveCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void MA::Flora::NativeBitSet::CopyFrom(::MA::Flora::NativeBitSet  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CopyFrom", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::NativeBitSet::Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::NativeBitSet::CountInRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CountInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline int32_t MA::Flora::NativeBitSet::CountChunks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CountChunks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::NativeBitSet::UnionWith(::MA::Flora::NativeBitSet  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"UnionWith", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::NativeBitSet::UnionAt(int32_t  srcIndex, int32_t  dstIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"UnionAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, srcIndex, dstIndex);
}
inline void MA::Flora::NativeBitSet::IntersectWith(::MA::Flora::NativeBitSet  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"IntersectWith", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::NativeBitSet::ExceptWith(::MA::Flora::NativeBitSet  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ExceptWith", {}, {::i2c::type_of<::MA::Flora::NativeBitSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void MA::Flora::NativeBitSet::AddNoResize(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddNoResize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void MA::Flora::NativeBitSet::Add(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline bool MA::Flora::NativeBitSet::TryAdd(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"TryAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void MA::Flora::NativeBitSet::AddRange(::Unity::Collections::NativeArray_1<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indices);
}
inline void MA::Flora::NativeBitSet::AddRangeNoResize(int32_t*  indices, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indices, count);
}
inline void MA::Flora::NativeBitSet::AddRangeNoResize(::Unity::Collections::NativeArray_1<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRangeNoResize", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indices);
}
inline void MA::Flora::NativeBitSet::AddRange(int32_t*  indices, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, indices, count);
}
inline void MA::Flora::NativeBitSet::AddRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AddRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
inline bool MA::Flora::NativeBitSet::Remove(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Remove", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline bool MA::Flora::NativeBitSet::RemoveRange(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"RemoveRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index, count);
}
inline bool MA::Flora::NativeBitSet::Contains(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"Contains", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline bool MA::Flora::NativeBitSet::AnyInRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AnyInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, startIndex, count);
}
inline int32_t MA::Flora::NativeBitSet::FindFreeIndex(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"FindFreeIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, startIndex, count);
}
inline ::Unity::Collections::NativeArray_1<uint64_t> MA::Flora::NativeBitSet::AsChunkArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AsChunkArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint64_t>>(*this, ___internal_method);
}
inline ::MA::Flora::ParallelBitArray MA::Flora::NativeBitSet::AsParallelBitArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"AsParallelBitArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ParallelBitArray>(*this, ___internal_method);
}
inline void MA::Flora::NativeBitSet::CopyToList(::Unity::Collections::NativeList_1<int32_t>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CopyToList", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::NativeBitSet::ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::NativeBitSet::ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeBitSet::ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                    {"ToArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeBitSet::ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                    {"ToArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::NativeBitSet::ToChunkArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
inline ::Unity::Collections::NativeArray_1<int32_t> MA::Flora::NativeBitSet::ToChunkArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"ToChunkArray", {}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<int32_t>>(*this, ___internal_method, allocator);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeBitSet::ToChunkArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                    {"ToChunkArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::Flora::NativeBitSet::ToChunkArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                    {"ToChunkArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::Unity::Collections::RewindableAllocator>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::NativeBitSet::IndicesInRange(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"IndicesInRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(*this, ___internal_method, startIndex, count);
}
inline ::MA::Flora::SetBitChunkEnumerator MA::Flora::NativeBitSet::GetChunkEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetChunkEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitChunkEnumerator>(*this, ___internal_method);
}
inline ::MA::Flora::SetBitEnumerator_1<int32_t> MA::Flora::NativeBitSet::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<int32_t>>(*this, ___internal_method);
}
inline ::MA::Flora::SetBitReverseEnumerator_1<int32_t> MA::Flora::NativeBitSet::GetReverseEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"GetReverseEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitReverseEnumerator_1<int32_t>>(*this, ___internal_method);
}
template<typename T>
inline ::MA::Flora::SetBitEnumerator_1<T> MA::Flora::NativeBitSet::AsType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                    {"AsType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::SetBitEnumerator_1<T>>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* MA::Flora::NativeBitSet::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* MA::Flora::NativeBitSet::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(*this, ___internal_method);
}
inline void MA::Flora::NativeBitSet::CheckRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CheckRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::NativeBitSet::CheckWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBitSet>(),
                        {"CheckWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::NativeBitSet::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::NativeBitSet::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr  MA::Flora::NativeBitSet::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* MA::Flora::NativeBitSet::i___System__Collections__Generic__IEnumerable_1_int32_t_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  MA::Flora::NativeBitSet::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* MA::Flora::NativeBitSet::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SetData", ty: "::MA::Flora::UnsafeBitSet*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeBitSet::NativeBitSet(::MA::Flora::UnsafeBitSet*  m_SetData) noexcept  {
this->m_SetData = m_SetData;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeBitSet::NativeBitSet()   {
}
