#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementBufferData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEBool_impl.hpp"
#include "TheVisualEngine/zzzz__TVETextureFormat_impl.hpp"
#include "TheVisualEngine/zzzz__TVETextureSize_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "TheVisualEngine/zzzz__TVEElementBufferData_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEElementBufferData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEElementBufferData::*)()>(&::TheVisualEngine::TVEElementBufferData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804b91c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementBufferData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr bool& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr bool const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInitialized;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInitialized = value;
}
constexpr ::TheVisualEngine::TVEBool& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_renderMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMode;
}
constexpr ::TheVisualEngine::TVEBool const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_renderMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMode;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_renderMode(::TheVisualEngine::TVEBool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderMode = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_renderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderName;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_renderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderName;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_renderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderName = value;
}
constexpr ::UnityEngine::Color& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_textureColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureColor;
}
constexpr ::UnityEngine::Color const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_textureColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureColor;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_textureColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureColor = value;
}
constexpr bool& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_isRendering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRendering;
}
constexpr bool const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_isRendering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRendering;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_isRendering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRendering = value;
}
constexpr int32_t& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_renderDataID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataID;
}
constexpr int32_t const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_renderDataID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDataID;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_renderDataID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderDataID = value;
}
constexpr int32_t& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize;
}
constexpr int32_t const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferSize = value;
}
constexpr ::ArrayW<float_t>& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_bufferUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferUsage;
}
constexpr ::ArrayW<float_t> const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_bufferUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferUsage;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_bufferUsage(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferUsage = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseObjectRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseObjectRT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseObjectRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseObjectRT;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_baseObjectRT(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseObjectRT = value;
}
constexpr ::TheVisualEngine::TVETextureSize& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexture;
}
constexpr ::TheVisualEngine::TVETextureSize const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexture;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_baseTexture(::TheVisualEngine::TVETextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseTexture = value;
}
constexpr ::TheVisualEngine::TVETextureFormat& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFormat;
}
constexpr ::TheVisualEngine::TVETextureFormat const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseFormat;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_baseFormat(::TheVisualEngine::TVETextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseFormat = value;
}
constexpr int32_t& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseMipmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMipmap;
}
constexpr int32_t const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseMipmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMipmap;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_baseMipmap(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMipmap = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearObjectRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearObjectRT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearObjectRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearObjectRT;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_nearObjectRT(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearObjectRT = value;
}
constexpr ::TheVisualEngine::TVETextureSize& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexture;
}
constexpr ::TheVisualEngine::TVETextureSize const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexture;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_nearTexture(::TheVisualEngine::TVETextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearTexture = value;
}
constexpr ::TheVisualEngine::TVETextureFormat& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearFormat;
}
constexpr ::TheVisualEngine::TVETextureFormat const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearFormat;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_nearFormat(::TheVisualEngine::TVETextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearFormat = value;
}
constexpr int32_t& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearMipmap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearMipmap;
}
constexpr int32_t const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearMipmap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearMipmap;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_nearMipmap(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearMipmap = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*>& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_commandBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBuffers;
}
constexpr ::ArrayW<::UnityEngine::Rendering::CommandBuffer*> const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_commandBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___commandBuffers;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_commandBuffers(::ArrayW<::UnityEngine::Rendering::CommandBuffer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___commandBuffers = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseTexName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexName;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseTexName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexName;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_baseTexName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseTexName = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseTexCoord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexCoord;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_baseTexCoord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseTexCoord;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_baseTexCoord(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseTexCoord = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearTexName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexName;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearTexName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexName;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_nearTexName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearTexName = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearTexCoord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexCoord;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_nearTexCoord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTexCoord;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_nearTexCoord(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearTexCoord = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_texParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texParams;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_texParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texParams;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_texParams(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texParams = value;
}
constexpr ::StringW& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_texLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texLayers;
}
constexpr ::StringW const& TheVisualEngine::TVEElementBufferData::__cordl_internal_get_texLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texLayers;
}
constexpr void TheVisualEngine::TVEElementBufferData::__cordl_internal_set_texLayers(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texLayers = value;
}
inline void TheVisualEngine::TVEElementBufferData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEElementBufferData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEElementBufferData* TheVisualEngine::TVEElementBufferData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEElementBufferData*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementBufferData::TVEElementBufferData()   {
}
