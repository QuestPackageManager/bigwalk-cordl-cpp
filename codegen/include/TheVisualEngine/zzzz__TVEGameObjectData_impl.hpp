#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEGameObjectData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "TheVisualEngine/zzzz__TVEGameObjectData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshCollider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEGameObjectData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEGameObjectData::*)()>(&::TheVisualEngine::TVEGameObjectData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804b9600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGameObjectData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_parentPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_parentPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPrefab;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_parentPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr ::UnityW<::UnityEngine::MeshFilter>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshFilter;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshFilter = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_originalMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_originalMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMesh;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_originalMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_instanceMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_instanceMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceMesh;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_instanceMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_meshColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>* const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_meshColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshColliders;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_meshColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshCollider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshColliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_originalColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_originalColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColliders;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_originalColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalColliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_instanceColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_instanceColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceColliders;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_instanceColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceColliders = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_originalMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_originalMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalMaterials;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_originalMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_instanceMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_instanceMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceMaterials;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_instanceMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceMaterials = value;
}
constexpr bool& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_isZUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isZUp;
}
constexpr bool const& TheVisualEngine::TVEGameObjectData::__cordl_internal_get_isZUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isZUp;
}
constexpr void TheVisualEngine::TVEGameObjectData::__cordl_internal_set_isZUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isZUp = value;
}
inline void TheVisualEngine::TVEGameObjectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEGameObjectData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEGameObjectData* TheVisualEngine::TVEGameObjectData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEGameObjectData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEGameObjectData::TVEGameObjectData()   {
}
