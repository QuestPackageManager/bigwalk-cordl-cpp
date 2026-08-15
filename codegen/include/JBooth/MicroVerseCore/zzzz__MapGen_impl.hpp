#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/MapGen.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__MapGen_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__OcclusionData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen.GenerateCurvatureMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*, int32_t, int32_t)>(&::JBooth::MicroVerseCore::MapGen::GenerateCurvatureMap)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x181430940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"GenerateCurvatureMap", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen.QuadCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*, int32_t)>(&::JBooth::MicroVerseCore::MapGen::QuadCombine)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x181433800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"QuadCombine", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen.NineCombine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*, int32_t)>(&::JBooth::MicroVerseCore::MapGen::NineCombine)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x181432f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"NineCombine", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen.NineCombineCurrentTreeMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*, int32_t)>(&::JBooth::MicroVerseCore::MapGen::NineCombineCurrentTreeMask)> {
  constexpr static std::size_t size = 0xb50;
  constexpr static std::size_t addrs = 0x1814323e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"NineCombineCurrentTreeMask", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen.NineCombineCurrentObjectMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*, int32_t)>(&::JBooth::MicroVerseCore::MapGen::NineCombineCurrentObjectMask)> {
  constexpr static std::size_t size = 0xb50;
  constexpr static std::size_t addrs = 0x181431890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"NineCombineCurrentObjectMask", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen.GenerateFlowMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*)>(&::JBooth::MicroVerseCore::MapGen::GenerateFlowMap)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x181430d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"GenerateFlowMap", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen.GenerateNormalMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::Terrain*, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*, int32_t, int32_t)>(&::JBooth::MicroVerseCore::MapGen::GenerateNormalMap)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181431400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"GenerateNormalMap", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::MapGen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::MapGen::*)()>(&::JBooth::MicroVerseCore::MapGen::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::MapGen::setStaticF_curvatureShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "curvatureShader", ::JBooth::MicroVerseCore::MapGen*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::MapGen::getStaticF_curvatureShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "curvatureShader", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF_flowShader(::UnityW<::UnityEngine::ComputeShader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::ComputeShader>, "flowShader", ::JBooth::MicroVerseCore::MapGen*>(std::forward<::UnityW<::UnityEngine::ComputeShader>>(value));
}
inline ::UnityW<::UnityEngine::ComputeShader> JBooth::MicroVerseCore::MapGen::getStaticF_flowShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::ComputeShader>, "flowShader", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__Width(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__Width()  {
return ::cordl_internals::getStaticField<int32_t, "_Width", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__Height(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Height", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__Height()  {
return ::cordl_internals::getStaticField<int32_t, "_Height", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__WaterMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_WaterMap", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__WaterMap()  {
return ::cordl_internals::getStaticField<int32_t, "_WaterMap", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__OutFlow(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_OutFlow", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__OutFlow()  {
return ::cordl_internals::getStaticField<int32_t, "_OutFlow", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__HeightMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_HeightMap", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__HeightMap()  {
return ::cordl_internals::getStaticField<int32_t, "_HeightMap", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__VelocityMap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_VelocityMap", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__VelocityMap()  {
return ::cordl_internals::getStaticField<int32_t, "_VelocityMap", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF_normalShader(::UnityW<::UnityEngine::Shader>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Shader>, "normalShader", ::JBooth::MicroVerseCore::MapGen*>(std::forward<::UnityW<::UnityEngine::Shader>>(value));
}
inline ::UnityW<::UnityEngine::Shader> JBooth::MicroVerseCore::MapGen::getStaticF_normalShader()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Shader>, "normalShader", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__Heightmap(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__Heightmap()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__Heightmap_PX(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap_PX", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__Heightmap_PX()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap_PX", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__Heightmap_PY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap_PY", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__Heightmap_PY()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap_PY", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__Heightmap_NX(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap_NX", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__Heightmap_NX()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap_NX", ::JBooth::MicroVerseCore::MapGen*>();
}
inline void JBooth::MicroVerseCore::MapGen::setStaticF__Heightmap_NY(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_Heightmap_NY", ::JBooth::MicroVerseCore::MapGen*>(std::forward<int32_t>(value));
}
inline int32_t JBooth::MicroVerseCore::MapGen::getStaticF__Heightmap_NY()  {
return ::cordl_internals::getStaticField<int32_t, "_Heightmap_NY", ::JBooth::MicroVerseCore::MapGen*>();
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MapGen::GenerateCurvatureMap(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  normals, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"GenerateCurvatureMap", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, t, normals, width, height);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MapGen::QuadCombine(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  tempRenderData, int32_t  borderPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"QuadCombine", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, t, tempRenderData, borderPixels);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MapGen::NineCombine(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  tempRenderData, int32_t  borderPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"NineCombine", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, t, tempRenderData, borderPixels);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MapGen::NineCombineCurrentTreeMask(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  tempRenderData, int32_t  borderPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"NineCombineCurrentTreeMask", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, t, tempRenderData, borderPixels);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MapGen::NineCombineCurrentObjectMask(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*  tempRenderData, int32_t  borderPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"NineCombineCurrentObjectMask", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::JBooth::MicroVerseCore::OcclusionData*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, t, tempRenderData, borderPixels);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MapGen::GenerateFlowMap(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  heights)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"GenerateFlowMap", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, t, heights);
}
inline ::UnityW<::UnityEngine::RenderTexture> JBooth::MicroVerseCore::MapGen::GenerateNormalMap(::UnityEngine::Terrain*  t, ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*  heightMaps, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {"GenerateNormalMap", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Terrain>,::UnityW<::UnityEngine::RenderTexture>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, t, heightMaps, width, height);
}
inline void JBooth::MicroVerseCore::MapGen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::MapGen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::MapGen* JBooth::MicroVerseCore::MapGen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::MapGen*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::MapGen::MapGen()   {
}
