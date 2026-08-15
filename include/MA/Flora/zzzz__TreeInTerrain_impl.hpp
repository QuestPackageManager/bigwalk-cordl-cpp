#pragma once
// IWYU pragma private; include "MA/Flora/TreeInTerrain.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__TreeInTerrain_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::MA::Flora::TreeInTerrain.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TreeInTerrain (*)()>(&::MA::Flora::TreeInTerrain::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TreeInTerrain.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TreeInTerrain::*)(::MA::Flora::TreeInTerrain)>(&::MA::Flora::TreeInTerrain::CompareTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814822e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::TreeInTerrain>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TreeInTerrain.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::TreeInTerrain::*)()>(&::MA::Flora::TreeInTerrain::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18147c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                    {::i2c::class_of<::MA::Flora::TreeInTerrain>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TreeInTerrain.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::TreeInTerrain::*)(::MA::Flora::TreeInTerrain)>(&::MA::Flora::TreeInTerrain::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181482330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TreeInTerrain>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TreeInTerrain.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MA::Flora::TreeInTerrain::*)()>(&::MA::Flora::TreeInTerrain::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181498b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                    {::i2c::class_of<::MA::Flora::TreeInTerrain>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::MA::Flora::TreeInTerrain MA::Flora::TreeInTerrain::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TreeInTerrain>(nullptr, ___internal_method);
}
inline int32_t MA::Flora::TreeInTerrain::CompareTo(::MA::Flora::TreeInTerrain  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                        {"CompareTo", {}, {::i2c::type_of<::MA::Flora::TreeInTerrain>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline int32_t MA::Flora::TreeInTerrain::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TreeInTerrain>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool MA::Flora::TreeInTerrain::Equals(::MA::Flora::TreeInTerrain  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TreeInTerrain>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::TreeInTerrain>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW MA::Flora::TreeInTerrain::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::TreeInTerrain>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::TreeInTerrain>"
constexpr  MA::Flora::TreeInTerrain::operator ::System::IComparable_1<::MA::Flora::TreeInTerrain>*()  {
return static_cast<::System::IComparable_1<::MA::Flora::TreeInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::MA::Flora::TreeInTerrain>"
constexpr ::System::IComparable_1<::MA::Flora::TreeInTerrain>* MA::Flora::TreeInTerrain::i___System__IComparable_1___MA__Flora__TreeInTerrain_()  {
return static_cast<::System::IComparable_1<::MA::Flora::TreeInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::TreeInTerrain>"
constexpr  MA::Flora::TreeInTerrain::operator ::System::IEquatable_1<::MA::Flora::TreeInTerrain>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TreeInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::TreeInTerrain>"
constexpr ::System::IEquatable_1<::MA::Flora::TreeInTerrain>* MA::Flora::TreeInTerrain::i___System__IEquatable_1___MA__Flora__TreeInTerrain_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::TreeInTerrain>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "TerrainEntity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexInTreeInstances", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TreeInTerrain::TreeInTerrain(::UnityEngine::EntityId  TerrainEntity, int32_t  IndexInTreeInstances) noexcept  {
this->TerrainEntity = TerrainEntity;
this->IndexInTreeInstances = IndexInTreeInstances;
}
// Ctor Parameters []
constexpr ::MA::Flora::TreeInTerrain::TreeInTerrain()   {
}
