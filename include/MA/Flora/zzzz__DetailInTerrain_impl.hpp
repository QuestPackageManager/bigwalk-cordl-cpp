#pragma once
// IWYU pragma private; include "MA/Flora/DetailInTerrain.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__DetailInTerrain_def.hpp"
#include "MA/Flora/zzzz__EntityObjectRef_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::MA::Flora::DetailInTerrain.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DetailInTerrain (*)()>(&::MA::Flora::DetailInTerrain::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DetailInTerrain.get_Terrain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>> (::MA::Flora::DetailInTerrain::*)()>(&::MA::Flora::DetailInTerrain::get_Terrain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"get_Terrain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DetailInTerrain.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DetailInTerrain::*)(::MA::Flora::DetailInTerrain)>(&::MA::Flora::DetailInTerrain::CompareTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18147c780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::DetailInTerrain>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DetailInTerrain.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DetailInTerrain::*)()>(&::MA::Flora::DetailInTerrain::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                    {::i2c::class_of<::MA::Flora::DetailInTerrain>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DetailInTerrain.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DetailInTerrain::*)(::MA::Flora::DetailInTerrain)>(&::MA::Flora::DetailInTerrain::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18147c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DetailInTerrain>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DetailInTerrain.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::DetailInTerrain::*)()>(&::MA::Flora::DetailInTerrain::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18147c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                    {::i2c::class_of<::MA::Flora::DetailInTerrain>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::DetailInTerrain MA::Flora::DetailInTerrain::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DetailInTerrain>(nullptr, ___internal_method);
}
inline ::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>> MA::Flora::DetailInTerrain::get_Terrain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"get_Terrain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>>(*this, ___internal_method);
}
inline int32_t MA::Flora::DetailInTerrain::CompareTo(::MA::Flora::DetailInTerrain  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::DetailInTerrain>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::DetailInTerrain::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DetailInTerrain>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::DetailInTerrain::Equals(::MA::Flora::DetailInTerrain  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DetailInTerrain>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DetailInTerrain>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW MA::Flora::DetailInTerrain::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DetailInTerrain>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::DetailInTerrain>"
constexpr  MA::Flora::DetailInTerrain::operator ::System::IComparable_1<::MA::Flora::DetailInTerrain>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::DetailInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::DetailInTerrain>"
constexpr ::System::IComparable_1<::MA::Flora::DetailInTerrain>* MA::Flora::DetailInTerrain::i___System__IComparable_1___MA__Flora__DetailInTerrain_()  {
return static_cast<::System::IComparable_1<::MA::Flora::DetailInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DetailInTerrain>"
constexpr  MA::Flora::DetailInTerrain::operator ::System::IEquatable_1<::MA::Flora::DetailInTerrain>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DetailInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DetailInTerrain>"
constexpr ::System::IEquatable_1<::MA::Flora::DetailInTerrain>* MA::Flora::DetailInTerrain::i___System__IEquatable_1___MA__Flora__DetailInTerrain_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DetailInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TerrainEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "LayerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DetailInTerrain::DetailInTerrain(::UnityEngine::EntityId  TerrainEntity, int32_t  LayerIndex) noexcept  {
this->TerrainEntity = TerrainEntity;
this->LayerIndex = LayerIndex;
}
// Ctor Parameters []
constexpr ::MA::Flora::DetailInTerrain::DetailInTerrain()   {
}
