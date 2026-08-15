#pragma once
// IWYU pragma private; include "UnityEngine/TerrainTools/BrushTransform.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/TerrainTools/zzzz__BrushTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainTools::BrushTransform.get_targetOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TerrainTools::BrushTransform::*)()>(&::UnityEngine::TerrainTools::BrushTransform::get_targetOrigin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {"get_targetOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainTools::BrushTransform.get_targetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TerrainTools::BrushTransform::*)()>(&::UnityEngine::TerrainTools::BrushTransform::get_targetX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {"get_targetX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainTools::BrushTransform.get_targetY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TerrainTools::BrushTransform::*)()>(&::UnityEngine::TerrainTools::BrushTransform::get_targetY)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {"get_targetY", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainTools::BrushTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TerrainTools::BrushTransform::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::TerrainTools::BrushTransform::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18230e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 UnityEngine::TerrainTools::BrushTransform::get_targetOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {"get_targetOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::TerrainTools::BrushTransform::get_targetX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {"get_targetX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::TerrainTools::BrushTransform::get_targetY()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {"get_targetY", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::TerrainTools::BrushTransform::_ctor(::UnityEngine::Vector2  brushOrigin, ::UnityEngine::Vector2  brushU, ::UnityEngine::Vector2  brushV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::BrushTransform>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, brushOrigin, brushU, brushV);
}
// Ctor Parameters [CppParam { name: "_brushOrigin_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_brushU_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_brushV_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_targetOrigin_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_targetX_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_targetY_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainTools::BrushTransform::BrushTransform(::UnityEngine::Vector2  _brushOrigin_k__BackingField, ::UnityEngine::Vector2  _brushU_k__BackingField, ::UnityEngine::Vector2  _brushV_k__BackingField, ::UnityEngine::Vector2  _targetOrigin_k__BackingField, ::UnityEngine::Vector2  _targetX_k__BackingField, ::UnityEngine::Vector2  _targetY_k__BackingField) noexcept  {
this->_brushOrigin_k__BackingField = _brushOrigin_k__BackingField;
this->_brushU_k__BackingField = _brushU_k__BackingField;
this->_brushV_k__BackingField = _brushV_k__BackingField;
this->_targetOrigin_k__BackingField = _targetOrigin_k__BackingField;
this->_targetX_k__BackingField = _targetX_k__BackingField;
this->_targetY_k__BackingField = _targetY_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainTools::BrushTransform::BrushTransform()   {
}
