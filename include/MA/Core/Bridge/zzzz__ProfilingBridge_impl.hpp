#pragma once
// IWYU pragma private; include "MA/Core/Bridge/ProfilingBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Core/Bridge/zzzz__ProfilingBridge_def.hpp"
#include "Unity/Profiling/LowLevel/Unsafe/zzzz__ProfilerRecorderHandle_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_def.hpp"
//  Writing Method size for method: ::MA::Core::Bridge::ProfilingBridge.GetName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::Unity::Profiling::ProfilerMarker>)>(&::MA::Core::Bridge::ProfilingBridge::GetName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18146d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetName", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerMarker>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Core::Bridge::ProfilingBridge.Custom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerCategory (*)(uint16_t)>(&::MA::Core::Bridge::ProfilingBridge::Custom)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181eccbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"Custom", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Core::Bridge::ProfilingBridge.GetAnyCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerCategory (*)()>(&::MA::Core::Bridge::ProfilingBridge::GetAnyCategory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetAnyCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Core::Bridge::ProfilingBridge.GetGPUCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::ProfilerCategory (*)()>(&::MA::Core::Bridge::ProfilingBridge::GetGPUCategory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetGPUCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Core::Bridge::ProfilingBridge.GetRecorderHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerMarker)>(&::MA::Core::Bridge::ProfilingBridge::GetRecorderHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetRecorderHandle", {}, {::i2c::type_of<::Unity::Profiling::ProfilerMarker>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Core::Bridge::ProfilingBridge.GetRecorderHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle (*)(::Unity::Profiling::ProfilerCategory, ::StringW)>(&::MA::Core::Bridge::ProfilingBridge::GetRecorderHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181eccc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetRecorderHandle", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Core::Bridge::ProfilingBridge.GetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<::Unity::Profiling::ProfilerRecorder>)>(&::MA::Core::Bridge::ProfilingBridge::GetHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetHandle", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW MA::Core::Bridge::ProfilingBridge::GetName(::by_ref<::Unity::Profiling::ProfilerMarker>  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetName", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerMarker>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, marker);
}
inline ::Unity::Profiling::ProfilerCategory MA::Core::Bridge::ProfilingBridge::Custom(uint16_t  category)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"Custom", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerCategory>(nullptr, ___internal_method, category);
}
inline ::Unity::Profiling::ProfilerCategory MA::Core::Bridge::ProfilingBridge::GetAnyCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetAnyCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerCategory>(nullptr, ___internal_method);
}
inline ::Unity::Profiling::ProfilerCategory MA::Core::Bridge::ProfilingBridge::GetGPUCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetGPUCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerCategory>(nullptr, ___internal_method);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle MA::Core::Bridge::ProfilingBridge::GetRecorderHandle(::Unity::Profiling::ProfilerMarker  marker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetRecorderHandle", {}, {::i2c::type_of<::Unity::Profiling::ProfilerMarker>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, marker);
}
inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle MA::Core::Bridge::ProfilingBridge::GetRecorderHandle(::Unity::Profiling::ProfilerCategory  category, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetRecorderHandle", {}, {::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>(nullptr, ___internal_method, category, name);
}
inline uint64_t MA::Core::Bridge::ProfilingBridge::GetHandle(::by_ref<::Unity::Profiling::ProfilerRecorder>  recorder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Core::Bridge::ProfilingBridge*>(),
                        {"GetHandle", {}, {::i2c::type_of<::by_ref<::Unity::Profiling::ProfilerRecorder>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, recorder);
}
// Ctor Parameters []
constexpr ::MA::Core::Bridge::ProfilingBridge::ProfilingBridge()   {
}
