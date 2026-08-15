#pragma once
// IWYU pragma private; include "MA/Flora/TemplateLayoutKey.hpp"
#include "MA/Flora/zzzz__TemplateCapabilityProfile_impl.hpp"
#include "MA/Flora/zzzz__TemplateData_impl.hpp"
#include "MA/Flora/zzzz__TemplateRenderType_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__LODFadeMode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MA/Flora/zzzz__TemplateLayoutKey_def.hpp"
#include "MA/Flora/zzzz__TemplateData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::TemplateLayoutKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateLayoutKey::*)(::MA::Flora::TemplateLayoutKey)>(&::MA::Flora::TemplateLayoutKey::Equals)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x1814a9460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateLayoutKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TemplateLayoutKey::*)(::System::Object*)>(&::MA::Flora::TemplateLayoutKey::Equals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1814a9350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                    {::i2c::class_of<::MA::Flora::TemplateLayoutKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateLayoutKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TemplateLayoutKey::*)()>(&::MA::Flora::TemplateLayoutKey::GetHashCode)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1814a9c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                    {::i2c::class_of<::MA::Flora::TemplateLayoutKey>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateLayoutKey.TemplateDataEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::MA::Flora::TemplateData>, ::by_ref<::MA::Flora::TemplateData>)>(&::MA::Flora::TemplateLayoutKey::TemplateDataEquals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181496c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                        {"TemplateDataEquals", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateLayoutKey.GetTemplateDataHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::MA::Flora::TemplateData>)>(&::MA::Flora::TemplateLayoutKey::GetTemplateDataHash)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x1814a9ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                        {"GetTemplateDataHash", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::TemplateLayoutKey::Equals(::MA::Flora::TemplateLayoutKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TemplateLayoutKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::TemplateLayoutKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateLayoutKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::TemplateLayoutKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TemplateLayoutKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::TemplateLayoutKey::TemplateDataEquals(::by_ref<::MA::Flora::TemplateData>  a, ::by_ref<::MA::Flora::TemplateData>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                        {"TemplateDataEquals", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>(), ::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t MA::Flora::TemplateLayoutKey::GetTemplateDataHash(::by_ref<::MA::Flora::TemplateData>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateLayoutKey>(),
                        {"GetTemplateDataHash", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>"
constexpr  MA::Flora::TemplateLayoutKey::operator ::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>"
constexpr ::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>* MA::Flora::TemplateLayoutKey::i___System__IEquatable_1___MA__Flora__TemplateLayoutKey_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TemplateLayoutKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "GrassMaterialId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "CapabilityProfile", ty: "::MA::Flora::TemplateCapabilityProfile", modifiers: "", def_value: Some("{}") }, CppParam { name: "GroupSignature", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GroupCount", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::MA::Flora::TemplateRenderType", modifiers: "", def_value: Some("{}") }, CppParam { name: "InitialVariationColor", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "LodFadeMode", ty: "::UnityEngine::LODFadeMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "HasAnimatedCrossFade", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "SupportsFadeKeyword", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "LocalAnchorPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "TemplateData", ty: "::MA::Flora::TemplateData", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateLayoutKey::TemplateLayoutKey(::UnityEngine::EntityId  GrassMaterialId, ::MA::Flora::TemplateCapabilityProfile  CapabilityProfile, uint64_t  GroupSignature, uint16_t  GroupCount, ::MA::Flora::TemplateRenderType  Type, ::Unity::Mathematics::float4  InitialVariationColor, ::UnityEngine::LODFadeMode  LodFadeMode, bool  HasAnimatedCrossFade, bool  SupportsFadeKeyword, ::UnityEngine::Vector3  LocalAnchorPoint, ::MA::Flora::TemplateData  TemplateData) noexcept  {
this->GrassMaterialId = GrassMaterialId;
this->CapabilityProfile = CapabilityProfile;
this->GroupSignature = GroupSignature;
this->GroupCount = GroupCount;
this->Type = Type;
this->InitialVariationColor = InitialVariationColor;
this->LodFadeMode = LodFadeMode;
this->HasAnimatedCrossFade = HasAnimatedCrossFade;
this->SupportsFadeKeyword = SupportsFadeKeyword;
this->LocalAnchorPoint = LocalAnchorPoint;
this->TemplateData = TemplateData;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateLayoutKey::TemplateLayoutKey()   {
}
