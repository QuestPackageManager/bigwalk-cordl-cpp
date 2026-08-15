#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckSystemBlock.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckSystemBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckSystemBlock::*)()>(&::GlobalNamespace::PeckSystemBlock::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>& GlobalNamespace::PeckSystemBlock::__cordl_internal_get_systems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systems;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>> const& GlobalNamespace::PeckSystemBlock::__cordl_internal_get_systems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systems;
}
constexpr void GlobalNamespace::PeckSystemBlock::__cordl_internal_set_systems(::ArrayW<::UnityW<::GlobalNamespace::TrackedPeckState>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systems = value;
}
inline void GlobalNamespace::PeckSystemBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckSystemBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckSystemBlock* GlobalNamespace::PeckSystemBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckSystemBlock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckSystemBlock::PeckSystemBlock()   {
}
