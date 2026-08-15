#pragma once
// IWYU pragma private; include "GlobalNamespace/PaperMapCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PaperMapCamera_def.hpp"
#include "GlobalNamespace/zzzz__PaperMapCamera_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PaperMapCamera_BlitMode::PaperMapCamera_BlitMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaperMapCamera_BlitMode::PaperMapCamera_BlitMode()   {
}
constexpr ::GlobalNamespace::PaperMapCamera_BlitMode  GlobalNamespace::PaperMapCamera_BlitMode::CameraOnly{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PaperMapCamera_BlitMode  GlobalNamespace::PaperMapCamera_BlitMode::BlitOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PaperMapCamera_BlitMode  GlobalNamespace::PaperMapCamera_BlitMode::Both{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::PaperMapCamera.SetCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperMapCamera::*)()>(&::GlobalNamespace::PaperMapCamera::SetCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperMapCamera*>(),
                        {"SetCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PaperMapCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PaperMapCamera::*)()>(&::GlobalNamespace::PaperMapCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperMapCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::PaperMapCamera::__cordl_internal_get_mapCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_mapCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapCamera;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_mapCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapCamera = value;
}
constexpr bool& GlobalNamespace::PaperMapCamera::__cordl_internal_get_useCustomLodBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomLodBias;
}
constexpr bool const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_useCustomLodBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCustomLodBias;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_useCustomLodBias(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCustomLodBias = value;
}
constexpr float_t& GlobalNamespace::PaperMapCamera::__cordl_internal_get_customLodBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customLodBias;
}
constexpr float_t const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_customLodBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customLodBias;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_customLodBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customLodBias = value;
}
constexpr bool& GlobalNamespace::PaperMapCamera::__cordl_internal_get_depthOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOnly;
}
constexpr bool const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_depthOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOnly;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_depthOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOnly = value;
}
constexpr ::GlobalNamespace::PaperMapCamera_BlitMode& GlobalNamespace::PaperMapCamera::__cordl_internal_get_blitMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMode;
}
constexpr ::GlobalNamespace::PaperMapCamera_BlitMode const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_blitMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMode;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_blitMode(::GlobalNamespace::PaperMapCamera_BlitMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitMode = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PaperMapCamera::__cordl_internal_get_blitMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_blitMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitMaterial;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_blitMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitMaterial = value;
}
constexpr bool& GlobalNamespace::PaperMapCamera::__cordl_internal_get_blitWithPointFiltering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitWithPointFiltering;
}
constexpr bool const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_blitWithPointFiltering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitWithPointFiltering;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_blitWithPointFiltering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitWithPointFiltering = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::PaperMapCamera::__cordl_internal_get_savedTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_savedTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedTexture;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_savedTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PaperMapCamera::__cordl_internal_get_replacementTerrainMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementTerrainMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_replacementTerrainMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replacementTerrainMaterial;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_replacementTerrainMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replacementTerrainMaterial = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::PaperMapCamera::__cordl_internal_get_treeBlacklist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeBlacklist;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::PaperMapCamera::__cordl_internal_get_treeBlacklist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeBlacklist;
}
constexpr void GlobalNamespace::PaperMapCamera::__cordl_internal_set_treeBlacklist(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeBlacklist = value;
}
inline void GlobalNamespace::PaperMapCamera::SetCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperMapCamera*>(),
                        {"SetCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PaperMapCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PaperMapCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PaperMapCamera* GlobalNamespace::PaperMapCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PaperMapCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PaperMapCamera::PaperMapCamera()   {
}
