#pragma once
// IWYU pragma private; include "GlobalNamespace/CapsuleBomb.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CapsuleBomb_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CapsuleBomb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CapsuleBomb::*)()>(&::GlobalNamespace::CapsuleBomb::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CapsuleBomb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CapsuleBomb::__cordl_internal_get_inputSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CapsuleBomb::__cordl_internal_get_inputSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSystem;
}
constexpr void GlobalNamespace::CapsuleBomb::__cordl_internal_set_inputSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::CapsuleBomb::__cordl_internal_get_mineSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mineSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::CapsuleBomb::__cordl_internal_get_mineSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mineSystem;
}
constexpr void GlobalNamespace::CapsuleBomb::__cordl_internal_set_mineSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mineSystem = value;
}
inline void GlobalNamespace::CapsuleBomb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CapsuleBomb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CapsuleBomb* GlobalNamespace::CapsuleBomb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CapsuleBomb*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CapsuleBomb::CapsuleBomb()   {
}
