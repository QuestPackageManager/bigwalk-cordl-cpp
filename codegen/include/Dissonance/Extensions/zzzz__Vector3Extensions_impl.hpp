#pragma once
// IWYU pragma private; include "Dissonance/Extensions/Vector3Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Extensions/zzzz__Vector3Extensions_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Dissonance::Extensions::Vector3Extensions.Quantise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3Int (*)(::UnityEngine::Vector3, float_t)>(&::Dissonance::Extensions::Vector3Extensions::Quantise)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805ed7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::Vector3Extensions*>(),
                        {"Quantise", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3Int Dissonance::Extensions::Vector3Extensions::Quantise(::UnityEngine::Vector3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Extensions::Vector3Extensions*>(),
                        {"Quantise", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3Int>(nullptr, ___internal_method, position, size);
}
// Ctor Parameters []
constexpr ::Dissonance::Extensions::Vector3Extensions::Vector3Extensions()   {
}
