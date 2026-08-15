#pragma once
// IWYU pragma private; include "Animancer/DirectionalAnimationSet.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet_def.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__IAnimationClipSource_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::DirectionalAnimationSet_Direction::DirectionalAnimationSet_Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::DirectionalAnimationSet_Direction::DirectionalAnimationSet_Direction()   {
}
constexpr ::Animancer::DirectionalAnimationSet_Direction  Animancer::DirectionalAnimationSet_Direction::Up{static_cast<int32_t>(0x0)};
constexpr ::Animancer::DirectionalAnimationSet_Direction  Animancer::DirectionalAnimationSet_Direction::Right{static_cast<int32_t>(0x1)};
constexpr ::Animancer::DirectionalAnimationSet_Direction  Animancer::DirectionalAnimationSet_Direction::Down{static_cast<int32_t>(0x2)};
constexpr ::Animancer::DirectionalAnimationSet_Direction  Animancer::DirectionalAnimationSet_Direction::Left{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.get_Up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet::*)()>(&::Animancer::DirectionalAnimationSet::get_Up)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Up", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.set_Up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet::set_Up)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Up", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.get_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet::*)()>(&::Animancer::DirectionalAnimationSet::get_Right)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.set_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet::set_Right)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Right", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.get_Down
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet::*)()>(&::Animancer::DirectionalAnimationSet::get_Down)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Down", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.set_Down
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet::set_Down)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Down", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.get_Left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet::*)()>(&::Animancer::DirectionalAnimationSet::get_Left)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Left", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.set_Left
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet::set_Left)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Left", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.AllowSetClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(bool)>(&::Animancer::DirectionalAnimationSet::AllowSetClips)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AllowSetClips", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.AssertCanSetClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)()>(&::Animancer::DirectionalAnimationSet::AssertCanSetClips)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AssertCanSetClips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet::*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet::GetClip)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180309280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.get_ClipCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::DirectionalAnimationSet::*)()>(&::Animancer::DirectionalAnimationSet::get_ClipCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180309580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.GetDirectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::DirectionalAnimationSet::*)(int32_t)>(&::Animancer::DirectionalAnimationSet::GetDirectionName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803092e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet::*)(::Animancer::DirectionalAnimationSet_Direction)>(&::Animancer::DirectionalAnimationSet::GetClip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180309210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"GetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.GetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AnimationClip> (::Animancer::DirectionalAnimationSet::*)(int32_t)>(&::Animancer::DirectionalAnimationSet::GetClip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180309210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.SetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::Animancer::DirectionalAnimationSet_Direction, ::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet::SetClip)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180309320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"SetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.SetClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(int32_t, ::UnityEngine::AnimationClip*)>(&::Animancer::DirectionalAnimationSet::SetClip)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180309320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.DirectionToVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Animancer::DirectionalAnimationSet_Direction)>(&::Animancer::DirectionalAnimationSet::DirectionToVector)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180309080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"DirectionToVector", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Animancer::DirectionalAnimationSet::*)(int32_t)>(&::Animancer::DirectionalAnimationSet::GetDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180309310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.VectorToDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::DirectionalAnimationSet_Direction (*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet::VectorToDirection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180309520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"VectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.SnapVectorToDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet::SnapVectorToDirection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803093c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"SnapVectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Animancer::DirectionalAnimationSet::*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalAnimationSet::Snap)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180309470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                    {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.AddClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::ArrayW<::UnityEngine::AnimationClip*>, int32_t)>(&::Animancer::DirectionalAnimationSet::AddClips)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180308f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AddClips", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.GetAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::DirectionalAnimationSet::GetAnimationClips)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180309130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"GetAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.AddDirections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::ArrayW<::UnityEngine::Vector2>, int32_t)>(&::Animancer::DirectionalAnimationSet::AddDirections)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180308fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AddDirections", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet.AddClipsAndDirections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)(::ArrayW<::UnityEngine::AnimationClip*>, ::ArrayW<::UnityEngine::Vector2>, int32_t)>(&::Animancer::DirectionalAnimationSet::AddClipsAndDirections)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180308df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AddClipsAndDirections", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalAnimationSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalAnimationSet::*)()>(&::Animancer::DirectionalAnimationSet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet::__cordl_internal_get__Up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Up;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet::__cordl_internal_get__Up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Up;
}
constexpr void Animancer::DirectionalAnimationSet::__cordl_internal_set__Up(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Up = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet::__cordl_internal_get__Right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Right;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet::__cordl_internal_get__Right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Right;
}
constexpr void Animancer::DirectionalAnimationSet::__cordl_internal_set__Right(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Right = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet::__cordl_internal_get__Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Down;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet::__cordl_internal_get__Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Down;
}
constexpr void Animancer::DirectionalAnimationSet::__cordl_internal_set__Down(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Down = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::DirectionalAnimationSet::__cordl_internal_get__Left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Left;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::DirectionalAnimationSet::__cordl_internal_get__Left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Left;
}
constexpr void Animancer::DirectionalAnimationSet::__cordl_internal_set__Left(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Left = value;
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet::get_Up()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Up", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet::set_Up(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Up", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet::get_Right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet::set_Right(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Right", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet::get_Down()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Down", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet::set_Down(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Down", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet::get_Left()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"get_Left", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method);
}
inline void Animancer::DirectionalAnimationSet::set_Left(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"set_Left", {}, {::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::DirectionalAnimationSet::AllowSetClips(bool  allow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AllowSetClips", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allow);
}
inline void Animancer::DirectionalAnimationSet::AssertCanSetClips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AssertCanSetClips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet::GetClip(::UnityEngine::Vector2  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method, direction);
}
inline int32_t Animancer::DirectionalAnimationSet::get_ClipCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Animancer::DirectionalAnimationSet::GetDirectionName(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, direction);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet::GetClip(::Animancer::DirectionalAnimationSet_Direction  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"GetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method, direction);
}
inline ::UnityW<::UnityEngine::AnimationClip> Animancer::DirectionalAnimationSet::GetClip(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AnimationClip>>(this, ___internal_method, direction);
}
inline void Animancer::DirectionalAnimationSet::SetClip(::Animancer::DirectionalAnimationSet_Direction  direction, ::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"SetClip", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>(), ::i2c::type_of<::UnityEngine::AnimationClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction, clip);
}
inline void Animancer::DirectionalAnimationSet::SetClip(int32_t  direction, ::UnityEngine::AnimationClip*  clip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction, clip);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet::DirectionToVector(::Animancer::DirectionalAnimationSet_Direction  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"DirectionToVector", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, direction);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet::GetDirection(int32_t  direction)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, direction);
}
inline ::Animancer::DirectionalAnimationSet_Direction Animancer::DirectionalAnimationSet::VectorToDirection(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"VectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::DirectionalAnimationSet_Direction>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet::SnapVectorToDirection(::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"SnapVectorToDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vector);
}
inline ::UnityEngine::Vector2 Animancer::DirectionalAnimationSet::Snap(::UnityEngine::Vector2  vector)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalAnimationSet*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, vector);
}
inline void Animancer::DirectionalAnimationSet::AddClips(::ArrayW<::UnityEngine::AnimationClip*>  clips, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AddClips", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips, index);
}
inline void Animancer::DirectionalAnimationSet::GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"GetAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::DirectionalAnimationSet::AddDirections(::ArrayW<::UnityEngine::Vector2>  directions, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AddDirections", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directions, index);
}
inline void Animancer::DirectionalAnimationSet::AddClipsAndDirections(::ArrayW<::UnityEngine::AnimationClip*>  clips, ::ArrayW<::UnityEngine::Vector2>  directions, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {"AddClipsAndDirections", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AnimationClip*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips, directions, index);
}
inline void Animancer::DirectionalAnimationSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalAnimationSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DirectionalAnimationSet* Animancer::DirectionalAnimationSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DirectionalAnimationSet*>());
}
/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr  Animancer::DirectionalAnimationSet::operator ::UnityEngine::IAnimationClipSource*() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* Animancer::DirectionalAnimationSet::i___UnityEngine__IAnimationClipSource() noexcept {
return static_cast<::UnityEngine::IAnimationClipSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::DirectionalAnimationSet::DirectionalAnimationSet()   {
}
