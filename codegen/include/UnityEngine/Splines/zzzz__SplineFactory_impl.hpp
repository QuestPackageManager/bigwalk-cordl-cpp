#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*, bool)>(&::UnityEngine::Splines::SplineFactory::CreateLinear)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18216e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateLinear", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*, ::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*, bool)>(&::UnityEngine::Splines::SplineFactory::CreateLinear)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18216e9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateLinear", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateCatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*, bool)>(&::UnityEngine::Splines::SplineFactory::CreateCatmullRom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18216d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateCatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateCatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*, ::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*, bool)>(&::UnityEngine::Splines::SplineFactory::CreateCatmullRom)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x18216d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateCatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateRoundedSquare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(float_t, float_t)>(&::UnityEngine::Splines::SplineFactory::CreateRoundedSquare)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x18216f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateRoundedSquare", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateHelix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(float_t, float_t, int32_t)>(&::UnityEngine::Splines::SplineFactory::CreateHelix)> {
  constexpr static std::size_t size = 0xb50;
  constexpr static std::size_t addrs = 0x18216dc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateHelix", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateRoundedCornerSquare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(float_t, float_t)>(&::UnityEngine::Splines::SplineFactory::CreateRoundedCornerSquare)> {
  constexpr static std::size_t size = 0xa30;
  constexpr static std::size_t addrs = 0x18216eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateRoundedCornerSquare", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateSquare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(float_t)>(&::UnityEngine::Splines::SplineFactory::CreateSquare)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18216ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateSquare", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(float_t)>(&::UnityEngine::Splines::SplineFactory::CreateCircle)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18216d920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateCircle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreatePolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(float_t, int32_t)>(&::UnityEngine::Splines::SplineFactory::CreatePolygon)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18216ec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreatePolygon", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineFactory.CreateStarPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (*)(float_t, int32_t, float_t)>(&::UnityEngine::Splines::SplineFactory::CreateStarPolygon)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x1821700f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateStarPolygon", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateLinear(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateLinear", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, positions, closed);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateLinear(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, ::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*  rotations, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateLinear", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, positions, rotations, closed);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateCatmullRom(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateCatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, positions, closed);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateCatmullRom(::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*  positions, ::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*  rotations, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateCatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::float3>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Unity::Mathematics::quaternion>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, positions, rotations, closed);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateRoundedSquare(float_t  radius, float_t  rounding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateRoundedSquare", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, radius, rounding);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateHelix(float_t  radius, float_t  height, int32_t  revolutions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateHelix", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, radius, height, revolutions);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateRoundedCornerSquare(float_t  size, float_t  cornerRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateRoundedCornerSquare", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, size, cornerRadius);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateSquare(float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateSquare", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, size);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateCircle(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateCircle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, radius);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreatePolygon(float_t  edgeSize, int32_t  sides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreatePolygon", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, edgeSize, sides);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineFactory::CreateStarPolygon(float_t  edgeSize, int32_t  corners, float_t  concavity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineFactory*>(),
                        {"CreateStarPolygon", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(nullptr, ___internal_method, edgeSize, corners, concavity);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineFactory::SplineFactory()   {
}
