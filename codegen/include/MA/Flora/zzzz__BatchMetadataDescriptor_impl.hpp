#pragma once
// IWYU pragma private; include "MA/Flora/BatchMetadataDescriptor.hpp"
#include "MA/Flora/zzzz__BatchPropertyInfo_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "MA/Flora/zzzz__BatchMetadataDescriptor_def.hpp"
#include "MA/Flora/zzzz__BatchBuiltinPropertyFlags_def.hpp"
#include "MA/Flora/zzzz__BatchPropertyInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchMetadataDescriptor::*)()>(&::MA::Flora::BatchMetadataDescriptor::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181458e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.get_ComponentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchMetadataDescriptor::*)()>(&::MA::Flora::BatchMetadataDescriptor::get_ComponentCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"get_ComponentCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.get_AdditionalComponentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchMetadataDescriptor::*)()>(&::MA::Flora::BatchMetadataDescriptor::get_AdditionalComponentCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181458e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"get_AdditionalComponentCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchMetadataDescriptor::*)(::MA::Flora::BatchBuiltinPropertyFlags, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::BatchMetadataDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181458710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchBuiltinPropertyFlags>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchMetadataDescriptor::*)(::MA::Flora::BatchBuiltinPropertyFlags, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::BatchMetadataDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x181458920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchBuiltinPropertyFlags>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchMetadataDescriptor::*)(::by_ref<::MA::Flora::BatchMetadataDescriptor>, ::Unity::Collections::Allocator)>(&::MA::Flora::BatchMetadataDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181458750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::MA::Flora::BatchMetadataDescriptor>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchMetadataDescriptor::*)()>(&::MA::Flora::BatchMetadataDescriptor::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181458530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.AddComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchMetadataDescriptor::*)(::MA::Flora::BatchPropertyInfo)>(&::MA::Flora::BatchMetadataDescriptor::AddComponent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181458470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"AddComponent", {}, {::i2c::type_of<::MA::Flora::BatchPropertyInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.AddComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchMetadataDescriptor::*)(int32_t, int32_t, bool, bool)>(&::MA::Flora::BatchMetadataDescriptor::AddComponent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814583b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"AddComponent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchMetadataDescriptor::*)(int32_t)>(&::MA::Flora::BatchMetadataDescriptor::IndexOf)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181458650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"IndexOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.TryGetPropertyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchMetadataDescriptor::*)(int32_t, ::by_ref<::MA::Flora::BatchPropertyInfo>)>(&::MA::Flora::BatchMetadataDescriptor::TryGetPropertyInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181458690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"TryGetPropertyInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::BatchPropertyInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.TryGetPropertyIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchMetadataDescriptor::*)(int32_t, ::by_ref<int32_t>)>(&::MA::Flora::BatchMetadataDescriptor::TryGetPropertyIndex)> {
  constexpr static std::size_t size = 0x26f0;
  constexpr static std::size_t addrs = 0x180c2edf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"TryGetPropertyIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchMetadataDescriptor::*)(::MA::Flora::BatchMetadataDescriptor)>(&::MA::Flora::BatchMetadataDescriptor::Equals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181458560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchMetadataDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchMetadataDescriptor.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::BatchMetadataDescriptor::*)()>(&::MA::Flora::BatchMetadataDescriptor::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                    {::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::BatchMetadataDescriptor::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t MA::Flora::BatchMetadataDescriptor::get_ComponentCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"get_ComponentCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t MA::Flora::BatchMetadataDescriptor::get_AdditionalComponentCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"get_AdditionalComponentCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void MA::Flora::BatchMetadataDescriptor::_ctor(::MA::Flora::BatchBuiltinPropertyFlags  flags, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchBuiltinPropertyFlags>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flags, allocator);
}
inline void MA::Flora::BatchMetadataDescriptor::_ctor(::MA::Flora::BatchBuiltinPropertyFlags  flags, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>  additionalComponents, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchBuiltinPropertyFlags>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, flags, additionalComponents, allocator);
}
inline void MA::Flora::BatchMetadataDescriptor::_ctor(::by_ref<::MA::Flora::BatchMetadataDescriptor>  other, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::MA::Flora::BatchMetadataDescriptor>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other, allocator);
}
inline void MA::Flora::BatchMetadataDescriptor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void MA::Flora::BatchMetadataDescriptor::AddComponent(::MA::Flora::BatchPropertyInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"AddComponent", {}, {::i2c::type_of<::MA::Flora::BatchPropertyInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info);
}
inline void MA::Flora::BatchMetadataDescriptor::AddComponent(int32_t  nameID, int32_t  sizeInBytes, bool  isOverriden, bool  isPerInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"AddComponent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameID, sizeInBytes, isOverriden, isPerInstance);
}
template<typename T>
inline void MA::Flora::BatchMetadataDescriptor::AddComponent(int32_t  nameID, bool  isOverriden, bool  isPerInstance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                    {"AddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameID, isOverriden, isPerInstance);
}
template<typename T>
inline void MA::Flora::BatchMetadataDescriptor::AddBuiltinComponent(int32_t  nameID, bool  isOverriden, bool  isPerInstance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                    {"AddBuiltinComponent", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameID, isOverriden, isPerInstance);
}
inline int32_t MA::Flora::BatchMetadataDescriptor::IndexOf(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"IndexOf", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, nameID);
}
inline bool MA::Flora::BatchMetadataDescriptor::TryGetPropertyInfo(int32_t  nameID, ::by_ref<::MA::Flora::BatchPropertyInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"TryGetPropertyInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::BatchPropertyInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, nameID, info);
}
inline bool MA::Flora::BatchMetadataDescriptor::TryGetPropertyIndex(int32_t  nameID, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"TryGetPropertyIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, nameID, index);
}
inline bool MA::Flora::BatchMetadataDescriptor::Equals(::MA::Flora::BatchMetadataDescriptor  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::BatchMetadataDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::BatchMetadataDescriptor::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::BatchMetadataDescriptor>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>"
constexpr  MA::Flora::BatchMetadataDescriptor::operator ::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>"
constexpr ::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>* MA::Flora::BatchMetadataDescriptor::i___System__IEquatable_1___MA__Flora__BatchMetadataDescriptor_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::BatchMetadataDescriptor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::BatchMetadataDescriptor::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::BatchMetadataDescriptor::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "ComponentMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentArray", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchPropertyInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "BuiltinComponentCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchMetadataDescriptor::BatchMetadataDescriptor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  ComponentMap, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchPropertyInfo>  ComponentArray, int32_t  BuiltinComponentCount, int32_t  HashCode) noexcept  {
this->ComponentMap = ComponentMap;
this->ComponentArray = ComponentArray;
this->BuiltinComponentCount = BuiltinComponentCount;
this->HashCode = HashCode;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchMetadataDescriptor::BatchMetadataDescriptor()   {
}
