#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerRecorderHandle.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderDescription_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)(uint64_t)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.get_Valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::*)()>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182249240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"get_Valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerMarker)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::Get)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822491d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"Get", {}, {::i2c::type_of<::Unity::Profiling::ProfilerMarker>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerCategory, ::StringW)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::Get)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822491f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"Get", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182249170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetDescription", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerCategory, ::StringW)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182248ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName__Unmanaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerCategory, uint8_t*, int32_t)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182248fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName__Unmanaged", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription (*)(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182249140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetDescriptionInternal", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Profiling::ProfilerCategory>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182248fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetByName__Unmanaged_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Profiling::ProfilerCategory>, uint8_t*, int32_t, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182248fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName__Unmanaged_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle.GetDescriptionInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>)>(&::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182249130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetDescriptionInternal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint64_t& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_get_handle()  {
return this->___handle;
}
constexpr uint64_t const& Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_get_handle() const {
return this->___handle;
}
constexpr void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::__cordl_internal_set_handle(uint64_t  value)  {
this->___handle = value;
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::_ctor(uint64_t  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline bool Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::get_Valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"get_Valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::Get(::Unity::Profiling::ProfilerMarker  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"Get", {}, {::i2c::type_of<::Unity::Profiling::ProfilerMarker>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, marker);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::Get(::Unity::Profiling::ProfilerCategory  category, ::StringW  statName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"Get", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, category, statName);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescription(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetDescription", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(nullptr, ___internal_method, handle);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName(::Unity::Profiling::ProfilerCategory  category, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, category, name);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged(::Unity::Profiling::ProfilerCategory  category, uint8_t*  name, int32_t  nameLen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName__Unmanaged", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, category, name, nameLen);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetDescriptionInternal", {}, {::i2c::type_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>(nullptr, ___internal_method, handle);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName_Injected(::by_ref<::Unity::Profiling::ProfilerCategory>  category, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, category, name, ret);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetByName__Unmanaged_Injected(::by_ref<::Unity::Profiling::ProfilerCategory>  category, uint8_t*  name, int32_t  nameLen, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetByName__Unmanaged_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerCategory>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, category, name, nameLen, ret);
}
inline void Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::GetDescriptionInternal_Injected(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  handle, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(),
                        {"GetDescriptionInternal_Injected", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>>(), ::i2c::type_of<::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderDescription>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, ret);
}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle(uint64_t  handle) noexcept  {
this->handle = handle;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle::ProfilerRecorderHandle()   {
}
