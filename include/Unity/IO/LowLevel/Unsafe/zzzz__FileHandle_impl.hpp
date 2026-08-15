#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/FileHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileHandle_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::FileHandle.get_JobHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::IO::LowLevel::Unsafe::FileHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::FileHandle::get_JobHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182246ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"get_JobHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::FileHandle.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::IO::LowLevel::Unsafe::FileHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::FileHandle::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182246ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::FileHandle.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::IO::LowLevel::Unsafe::FileHandle::*)(::Unity::Jobs::JobHandle)>(&::Unity::IO::LowLevel::Unsafe::FileHandle::Close)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1822469c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"Close", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::FileHandle.IsFileHandleValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>)>(&::Unity::IO::LowLevel::Unsafe::FileHandle::IsFileHandleValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182246ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"IsFileHandleValid", {}, {::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::FileHandle.GetJobHandle_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>)>(&::Unity::IO::LowLevel::Unsafe::FileHandle::GetJobHandle_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182246a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"GetJobHandle_Internal", {}, {::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::FileHandle.GetJobHandle_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>, ::by_ref<::Unity::Jobs::JobHandle>)>(&::Unity::IO::LowLevel::Unsafe::FileHandle::GetJobHandle_Internal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182246a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"GetJobHandle_Internal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::FileHandle::get_JobHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"get_JobHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method);
}
inline bool Unity::IO::LowLevel::Unsafe::FileHandle::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::FileHandle::Close(::Unity::Jobs::JobHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"Close", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, dependency);
}
inline bool Unity::IO::LowLevel::Unsafe::FileHandle::IsFileHandleValid(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"IsFileHandleValid", {}, {::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::FileHandle::GetJobHandle_Internal(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"GetJobHandle_Internal", {}, {::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::FileHandle::GetJobHandle_Internal_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>  handle, ::by_ref<::Unity::Jobs::JobHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::IO::LowLevel::Unsafe::FileHandle>(),
                        {"GetJobHandle_Internal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, ret);
}
// Ctor Parameters [CppParam { name: "fileCommandPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::FileHandle::FileHandle(::System::IntPtr  fileCommandPtr, int32_t  version) noexcept  {
this->fileCommandPtr = fileCommandPtr;
this->version = version;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::FileHandle::FileHandle()   {
}
