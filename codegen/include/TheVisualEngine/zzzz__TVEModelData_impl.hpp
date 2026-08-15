#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEModelData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEModelData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEModelData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEModelData::*)()>(&::TheVisualEngine::TVEModelData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEModelData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& TheVisualEngine::TVEModelData::__cordl_internal_get_mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& TheVisualEngine::TVEModelData::__cordl_internal_get_mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mesh;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mesh = value;
}
constexpr float_t& TheVisualEngine::TVEModelData::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& TheVisualEngine::TVEModelData::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& TheVisualEngine::TVEModelData::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& TheVisualEngine::TVEModelData::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& TheVisualEngine::TVEModelData::__cordl_internal_get_variationMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variationMask;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_variationMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variationMask;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_variationMask(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___variationMask = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& TheVisualEngine::TVEModelData::__cordl_internal_get_occlusionMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionMask;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_occlusionMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionMask;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_occlusionMask(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionMask = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& TheVisualEngine::TVEModelData::__cordl_internal_get_detailMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailMask;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_detailMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailMask;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_detailMask(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailMask = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& TheVisualEngine::TVEModelData::__cordl_internal_get_heightMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMask;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_heightMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightMask;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_heightMask(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightMask = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& TheVisualEngine::TVEModelData::__cordl_internal_get_detailCoord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailCoord;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_detailCoord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailCoord;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_detailCoord(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailCoord = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& TheVisualEngine::TVEModelData::__cordl_internal_get_motion2Mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motion2Mask;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_motion2Mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motion2Mask;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_motion2Mask(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motion2Mask = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& TheVisualEngine::TVEModelData::__cordl_internal_get_motion3Mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motion3Mask;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_motion3Mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motion3Mask;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_motion3Mask(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motion3Mask = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& TheVisualEngine::TVEModelData::__cordl_internal_get_pivotPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& TheVisualEngine::TVEModelData::__cordl_internal_get_pivotPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivotPositions;
}
constexpr void TheVisualEngine::TVEModelData::__cordl_internal_set_pivotPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivotPositions = value;
}
inline void TheVisualEngine::TVEModelData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEModelData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEModelData* TheVisualEngine::TVEModelData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEModelData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEModelData::TVEModelData()   {
}
