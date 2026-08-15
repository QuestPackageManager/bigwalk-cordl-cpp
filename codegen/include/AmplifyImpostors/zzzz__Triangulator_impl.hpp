#pragma once
// IWYU pragma private; include "AmplifyImpostors/Triangulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__Triangulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::Triangulator.get_Points
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector2>* (::AmplifyImpostors::Triangulator::*)()>(&::AmplifyImpostors::Triangulator::get_Points)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"get_Points", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::Triangulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::Triangulator::*)(::ArrayW<::UnityEngine::Vector2>)>(&::AmplifyImpostors::Triangulator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802db2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::Triangulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::AmplifyImpostors::Triangulator::*)(::ArrayW<::UnityEngine::Vector2>, bool)>(&::AmplifyImpostors::Triangulator::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1802db350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::Triangulator.Triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::AmplifyImpostors::Triangulator::*)()>(&::AmplifyImpostors::Triangulator::Triangulate)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1802dafd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"Triangulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::Triangulator.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::AmplifyImpostors::Triangulator::*)()>(&::AmplifyImpostors::Triangulator::Area)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802dac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"Area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::Triangulator.Snip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::AmplifyImpostors::Triangulator::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(&::AmplifyImpostors::Triangulator::Snip)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1802dade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"Snip", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::Triangulator.InsideTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::AmplifyImpostors::Triangulator::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::AmplifyImpostors::Triangulator::InsideTriangle)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1802dacd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"InsideTriangle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& AmplifyImpostors::Triangulator::__cordl_internal_get_m_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& AmplifyImpostors::Triangulator::__cordl_internal_get_m_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_points;
}
constexpr void AmplifyImpostors::Triangulator::__cordl_internal_set_m_points(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_points = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* AmplifyImpostors::Triangulator::get_Points()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"get_Points", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void AmplifyImpostors::Triangulator::_ctor(::ArrayW<::UnityEngine::Vector2>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void AmplifyImpostors::Triangulator::_ctor(::ArrayW<::UnityEngine::Vector2>  points, bool  invertY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, invertY);
}
inline ::ArrayW<int32_t> AmplifyImpostors::Triangulator::Triangulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"Triangulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline float_t AmplifyImpostors::Triangulator::Area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"Area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool AmplifyImpostors::Triangulator::Snip(int32_t  u, int32_t  v, int32_t  w, int32_t  n, ::ArrayW<int32_t>  V)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"Snip", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, u, v, w, n, V);
}
inline bool AmplifyImpostors::Triangulator::InsideTriangle(::UnityEngine::Vector2  pt, ::UnityEngine::Vector2  v1, ::UnityEngine::Vector2  v2, ::UnityEngine::Vector2  v3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::Triangulator*>(),
                        {"InsideTriangle", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pt, v1, v2, v3);
}
inline ::AmplifyImpostors::Triangulator* AmplifyImpostors::Triangulator::New_ctor(::ArrayW<::UnityEngine::Vector2>  points)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::Triangulator*>(points));
}
inline ::AmplifyImpostors::Triangulator* AmplifyImpostors::Triangulator::New_ctor(::ArrayW<::UnityEngine::Vector2>  points, bool  invertY)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::AmplifyImpostors::Triangulator*>(points, invertY));
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::Triangulator::Triangulator()   {
}
