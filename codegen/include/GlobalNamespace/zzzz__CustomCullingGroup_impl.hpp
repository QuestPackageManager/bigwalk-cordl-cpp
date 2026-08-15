#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomCullingGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "GlobalNamespace/zzzz__CustomCullingGroup_def.hpp"
#include "GlobalNamespace/zzzz__CustomCullingGroup_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "ElementIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation::CustomCullingGroup_CheckDistanceJobIncrementOperation(int32_t  ElementIndex) noexcept  {
this->ElementIndex = ElementIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation::CustomCullingGroup_CheckDistanceJobIncrementOperation()   {
}
// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CustomCullingGroup_Element::CustomCullingGroup_Element(::Unity::Mathematics::float3  Position, float_t  Radius) noexcept  {
this->Position = Position;
this->Radius = Radius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomCullingGroup_Element::CustomCullingGroup_Element()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup_Job1.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup_Job1::*)(int32_t)>(&::GlobalNamespace::CustomCullingGroup_Job1::Execute)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18049f140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup_Job1>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomCullingGroup_Job1::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup_Job1>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::CustomCullingGroup_Job1::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::CustomCullingGroup_Job1::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Elements", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Operations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PlayerPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CustomCullingGroup_Job1::CustomCullingGroup_Job1(::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  Elements, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  Operations, float_t  Distance, ::Unity::Mathematics::float3  PlayerPosition) noexcept  {
this->Elements = Elements;
this->Operations = Operations;
this->Distance = Distance;
this->PlayerPosition = PlayerPosition;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomCullingGroup_Job1::CustomCullingGroup_Job1()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup_Job2.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup_Job2::*)(int32_t)>(&::GlobalNamespace::CustomCullingGroup_Job2::Execute)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18049f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup_Job2>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomCullingGroup_Job2::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup_Job2>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::CustomCullingGroup_Job2::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::CustomCullingGroup_Job2::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Elements", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Operations", ty: "::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Distances", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }, CppParam { name: "PlayerPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "QueriedIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CustomCullingGroup_Job2::CustomCullingGroup_Job2(::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  Elements, ::Unity::Collections::NativeQueue_1_ParallelWriter<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  Operations, ::Unity::Mathematics::float2  Distances, ::Unity::Mathematics::float3  PlayerPosition, int32_t  QueriedIndex) noexcept  {
this->Elements = Elements;
this->Operations = Operations;
this->Distances = Distances;
this->PlayerPosition = PlayerPosition;
this->QueriedIndex = QueriedIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomCullingGroup_Job2::CustomCullingGroup_Job2()   {
}
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.SetBoundingSpheres
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)(::ArrayW<::UnityEngine::BoundingSphere>)>(&::GlobalNamespace::CustomCullingGroup::SetBoundingSpheres)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetBoundingSpheres", {}, {::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.SetBoundingSphereCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)(int32_t)>(&::GlobalNamespace::CustomCullingGroup::SetBoundingSphereCount)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18049e480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetBoundingSphereCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.SetDistanceReferencePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::CustomCullingGroup::SetDistanceReferencePoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetDistanceReferencePoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.SetBoundingDistances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)(::ArrayW<float_t>)>(&::GlobalNamespace::CustomCullingGroup::SetBoundingDistances)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetBoundingDistances", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.GetDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomCullingGroup::*)(int32_t)>(&::GlobalNamespace::CustomCullingGroup::GetDistance)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18049da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"GetDistance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.SetQueriedIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)(int32_t)>(&::GlobalNamespace::CustomCullingGroup::SetQueriedIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18049e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetQueriedIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.QueryIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CustomCullingGroup::*)(int32_t, ::ArrayW<int32_t>)>(&::GlobalNamespace::CustomCullingGroup::QueryIndices)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18049dbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"QueryIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.ScheduleJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::ScheduleJob)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18049e0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ScheduleJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.CompleteJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::CompleteJob)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049da20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"CompleteJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.ClearUnprocessedResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::ClearUnprocessedResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049da10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ClearUnprocessedResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.ScheduleJob1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::ScheduleJob1)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18049ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ScheduleJob1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.ScheduleJob2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::ScheduleJob2)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18049df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ScheduleJob2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18049da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.RebuildElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::RebuildElements)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18049dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"RebuildElements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.GetBatchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::CustomCullingGroup::GetBatchCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e29a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"GetBatchCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup.GetNextPowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::GlobalNamespace::CustomCullingGroup::GetNextPowerOfTwo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e2af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"GetNextPowerOfTwo", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomCullingGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomCullingGroup::*)()>(&::GlobalNamespace::CustomCullingGroup::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18049e640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__referenceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__referenceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceTransform;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__referenceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceTransform = value;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere>& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__sourceSpheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceSpheres;
}
constexpr ::ArrayW<::UnityEngine::BoundingSphere> const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__sourceSpheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceSpheres;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__sourceSpheres(::ArrayW<::UnityEngine::BoundingSphere>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceSpheres = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__distances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distances;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__distances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distances;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__distances(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distances = value;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__spheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element> const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__spheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__spheres(::Unity::Collections::NativeList_1<::GlobalNamespace::CustomCullingGroup_Element>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spheres = value;
}
constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__operations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operations;
}
constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation> const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__operations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operations;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__operations(::Unity::Collections::NativeQueue_1<::GlobalNamespace::CustomCullingGroup_CheckDistanceJobIncrementOperation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operations = value;
}
constexpr int32_t& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__elementCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementCount;
}
constexpr int32_t const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__elementCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementCount;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__elementCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elementCount = value;
}
constexpr int32_t& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__queriedIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queriedIndex;
}
constexpr int32_t const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__queriedIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queriedIndex;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__queriedIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queriedIndex = value;
}
constexpr bool& GlobalNamespace::CustomCullingGroup::__cordl_internal_get_hasUnprocessedResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUnprocessedResults;
}
constexpr bool const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get_hasUnprocessedResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUnprocessedResults;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set_hasUnprocessedResults(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasUnprocessedResults = value;
}
constexpr bool& GlobalNamespace::CustomCullingGroup::__cordl_internal_get_hasScheduledJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasScheduledJob;
}
constexpr bool const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get_hasScheduledJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasScheduledJob;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set_hasScheduledJob(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasScheduledJob = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::CustomCullingGroup::__cordl_internal_get__jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr void GlobalNamespace::CustomCullingGroup::__cordl_internal_set__jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jobHandle = value;
}
inline void GlobalNamespace::CustomCullingGroup::SetBoundingSpheres(::ArrayW<::UnityEngine::BoundingSphere>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetBoundingSpheres", {}, {::i2c::type_of<::ArrayW<::UnityEngine::BoundingSphere>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
inline void GlobalNamespace::CustomCullingGroup::SetBoundingSphereCount(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetBoundingSphereCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void GlobalNamespace::CustomCullingGroup::SetDistanceReferencePoint(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetDistanceReferencePoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline void GlobalNamespace::CustomCullingGroup::SetBoundingDistances(::ArrayW<float_t>  distances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetBoundingDistances", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distances);
}
inline int32_t GlobalNamespace::CustomCullingGroup::GetDistance(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"GetDistance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline void GlobalNamespace::CustomCullingGroup::SetQueriedIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"SetQueriedIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline int32_t GlobalNamespace::CustomCullingGroup::QueryIndices(int32_t  distanceIndex, ::ArrayW<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"QueryIndices", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, distanceIndex, result);
}
inline void GlobalNamespace::CustomCullingGroup::ScheduleJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ScheduleJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomCullingGroup::CompleteJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"CompleteJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomCullingGroup::ClearUnprocessedResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ClearUnprocessedResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle GlobalNamespace::CustomCullingGroup::ScheduleJob1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ScheduleJob1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle GlobalNamespace::CustomCullingGroup::ScheduleJob2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"ScheduleJob2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method);
}
inline void GlobalNamespace::CustomCullingGroup::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomCullingGroup::RebuildElements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"RebuildElements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CustomCullingGroup::GetBatchCount(int32_t  elementCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"GetBatchCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, elementCount);
}
inline int32_t GlobalNamespace::CustomCullingGroup::GetNextPowerOfTwo(float_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {"GetNextPowerOfTwo", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, count);
}
inline void GlobalNamespace::CustomCullingGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomCullingGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomCullingGroup* GlobalNamespace::CustomCullingGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomCullingGroup*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::CustomCullingGroup::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::CustomCullingGroup::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomCullingGroup::CustomCullingGroup()   {
}
