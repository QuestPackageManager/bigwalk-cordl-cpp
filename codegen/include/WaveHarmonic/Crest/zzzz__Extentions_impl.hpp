#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Extentions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Extentions_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Extentions.Manage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Component*, ::UnityEngine::GameObject*)>(&::WaveHarmonic::Crest::Extentions::Manage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182567800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extentions*>(),
                        {"Manage", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Extentions::Manage(::UnityEngine::Component*  owner, ::UnityEngine::GameObject*  object)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Extentions*>(),
                        {"Manage", {}, {::i2c::type_of<::UnityEngine::Component*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, owner, object);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Extentions::Extentions()   {
}
