#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/HeightmapData.hpp"
#include "JBooth/MicroVerseCore/zzzz__StampData_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__HeightmapData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::HeightmapData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::HeightmapData::*)(::UnityEngine::Terrain*)>(&::JBooth::MicroVerseCore::HeightmapData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814420c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightmapData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::HeightmapData::_ctor(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::HeightmapData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrain);
}
inline ::JBooth::MicroVerseCore::HeightmapData* JBooth::MicroVerseCore::HeightmapData::New_ctor(::UnityEngine::Terrain*  terrain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::HeightmapData*>(terrain));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::HeightmapData::HeightmapData()   {
}
