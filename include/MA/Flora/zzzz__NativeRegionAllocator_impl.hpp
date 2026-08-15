#pragma once
// IWYU pragma private; include "MA/Flora/NativeRegionAllocator.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "MA/Flora/zzzz__NativeRegionAllocator_def.hpp"
#include "MA/Flora/zzzz__UnsafeRegionAllocator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeRegionAllocator::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeRegionAllocator::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181454550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181454680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.get_AllocatedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::get_AllocatedSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_AllocatedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.get_MaxAllocatedSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::get_MaxAllocatedSize)> {
  constexpr static std::size_t size = 0x2a00;
  constexpr static std::size_t addrs = 0x180a236f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_MaxAllocatedSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.get_AvailableBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::get_AvailableBlocks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_AvailableBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.get_PendingFreeBlockCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::get_PendingFreeBlockCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814546a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_PendingFreeBlockCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181454450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::Clear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181454420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::NativeRegionAllocator::*)(int32_t)>(&::MA::Flora::NativeRegionAllocator::Allocate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeRegionAllocator::*)(int32_t, int32_t)>(&::MA::Flora::NativeRegionAllocator::Free)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814544f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Free", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.MergeFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::MergeFree)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181454540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"MergeFree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.IsElementFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::NativeRegionAllocator::*)(int32_t)>(&::MA::Flora::NativeRegionAllocator::IsElementFree)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181454500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"IsElementFree", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.CheckRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::CheckRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"CheckRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeRegionAllocator.CheckWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::NativeRegionAllocator::*)()>(&::MA::Flora::NativeRegionAllocator::CheckWrite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"CheckWrite", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::NativeRegionAllocator::_ctor(int32_t  initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator);
}
inline bool MA::Flora::NativeRegionAllocator::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t MA::Flora::NativeRegionAllocator::get_AllocatedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_AllocatedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::NativeRegionAllocator::get_MaxAllocatedSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_MaxAllocatedSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::NativeRegionAllocator::get_AvailableBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_AvailableBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::NativeRegionAllocator::get_PendingFreeBlockCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"get_PendingFreeBlockCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::NativeRegionAllocator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::NativeRegionAllocator::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t MA::Flora::NativeRegionAllocator::Allocate(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, count);
}
inline void MA::Flora::NativeRegionAllocator::Free(int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"Free", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
inline void MA::Flora::NativeRegionAllocator::MergeFree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"MergeFree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool MA::Flora::NativeRegionAllocator::IsElementFree(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"IsElementFree", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index);
}
inline void MA::Flora::NativeRegionAllocator::CheckRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"CheckRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::NativeRegionAllocator::CheckWrite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeRegionAllocator>(),
                        {"CheckWrite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::NativeRegionAllocator::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::NativeRegionAllocator::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::MA::Flora::UnsafeRegionAllocator*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeRegionAllocator::NativeRegionAllocator(::MA::Flora::UnsafeRegionAllocator*  m_Data, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_Allocator) noexcept  {
this->m_Data = m_Data;
this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeRegionAllocator::NativeRegionAllocator()   {
}
