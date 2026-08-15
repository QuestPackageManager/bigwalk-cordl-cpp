#pragma once
// IWYU pragma private; include "GlobalNamespace/Texture2DSet.hpp"
#include "GlobalNamespace/zzzz__AbstractObjectSet_1_impl.hpp"
#include "GlobalNamespace/zzzz__Texture2DSet_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Texture2DSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Texture2DSet::*)()>(&::GlobalNamespace::Texture2DSet::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180445be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Texture2DSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Texture2DSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Texture2DSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Texture2DSet* GlobalNamespace::Texture2DSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Texture2DSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Texture2DSet::Texture2DSet()   {
}
