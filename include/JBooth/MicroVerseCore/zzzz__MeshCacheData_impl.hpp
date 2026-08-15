#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MeshCacheData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__MeshCacheData_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::MeshCacheData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MeshCacheData::*)()>(&::JBooth::MicroVerseCore::MeshCacheData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshCacheData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_get_vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_get_vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr void JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_set_vertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertices = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_get_normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_get_normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr void JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_set_normals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>& JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_get_tangents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> const& JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_get_tangents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr void JBooth::MicroVerseCore::MeshCacheData::__cordl_internal_set_tangents(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangents = value;
}
inline void JBooth::MicroVerseCore::MeshCacheData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MeshCacheData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MeshCacheData* JBooth::MicroVerseCore::MeshCacheData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MeshCacheData*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MeshCacheData::MeshCacheData()   {
}
