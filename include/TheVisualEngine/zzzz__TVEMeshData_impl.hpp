#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEMeshData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEMeshData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEMeshData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEMeshData::*)()>(&::TheVisualEngine::TVEMeshData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEMeshData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVEMeshData::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVEMeshData::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& TheVisualEngine::TVEMeshData::__cordl_internal_get_vertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& TheVisualEngine::TVEMeshData::__cordl_internal_get_vertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertices;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_vertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertices = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& TheVisualEngine::TVEMeshData::__cordl_internal_get_colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& TheVisualEngine::TVEMeshData::__cordl_internal_get_colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colors;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_colors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& TheVisualEngine::TVEMeshData::__cordl_internal_get_normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& TheVisualEngine::TVEMeshData::__cordl_internal_get_normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normals;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_normals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normals = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& TheVisualEngine::TVEMeshData::__cordl_internal_get_tangents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& TheVisualEngine::TVEMeshData::__cordl_internal_get_tangents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangents;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_tangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangents = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& TheVisualEngine::TVEMeshData::__cordl_internal_get_UV0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UV0;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& TheVisualEngine::TVEMeshData::__cordl_internal_get_UV0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UV0;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_UV0(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UV0 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& TheVisualEngine::TVEMeshData::__cordl_internal_get_UV2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UV2;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& TheVisualEngine::TVEMeshData::__cordl_internal_get_UV2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UV2;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_UV2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UV2 = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& TheVisualEngine::TVEMeshData::__cordl_internal_get_UV4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UV4;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& TheVisualEngine::TVEMeshData::__cordl_internal_get_UV4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UV4;
}
constexpr void TheVisualEngine::TVEMeshData::__cordl_internal_set_UV4(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UV4 = value;
}
inline void TheVisualEngine::TVEMeshData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEMeshData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEMeshData* TheVisualEngine::TVEMeshData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEMeshData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEMeshData::TVEMeshData()   {
}
