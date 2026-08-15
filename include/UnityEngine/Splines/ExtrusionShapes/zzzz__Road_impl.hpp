#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/Road.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__Road_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Road.get_SideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::ExtrusionShapes::Road::*)()>(&::UnityEngine::Splines::ExtrusionShapes::Road::get_SideCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ee400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Road*>(),
                        {"get_SideCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Road.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::UnityEngine::Splines::ExtrusionShapes::Road::*)(float_t, int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::Road::GetPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18217b260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Road*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Road._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::Road::*)()>(&::UnityEngine::Splines::ExtrusionShapes::Road::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Road*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::ExtrusionShapes::Road::setStaticF_k_Sides(::ArrayW<::Unity::Mathematics::float2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float2>, "k_Sides", ::UnityEngine::Splines::ExtrusionShapes::Road*>(std::forward<::ArrayW<::Unity::Mathematics::float2>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float2> UnityEngine::Splines::ExtrusionShapes::Road::getStaticF_k_Sides()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float2>, "k_Sides", ::UnityEngine::Splines::ExtrusionShapes::Road*>();
}
inline int32_t UnityEngine::Splines::ExtrusionShapes::Road::get_SideCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Road*>(),
                        {"get_SideCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Unity::Mathematics::float2 UnityEngine::Splines::ExtrusionShapes::Road::GetPosition(float_t  t, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Road*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(this, ___internal_method, t, index);
}
inline void UnityEngine::Splines::ExtrusionShapes::Road::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Road*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::ExtrusionShapes::Road* UnityEngine::Splines::ExtrusionShapes::Road::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::ExtrusionShapes::Road*>());
}
/// @brief Convert operator to "::UnityEngine::Splines::IExtrudeShape"
constexpr  UnityEngine::Splines::ExtrusionShapes::Road::operator ::UnityEngine::Splines::IExtrudeShape*() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::IExtrudeShape"
constexpr ::UnityEngine::Splines::IExtrudeShape* UnityEngine::Splines::ExtrusionShapes::Road::i___UnityEngine__Splines__IExtrudeShape() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::ExtrusionShapes::Road::Road()   {
}
