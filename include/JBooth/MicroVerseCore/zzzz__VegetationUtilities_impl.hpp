#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/VegetationUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__VegetationUtilities_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__DetailPrototypeSerializable_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__TreePrototypeSerializable_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::VegetationUtilities.FindDetailIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Terrain*, ::JBooth::MicroVerseCore::DetailPrototypeSerializable*)>(&::JBooth::MicroVerseCore::VegetationUtilities::FindDetailIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18142a510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VegetationUtilities*>(),
                        {"FindDetailIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::VegetationUtilities.FindTreeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Terrain*, ::JBooth::MicroVerseCore::TreePrototypeSerializable*)>(&::JBooth::MicroVerseCore::VegetationUtilities::FindTreeIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18142a5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VegetationUtilities*>(),
                        {"FindTreeIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::VegetationUtilities._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::VegetationUtilities::*)()>(&::JBooth::MicroVerseCore::VegetationUtilities::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VegetationUtilities*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t JBooth::MicroVerseCore::VegetationUtilities::FindDetailIndex(::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::DetailPrototypeSerializable*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VegetationUtilities*>(),
                        {"FindDetailIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::DetailPrototypeSerializable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, terrain, prototype);
}
inline int32_t JBooth::MicroVerseCore::VegetationUtilities::FindTreeIndex(::UnityEngine::Terrain*  terrain, ::JBooth::MicroVerseCore::TreePrototypeSerializable*  prototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VegetationUtilities*>(),
                        {"FindTreeIndex", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::JBooth::MicroVerseCore::TreePrototypeSerializable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, terrain, prototype);
}
inline void JBooth::MicroVerseCore::VegetationUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::VegetationUtilities*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::VegetationUtilities* JBooth::MicroVerseCore::VegetationUtilities::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::VegetationUtilities*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::VegetationUtilities::VegetationUtilities()   {
}
