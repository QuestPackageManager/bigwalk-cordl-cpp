#pragma once
// IWYU pragma private; include "UnityEngine/TerrainTools/PaintContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TerrainTools/zzzz__PaintContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TerrainTools/zzzz__PaintContext_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainTools::PaintContext_ToolAction::PaintContext_ToolAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainTools::PaintContext_ToolAction::PaintContext_ToolAction()   {
}
constexpr ::UnityEngine::TerrainTools::PaintContext_ToolAction  UnityEngine::TerrainTools::PaintContext_ToolAction::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TerrainTools::PaintContext_ToolAction  UnityEngine::TerrainTools::PaintContext_ToolAction::PaintHeightmap{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TerrainTools::PaintContext_ToolAction  UnityEngine::TerrainTools::PaintContext_ToolAction::PaintTexture{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TerrainTools::PaintContext_ToolAction  UnityEngine::TerrainTools::PaintContext_ToolAction::PaintHoles{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TerrainTools::PaintContext_ToolAction  UnityEngine::TerrainTools::PaintContext_ToolAction::AddTerrainLayer{static_cast<int32_t>(0x8)};
// Ctor Parameters [CppParam { name: "terrain", ty: "::UnityW<::UnityEngine::Terrain>", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::UnityEngine::TerrainTools::PaintContext_ToolAction", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainTools::PaintContext_PaintedTerrain::PaintContext_PaintedTerrain(::UnityW<::UnityEngine::Terrain>  terrain, ::UnityEngine::TerrainTools::PaintContext_ToolAction  action) noexcept  {
this->terrain = terrain;
this->action = action;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainTools::PaintContext_PaintedTerrain::PaintContext_PaintedTerrain()   {
}
//  Writing Method size for method: ::UnityEngine::TerrainTools::PaintContext.get_kNormalizedHeightScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::TerrainTools::PaintContext::get_kNormalizedHeightScale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18230eea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::PaintContext*>(),
                        {"get_kNormalizedHeightScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainTools::PaintContext::setStaticF_s_PaintedTerrain(::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>*, "s_PaintedTerrain", ::UnityEngine::TerrainTools::PaintContext*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>* UnityEngine::TerrainTools::PaintContext::getStaticF_s_PaintedTerrain()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::TerrainTools::PaintContext_PaintedTerrain>*, "s_PaintedTerrain", ::UnityEngine::TerrainTools::PaintContext*>();
}
inline float_t UnityEngine::TerrainTools::PaintContext::get_kNormalizedHeightScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TerrainTools::PaintContext*>(),
                        {"get_kNormalizedHeightScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainTools::PaintContext::PaintContext()   {
}
