#pragma once
// IWYU pragma private; include "Mirror/NetworkTransformChild.hpp"
#include "Mirror/zzzz__NetworkTransform_impl.hpp"
#include "Mirror/zzzz__NetworkTransformChild_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkTransformChild._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformChild::*)()>(&::Mirror::NetworkTransformChild::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181528700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformChild*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkTransformChild.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkTransformChild::*)()>(&::Mirror::NetworkTransformChild::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformChild*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::NetworkTransformChild::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformChild*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkTransformChild::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkTransformChild*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::NetworkTransformChild* Mirror::NetworkTransformChild::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkTransformChild*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkTransformChild::NetworkTransformChild()   {
}
