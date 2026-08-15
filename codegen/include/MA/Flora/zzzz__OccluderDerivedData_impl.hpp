#pragma once
// IWYU pragma private; include "MA/Flora/OccluderDerivedData.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "MA/Flora/zzzz__OccluderDerivedData_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderSubviewUpdate_def.hpp"
//  Writing Method size for method: ::MA::Flora::OccluderDerivedData.FromParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::OccluderDerivedData (*)(::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>)>(&::MA::Flora::OccluderDerivedData::FromParameters)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1814ce810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderDerivedData>(),
                        {"FromParameters", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::OccluderDerivedData MA::Flora::OccluderDerivedData::FromParameters(::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>  occluderSubviewUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderDerivedData>(),
                        {"FromParameters", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::OccluderSubviewUpdate>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::OccluderDerivedData>(nullptr, ___internal_method, occluderSubviewUpdate);
}
// Ctor Parameters [CppParam { name: "viewProjMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewOriginWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "radialDirWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "facingDirWorldSpace", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OccluderDerivedData::OccluderDerivedData(::UnityEngine::Matrix4x4  viewProjMatrix, ::UnityEngine::Vector4  viewOriginWorldSpace, ::UnityEngine::Vector4  radialDirWorldSpace, ::UnityEngine::Vector4  facingDirWorldSpace) noexcept  {
this->viewProjMatrix = viewProjMatrix;
this->viewOriginWorldSpace = viewOriginWorldSpace;
this->radialDirWorldSpace = radialDirWorldSpace;
this->facingDirWorldSpace = facingDirWorldSpace;
}
// Ctor Parameters []
constexpr ::MA::Flora::OccluderDerivedData::OccluderDerivedData()   {
}
