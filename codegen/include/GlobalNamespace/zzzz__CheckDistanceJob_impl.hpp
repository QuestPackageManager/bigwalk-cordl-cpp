#pragma once
// IWYU pragma private; include "GlobalNamespace/CheckDistanceJob.hpp"
#include "GlobalNamespace/zzzz__RemotePlayerData_impl.hpp"
#include "GlobalNamespace/zzzz__RustleOperation_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationGroupJobData_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_impl.hpp"
#include "GlobalNamespace/zzzz__WindyOperation_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "GlobalNamespace/zzzz__CheckDistanceJob_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CheckDistanceJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckDistanceJob::*)(int32_t)>(&::GlobalNamespace::CheckDistanceJob::Execute)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803e4460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckDistanceJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CheckDistanceJob.CalculateRemotePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CheckDistanceJob::*)(::GlobalNamespace::VegetationSoundElement, float_t)>(&::GlobalNamespace::CheckDistanceJob::CalculateRemotePlayers)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803e4330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckDistanceJob>(),
                        {"CalculateRemotePlayers", {}, {::i2c::type_of<::GlobalNamespace::VegetationSoundElement>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CheckDistanceJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckDistanceJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline void GlobalNamespace::CheckDistanceJob::CalculateRemotePlayers(::GlobalNamespace::VegetationSoundElement  element, float_t  maxDistanceSq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CheckDistanceJob>(),
                        {"CalculateRemotePlayers", {}, {::i2c::type_of<::GlobalNamespace::VegetationSoundElement>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, element, maxDistanceSq);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::CheckDistanceJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::CheckDistanceJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "GroupJobData", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationGroupJobData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Elements", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationSoundElement>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RemotePlayers", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::RemotePlayerData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "RustleOperations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::RustleOperation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "WindyOperations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::WindyOperation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalPlayerPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxDistanceSq", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CheckDistanceJob::CheckDistanceJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationGroupJobData>  GroupJobData, ::Unity::Collections::NativeArray_1<::GlobalNamespace::VegetationSoundElement>  Elements, ::Unity::Collections::NativeArray_1<::GlobalNamespace::RemotePlayerData>  RemotePlayers, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::RustleOperation>  RustleOperations, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::WindyOperation>  WindyOperations, ::Unity::Mathematics::float3  LocalPlayerPosition, float_t  MaxDistanceSq) noexcept  {
this->GroupJobData = GroupJobData;
this->Elements = Elements;
this->RemotePlayers = RemotePlayers;
this->RustleOperations = RustleOperations;
this->WindyOperations = WindyOperations;
this->LocalPlayerPosition = LocalPlayerPosition;
this->MaxDistanceSq = MaxDistanceSq;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CheckDistanceJob::CheckDistanceJob()   {
}
