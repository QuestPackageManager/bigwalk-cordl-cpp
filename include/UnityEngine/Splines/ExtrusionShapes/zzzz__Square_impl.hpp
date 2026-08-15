#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/Square.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__Square_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Square.get_SideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::ExtrusionShapes::Square::*)()>(&::UnityEngine::Splines::ExtrusionShapes::Square::get_SideCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180309580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Square*>(),
                        {"get_SideCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Square.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::UnityEngine::Splines::ExtrusionShapes::Square::*)(float_t, int32_t)>(&::UnityEngine::Splines::ExtrusionShapes::Square::GetPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1821843c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Square*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::ExtrusionShapes::Square._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ExtrusionShapes::Square::*)()>(&::UnityEngine::Splines::ExtrusionShapes::Square::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Square*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::ExtrusionShapes::Square::setStaticF_k_Sides(::ArrayW<::Unity::Mathematics::float2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float2>, "k_Sides", ::UnityEngine::Splines::ExtrusionShapes::Square*>(std::forward<::ArrayW<::Unity::Mathematics::float2>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float2> UnityEngine::Splines::ExtrusionShapes::Square::getStaticF_k_Sides()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float2>, "k_Sides", ::UnityEngine::Splines::ExtrusionShapes::Square*>();
}
inline int32_t UnityEngine::Splines::ExtrusionShapes::Square::get_SideCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Square*>(),
                        {"get_SideCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Unity::Mathematics::float2 UnityEngine::Splines::ExtrusionShapes::Square::GetPosition(float_t  t, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Square*>(),
                        {"GetPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(this, ___internal_method, t, index);
}
inline void UnityEngine::Splines::ExtrusionShapes::Square::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::ExtrusionShapes::Square*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::ExtrusionShapes::Square* UnityEngine::Splines::ExtrusionShapes::Square::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::ExtrusionShapes::Square*>());
}
/// @brief Convert operator to "::UnityEngine::Splines::IExtrudeShape"
constexpr  UnityEngine::Splines::ExtrusionShapes::Square::operator ::UnityEngine::Splines::IExtrudeShape*() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Splines::IExtrudeShape"
constexpr ::UnityEngine::Splines::IExtrudeShape* UnityEngine::Splines::ExtrusionShapes::Square::i___UnityEngine__Splines__IExtrudeShape() noexcept {
return static_cast<::UnityEngine::Splines::IExtrudeShape*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::ExtrusionShapes::Square::Square()   {
}
