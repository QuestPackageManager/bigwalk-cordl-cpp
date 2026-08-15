#pragma once
// IWYU pragma private; include "MA/Flora/BatchDomainLayout.hpp"
#include "MA/Flora/zzzz__BatchPropertyInfo_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__MetadataValue_impl.hpp"
#include "MA/Flora/zzzz__BatchDomainLayout_def.hpp"
#include "MA/Flora/zzzz__BatchMetadataDescriptor_def.hpp"
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.get_IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchDomainLayout::*)()>(&::MA::Flora::BatchDomainLayout::get_IsCreated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181458390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"get_IsCreated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchDomainLayout::*)(::MA::Flora::BatchMetadataDescriptor, int64_t, int32_t, bool)>(&::MA::Flora::BatchDomainLayout::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181458130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchMetadataDescriptor>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::BatchDomainLayout::*)()>(&::MA::Flora::BatchDomainLayout::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181457e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.GetMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::BatchDomainLayout::*)(int32_t)>(&::MA::Flora::BatchDomainLayout::GetMetadata)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181457f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetMetadata", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.GetPerInstanceMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::BatchDomainLayout::*)(int32_t)>(&::MA::Flora::BatchDomainLayout::GetPerInstanceMetadata)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181458000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetPerInstanceMetadata", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.GetPerInstanceAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::BatchDomainLayout::*)(int32_t)>(&::MA::Flora::BatchDomainLayout::GetPerInstanceAddress)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181457f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetPerInstanceAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.GetAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::MA::Flora::BatchDomainLayout::*)(int32_t)>(&::MA::Flora::BatchDomainLayout::GetAddress)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181457ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.IsOverriden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchDomainLayout::*)(int32_t)>(&::MA::Flora::BatchDomainLayout::IsOverriden)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181458070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"IsOverriden", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchDomainLayout.IsPerInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::BatchDomainLayout::*)(int32_t)>(&::MA::Flora::BatchDomainLayout::IsPerInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814580d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"IsPerInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::BatchDomainLayout::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::BatchDomainLayout::_ctor(::MA::Flora::BatchMetadataDescriptor  descriptor, int64_t  baseAddress, int32_t  instanceCapacity, bool  lightProbesEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {".ctor", {}, {::i2c::type_of<::MA::Flora::BatchMetadataDescriptor>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, descriptor, baseAddress, instanceCapacity, lightProbesEnabled);
}
inline void MA::Flora::BatchDomainLayout::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint32_t MA::Flora::BatchDomainLayout::GetMetadata(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetMetadata", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, nameID);
}
inline uint32_t MA::Flora::BatchDomainLayout::GetPerInstanceMetadata(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetPerInstanceMetadata", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, nameID);
}
inline uint32_t MA::Flora::BatchDomainLayout::GetPerInstanceAddress(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetPerInstanceAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, nameID);
}
inline uint32_t MA::Flora::BatchDomainLayout::GetAddress(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"GetAddress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, nameID);
}
inline bool MA::Flora::BatchDomainLayout::IsOverriden(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"IsOverriden", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, nameID);
}
inline bool MA::Flora::BatchDomainLayout::IsPerInstance(int32_t  nameID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchDomainLayout>(),
                        {"IsPerInstance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, nameID);
}
// Ctor Parameters [CppParam { name: "InstanceCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BaseAddress", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LengthInBytes", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Properties", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "MetadataValues", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "NameToIndexMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::BatchDomainLayout::BatchDomainLayout(int32_t  InstanceCapacity, int64_t  BaseAddress, int64_t  LengthInBytes, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchPropertyInfo>  Properties, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::MetadataValue>  MetadataValues, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  NameToIndexMap) noexcept  {
this->InstanceCapacity = InstanceCapacity;
this->BaseAddress = BaseAddress;
this->LengthInBytes = LengthInBytes;
this->Properties = Properties;
this->MetadataValues = MetadataValues;
this->NameToIndexMap = NameToIndexMap;
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchDomainLayout::BatchDomainLayout()   {
}
