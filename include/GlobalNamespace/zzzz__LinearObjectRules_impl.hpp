#pragma once
// IWYU pragma private; include "GlobalNamespace/LinearObjectRules.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LinearObjectRules_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LinearObjectRules._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LinearObjectRules::*)()>(&::GlobalNamespace::LinearObjectRules::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181407680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearObjectRules*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LinearObjectRules::__cordl_internal_get_linearDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDistance;
}
constexpr float_t const& GlobalNamespace::LinearObjectRules::__cordl_internal_get_linearDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linearDistance;
}
constexpr void GlobalNamespace::LinearObjectRules::__cordl_internal_set_linearDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linearDistance = value;
}
constexpr float_t& GlobalNamespace::LinearObjectRules::__cordl_internal_get_beginOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginOffset;
}
constexpr float_t const& GlobalNamespace::LinearObjectRules::__cordl_internal_get_beginOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginOffset;
}
constexpr void GlobalNamespace::LinearObjectRules::__cordl_internal_set_beginOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beginOffset = value;
}
inline void GlobalNamespace::LinearObjectRules::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinearObjectRules*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LinearObjectRules* GlobalNamespace::LinearObjectRules::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LinearObjectRules*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LinearObjectRules::LinearObjectRules()   {
}
