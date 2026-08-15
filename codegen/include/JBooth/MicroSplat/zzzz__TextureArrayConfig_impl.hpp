#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/TextureArrayConfig.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "JBooth/MicroSplat/zzzz__TextureArrayConfig_def.hpp"
#include "JBooth/MicroSplat/zzzz__TextureArrayConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel::TextureArrayConfig_AllTextureChannel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel::TextureArrayConfig_AllTextureChannel()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel::R{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel::G{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel::B{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel::A{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel::Custom{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel::TextureArrayConfig_TextureChannel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel::TextureArrayConfig_TextureChannel()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  JBooth::MicroSplat::TextureArrayConfig_TextureChannel::R{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  JBooth::MicroSplat::TextureArrayConfig_TextureChannel::G{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  JBooth::MicroSplat::TextureArrayConfig_TextureChannel::B{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  JBooth::MicroSplat::TextureArrayConfig_TextureChannel::A{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression::TextureArrayConfig_Compression(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression::TextureArrayConfig_Compression()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression  JBooth::MicroSplat::TextureArrayConfig_Compression::AutomaticCompressed{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression  JBooth::MicroSplat::TextureArrayConfig_Compression::ForceDXT{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression  JBooth::MicroSplat::TextureArrayConfig_Compression::ForceBC7{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression  JBooth::MicroSplat::TextureArrayConfig_Compression::ForceETC2{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression  JBooth::MicroSplat::TextureArrayConfig_Compression::ForceASTC{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression  JBooth::MicroSplat::TextureArrayConfig_Compression::ForceCrunch{static_cast<int32_t>(0x5)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression  JBooth::MicroSplat::TextureArrayConfig_Compression::Uncompressed{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality::TextureArrayConfig_CompressionQuality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality::TextureArrayConfig_CompressionQuality()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality  JBooth::MicroSplat::TextureArrayConfig_CompressionQuality::High{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality  JBooth::MicroSplat::TextureArrayConfig_CompressionQuality::Medium{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality  JBooth::MicroSplat::TextureArrayConfig_CompressionQuality::Low{static_cast<int32_t>(0x2)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize::TextureArrayConfig_TextureSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize::TextureArrayConfig_TextureSize()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k4096{static_cast<int32_t>(0x1000)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k2048{static_cast<int32_t>(0x800)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k1024{static_cast<int32_t>(0x400)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k512{static_cast<int32_t>(0x200)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k256{static_cast<int32_t>(0x100)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k128{static_cast<int32_t>(0x80)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k64{static_cast<int32_t>(0x40)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize  JBooth::MicroSplat::TextureArrayConfig_TextureSize::k32{static_cast<int32_t>(0x20)};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::*)(::JBooth::MicroSplat::TextureArrayConfig_TextureSize, ::JBooth::MicroSplat::TextureArrayConfig_Compression, ::UnityEngine::FilterMode, int32_t)>(&::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181404fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*>(),
                        {".ctor", {}, {::i2c::type_of<::JBooth::MicroSplat::TextureArrayConfig_TextureSize>(), ::i2c::type_of<::JBooth::MicroSplat::TextureArrayConfig_Compression>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_textureSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSize;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureSize const& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_textureSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureSize;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_set_textureSize(::JBooth::MicroSplat::TextureArrayConfig_TextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureSize = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_compression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compression;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_Compression const& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_compression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compression;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_set_compression(::JBooth::MicroSplat::TextureArrayConfig_Compression  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compression = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_compressionQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionQuality;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality const& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_compressionQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionQuality;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_set_compressionQuality(::JBooth::MicroSplat::TextureArrayConfig_CompressionQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressionQuality = value;
}
constexpr ::UnityEngine::FilterMode& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_filterMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterMode;
}
constexpr ::UnityEngine::FilterMode const& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_filterMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filterMode;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_set_filterMode(::UnityEngine::FilterMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filterMode = value;
}
constexpr int32_t& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_Aniso()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aniso;
}
constexpr int32_t const& JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_get_Aniso() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aniso;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::__cordl_internal_set_Aniso(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Aniso = value;
}
inline void JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::_ctor(::JBooth::MicroSplat::TextureArrayConfig_TextureSize  s, ::JBooth::MicroSplat::TextureArrayConfig_Compression  c, ::UnityEngine::FilterMode  f, int32_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*>(),
                        {".ctor", {}, {::i2c::type_of<::JBooth::MicroSplat::TextureArrayConfig_TextureSize>(), ::i2c::type_of<::JBooth::MicroSplat::TextureArrayConfig_Compression>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, c, f, a);
}
inline ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::New_ctor(::JBooth::MicroSplat::TextureArrayConfig_TextureSize  s, ::JBooth::MicroSplat::TextureArrayConfig_Compression  c, ::UnityEngine::FilterMode  f, int32_t  a)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*>(s, c, f, a));
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings::TextureArrayConfig_TextureArraySettings()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow::TextureArrayConfig_PBRWorkflow(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow::TextureArrayConfig_PBRWorkflow()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow  JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow::Metallic{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow  JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow::Specular{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PackingMode::TextureArrayConfig_PackingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PackingMode::TextureArrayConfig_PackingMode()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PackingMode  JBooth::MicroSplat::TextureArrayConfig_PackingMode::Fastest{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PackingMode  JBooth::MicroSplat::TextureArrayConfig_PackingMode::Quality{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize::TextureArrayConfig_SourceTextureSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize::TextureArrayConfig_SourceTextureSize()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize  JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize::Unchanged{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize  JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize::k32{static_cast<int32_t>(0x20)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize  JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize::k256{static_cast<int32_t>(0x100)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureMode::TextureArrayConfig_TextureMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureMode::TextureArrayConfig_TextureMode()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureMode  JBooth::MicroSplat::TextureArrayConfig_TextureMode::Basic{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureMode  JBooth::MicroSplat::TextureArrayConfig_TextureMode::PBR{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroSplat::TextureArrayConfig_ClusterMode::TextureArrayConfig_ClusterMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_ClusterMode::TextureArrayConfig_ClusterMode()   {
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_ClusterMode  JBooth::MicroSplat::TextureArrayConfig_ClusterMode::None{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_ClusterMode  JBooth::MicroSplat::TextureArrayConfig_ClusterMode::TwoVariations{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_ClusterMode  JBooth::MicroSplat::TextureArrayConfig_ClusterMode::ThreeVariations{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::*)()>(&::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181404da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_diffuseSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_diffuseSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_diffuseSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_normalSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_normalSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_normalSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_smoothSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_smoothSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_smoothSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_antiTileSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiTileSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_antiTileSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiTileSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_antiTileSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___antiTileSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_emissiveSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_emissiveSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissiveSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_emissiveSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissiveSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_specularSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_specularSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_specularSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specularSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_traxDiffuseSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxDiffuseSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_traxDiffuseSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxDiffuseSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_traxDiffuseSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxDiffuseSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_traxNormalSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxNormalSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_traxNormalSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxNormalSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_traxNormalSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxNormalSettings = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_decalSplatSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decalSplatSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings* const& JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_get_decalSplatSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decalSplatSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::__cordl_internal_set_decalSplatSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArraySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decalSplatSettings = value;
}
inline void JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup* JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup::TextureArrayConfig_TextureArrayGroup()   {
}
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::*)()>(&::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181402980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup*& JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup* const& JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::__cordl_internal_set_settings(::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
inline void JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride* JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride::TextureArrayConfig_PlatformTextureOverride()   {
}
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig_TextureEntry.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::TextureArrayConfig_TextureEntry::*)()>(&::JBooth::MicroSplat::TextureArrayConfig_TextureEntry::Reset)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1814050c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig_TextureEntry.HasTextures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroSplat::TextureArrayConfig_TextureEntry::*)(::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow)>(&::JBooth::MicroSplat::TextureArrayConfig_TextureEntry::HasTextures)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181404fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>(),
                        {"HasTextures", {}, {::i2c::type_of<::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig_TextureEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::TextureArrayConfig_TextureEntry::*)()>(&::JBooth::MicroSplat::TextureArrayConfig_TextureEntry::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181405250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TerrainLayer>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_terrainLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayer;
}
constexpr ::UnityW<::UnityEngine::TerrainLayer> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_terrainLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrainLayer;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_terrainLayer(::UnityW<::UnityEngine::TerrainLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrainLayer = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_diffuse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuse;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_diffuse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuse;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_diffuse(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuse = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_height(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_heightChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_heightChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_heightChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightChannel = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_normal(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normal = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_smoothness(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothness = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_smoothnessChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothnessChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_smoothnessChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothnessChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_smoothnessChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothnessChannel = value;
}
constexpr bool& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_isRoughness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRoughness;
}
constexpr bool const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_isRoughness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRoughness;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_isRoughness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRoughness = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_ao()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ao;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_ao() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ao;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_ao(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ao = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_aoChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_aoChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aoChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_aoChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aoChannel = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_emis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emis;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_emis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emis;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_emis(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emis = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_metal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metal;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_metal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metal;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_metal(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___metal = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_metalChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metalChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_metalChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___metalChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_metalChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___metalChannel = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_specular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specular;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_specular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specular;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_specular(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specular = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_noiseNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseNormal;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_noiseNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseNormal;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_noiseNormal(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseNormal = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_detailNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoise;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_detailNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoise;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_detailNoise(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailNoise = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_detailChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_detailChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_detailChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailChannel = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_distanceNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceNoise;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_distanceNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceNoise;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_distanceNoise(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceNoise = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_distanceChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_distanceChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_distanceChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceChannel = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxDiffuse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxDiffuse;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxDiffuse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxDiffuse;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxDiffuse(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxDiffuse = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxHeight;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxHeight;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxHeight(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxHeight = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxHeightChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxHeightChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxHeightChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxHeightChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxHeightChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxHeightChannel = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxNormal;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxNormal;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxNormal(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxNormal = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxSmoothness;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxSmoothness;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxSmoothness(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxSmoothness = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxSmoothnessChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxSmoothnessChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxSmoothnessChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxSmoothnessChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxSmoothnessChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxSmoothnessChannel = value;
}
constexpr bool& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxIsRoughness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxIsRoughness;
}
constexpr bool const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxIsRoughness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxIsRoughness;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxIsRoughness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxIsRoughness = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxAO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxAO;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxAO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxAO;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxAO(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxAO = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxAOChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxAOChannel;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureChannel const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_traxAOChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxAOChannel;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_traxAOChannel(::JBooth::MicroSplat::TextureArrayConfig_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxAOChannel = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_splat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splat;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_get_splat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splat;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::__cordl_internal_set_splat(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splat = value;
}
inline void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool JBooth::MicroSplat::TextureArrayConfig_TextureEntry::HasTextures(::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow  wf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>(),
                        {"HasTextures", {}, {::i2c::type_of<::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, wf);
}
inline void JBooth::MicroSplat::TextureArrayConfig_TextureEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::TextureArrayConfig_TextureEntry* JBooth::MicroSplat::TextureArrayConfig_TextureEntry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureEntry::TextureArrayConfig_TextureEntry()   {
}
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig.IsScatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroSplat::TextureArrayConfig::*)()>(&::JBooth::MicroSplat::TextureArrayConfig::IsScatter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsScatter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig.IsStarReach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroSplat::TextureArrayConfig::*)()>(&::JBooth::MicroSplat::TextureArrayConfig::IsStarReach)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsStarReach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig.IsDecal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroSplat::TextureArrayConfig::*)()>(&::JBooth::MicroSplat::TextureArrayConfig::IsDecal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsDecal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig.IsDecalSplat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroSplat::TextureArrayConfig::*)()>(&::JBooth::MicroSplat::TextureArrayConfig::IsDecalSplat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsDecalSplat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig.HasTerrainLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JBooth::MicroSplat::TextureArrayConfig::*)(::UnityEngine::TerrainLayer*)>(&::JBooth::MicroSplat::TextureArrayConfig::HasTerrainLayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181404b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"HasTerrainLayer", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig.AddTerrainLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::TextureArrayConfig::*)(::UnityEngine::TerrainLayer*)>(&::JBooth::MicroSplat::TextureArrayConfig::AddTerrainLayer)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1814048f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"AddTerrainLayer", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroSplat::TextureArrayConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroSplat::TextureArrayConfig::*)()>(&::JBooth::MicroSplat::TextureArrayConfig::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181404c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseIsLinear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseIsLinear;
}
constexpr bool const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseIsLinear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseIsLinear;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_diffuseIsLinear(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseIsLinear = value;
}
constexpr bool& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_antiTileArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiTileArray;
}
constexpr bool const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_antiTileArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___antiTileArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_antiTileArray(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___antiTileArray = value;
}
constexpr bool& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisMetalArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisMetalArray;
}
constexpr bool const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisMetalArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisMetalArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_emisMetalArray(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emisMetalArray = value;
}
constexpr bool& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_traxArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxArray;
}
constexpr bool const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_traxArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traxArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_traxArray(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traxArray = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureMode& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_textureMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureMode;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureMode const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_textureMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureMode;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_textureMode(::JBooth::MicroSplat::TextureArrayConfig_TextureMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureMode = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_ClusterMode& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_clusterMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterMode;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_ClusterMode const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_clusterMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clusterMode;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_clusterMode(::JBooth::MicroSplat::TextureArrayConfig_ClusterMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clusterMode = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PackingMode& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_packingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingMode;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PackingMode const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_packingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___packingMode;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_packingMode(::JBooth::MicroSplat::TextureArrayConfig_PackingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___packingMode = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_pbrWorkflow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pbrWorkflow;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_pbrWorkflow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pbrWorkflow;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_pbrWorkflow(::JBooth::MicroSplat::TextureArrayConfig_PBRWorkflow  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pbrWorkflow = value;
}
constexpr int32_t& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_hash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr int32_t const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_hash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_hash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_splatArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_splatArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splatArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_splatArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splatArray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_diffuseArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseArray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_normalSAOArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSAOArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_normalSAOArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSAOArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_normalSAOArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalSAOArray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_smoothAOArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothAOArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_smoothAOArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothAOArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_smoothAOArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothAOArray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_specularArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_specularArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_specularArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specularArray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseArray2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray2;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseArray2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray2;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_diffuseArray2(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseArray2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_normalSAOArray2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSAOArray2;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_normalSAOArray2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSAOArray2;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_normalSAOArray2(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalSAOArray2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_smoothAOArray2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothAOArray2;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_smoothAOArray2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothAOArray2;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_smoothAOArray2(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothAOArray2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_specularArray2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularArray2;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_specularArray2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularArray2;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_specularArray2(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specularArray2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseArray3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray3;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_diffuseArray3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffuseArray3;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_diffuseArray3(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffuseArray3 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_normalSAOArray3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSAOArray3;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_normalSAOArray3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalSAOArray3;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_normalSAOArray3(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalSAOArray3 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_smoothAOArray3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothAOArray3;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_smoothAOArray3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothAOArray3;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_smoothAOArray3(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothAOArray3 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_specularArray3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularArray3;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_specularArray3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specularArray3;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_specularArray3(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specularArray3 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisArray;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_emisArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emisArray = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisArray2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisArray2;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisArray2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisArray2;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_emisArray2(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emisArray2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisArray3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisArray3;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_emisArray3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emisArray3;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_emisArray3(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emisArray3 = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup*& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_defaultTextureSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTextureSettings;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup* const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_defaultTextureSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTextureSettings;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_defaultTextureSettings(::JBooth::MicroSplat::TextureArrayConfig_TextureArrayGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTextureSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride*>*& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_platformOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformOverrides;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride*>* const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_platformOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformOverrides;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_platformOverrides(::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_PlatformTextureOverride*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformOverrides = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextureSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextureSize;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextureSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextureSize;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_sourceTextureSize(::JBooth::MicroSplat::TextureArrayConfig_SourceTextureSize  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTextureSize = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_allTextureChannelHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTextureChannelHeight;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_allTextureChannelHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTextureChannelHeight;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_allTextureChannelHeight(::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allTextureChannelHeight = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_allTextureChannelSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTextureChannelSmoothness;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_allTextureChannelSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTextureChannelSmoothness;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_allTextureChannelSmoothness(::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allTextureChannelSmoothness = value;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_allTextureChannelAO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTextureChannelAO;
}
constexpr ::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_allTextureChannelAO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allTextureChannelAO;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_allTextureChannelAO(::JBooth::MicroSplat::TextureArrayConfig_AllTextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allTextureChannelAO = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>*& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextures;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>* const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextures;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_sourceTextures(::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTextures = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>*& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextures2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextures2;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>* const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextures2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextures2;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_sourceTextures2(::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTextures2 = value;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>*& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextures3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextures3;
}
constexpr ::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>* const& JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_get_sourceTextures3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceTextures3;
}
constexpr void JBooth::MicroSplat::TextureArrayConfig::__cordl_internal_set_sourceTextures3(::System::Collections::Generic::List_1<::JBooth::MicroSplat::TextureArrayConfig_TextureEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceTextures3 = value;
}
inline bool JBooth::MicroSplat::TextureArrayConfig::IsScatter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsScatter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroSplat::TextureArrayConfig::IsStarReach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsStarReach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroSplat::TextureArrayConfig::IsDecal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsDecal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroSplat::TextureArrayConfig::IsDecalSplat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"IsDecalSplat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool JBooth::MicroSplat::TextureArrayConfig::HasTerrainLayer(::UnityEngine::TerrainLayer*  l)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"HasTerrainLayer", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline void JBooth::MicroSplat::TextureArrayConfig::AddTerrainLayer(::UnityEngine::TerrainLayer*  l)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {"AddTerrainLayer", {}, {::i2c::type_of<::UnityEngine::TerrainLayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l);
}
inline void JBooth::MicroSplat::TextureArrayConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroSplat::TextureArrayConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroSplat::TextureArrayConfig* JBooth::MicroSplat::TextureArrayConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroSplat::TextureArrayConfig*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroSplat::TextureArrayConfig::TextureArrayConfig()   {
}
