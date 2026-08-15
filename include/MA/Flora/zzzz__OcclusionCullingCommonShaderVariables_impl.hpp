#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionCullingCommonShaderVariables.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "MA/Flora/zzzz__OcclusionCullingCommonShaderVariables_def.hpp"
#include "MA/Flora/zzzz__InstanceOcclusionTestSubviewSettings_def.hpp"
#include "MA/Flora/zzzz__OcclusionContext_def.hpp"
#include "MA/Flora/zzzz__OcclusionCullingCommonShaderVariables_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer(uint32_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer()   {
}
//  Writing Method size for method: ::MA::Flora::OcclusionCullingCommonShaderVariables._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OcclusionCullingCommonShaderVariables::*)(::by_ref<::MA::Flora::OcclusionContext>, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>, bool, bool)>(&::MA::Flora::OcclusionCullingCommonShaderVariables::_ctor)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x1814d3390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCullingCommonShaderVariables>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::OcclusionCullingCommonShaderVariables::_ctor(::by_ref<::MA::Flora::OcclusionContext>  occlusionContext, ::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>  testSubviewSettings, bool  occlusionOverlayCountVisible, bool  overrideOcclusionTestToAlwaysPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OcclusionCullingCommonShaderVariables>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::MA::Flora::OcclusionContext>>(), ::i2c::type_of<::by_ref<::MA::Flora::InstanceOcclusionTestSubviewSettings>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, occlusionContext, testSubviewSettings, occlusionOverlayCountVisible, overrideOcclusionTestToAlwaysPass);
}
// Ctor Parameters [CppParam { name: "_OccluderMipBounds", ty: "::MA::Flora::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ViewProjMatrix", ty: "::MA::Flora::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ViewOriginWorldSpace", ty: "::MA::Flora::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_FacingDirWorldSpace", ty: "::MA::Flora::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RadialDirWorldSpace", ty: "::MA::Flora::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DepthSizeInOccluderPixels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderDepthPyramidSize", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderMipLayoutSizeX", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderMipLayoutSizeY", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OcclusionTestDebugFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OcclusionCullingCommonPad0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OcclusionTestCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_OccluderSubviewIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CullingSplitIndices", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_CullingSplitMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables::OcclusionCullingCommonShaderVariables(::MA::Flora::OcclusionCullingCommonShaderVariables___OccluderMipBounds_e__FixedBuffer  _OccluderMipBounds, ::MA::Flora::OcclusionCullingCommonShaderVariables___ViewProjMatrix_e__FixedBuffer  _ViewProjMatrix, ::MA::Flora::OcclusionCullingCommonShaderVariables___ViewOriginWorldSpace_e__FixedBuffer  _ViewOriginWorldSpace, ::MA::Flora::OcclusionCullingCommonShaderVariables___FacingDirWorldSpace_e__FixedBuffer  _FacingDirWorldSpace, ::MA::Flora::OcclusionCullingCommonShaderVariables___RadialDirWorldSpace_e__FixedBuffer  _RadialDirWorldSpace, ::UnityEngine::Vector4  _DepthSizeInOccluderPixels, ::UnityEngine::Vector4  _OccluderDepthPyramidSize, uint32_t  _OccluderMipLayoutSizeX, uint32_t  _OccluderMipLayoutSizeY, uint32_t  _OcclusionTestDebugFlags, uint32_t  _OcclusionCullingCommonPad0, int32_t  _OcclusionTestCount, int32_t  _OccluderSubviewIndices, int32_t  _CullingSplitIndices, int32_t  _CullingSplitMask) noexcept  {
this->_OccluderMipBounds = _OccluderMipBounds;
this->_ViewProjMatrix = _ViewProjMatrix;
this->_ViewOriginWorldSpace = _ViewOriginWorldSpace;
this->_FacingDirWorldSpace = _FacingDirWorldSpace;
this->_RadialDirWorldSpace = _RadialDirWorldSpace;
this->_DepthSizeInOccluderPixels = _DepthSizeInOccluderPixels;
this->_OccluderDepthPyramidSize = _OccluderDepthPyramidSize;
this->_OccluderMipLayoutSizeX = _OccluderMipLayoutSizeX;
this->_OccluderMipLayoutSizeY = _OccluderMipLayoutSizeY;
this->_OcclusionTestDebugFlags = _OcclusionTestDebugFlags;
this->_OcclusionCullingCommonPad0 = _OcclusionCullingCommonPad0;
this->_OcclusionTestCount = _OcclusionTestCount;
this->_OccluderSubviewIndices = _OccluderSubviewIndices;
this->_CullingSplitIndices = _CullingSplitIndices;
this->_CullingSplitMask = _CullingSplitMask;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCullingCommonShaderVariables::OcclusionCullingCommonShaderVariables()   {
}
