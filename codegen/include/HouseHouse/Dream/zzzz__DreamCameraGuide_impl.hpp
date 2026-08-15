#pragma once
// IWYU pragma private; include "HouseHouse/Dream/DreamCameraGuide.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HouseHouse/Dream/zzzz__DreamCameraGuide_def.hpp"
//  Writing Method size for method: ::HouseHouse::Dream::DreamCameraGuide._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamCameraGuide::*)()>(&::HouseHouse::Dream::DreamCameraGuide::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamCameraGuide*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void HouseHouse::Dream::DreamCameraGuide::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamCameraGuide*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Dream::DreamCameraGuide* HouseHouse::Dream::DreamCameraGuide::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Dream::DreamCameraGuide*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Dream::DreamCameraGuide::DreamCameraGuide()   {
}
