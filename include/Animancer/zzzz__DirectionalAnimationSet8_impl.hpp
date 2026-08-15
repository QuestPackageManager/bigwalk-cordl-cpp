#pragma once
// IWYU pragma private; include "Animancer/DirectionalAnimationSet8.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet8_def.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet8_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8_Diagonals.get_UpRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::Animancer::DirectionalAnimationSet8_Diagonals::get_UpRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180308670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_UpRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8_Diagonals.get_DownRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::Animancer::DirectionalAnimationSet8_Diagonals::get_DownRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180308630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_DownRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8_Diagonals.get_DownLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::Animancer::DirectionalAnimationSet8_Diagonals::get_DownLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180308610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_DownLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8_Diagonals.get_UpLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::Animancer::DirectionalAnimationSet8_Diagonals::get_UpLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180308650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_UpLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8_Diagonals::get_UpRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_UpRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8_Diagonals::get_DownRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_DownRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8_Diagonals::get_DownLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_DownLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8_Diagonals::get_UpLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8_Diagonals*>(),
                        {"get_UpLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Animancer::DirectionalAnimationSet8_Diagonals::DirectionalAnimationSet8_Diagonals()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::DirectionalAnimationSet8_Direction::DirectionalAnimationSet8_Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::DirectionalAnimationSet8_Direction::DirectionalAnimationSet8_Direction()   {
}
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::Up{static_cast<int32_t>(0x0)};
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::Right{static_cast<int32_t>(0x1)};
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::Down{static_cast<int32_t>(0x2)};
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::Left{static_cast<int32_t>(0x3)};
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::UpRight{static_cast<int32_t>(0x4)};
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::DownRight{static_cast<int32_t>(0x5)};
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::DownLeft{static_cast<int32_t>(0x6)};
constexpr ::Animancer::DirectionalAnimationSet8_Direction  Animancer::DirectionalAnimationSet8_Direction::UpLeft{static_cast<int32_t>(0x7)};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.get_UpRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet8::*)()>(&::Animancer::DirectionalAnimationSet8::get_UpRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_UpRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.set_UpRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet8::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet8::set_UpRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_UpRight", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.get_DownRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet8::*)()>(&::Animancer::DirectionalAnimationSet8::get_DownRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_DownRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.set_DownRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet8::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet8::set_DownRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_DownRight", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.get_DownLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet8::*)()>(&::Animancer::DirectionalAnimationSet8::get_DownLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_DownLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.set_DownLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet8::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet8::set_DownLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_DownLeft", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.get_UpLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet8::*)()>(&::Animancer::DirectionalAnimationSet8::get_UpLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_UpLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.set_UpLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet8::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet8::set_UpLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_UpLeft", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet8::*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet8::GetClip)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803087d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.get_ClipCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::DirectionalAnimationSet8::*)()>(&::Animancer::DirectionalAnimationSet8::get_ClipCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.GetDirectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::DirectionalAnimationSet8::*)(int32_t)>(&::Animancer::DirectionalAnimationSet8::GetDirectionName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet8::*)(::Animancer::DirectionalAnimationSet8_Direction)>(&::Animancer::DirectionalAnimationSet8::GetClip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803088c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"GetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet8::*)(int32_t)>(&::Animancer::DirectionalAnimationSet8::GetClip)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803088c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.SetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet8::*)(::Animancer::DirectionalAnimationSet8_Direction, ::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet8::SetClip)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803089c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"SetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.SetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet8::*)(int32_t, ::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet8::SetClip)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803089c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.DirectionToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Animancer::DirectionalAnimationSet8_Direction)>(&::Animancer::DirectionalAnimationSet8::DirectionToVector)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180308690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"DirectionToVector", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Animancer::DirectionalAnimationSet8::*)(int32_t)>(&::Animancer::DirectionalAnimationSet8::GetDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803089b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.VectorToDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::DirectionalAnimationSet8_Direction (*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet8::VectorToDirection)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180308cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"VectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.SnapVectorToDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet8::SnapVectorToDirection)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180308ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"SnapVectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8.Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Animancer::DirectionalAnimationSet8::*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet8::Snap)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180308be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet8._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet8::*)()>(&::Animancer::DirectionalAnimationSet8::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet8::__cordl_internal_get__UpRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpRight;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet8::__cordl_internal_get__UpRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpRight;
}
constexpr void Animancer::DirectionalAnimationSet8::__cordl_internal_set__UpRight(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpRight = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet8::__cordl_internal_get__DownRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownRight;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet8::__cordl_internal_get__DownRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownRight;
}
constexpr void Animancer::DirectionalAnimationSet8::__cordl_internal_set__DownRight(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DownRight = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet8::__cordl_internal_get__DownLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownLeft;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet8::__cordl_internal_get__DownLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownLeft;
}
constexpr void Animancer::DirectionalAnimationSet8::__cordl_internal_set__DownLeft(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DownLeft = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet8::__cordl_internal_get__UpLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpLeft;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet8::__cordl_internal_get__UpLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpLeft;
}
constexpr void Animancer::DirectionalAnimationSet8::__cordl_internal_set__UpLeft(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpLeft = value;
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet8::get_UpRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_UpRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet8::set_UpRight(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_UpRight", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet8::get_DownRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_DownRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet8::set_DownRight(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_DownRight", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet8::get_DownLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_DownLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet8::set_DownLeft(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_DownLeft", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet8::get_UpLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"get_UpLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet8::set_UpLeft(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"set_UpLeft", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet8::GetClip(::UnityEngine::Vector2  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method, direction);
}
inline int32_t Animancer::DirectionalAnimationSet8::get_ClipCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Animancer::DirectionalAnimationSet8::GetDirectionName(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, direction);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet8::GetClip(::Animancer::DirectionalAnimationSet8_Direction  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"GetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method, direction);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet8::GetClip(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method, direction);
}
inline void Animancer::DirectionalAnimationSet8::SetClip(::Animancer::DirectionalAnimationSet8_Direction  direction, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"SetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction, clip);
}
inline void Animancer::DirectionalAnimationSet8::SetClip(int32_t  direction, ::UnityEngine::AnimationClip*  clip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction, clip);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8::DirectionToVector(::Animancer::DirectionalAnimationSet8_Direction  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"DirectionToVector", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, direction);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8::GetDirection(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, direction);
}
inline ::Animancer::DirectionalAnimationSet8_Direction Animancer::DirectionalAnimationSet8::VectorToDirection(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"VectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::DirectionalAnimationSet8_Direction>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8::SnapVectorToDirection(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {"SnapVectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet8::Snap(::UnityEngine::Vector2  vector)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, vector);
}
inline void Animancer::DirectionalAnimationSet8::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet8*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DirectionalAnimationSet8* Animancer::DirectionalAnimationSet8::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DirectionalAnimationSet8*>());
}
// Ctor Parameters []
constexpr ::Animancer::DirectionalAnimationSet8::DirectionalAnimationSet8()   {
}
