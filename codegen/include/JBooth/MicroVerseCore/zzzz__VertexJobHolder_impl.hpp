#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/VertexJobHolder.hpp"
#include "JBooth/MicroVerseCore/zzzz__BendVertexJob_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__VertexJobHolder_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__MeshCacheData_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::VertexJobHolder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::VertexJobHolder::*)()>(&::JBooth::MicroVerseCore::VertexJobHolder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VertexJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::BendVertexJob& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_bendJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendJob;
}
constexpr ::JBooth::MicroVerseCore::BendVertexJob const& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_bendJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendJob;
}
constexpr void JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_set_bendJob(::JBooth::MicroVerseCore::BendVertexJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bendJob = value;
}
constexpr ::Unity::Jobs::JobHandle& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_bendHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendHandle;
}
constexpr ::Unity::Jobs::JobHandle const& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_bendHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bendHandle;
}
constexpr void JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_set_bendHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bendHandle = value;
}
constexpr ::JBooth::MicroVerseCore::MeshCacheData*& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_cacheData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheData;
}
constexpr ::JBooth::MicroVerseCore::MeshCacheData* const& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_cacheData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheData;
}
constexpr void JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_set_cacheData(::JBooth::MicroVerseCore::MeshCacheData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cacheData = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::MeshCollider>& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_meshCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCollider;
}
constexpr ::UnityW<::UnityEngine::MeshCollider> const& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_meshCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshCollider;
}
constexpr void JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_set_meshCollider(::UnityW<::UnityEngine::MeshCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshCollider = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void JBooth::MicroVerseCore::VertexJobHolder::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
inline void JBooth::MicroVerseCore::VertexJobHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VertexJobHolder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::VertexJobHolder* JBooth::MicroVerseCore::VertexJobHolder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::VertexJobHolder*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::VertexJobHolder::VertexJobHolder()   {
}
