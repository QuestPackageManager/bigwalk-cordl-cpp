#pragma once
// IWYU pragma private; include "MA/Flora/TerrainTreePrototype.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "MA/Flora/zzzz__TerrainTreePrototype_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__TreePrototype_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainTreePrototype._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainTreePrototype::*)(::UnityEngine::Terrain*, ::UnityEngine::TreePrototype*)>(&::MA::Flora::TerrainTreePrototype::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181513010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreePrototype>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::TreePrototype*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreePrototype.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainTreePrototype::*)(::MA::Flora::TerrainTreePrototype)>(&::MA::Flora::TerrainTreePrototype::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181512db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreePrototype>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainTreePrototype>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreePrototype.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TerrainTreePrototype::*)(::System::Object*)>(&::MA::Flora::TerrainTreePrototype::Equals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181512e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainTreePrototype>(),
                    {::i2c::class_of<::MA::Flora::TerrainTreePrototype>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainTreePrototype.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TerrainTreePrototype::*)()>(&::MA::Flora::TerrainTreePrototype::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181512f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TerrainTreePrototype>(),
                    {::i2c::class_of<::MA::Flora::TerrainTreePrototype>(), 2}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainTreePrototype::_ctor(::UnityEngine::Terrain*  terrain, ::UnityEngine::TreePrototype*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreePrototype>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::UnityEngine::TreePrototype*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain, prototype);
}
inline bool MA::Flora::TerrainTreePrototype::Equals(::MA::Flora::TerrainTreePrototype  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainTreePrototype>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TerrainTreePrototype>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::TerrainTreePrototype::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainTreePrototype>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::TerrainTreePrototype::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TerrainTreePrototype>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>"
constexpr  MA::Flora::TerrainTreePrototype::operator ::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>"
constexpr ::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>* MA::Flora::TerrainTreePrototype::i___System__IEquatable_1___MA__Flora__TerrainTreePrototype_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TerrainTreePrototype>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Prefab", ty: "::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "MaxDistance", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainTreePrototype::TerrainTreePrototype(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::GameObject>>  Prefab, ::Unity::Mathematics::float3  Scale, uint16_t  MaxDistance) noexcept  {
this->Prefab = Prefab;
this->Scale = Scale;
this->MaxDistance = MaxDistance;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainTreePrototype::TerrainTreePrototype()   {
}
