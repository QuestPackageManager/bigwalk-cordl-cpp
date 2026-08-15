#pragma once
// IWYU pragma private; include "UnityEngine/TerrainTools/TerrainPaintUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TerrainTools/zzzz__TerrainPaintUtility_def.hpp"
#include "UnityEngine/TerrainTools/zzzz__BrushTransform_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::TerrainTools::TerrainPaintUtility.CalculateBrushTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TerrainTools::BrushTransform (*)(::UnityEngine::Terrain*, ::UnityEngine::Vector2, float_t, float_t)>(&::UnityEngine::TerrainTools::TerrainPaintUtility::CalculateBrushTransform)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x182312700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::TerrainPaintUtility*>(),
                        {"CalculateBrushTransform", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::TerrainTools::BrushTransform UnityEngine::TerrainTools::TerrainPaintUtility::CalculateBrushTransform(::UnityEngine::Terrain*  terrain, ::UnityEngine::Vector2  brushCenterTerrainUV, float_t  brushSize, float_t  brushRotationDegrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::TerrainPaintUtility*>(),
                        {"CalculateBrushTransform", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainTools::BrushTransform>(nullptr, ___internal_method, terrain, brushCenterTerrainUV, brushSize, brushRotationDegrees);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainTools::TerrainPaintUtility::TerrainPaintUtility()   {
}
