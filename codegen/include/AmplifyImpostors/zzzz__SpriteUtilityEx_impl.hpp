#pragma once
// IWYU pragma private; include "AmplifyImpostors/SpriteUtilityEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__SpriteUtilityEx_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::SpriteUtilityEx.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::AmplifyImpostors::SpriteUtilityEx::get_Type)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802da0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::SpriteUtilityEx*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AmplifyImpostors::SpriteUtilityEx.GenerateOutline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture2D*, ::UnityEngine::Rect, float_t, uint8_t, bool, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>)>(&::AmplifyImpostors::SpriteUtilityEx::GenerateOutline)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1802d9e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::SpriteUtilityEx*>(),
                        {"GenerateOutline", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void AmplifyImpostors::SpriteUtilityEx::setStaticF_type(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "type", ::AmplifyImpostors::SpriteUtilityEx*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* AmplifyImpostors::SpriteUtilityEx::getStaticF_type()  {
return ::cordl_internals::getStaticField<::System::Type*, "type", ::AmplifyImpostors::SpriteUtilityEx*>();
}
inline ::System::Type* AmplifyImpostors::SpriteUtilityEx::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::SpriteUtilityEx*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline void AmplifyImpostors::SpriteUtilityEx::GenerateOutline(::UnityEngine::Texture2D*  texture, ::UnityEngine::Rect  rect, float_t  detail, uint8_t  alphaTolerance, bool  holeDetection, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::SpriteUtilityEx*>(),
                        {"GenerateOutline", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, texture, rect, detail, alphaTolerance, holeDetection, paths);
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::SpriteUtilityEx::SpriteUtilityEx()   {
}
