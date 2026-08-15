#pragma once
// IWYU pragma private; include "AmplifyImpostors/AmplifyImpostorAsset.hpp"
#include "AmplifyImpostors/zzzz__ImpostorType_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "AmplifyImpostors/zzzz__AmplifyImpostorAsset_def.hpp"
#include "AmplifyImpostors/zzzz__AmplifyImpostorBakePreset_def.hpp"
#include "AmplifyImpostors/zzzz__TextureOutput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::AmplifyImpostorAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::AmplifyImpostorAsset::*)()>(&::AmplifyImpostors::AmplifyImpostorAsset::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1802d57f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostorAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Material;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_Material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Material = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mesh;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_Mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mesh = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
constexpr ::AmplifyImpostors::ImpostorType& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_ImpostorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpostorType;
}
constexpr ::AmplifyImpostors::ImpostorType const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_ImpostorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpostorType;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_ImpostorType(::AmplifyImpostors::ImpostorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpostorType = value;
}
constexpr bool& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_LockedSizes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockedSizes;
}
constexpr bool const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_LockedSizes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockedSizes;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_LockedSizes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockedSizes = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_SelectedSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedSize;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_SelectedSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SelectedSize;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_SelectedSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SelectedSize = value;
}
constexpr ::UnityEngine::Vector2& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_TexSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TexSize;
}
constexpr ::UnityEngine::Vector2 const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_TexSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TexSize;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_TexSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TexSize = value;
}
constexpr bool& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_DecoupleAxisFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecoupleAxisFrames;
}
constexpr bool const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_DecoupleAxisFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DecoupleAxisFrames;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_DecoupleAxisFrames(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DecoupleAxisFrames = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_HorizontalFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalFrames;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_HorizontalFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HorizontalFrames;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_HorizontalFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HorizontalFrames = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_VerticalFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalFrames;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_VerticalFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerticalFrames;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_VerticalFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerticalFrames = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_PixelPadding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PixelPadding;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_PixelPadding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PixelPadding;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_PixelPadding(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PixelPadding = value;
}
constexpr int32_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_MaxVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxVertices;
}
constexpr int32_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_MaxVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxVertices;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_MaxVertices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxVertices = value;
}
constexpr float_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Tolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tolerance;
}
constexpr float_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Tolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tolerance;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_Tolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tolerance = value;
}
constexpr float_t& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_NormalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalScale;
}
constexpr float_t const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_NormalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalScale;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_NormalScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalScale = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_ShapePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShapePoints;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_ShapePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShapePoints;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_ShapePoints(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShapePoints = value;
}
constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset>& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Preset;
}
constexpr ::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset> const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_Preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Preset;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_Preset(::UnityW<::AmplifyImpostors::AmplifyImpostorBakePreset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Preset = value;
}
constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_OverrideOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideOutput;
}
constexpr ::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>* const& AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_get_OverrideOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideOutput;
}
constexpr void AmplifyImpostors::AmplifyImpostorAsset::__cordl_internal_set_OverrideOutput(::System::Collections::Generic::List_1<::AmplifyImpostors::TextureOutput*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideOutput = value;
}
inline void AmplifyImpostors::AmplifyImpostorAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::AmplifyImpostorAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::AmplifyImpostors::AmplifyImpostorAsset* AmplifyImpostors::AmplifyImpostorAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::AmplifyImpostorAsset*>());
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::AmplifyImpostorAsset::AmplifyImpostorAsset()   {
}
