#pragma once
// IWYU pragma private; include "MA/Flora/TemplateStore.hpp"
#include "MA/Flora/zzzz__AABB_impl.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/zzzz__LODFadeMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MA/Flora/zzzz__TemplateStore_def.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateStore_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::TemplateStore.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateStore_PerTemplateData* (*)()>(&::MA::Flora::TemplateStore::get_Data)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814aab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateStore.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TemplateStore::Initialize)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814aa870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateStore.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::TemplateIndex)>(&::MA::Flora::TemplateStore::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814aaa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"Reset", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateStore._Initialize_g__Shutdown_6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TemplateStore::_Initialize_g__Shutdown_6_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814aaaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"<Initialize>g__Shutdown|6_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::TemplateStore_PerTemplateData* MA::Flora::TemplateStore::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateStore_PerTemplateData*>(nullptr, ___internal_method);
}
inline void MA::Flora::TemplateStore::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::TemplateStore::Reset(::MA::Flora::TemplateIndex  _cordl_template)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"Reset", {}, {::i2c::type_of<::MA::Flora::TemplateIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_template);
}
inline void MA::Flora::TemplateStore::_Initialize_g__Shutdown_6_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore>(),
                        {"<Initialize>g__Shutdown|6_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PerTemplateData", ty: "::MA::Flora::TemplateStore_PerTemplateData*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateStore::TemplateStore(::MA::Flora::TemplateStore_PerTemplateData*  m_PerTemplateData) noexcept  {
this->m_PerTemplateData = m_PerTemplateData;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateStore::TemplateStore()   {
}
inline void MA::Flora::TemplateStore_StaticIdentifier::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore>, "Ref", ::MA::Flora::TemplateStore_StaticIdentifier>(std::forward<::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore> MA::Flora::TemplateStore_StaticIdentifier::getStaticF_Ref()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::TemplateStore>, "Ref", ::MA::Flora::TemplateStore_StaticIdentifier>();
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateStore_StaticIdentifier::TemplateStore_StaticIdentifier()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer(float_t  FixedElementField) noexcept  {
this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer()   {
}
// Ctor Parameters [CppParam { name: "Layer", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BatchDomainIndex", ty: "::MA::Flora::BatchDomainIndex", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Flags", ty: "::MA::Flora::TemplateRenderFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "InitialVariationColor", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxRenderDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxShadowDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AffectedByGlobalDensity", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AffectedByRangeDensity", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "MinShadowLod", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodCount", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodFadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalReferencePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalAABB", ty: "::MA::Flora::AABB", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODHeights", ty: "::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODTransitionHeights", ty: "::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateStore_PerTemplateData::TemplateStore_PerTemplateData(int32_t  Layer, uint64_t  SceneCullingMask, ::MA::Flora::BatchDomainIndex  BatchDomainIndex, ::MA::Flora::TemplateRenderType  Type, ::MA::Flora::TemplateRenderFlags  Flags, ::Unity::Mathematics::float4  InitialVariationColor, float_t  MaxRenderDistance, float_t  MaxShadowDistance, bool  AffectedByGlobalDensity, bool  AffectedByRangeDensity, int32_t  MinShadowLod, uint8_t  LodCount, ::UnityEngine::LODFadeMode  LodFadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalAnchorPoint, ::UnityEngine::Vector3  LocalReferencePoint, float_t  LocalSize, ::MA::Flora::AABB  LocalAABB, ::MA::Flora::PerTemplateData_TemplateStore__LODHeights_e__FixedBuffer  LODHeights, ::MA::Flora::PerTemplateData_TemplateStore__LODTransitionHeights_e__FixedBuffer  LODTransitionHeights) noexcept  {
this->Layer = Layer;
this->SceneCullingMask = SceneCullingMask;
this->BatchDomainIndex = BatchDomainIndex;
this->Type = Type;
this->Flags = Flags;
this->InitialVariationColor = InitialVariationColor;
this->MaxRenderDistance = MaxRenderDistance;
this->MaxShadowDistance = MaxShadowDistance;
this->AffectedByGlobalDensity = AffectedByGlobalDensity;
this->AffectedByRangeDensity = AffectedByRangeDensity;
this->MinShadowLod = MinShadowLod;
this->LodCount = LodCount;
this->LodFadeMode = LodFadeMode;
this->HasAnimatedCrossFade = HasAnimatedCrossFade;
this->SupportsFadeKeyword = SupportsFadeKeyword;
this->LocalAnchorPoint = LocalAnchorPoint;
this->LocalReferencePoint = LocalReferencePoint;
this->LocalSize = LocalSize;
this->LocalAABB = LocalAABB;
this->LODHeights = LODHeights;
this->LODTransitionHeights = LODTransitionHeights;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateStore_PerTemplateData::TemplateStore_PerTemplateData()   {
}
//  Writing Method size for method: ::MA::Flora::TemplateStore___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateStore___c::*)()>(&::MA::Flora::TemplateStore___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateStore___c._Initialize_b__6_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateStore___c::*)(::System::Object*, ::System::EventArgs*)>(&::MA::Flora::TemplateStore___c::_Initialize_b__6_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814aaaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore___c*>(),
                        {"<Initialize>b__6_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateStore___c._Initialize_b__6_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TemplateStore___c::*)(::System::Object*, ::System::EventArgs*)>(&::MA::Flora::TemplateStore___c::_Initialize_b__6_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814aaaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore___c*>(),
                        {"<Initialize>b__6_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TemplateStore___c::setStaticF___9(::MA::Flora::TemplateStore___c*  value)  {
::cordl_internals::setStaticField<::MA::Flora::TemplateStore___c*, "<>9", ::MA::Flora::TemplateStore___c*>(std::forward<::MA::Flora::TemplateStore___c*>(value));
}
inline ::MA::Flora::TemplateStore___c* MA::Flora::TemplateStore___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::MA::Flora::TemplateStore___c*, "<>9", ::MA::Flora::TemplateStore___c*>();
}
inline void MA::Flora::TemplateStore___c::setStaticF___9__6_1(::System::EventHandler*  value)  {
::cordl_internals::setStaticField<::System::EventHandler*, "<>9__6_1", ::MA::Flora::TemplateStore___c*>(std::forward<::System::EventHandler*>(value));
}
inline ::System::EventHandler* MA::Flora::TemplateStore___c::getStaticF___9__6_1()  {
return ::cordl_internals::getStaticField<::System::EventHandler*, "<>9__6_1", ::MA::Flora::TemplateStore___c*>();
}
inline void MA::Flora::TemplateStore___c::setStaticF___9__6_2(::System::EventHandler*  value)  {
::cordl_internals::setStaticField<::System::EventHandler*, "<>9__6_2", ::MA::Flora::TemplateStore___c*>(std::forward<::System::EventHandler*>(value));
}
inline ::System::EventHandler* MA::Flora::TemplateStore___c::getStaticF___9__6_2()  {
return ::cordl_internals::getStaticField<::System::EventHandler*, "<>9__6_2", ::MA::Flora::TemplateStore___c*>();
}
inline void MA::Flora::TemplateStore___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::TemplateStore___c::_Initialize_b__6_1(::System::Object*  _, ::System::EventArgs*  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore___c*>(),
                        {"<Initialize>b__6_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline void MA::Flora::TemplateStore___c::_Initialize_b__6_2(::System::Object*  _, ::System::EventArgs*  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateStore___c*>(),
                        {"<Initialize>b__6_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline ::MA::Flora::TemplateStore___c* MA::Flora::TemplateStore___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::TemplateStore___c*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateStore___c::TemplateStore___c()   {
}
