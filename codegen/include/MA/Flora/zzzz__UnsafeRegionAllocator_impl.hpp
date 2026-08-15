#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeRegionAllocator.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "MA/Flora/zzzz__UnsafeRegionAllocator_def.hpp"
#include "MA/Flora/zzzz__UnsafeRegionAllocator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator_Block.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeRegionAllocator_Block::*)(::MA::Flora::UnsafeRegionAllocator_Block)>(&::MA::Flora::UnsafeRegionAllocator_Block::CompareTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805aa020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator_Block>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::UnsafeRegionAllocator_Block>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::UnsafeRegionAllocator_Block::CompareTo(::MA::Flora::UnsafeRegionAllocator_Block  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator_Block>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::UnsafeRegionAllocator_Block>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>"
constexpr  MA::Flora::UnsafeRegionAllocator_Block::operator ::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>"
constexpr ::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>* MA::Flora::UnsafeRegionAllocator_Block::i___System__IComparable_1___MA__Flora__UnsafeRegionAllocator_Block_()  {
return static_cast<::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::UnsafeRegionAllocator_Block::UnsafeRegionAllocator_Block(int32_t  Offset, int32_t  Length) noexcept  {
this->Offset = Offset;
this->Length = Length;
}
// Ctor Parameters []
constexpr ::MA::Flora::UnsafeRegionAllocator_Block::UnsafeRegionAllocator_Block()   {
}
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeRegionAllocator::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::UnsafeRegionAllocator::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1814647e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181464410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814558e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.get_AllocatedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::get_AllocatedSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_AllocatedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.get_MaxAllocatedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::get_MaxAllocatedSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_MaxAllocatedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.get_AvailableBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::get_AvailableBlocks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814558d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_AvailableBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.get_PendingFreeBlockCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::get_PendingFreeBlockCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_PendingFreeBlockCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::Clear)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814643d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeRegionAllocator::*)(int32_t)>(&::MA::Flora::UnsafeRegionAllocator::Allocate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181464290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeRegionAllocator::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeRegionAllocator::Free)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1814644b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Free", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.MergeFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeRegionAllocator::*)()>(&::MA::Flora::UnsafeRegionAllocator::MergeFree)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181464590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"MergeFree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.IsElementFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::UnsafeRegionAllocator::*)(int32_t)>(&::MA::Flora::UnsafeRegionAllocator::IsElementFree)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181464540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"IsElementFree", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.FindFreeBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::UnsafeRegionAllocator::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeRegionAllocator::FindFreeBlock)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181464460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"FindFreeBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::UnsafeRegionAllocator.CheckIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::UnsafeRegionAllocator::*)(int32_t, int32_t)>(&::MA::Flora::UnsafeRegionAllocator::CheckIndexCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"CheckIndexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::UnsafeRegionAllocator::_ctor(int32_t  initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator);
}
inline void MA::Flora::UnsafeRegionAllocator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::UnsafeRegionAllocator::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeRegionAllocator::get_AllocatedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_AllocatedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeRegionAllocator::get_MaxAllocatedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_MaxAllocatedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeRegionAllocator::get_AvailableBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_AvailableBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeRegionAllocator::get_PendingFreeBlockCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"get_PendingFreeBlockCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::UnsafeRegionAllocator::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t MA::Flora::UnsafeRegionAllocator::Allocate(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, count);
}
inline void MA::Flora::UnsafeRegionAllocator::Free(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"Free", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
inline void MA::Flora::UnsafeRegionAllocator::MergeFree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"MergeFree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::UnsafeRegionAllocator::IsElementFree(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"IsElementFree", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline int32_t MA::Flora::UnsafeRegionAllocator::FindFreeBlock(int32_t  count, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"FindFreeBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, count, startIndex);
}
inline void MA::Flora::UnsafeRegionAllocator::CheckIndexCount(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::UnsafeRegionAllocator>(),
                        {"CheckIndexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::UnsafeRegionAllocator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::UnsafeRegionAllocator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_AllocatedSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxAllocatedSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HighestAllocatedSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FirstValidBlockIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FreeBlocks", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PendingDeallocations", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::UnsafeRegionAllocator::UnsafeRegionAllocator(int32_t  m_AllocatedSize, int32_t  m_MaxAllocatedSize, int32_t  m_HighestAllocatedSize, int32_t  m_FirstValidBlockIndex, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>  m_FreeBlocks, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>  m_PendingDeallocations) noexcept  {
this->m_AllocatedSize = m_AllocatedSize;
this->m_MaxAllocatedSize = m_MaxAllocatedSize;
this->m_HighestAllocatedSize = m_HighestAllocatedSize;
this->m_FirstValidBlockIndex = m_FirstValidBlockIndex;
this->m_FreeBlocks = m_FreeBlocks;
this->m_PendingDeallocations = m_PendingDeallocations;
}
// Ctor Parameters []
constexpr ::MA::Flora::UnsafeRegionAllocator::UnsafeRegionAllocator()   {
}
