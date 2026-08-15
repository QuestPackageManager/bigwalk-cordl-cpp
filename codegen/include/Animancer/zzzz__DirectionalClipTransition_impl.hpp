#pragma once
// IWYU pragma private; include "Animancer/DirectionalClipTransition.hpp"
#include "Animancer/zzzz__ClipTransition_impl.hpp"
#include "Animancer/zzzz__DirectionalClipTransition_def.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet8_def.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.get_AnimationSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::Animancer::DirectionalAnimationSet>> (::Animancer::DirectionalClipTransition::*)()>(&::Animancer::DirectionalClipTransition::get_AnimationSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"get_AnimationSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.get_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Animancer::DirectionalClipTransition::*)()>(&::Animancer::DirectionalClipTransition::get_MainObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                    {::i2c::class_of<::Animancer::DirectionalClipTransition*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.SetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalClipTransition::*)(::UnityEngine::Vector2)>(&::Animancer::DirectionalClipTransition::SetDirection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180309760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.SetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalClipTransition::*)(int32_t)>(&::Animancer::DirectionalClipTransition::SetDirection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180309670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.SetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalClipTransition::*)(::Animancer::DirectionalAnimationSet_Direction)>(&::Animancer::DirectionalClipTransition::SetDirection)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803096b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.SetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalClipTransition::*)(::Animancer::DirectionalAnimationSet8_Direction)>(&::Animancer::DirectionalClipTransition::SetDirection)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180309670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalClipTransition::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::DirectionalClipTransition::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180309630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                    {::i2c::class_of<::Animancer::DirectionalClipTransition*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalClipTransition::*)(::Animancer::DirectionalClipTransition*)>(&::Animancer::DirectionalClipTransition::CopyFrom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180309590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                    {::i2c::class_of<::Animancer::DirectionalClipTransition*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DirectionalClipTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DirectionalClipTransition::*)()>(&::Animancer::DirectionalClipTransition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180306fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::DirectionalClipTransition::__cordl_internal_get__AnimationSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimationSet;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::DirectionalClipTransition::__cordl_internal_get__AnimationSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AnimationSet;
}
constexpr void Animancer::DirectionalClipTransition::__cordl_internal_set__AnimationSet(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AnimationSet = value;
}
inline ::by_ref<::UnityW<::Animancer::DirectionalAnimationSet>> Animancer::DirectionalClipTransition::get_AnimationSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"get_AnimationSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::Animancer::DirectionalAnimationSet>>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Animancer::DirectionalClipTransition::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalClipTransition*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void Animancer::DirectionalClipTransition::SetDirection(::UnityEngine::Vector2  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Animancer::DirectionalClipTransition::SetDirection(int32_t  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Animancer::DirectionalClipTransition::SetDirection(::Animancer::DirectionalAnimationSet_Direction  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet_Direction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Animancer::DirectionalClipTransition::SetDirection(::Animancer::DirectionalAnimationSet8_Direction  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {"SetDirection", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet8_Direction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Animancer::DirectionalClipTransition::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalClipTransition*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::DirectionalClipTransition::CopyFrom(::Animancer::DirectionalClipTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::DirectionalClipTransition*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::DirectionalClipTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DirectionalClipTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DirectionalClipTransition* Animancer::DirectionalClipTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DirectionalClipTransition*>());
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>"
constexpr  Animancer::DirectionalClipTransition::operator ::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>* Animancer::DirectionalClipTransition::i___Animancer__ICopyable_1___Animancer__DirectionalClipTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::DirectionalClipTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::DirectionalClipTransition::DirectionalClipTransition()   {
}
