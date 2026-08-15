#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailPrototype.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__DetailRenderMode_impl.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__DetailPrototype_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainDetailPrototype.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailPrototype::*)()>(&::MA::Flora::TerrainDetailPrototype::IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815090e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailPrototype._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainDetailPrototype::*)(::UnityEngine::Terrain*, ::UnityEngine::DetailPrototype*, int32_t)>(&::MA::Flora::TerrainDetailPrototype::_ctor)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x181509120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::DetailPrototype*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailPrototype.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainDetailPrototype::*)(::MA::Flora::TerrainDetailPrototype)>(&::MA::Flora::TerrainDetailPrototype::Equals)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x181508b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainDetailPrototype>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDetailPrototype.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TerrainDetailPrototype::*)()>(&::MA::Flora::TerrainDetailPrototype::GetHashCode)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x181508ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(),
                    {::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool MA::Flora::TerrainDetailPrototype::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::TerrainDetailPrototype::_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::DetailPrototype*  prototype, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::DetailPrototype*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain, prototype, index);
}
inline bool MA::Flora::TerrainDetailPrototype::Equals(::MA::Flora::TerrainDetailPrototype  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainDetailPrototype>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::TerrainDetailPrototype::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainDetailPrototype>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>"
constexpr  MA::Flora::TerrainDetailPrototype::operator ::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>* MA::Flora::TerrainDetailPrototype::i___System__IEquatable_1___MA__Flora__TerrainDetailPrototype_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainDetailPrototype>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Terrain", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxDistance", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UsePrototypeMesh", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "RenderMode", ty: "::UnityEngine::DetailRenderMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "Prototype", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PrototypeTexture", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Texture>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "HealthyColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "DryColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "Scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NoiseSeed", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "NoiseSpread", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Density", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "HoleEdgePadding", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TargetCoverage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UseDensityScaling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AlignToGround", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PositionJitter", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RenderingEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainDetailPrototype::TerrainDetailPrototype(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  Terrain, int32_t  Index, uint16_t  MaxDistance, bool  UsePrototypeMesh, ::UnityEngine::DetailRenderMode  RenderMode, ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>  Prototype, ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Texture>>  PrototypeTexture, ::UnityEngine::Color  HealthyColor, ::UnityEngine::Color  DryColor, ::Unity::Mathematics::float3  Scale, float_t  MinWidth, float_t  MaxWidth, float_t  MinHeight, float_t  MaxHeight, int32_t  NoiseSeed, float_t  NoiseSpread, float_t  Density, float_t  HoleEdgePadding, float_t  TargetCoverage, bool  UseDensityScaling, float_t  AlignToGround, float_t  PositionJitter, bool  RenderingEnabled) noexcept  {
this->Terrain = Terrain;
this->Index = Index;
this->MaxDistance = MaxDistance;
this->UsePrototypeMesh = UsePrototypeMesh;
this->RenderMode = RenderMode;
this->Prototype = Prototype;
this->PrototypeTexture = PrototypeTexture;
this->HealthyColor = HealthyColor;
this->DryColor = DryColor;
this->Scale = Scale;
this->MinWidth = MinWidth;
this->MaxWidth = MaxWidth;
this->MinHeight = MinHeight;
this->MaxHeight = MaxHeight;
this->NoiseSeed = NoiseSeed;
this->NoiseSpread = NoiseSpread;
this->Density = Density;
this->HoleEdgePadding = HoleEdgePadding;
this->TargetCoverage = TargetCoverage;
this->UseDensityScaling = UseDensityScaling;
this->AlignToGround = AlignToGround;
this->PositionJitter = PositionJitter;
this->RenderingEnabled = RenderingEnabled;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDetailPrototype::TerrainDetailPrototype()   {
}
