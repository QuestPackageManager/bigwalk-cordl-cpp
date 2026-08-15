#pragma once
// IWYU pragma private; include "GlobalNamespace/Shuffler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Shuffler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Shuffler.Shuffle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>)>(&::GlobalNamespace::Shuffler::Shuffle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803eff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Shuffler*>(),
                        {"Shuffle", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Shuffler::Shuffle(::ArrayW<int32_t>  targetArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Shuffler*>(),
                        {"Shuffle", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetArray);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Shuffler::Shuffler()   {
}
