#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineSampleStruct.hpp"
#include "GlobalNamespace/zzzz__EmitterInfo_impl.hpp"
#include "GlobalNamespace/zzzz__SplineSampleStruct_def.hpp"
#include "GlobalNamespace/zzzz__BiomeRegion_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineSampleStruct.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SplineSampleStruct::*)(::GlobalNamespace::SplineSampleStruct)>(&::GlobalNamespace::SplineSampleStruct::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180329830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SplineSampleStruct>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineSampleStruct.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SplineSampleStruct::*)()>(&::GlobalNamespace::SplineSampleStruct::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180329890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(),
                    {::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineSampleStruct.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SplineSampleStruct::*)(::System::Object*)>(&::GlobalNamespace::SplineSampleStruct::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803297c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(),
                    {::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SplineSampleStruct::Equals(::GlobalNamespace::SplineSampleStruct  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::SplineSampleStruct>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::SplineSampleStruct::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::SplineSampleStruct::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SplineSampleStruct>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>"
constexpr  GlobalNamespace::SplineSampleStruct::operator ::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>* GlobalNamespace::SplineSampleStruct::i___System__IEquatable_1___GlobalNamespace__SplineSampleStruct_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::SplineSampleStruct>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "InSpline", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Biome", ty: "::GlobalNamespace::BiomeRegion*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SplineIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ClosestPoint", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "SidePoint1", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "SidePoint2", ty: "::GlobalNamespace::EmitterInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "VegetationIntensity", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SplineSampleStruct::SplineSampleStruct(bool  InSpline, ::GlobalNamespace::BiomeRegion*  Biome, int32_t  SplineIndex, ::GlobalNamespace::EmitterInfo  ClosestPoint, ::GlobalNamespace::EmitterInfo  SidePoint1, ::GlobalNamespace::EmitterInfo  SidePoint2, float_t  VegetationIntensity) noexcept  {
this->InSpline = InSpline;
this->Biome = Biome;
this->SplineIndex = SplineIndex;
this->ClosestPoint = ClosestPoint;
this->SidePoint1 = SidePoint1;
this->SidePoint2 = SidePoint2;
this->VegetationIntensity = VegetationIntensity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineSampleStruct::SplineSampleStruct()   {
}
