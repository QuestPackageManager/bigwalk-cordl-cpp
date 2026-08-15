#pragma once
// IWYU pragma private; include "MA/Flora/OccluderParameters.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "MA/Flora/zzzz__OccluderParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
//  Writing Method size for method: ::MA::Flora::OccluderParameters.GetActiveDepthRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::MA::Flora::OccluderParameters::*)()>(&::MA::Flora::OccluderParameters::GetActiveDepthRT)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814cf100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderParameters>(),
                        {"GetActiveDepthRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::OccluderParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::OccluderParameters::*)(int32_t)>(&::MA::Flora::OccluderParameters::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814cf140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderParameters>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::RTHandle* MA::Flora::OccluderParameters::GetActiveDepthRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderParameters>(),
                        {"GetActiveDepthRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(*this, ___internal_method);
}
inline void MA::Flora::OccluderParameters::_ctor(int32_t  viewId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::OccluderParameters>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewId);
}
// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "SubviewCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DepthTextureRT", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "DepthTextureHandle", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "DepthSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "DepthIsArray", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OccluderParameters::OccluderParameters(::UnityEngine::EntityId  ViewId, int32_t  SubviewCount, ::UnityEngine::Rendering::RTHandle*  DepthTextureRT, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  DepthTextureHandle, ::UnityEngine::Vector2Int  DepthSize, bool  DepthIsArray) noexcept  {
this->ViewId = ViewId;
this->SubviewCount = SubviewCount;
this->DepthTextureRT = DepthTextureRT;
this->DepthTextureHandle = DepthTextureHandle;
this->DepthSize = DepthSize;
this->DepthIsArray = DepthIsArray;
}
// Ctor Parameters []
constexpr ::MA::Flora::OccluderParameters::OccluderParameters()   {
}
