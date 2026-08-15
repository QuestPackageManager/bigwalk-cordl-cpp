#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEMaterialSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEMaterialSettings_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEMaterialSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TheVisualEngine::TVEMaterialSettings::*)()>(&::TheVisualEngine::TVEMaterialSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEMaterialSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_baseMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMask;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_baseMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMask;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_baseMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMask = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useMultiMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMultiMask;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useMultiMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMultiMask;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_useMultiMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useMultiMask = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_meshMaskRG()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshMaskRG;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_meshMaskRG() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshMaskRG;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_meshMaskRG(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshMaskRG = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_meshMaskBA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshMaskBA;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_meshMaskBA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshMaskBA;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_meshMaskBA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshMaskBA = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useProjMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProjMask;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useProjMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useProjMask;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_useProjMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useProjMask = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useLumaMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLumaMask;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useLumaMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useLumaMask;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_useLumaMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useLumaMask = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_texCoords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texCoords;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_texCoords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texCoords;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_texCoords(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texCoords = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useImpostorShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useImpostorShader;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useImpostorShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useImpostorShader;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_useImpostorShader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useImpostorShader = value;
}
constexpr bool& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useImpostorFeature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useImpostorFeature;
}
constexpr bool const& TheVisualEngine::TVEMaterialSettings::__cordl_internal_get_useImpostorFeature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useImpostorFeature;
}
constexpr void TheVisualEngine::TVEMaterialSettings::__cordl_internal_set_useImpostorFeature(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useImpostorFeature = value;
}
inline void TheVisualEngine::TVEMaterialSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEMaterialSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TheVisualEngine::TVEMaterialSettings* TheVisualEngine::TVEMaterialSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TheVisualEngine::TVEMaterialSettings*>());
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEMaterialSettings::TVEMaterialSettings()   {
}
