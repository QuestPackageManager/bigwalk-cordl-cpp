#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementRendererSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementType_impl.hpp"
#include "TheVisualEngine/zzzz__TVETextureFormat_impl.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementRendererSettings_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEElementRendererSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElementRendererSettings::*)()>(&::TheVisualEngine::TVEElementRendererSettings::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804b92d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementRendererSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void TheVisualEngine::TVEElementRendererSettings::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void TheVisualEngine::TVEElementRendererSettings::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
constexpr ::TheVisualEngine::TVEElementType& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_rendererData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererData;
}
constexpr ::TheVisualEngine::TVEElementType const& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_rendererData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rendererData;
}
constexpr void TheVisualEngine::TVEElementRendererSettings::__cordl_internal_set_rendererData(::TheVisualEngine::TVEElementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rendererData = value;
}
constexpr ::TheVisualEngine::TVETextureSize& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_baseTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexture;
}
constexpr ::TheVisualEngine::TVETextureSize const& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_baseTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexture;
}
constexpr void TheVisualEngine::TVEElementRendererSettings::__cordl_internal_set_baseTexture(::TheVisualEngine::TVETextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseTexture = value;
}
constexpr ::TheVisualEngine::TVETextureFormat& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_baseFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFormat;
}
constexpr ::TheVisualEngine::TVETextureFormat const& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_baseFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFormat;
}
constexpr void TheVisualEngine::TVEElementRendererSettings::__cordl_internal_set_baseFormat(::TheVisualEngine::TVETextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseFormat = value;
}
constexpr ::TheVisualEngine::TVETextureSize& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_nearTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexture;
}
constexpr ::TheVisualEngine::TVETextureSize const& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_nearTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexture;
}
constexpr void TheVisualEngine::TVEElementRendererSettings::__cordl_internal_set_nearTexture(::TheVisualEngine::TVETextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearTexture = value;
}
constexpr ::TheVisualEngine::TVETextureFormat& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_nearFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearFormat;
}
constexpr ::TheVisualEngine::TVETextureFormat const& TheVisualEngine::TVEElementRendererSettings::__cordl_internal_get_nearFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearFormat;
}
constexpr void TheVisualEngine::TVEElementRendererSettings::__cordl_internal_set_nearFormat(::TheVisualEngine::TVETextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearFormat = value;
}
inline void TheVisualEngine::TVEElementRendererSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementRendererSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEElementRendererSettings* TheVisualEngine::TVEElementRendererSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEElementRendererSettings*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementRendererSettings::TVEElementRendererSettings()   {
}
