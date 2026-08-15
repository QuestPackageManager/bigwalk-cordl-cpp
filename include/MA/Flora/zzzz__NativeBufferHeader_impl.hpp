#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferHeader.hpp"
#include "MA/Flora/zzzz__NativeBufferHeader_def.hpp"
#include "MA/Flora/zzzz__NativeBufferHeader_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeBufferHeader_TrashMode::NativeBufferHeader_TrashMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeBufferHeader_TrashMode::NativeBufferHeader_TrashMode()   {
}
constexpr ::MA::Flora::NativeBufferHeader_TrashMode  MA::Flora::NativeBufferHeader_TrashMode::TrashOldData{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::NativeBufferHeader_TrashMode  MA::Flora::NativeBufferHeader_TrashMode::RetainOldData{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::MA::Flora::NativeBufferHeader.GetElementPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::MA::Flora::NativeBufferHeader*)>(&::MA::Flora::NativeBufferHeader::GetElementPointer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181460690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"GetElementPointer", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBufferHeader.EnsureCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::NativeBufferHeader*, int32_t, int32_t, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeBufferHeader::EnsureCapacity)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181460580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBufferHeader.SetCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::NativeBufferHeader*, int32_t, int32_t, int32_t, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeBufferHeader::SetCapacity)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814606e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"SetCapacity", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBufferHeader.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::NativeBufferHeader*, int32_t)>(&::MA::Flora::NativeBufferHeader::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814606c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::NativeBufferHeader.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::NativeBufferHeader*, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::MA::Flora::NativeBufferHeader::Destroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181460540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t*& MA::Flora::NativeBufferHeader::__cordl_internal_get_Pointer()  {
return this->___Pointer;
}
constexpr uint8_t* const& MA::Flora::NativeBufferHeader::__cordl_internal_get_Pointer() const {
return this->___Pointer;
}
constexpr void MA::Flora::NativeBufferHeader::__cordl_internal_set_Pointer(uint8_t*  value)  {
this->___Pointer = value;
}
constexpr int32_t& MA::Flora::NativeBufferHeader::__cordl_internal_get_Length()  {
return this->___Length;
}
constexpr int32_t const& MA::Flora::NativeBufferHeader::__cordl_internal_get_Length() const {
return this->___Length;
}
constexpr void MA::Flora::NativeBufferHeader::__cordl_internal_set_Length(int32_t  value)  {
this->___Length = value;
}
constexpr int32_t& MA::Flora::NativeBufferHeader::__cordl_internal_get_Capacity()  {
return this->___Capacity;
}
constexpr int32_t const& MA::Flora::NativeBufferHeader::__cordl_internal_get_Capacity() const {
return this->___Capacity;
}
constexpr void MA::Flora::NativeBufferHeader::__cordl_internal_set_Capacity(int32_t  value)  {
this->___Capacity = value;
}
inline uint8_t* MA::Flora::NativeBufferHeader::GetElementPointer(::MA::Flora::NativeBufferHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"GetElementPointer", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, header);
}
inline void MA::Flora::NativeBufferHeader::EnsureCapacity(::MA::Flora::NativeBufferHeader*  header, int32_t  newCapacity, int32_t  typeSize, int32_t  alignment, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, newCapacity, typeSize, alignment, allocator);
}
inline void MA::Flora::NativeBufferHeader::SetCapacity(::MA::Flora::NativeBufferHeader*  header, int32_t  newCapacity, int32_t  typeSize, int32_t  alignment, int32_t  internalCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"SetCapacity", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, newCapacity, typeSize, alignment, internalCapacity, allocator);
}
inline void MA::Flora::NativeBufferHeader::Initialize(::MA::Flora::NativeBufferHeader*  header, int32_t  bufferCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"Initialize", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, bufferCapacity);
}
inline void MA::Flora::NativeBufferHeader::Destroy(::MA::Flora::NativeBufferHeader*  header, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::NativeBufferHeader>(),
                        {"Destroy", {}, {::i2c::type_of<::MA::Flora::NativeBufferHeader*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, header, allocator);
}
// Ctor Parameters [CppParam { name: "Pointer", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::NativeBufferHeader::NativeBufferHeader(uint8_t*  Pointer, int32_t  Length, int32_t  Capacity) noexcept  {
this->Pointer = Pointer;
this->Length = Length;
this->Capacity = Capacity;
}
// Ctor Parameters []
constexpr ::MA::Flora::NativeBufferHeader::NativeBufferHeader()   {
}
