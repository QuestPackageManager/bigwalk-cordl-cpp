#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEInstanced.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "TheVisualEngine/zzzz__TVEInstanced_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TheVisualEngine/zzzz__TVEElement_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEInstanced._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEInstanced::*)()>(&::TheVisualEngine::TVEInstanced::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804b9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEInstanced*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& TheVisualEngine::TVEInstanced::__cordl_internal_get_instancedDataID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instancedDataID;
}
constexpr int32_t const& TheVisualEngine::TVEInstanced::__cordl_internal_get_instancedDataID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instancedDataID;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_instancedDataID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instancedDataID = value;
}
constexpr int32_t& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderDataID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataID;
}
constexpr int32_t const& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderDataID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataID;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_renderDataID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderDataID = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayers;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayers;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_renderLayers(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderLayers = value;
}
constexpr bool& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderLayersAsPasses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayersAsPasses;
}
constexpr bool const& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderLayersAsPasses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderLayersAsPasses;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_renderLayersAsPasses(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderLayersAsPasses = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TheVisualEngine::TVEInstanced::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& TheVisualEngine::TVEInstanced::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVEInstanced::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVEInstanced::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*& TheVisualEngine::TVEInstanced::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>* const& TheVisualEngine::TVEInstanced::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_elements(::System::Collections::Generic::List_1<::UnityW<::TheVisualEngine::TVEElement>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& TheVisualEngine::TVEInstanced::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& TheVisualEngine::TVEInstanced::__cordl_internal_get_matrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& TheVisualEngine::TVEInstanced::__cordl_internal_get_matrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matrices;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_matrices(::ArrayW<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matrices = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& TheVisualEngine::TVEInstanced::__cordl_internal_get_parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& TheVisualEngine::TVEInstanced::__cordl_internal_get_parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_parameters(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameters = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& TheVisualEngine::TVEInstanced::__cordl_internal_get_propertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& TheVisualEngine::TVEInstanced::__cordl_internal_get_propertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlock;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlock = value;
}
constexpr int32_t& TheVisualEngine::TVEInstanced::__cordl_internal_get_propertyBlockCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockCount;
}
constexpr int32_t const& TheVisualEngine::TVEInstanced::__cordl_internal_get_propertyBlockCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockCount;
}
constexpr void TheVisualEngine::TVEInstanced::__cordl_internal_set_propertyBlockCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockCount = value;
}
inline void TheVisualEngine::TVEInstanced::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEInstanced*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEInstanced* TheVisualEngine::TVEInstanced::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEInstanced*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEInstanced::TVEInstanced()   {
}
