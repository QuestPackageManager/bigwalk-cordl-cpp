#pragma once
// IWYU pragma private; include "HouseHouse/Dream/DreamCameraSet.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "HouseHouse/Dream/zzzz__DreamCameraSet_def.hpp"
//  Writing Method size for method: ::HouseHouse::Dream::DreamCameraSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseHouse::Dream::DreamCameraSet::*)()>(&::HouseHouse::Dream::DreamCameraSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamCameraSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& HouseHouse::Dream::DreamCameraSet::__cordl_internal_get_cameraGuides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraGuides;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& HouseHouse::Dream::DreamCameraSet::__cordl_internal_get_cameraGuides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraGuides;
}
constexpr void HouseHouse::Dream::DreamCameraSet::__cordl_internal_set_cameraGuides(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraGuides = value;
}
inline void HouseHouse::Dream::DreamCameraSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseHouse::Dream::DreamCameraSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseHouse::Dream::DreamCameraSet* HouseHouse::Dream::DreamCameraSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseHouse::Dream::DreamCameraSet*>());
}
// Ctor Parameters []
constexpr ::HouseHouse::Dream::DreamCameraSet::DreamCameraSet()   {
}
