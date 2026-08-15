#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementRendererData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementRendererData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TheVisualEngine/zzzz__TVEElementRendererSettings_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEElementRendererData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElementRendererData::*)()>(&::TheVisualEngine::TVEElementRendererData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804b9260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementRendererData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::TheVisualEngine::TVETextureSize& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexture;
}
constexpr ::TheVisualEngine::TVETextureSize const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexture;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_baseTexture(::TheVisualEngine::TVETextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseTexture = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseCenter;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_baseCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseCenter = value;
}
constexpr float_t& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseRadius;
}
constexpr float_t const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseRadius;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_baseRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseRadius = value;
}
constexpr ::TheVisualEngine::TVETextureSize& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_nearTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexture;
}
constexpr ::TheVisualEngine::TVETextureSize const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_nearTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexture;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_nearTexture(::TheVisualEngine::TVETextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearTexture = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_nearCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_nearCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearCenter;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_nearCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearCenter = value;
}
constexpr float_t& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_nearRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearRadius;
}
constexpr float_t const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_nearRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearRadius;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_nearRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearRadius = value;
}
constexpr float_t& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseToNearBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseToNearBlend;
}
constexpr float_t const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_baseToNearBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseToNearBlend;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_baseToNearBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseToNearBlend = value;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>*& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_rendererOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererOverrides;
}
constexpr ::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>* const& TheVisualEngine::TVEElementRendererData::__cordl_internal_get_rendererOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererOverrides;
}
constexpr void TheVisualEngine::TVEElementRendererData::__cordl_internal_set_rendererOverrides(::System::Collections::Generic::List_1<::TheVisualEngine::TVEElementRendererSettings*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rendererOverrides = value;
}
inline void TheVisualEngine::TVEElementRendererData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementRendererData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEElementRendererData* TheVisualEngine::TVEElementRendererData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEElementRendererData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementRendererData::TVEElementRendererData()   {
}
