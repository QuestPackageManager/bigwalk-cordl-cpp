#pragma once
// IWYU pragma private; include "MA/Flora/ShaderPropertyId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "MA/Flora/zzzz__ShaderPropertyId_def.hpp"
#include "MA/Flora/zzzz__ShaderPropertyId_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "unity_BaseColor", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_SpecCube0_HDR", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_DOTSInstanceData", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_SHCoefficients", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_EntityId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_ObjectToWorld", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_WorldToObject", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_MatrixPreviousM", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_MatrixPreviousMI", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_LightmapST", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_WorldBoundingSphere", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_RendererBounds_Min", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unity_RendererBounds_Max", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flora_RandomID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "flora_VariationColor", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData::PropertyArray_ShaderPropertyId_PropertyData(int32_t  unity_BaseColor, int32_t  unity_SpecCube0_HDR, int32_t  unity_DOTSInstanceData, int32_t  unity_SHCoefficients, int32_t  unity_EntityId, int32_t  unity_ObjectToWorld, int32_t  unity_WorldToObject, int32_t  unity_MatrixPreviousM, int32_t  unity_MatrixPreviousMI, int32_t  unity_LightmapST, int32_t  unity_WorldBoundingSphere, int32_t  unity_RendererBounds_Min, int32_t  unity_RendererBounds_Max, int32_t  flora_RandomID, int32_t  flora_VariationColor) noexcept  {
this->unity_BaseColor = unity_BaseColor;
this->unity_SpecCube0_HDR = unity_SpecCube0_HDR;
this->unity_DOTSInstanceData = unity_DOTSInstanceData;
this->unity_SHCoefficients = unity_SHCoefficients;
this->unity_EntityId = unity_EntityId;
this->unity_ObjectToWorld = unity_ObjectToWorld;
this->unity_WorldToObject = unity_WorldToObject;
this->unity_MatrixPreviousM = unity_MatrixPreviousM;
this->unity_MatrixPreviousMI = unity_MatrixPreviousMI;
this->unity_LightmapST = unity_LightmapST;
this->unity_WorldBoundingSphere = unity_WorldBoundingSphere;
this->unity_RendererBounds_Min = unity_RendererBounds_Min;
this->unity_RendererBounds_Max = unity_RendererBounds_Max;
this->flora_RandomID = flora_RandomID;
this->flora_VariationColor = flora_VariationColor;
}
// Ctor Parameters []
constexpr ::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData::PropertyArray_ShaderPropertyId_PropertyData()   {
}
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId_PropertyArray.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::ShaderPropertyId_PropertyArray::Initialize)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1814d3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId_PropertyArray>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId_PropertyArray.get_Ref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData> (*)()>(&::MA::Flora::ShaderPropertyId_PropertyArray::get_Ref)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d3da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId_PropertyArray>(),
                        {"get_Ref", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId_PropertyArray._Initialize_g__Shutdown_2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::ShaderPropertyId_PropertyArray::_Initialize_g__Shutdown_2_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d3d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId_PropertyArray>(),
                        {"<Initialize>g__Shutdown|2_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::ShaderPropertyId_PropertyArray::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId_PropertyArray>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::by_ref<::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData> MA::Flora::ShaderPropertyId_PropertyArray::get_Ref()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId_PropertyArray>(),
                        {"get_Ref", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData>>(nullptr, ___internal_method);
}
inline void MA::Flora::ShaderPropertyId_PropertyArray::_Initialize_g__Shutdown_2_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId_PropertyArray>(),
                        {"<Initialize>g__Shutdown|2_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_PropertyData", ty: "::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData*", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ShaderPropertyId_PropertyArray::ShaderPropertyId_PropertyArray(::MA::Flora::PropertyArray_ShaderPropertyId_PropertyData*  m_PropertyData) noexcept  {
this->m_PropertyData = m_PropertyData;
}
// Ctor Parameters []
constexpr ::MA::Flora::ShaderPropertyId_PropertyArray::ShaderPropertyId_PropertyArray()   {
}
//  Writing Method size for method: ::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier::*)()>(&::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier::setStaticF_Ref(::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray>, "Ref", ::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier*>(std::forward<::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray>>(value));
}
inline ::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray> MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier::getStaticF_Ref()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<::MA::Flora::ShaderPropertyId_PropertyArray>, "Ref", ::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier*>();
}
inline void MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier* MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::PropertyArray_ShaderPropertyId_StaticIdentifier::PropertyArray_ShaderPropertyId_StaticIdentifier()   {
}
//  Writing Method size for method: ::MA::Flora::PropertyArray_ShaderPropertyId___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::PropertyArray_ShaderPropertyId___c::*)()>(&::MA::Flora::PropertyArray_ShaderPropertyId___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PropertyArray_ShaderPropertyId___c._Initialize_b__2_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::PropertyArray_ShaderPropertyId___c::*)(::System::Object*, ::System::EventArgs*)>(&::MA::Flora::PropertyArray_ShaderPropertyId___c::_Initialize_b__2_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d3d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId___c*>(),
                        {"<Initialize>b__2_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::PropertyArray_ShaderPropertyId___c._Initialize_b__2_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::PropertyArray_ShaderPropertyId___c::*)(::System::Object*, ::System::EventArgs*)>(&::MA::Flora::PropertyArray_ShaderPropertyId___c::_Initialize_b__2_2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814d3d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId___c*>(),
                        {"<Initialize>b__2_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::PropertyArray_ShaderPropertyId___c::setStaticF___9(::MA::Flora::PropertyArray_ShaderPropertyId___c*  value)  {
::cordl_internals::setStaticField<::MA::Flora::PropertyArray_ShaderPropertyId___c*, "<>9", ::MA::Flora::PropertyArray_ShaderPropertyId___c*>(std::forward<::MA::Flora::PropertyArray_ShaderPropertyId___c*>(value));
}
inline ::MA::Flora::PropertyArray_ShaderPropertyId___c* MA::Flora::PropertyArray_ShaderPropertyId___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::MA::Flora::PropertyArray_ShaderPropertyId___c*, "<>9", ::MA::Flora::PropertyArray_ShaderPropertyId___c*>();
}
inline void MA::Flora::PropertyArray_ShaderPropertyId___c::setStaticF___9__2_1(::System::EventHandler*  value)  {
::cordl_internals::setStaticField<::System::EventHandler*, "<>9__2_1", ::MA::Flora::PropertyArray_ShaderPropertyId___c*>(std::forward<::System::EventHandler*>(value));
}
inline ::System::EventHandler* MA::Flora::PropertyArray_ShaderPropertyId___c::getStaticF___9__2_1()  {
return ::cordl_internals::getStaticField<::System::EventHandler*, "<>9__2_1", ::MA::Flora::PropertyArray_ShaderPropertyId___c*>();
}
inline void MA::Flora::PropertyArray_ShaderPropertyId___c::setStaticF___9__2_2(::System::EventHandler*  value)  {
::cordl_internals::setStaticField<::System::EventHandler*, "<>9__2_2", ::MA::Flora::PropertyArray_ShaderPropertyId___c*>(std::forward<::System::EventHandler*>(value));
}
inline ::System::EventHandler* MA::Flora::PropertyArray_ShaderPropertyId___c::getStaticF___9__2_2()  {
return ::cordl_internals::getStaticField<::System::EventHandler*, "<>9__2_2", ::MA::Flora::PropertyArray_ShaderPropertyId___c*>();
}
inline void MA::Flora::PropertyArray_ShaderPropertyId___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::PropertyArray_ShaderPropertyId___c::_Initialize_b__2_1(::System::Object*  _, ::System::EventArgs*  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId___c*>(),
                        {"<Initialize>b__2_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline void MA::Flora::PropertyArray_ShaderPropertyId___c::_Initialize_b__2_2(::System::Object*  _, ::System::EventArgs*  __param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::PropertyArray_ShaderPropertyId___c*>(),
                        {"<Initialize>b__2_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline ::MA::Flora::PropertyArray_ShaderPropertyId___c* MA::Flora::PropertyArray_ShaderPropertyId___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::PropertyArray_ShaderPropertyId___c*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::PropertyArray_ShaderPropertyId___c::PropertyArray_ShaderPropertyId___c()   {
}
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_SpecCube0_HDR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_SpecCube0_HDR)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d77c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_SpecCube0_HDR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_BaseColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_BaseColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_BaseColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_DOTSInstanceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_DOTSInstanceData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_DOTSInstanceData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_SHCoefficients
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_SHCoefficients)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_SHCoefficients", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_EntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_EntityId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_EntityId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_ObjectToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_ObjectToWorld)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_ObjectToWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_WorldToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_WorldToObject)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_WorldToObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_MatrixPreviousM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_MatrixPreviousM)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d76d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_MatrixPreviousM", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_MatrixPreviousMI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_MatrixPreviousMI)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d76a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_MatrixPreviousMI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_LightmapST
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_LightmapST)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_LightmapST", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_WorldBoundingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_WorldBoundingSphere)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d77f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_WorldBoundingSphere", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_RendererBounds_Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_RendererBounds_Min)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_RendererBounds_Min", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_unity_RendererBounds_Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_unity_RendererBounds_Max)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_RendererBounds_Max", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_flora_RandomID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_flora_RandomID)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d7580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_flora_RandomID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ShaderPropertyId.get_flora_VariationColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MA::Flora::ShaderPropertyId::get_flora_VariationColor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814d75b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_flora_VariationColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t MA::Flora::ShaderPropertyId::get_unity_SpecCube0_HDR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_SpecCube0_HDR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_BaseColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_BaseColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_DOTSInstanceData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_DOTSInstanceData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_SHCoefficients()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_SHCoefficients", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_EntityId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_EntityId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_ObjectToWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_ObjectToWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_WorldToObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_WorldToObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_MatrixPreviousM()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_MatrixPreviousM", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_MatrixPreviousMI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_MatrixPreviousMI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_LightmapST()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_LightmapST", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_WorldBoundingSphere()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_WorldBoundingSphere", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_RendererBounds_Min()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_RendererBounds_Min", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_unity_RendererBounds_Max()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_unity_RendererBounds_Max", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_flora_RandomID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_flora_RandomID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::ShaderPropertyId::get_flora_VariationColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ShaderPropertyId*>(),
                        {"get_flora_VariationColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::ShaderPropertyId::ShaderPropertyId()   {
}
