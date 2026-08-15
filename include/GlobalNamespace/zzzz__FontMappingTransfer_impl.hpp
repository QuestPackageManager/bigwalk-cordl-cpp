#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappingTransfer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FontMappingTransfer_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FontMappingTransfer.get_cutoutMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::FontMappingTransfer::*)()>(&::GlobalNamespace::FontMappingTransfer::get_cutoutMaterial)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803e7450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingTransfer*>(),
                        {"get_cutoutMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FontMappingTransfer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FontMappingTransfer::*)()>(&::GlobalNamespace::FontMappingTransfer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingTransfer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_FontAsset>& GlobalNamespace::FontMappingTransfer::__cordl_internal_get_originalFont()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalFont;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& GlobalNamespace::FontMappingTransfer::__cordl_internal_get_originalFont() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalFont;
}
constexpr void GlobalNamespace::FontMappingTransfer::__cordl_internal_set_originalFont(::UnityW<::TMPro::TMP_FontAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalFont = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& GlobalNamespace::FontMappingTransfer::__cordl_internal_get_mappedFont()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mappedFont;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& GlobalNamespace::FontMappingTransfer::__cordl_internal_get_mappedFont() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mappedFont;
}
constexpr void GlobalNamespace::FontMappingTransfer::__cordl_internal_set_mappedFont(::UnityW<::TMPro::TMP_FontAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mappedFont = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::FontMappingTransfer::__cordl_internal_get__cutoutMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cutoutMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::FontMappingTransfer::__cordl_internal_get__cutoutMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cutoutMaterial;
}
constexpr void GlobalNamespace::FontMappingTransfer::__cordl_internal_set__cutoutMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cutoutMaterial = value;
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::FontMappingTransfer::get_cutoutMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingTransfer*>(),
                        {"get_cutoutMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::FontMappingTransfer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FontMappingTransfer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FontMappingTransfer* GlobalNamespace::FontMappingTransfer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FontMappingTransfer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontMappingTransfer::FontMappingTransfer()   {
}
