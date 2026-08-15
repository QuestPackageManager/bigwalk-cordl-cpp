#pragma once
// IWYU pragma private; include "Mirror/Examples/Tanks/FaceCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/Tanks/zzzz__FaceCamera_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Tanks::FaceCamera.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::FaceCamera::*)()>(&::Mirror::Examples::Tanks::FaceCamera::LateUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18155a330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::FaceCamera*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Tanks::FaceCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Tanks::FaceCamera::*)()>(&::Mirror::Examples::Tanks::FaceCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::FaceCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::Examples::Tanks::FaceCamera::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::FaceCamera*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Tanks::FaceCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Tanks::FaceCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Tanks::FaceCamera* Mirror::Examples::Tanks::FaceCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Tanks::FaceCamera*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Tanks::FaceCamera::FaceCamera()   {
}
