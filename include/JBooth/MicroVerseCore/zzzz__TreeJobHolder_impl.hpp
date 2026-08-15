#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/TreeJobHolder.hpp"
#include "JBooth/MicroVerseCore/zzzz__UnpackTreeInstanceJob_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__half4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreeJobHolder_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeJobHolder::*)()>(&::JBooth::MicroVerseCore::TreeJobHolder::IsDone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181426b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.get_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroVerseCore::TreeJobHolder::*)()>(&::JBooth::MicroVerseCore::TreeJobHolder::get_canceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"get_canceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.set_canceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)(bool)>(&::JBooth::MicroVerseCore::TreeJobHolder::set_canceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"set_canceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)()>(&::JBooth::MicroVerseCore::TreeJobHolder::Cleanup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181426ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)()>(&::JBooth::MicroVerseCore::TreeJobHolder::Dispose)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181426ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.LaunchJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)()>(&::JBooth::MicroVerseCore::TreeJobHolder::LaunchJob)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181426bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"LaunchJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.OnAsyncCompletePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::JBooth::MicroVerseCore::TreeJobHolder::OnAsyncCompletePositions)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181426d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"OnAsyncCompletePositions", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.OnAsyncCompleteRandoms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::JBooth::MicroVerseCore::TreeJobHolder::OnAsyncCompleteRandoms)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181426de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"OnAsyncCompleteRandoms", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder.AddJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::Unity::Collections::NativeArray_1<int32_t>)>(&::JBooth::MicroVerseCore::TreeJobHolder::AddJob)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x181426670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"AddJob", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::TreeJobHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::TreeJobHolder::*)()>(&::JBooth::MicroVerseCore::TreeJobHolder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::UnpackTreeInstanceJob& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr ::JBooth::MicroVerseCore::UnpackTreeInstanceJob const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_job(::JBooth::MicroVerseCore::UnpackTreeInstanceJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___job = value;
}
constexpr ::Unity::Jobs::JobHandle& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::Unity::Jobs::JobHandle const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_handle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_placementData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementData;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_placementData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placementData;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_placementData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placementData = value;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_randomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomData;
}
constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4> const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_randomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomData;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_randomData(::Unity::Collections::NativeArray_1<::Unity::Mathematics::half4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomData = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_filteredInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredInstances;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_filteredInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filteredInstances;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_filteredInstances(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filteredInstances = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_randomResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomResults;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_randomResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomResults;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_randomResults(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomResults = value;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_gpuRequestPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestPlacement;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_gpuRequestPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestPlacement;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_gpuRequestPlacement(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gpuRequestPlacement = value;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_gpuRequestRandoms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestRandoms;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_gpuRequestRandoms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gpuRequestRandoms;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_gpuRequestRandoms(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gpuRequestRandoms = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_treeIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeIndexes;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get_treeIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeIndexes;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set_treeIndexes(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeIndexes = value;
}
constexpr bool& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get__canceled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled_k__BackingField;
}
constexpr bool const& JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_get__canceled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled_k__BackingField;
}
constexpr void JBooth::MicroVerseCore::TreeJobHolder::__cordl_internal_set__canceled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canceled_k__BackingField = value;
}
inline bool JBooth::MicroVerseCore::TreeJobHolder::IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroVerseCore::TreeJobHolder::get_canceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"get_canceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::set_canceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"set_canceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::LaunchJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"LaunchJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::OnAsyncCompletePositions(::UnityEngine::Rendering::AsyncGPUReadbackRequest  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"OnAsyncCompletePositions", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::OnAsyncCompleteRandoms(::UnityEngine::Rendering::AsyncGPUReadbackRequest  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"OnAsyncCompleteRandoms", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::AddJob(::UnityEngine::RenderTexture*  filteredInstances, ::UnityEngine::RenderTexture*  randomResults, ::Unity::Collections::NativeArray_1<int32_t>  treeIndexes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {"AddJob", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filteredInstances, randomResults, treeIndexes);
}
inline void JBooth::MicroVerseCore::TreeJobHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::TreeJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::TreeJobHolder* JBooth::MicroVerseCore::TreeJobHolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::TreeJobHolder*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::TreeJobHolder::TreeJobHolder()   {
}
