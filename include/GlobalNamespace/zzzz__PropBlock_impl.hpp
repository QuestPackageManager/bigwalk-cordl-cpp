#pragma once
// IWYU pragma private; include "GlobalNamespace/PropBlock.hpp"
#include "GlobalNamespace/zzzz__Prop_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PropBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PropBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PropBlock::*)()>(&::GlobalNamespace::PropBlock::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>>& GlobalNamespace::PropBlock::__cordl_internal_get_props()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Prop>> const& GlobalNamespace::PropBlock::__cordl_internal_get_props() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___props;
}
constexpr void GlobalNamespace::PropBlock::__cordl_internal_set_props(::ArrayW<::UnityW<::GlobalNamespace::Prop>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___props = value;
}
inline void GlobalNamespace::PropBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PropBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PropBlock* GlobalNamespace::PropBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PropBlock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropBlock::PropBlock()   {
}
