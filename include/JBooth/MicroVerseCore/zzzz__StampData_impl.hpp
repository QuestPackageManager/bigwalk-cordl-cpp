#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/StampData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__StampData_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::StampData.get_RealHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::JBooth::MicroVerseCore::StampData::*)()>(&::JBooth::MicroVerseCore::StampData::get_RealHeight)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181449630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {"get_RealHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::StampData.get_WorldToTerrainMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::JBooth::MicroVerseCore::StampData::*)()>(&::JBooth::MicroVerseCore::StampData::get_WorldToTerrainMatrix)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181449780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {"get_WorldToTerrainMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::StampData.get_RealSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::JBooth::MicroVerseCore::StampData::*)()>(&::JBooth::MicroVerseCore::StampData::get_RealSize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181449670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {"get_RealSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::StampData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::StampData::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::StampData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Terrain>& JBooth::MicroVerseCore::StampData::__cordl_internal_get_terrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr ::UnityW<::UnityEngine::Terrain> const& JBooth::MicroVerseCore::StampData::__cordl_internal_get_terrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terrain;
}
constexpr void JBooth::MicroVerseCore::StampData::__cordl_internal_set_terrain(::UnityW<::UnityEngine::Terrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terrain = value;
}
inline float_t JBooth::MicroVerseCore::StampData::get_RealHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {"get_RealHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 JBooth::MicroVerseCore::StampData::get_WorldToTerrainMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {"get_WorldToTerrainMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 JBooth::MicroVerseCore::StampData::get_RealSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {"get_RealSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::StampData::_ctor(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::StampData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain);
}
inline ::JBooth::MicroVerseCore::StampData* JBooth::MicroVerseCore::StampData::New_ctor(::UnityEngine::Terrain*  terrain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::StampData*>(terrain));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::StampData::StampData()   {
}
