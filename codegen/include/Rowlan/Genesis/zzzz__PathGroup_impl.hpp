#pragma once
// IWYU pragma private; include "Rowlan/Genesis/PathGroup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rowlan/Genesis/zzzz__PathGroup_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::PathGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::PathGroup::*)()>(&::Rowlan::Genesis::PathGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rowlan::Genesis::PathGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::PathGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::Genesis::PathGroup* Rowlan::Genesis::PathGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::PathGroup*>());
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::PathGroup::PathGroup()   {
}
