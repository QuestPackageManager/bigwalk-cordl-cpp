#pragma once
// IWYU pragma private; include "Animancer/PlayableAssetTransition.hpp"
#include "Animancer/zzzz__AnimancerTransition_1_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "Animancer/zzzz__PlayableAssetTransition_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__IAnimationClipCollection_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__PlayableAssetState_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_Asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityW<::UnityEngine::Playables::PlayableAsset>> (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_Asset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180311e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {"get_Asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_MainObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_Key)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_Speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.set_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransition::*)(float_t)>(&::Animancer::PlayableAssetTransition::set_Speed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_NormalizedStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_NormalizedStartTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.set_NormalizedStartTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransition::*)(float_t)>(&::Animancer::PlayableAssetTransition::set_NormalizedStartTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180307250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_Bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::ArrayW<::UnityW<::UnityEngine::Object>>> (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_Bindings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {"get_Bindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_MaximumDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_MaximumDuration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180313120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180313110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.CreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::PlayableAssetState* (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::CreateState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180313040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransition::*)(::Animancer::AnimancerState*)>(&::Animancer::PlayableAssetTransition::Apply)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180306e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.Animancer_IAnimationClipCollection_GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransition::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::PlayableAssetTransition::Animancer_IAnimationClipCollection_GatherAnimationClips)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180312f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {"Animancer.IAnimationClipCollection.GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransition::*)(::Animancer::PlayableAssetTransition*)>(&::Animancer::PlayableAssetTransition::CopyFrom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180312f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetTransition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetTransition::*)()>(&::Animancer::PlayableAssetTransition::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180306fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& Animancer::PlayableAssetTransition::__cordl_internal_get__Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Asset;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& Animancer::PlayableAssetTransition::__cordl_internal_get__Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Asset;
}
constexpr void Animancer::PlayableAssetTransition::__cordl_internal_set__Asset(::UnityW<::UnityEngine::Playables::PlayableAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Asset = value;
}
constexpr float_t& Animancer::PlayableAssetTransition::__cordl_internal_get__Speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr float_t const& Animancer::PlayableAssetTransition::__cordl_internal_get__Speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Speed;
}
constexpr void Animancer::PlayableAssetTransition::__cordl_internal_set__Speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Speed = value;
}
constexpr float_t& Animancer::PlayableAssetTransition::__cordl_internal_get__NormalizedStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedStartTime;
}
constexpr float_t const& Animancer::PlayableAssetTransition::__cordl_internal_get__NormalizedStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NormalizedStartTime;
}
constexpr void Animancer::PlayableAssetTransition::__cordl_internal_set__NormalizedStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NormalizedStartTime = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& Animancer::PlayableAssetTransition::__cordl_internal_get__Bindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bindings;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& Animancer::PlayableAssetTransition::__cordl_internal_get__Bindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bindings;
}
constexpr void Animancer::PlayableAssetTransition::__cordl_internal_set__Bindings(::ArrayW<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bindings = value;
}
inline ::by_ref<::UnityW<::UnityEngine::Playables::PlayableAsset>> Animancer::PlayableAssetTransition::get_Asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {"get_Asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityW<::UnityEngine::Playables::PlayableAsset>>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> Animancer::PlayableAssetTransition::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline ::System::Object* Animancer::PlayableAssetTransition::get_Key()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline float_t Animancer::PlayableAssetTransition::get_Speed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::PlayableAssetTransition::set_Speed(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::PlayableAssetTransition::get_NormalizedStartTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::PlayableAssetTransition::set_NormalizedStartTime(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::by_ref<::ArrayW<::UnityW<::UnityEngine::Object>>> Animancer::PlayableAssetTransition::get_Bindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {"get_Bindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::ArrayW<::UnityW<::UnityEngine::Object>>>>(this, ___internal_method);
}
inline float_t Animancer::PlayableAssetTransition::get_MaximumDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::PlayableAssetTransition::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Animancer::PlayableAssetState* Animancer::PlayableAssetTransition::CreateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::PlayableAssetState*>(this, ___internal_method);
}
inline void Animancer::PlayableAssetTransition::Apply(::Animancer::AnimancerState*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Animancer::PlayableAssetTransition::Animancer_IAnimationClipCollection_GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {"Animancer.IAnimationClipCollection.GatherAnimationClips", {}, {::i2c::type_of<::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline void Animancer::PlayableAssetTransition::CopyFrom(::Animancer::PlayableAssetTransition*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetTransition*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::PlayableAssetTransition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetTransition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::PlayableAssetTransition* Animancer::PlayableAssetTransition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::PlayableAssetTransition*>());
}
/// @brief Convert operator to "::Animancer::PlayableAssetState_ITransition"
constexpr  Animancer::PlayableAssetTransition::operator ::Animancer::PlayableAssetState_ITransition*() noexcept {
return static_cast<::Animancer::PlayableAssetState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::PlayableAssetState_ITransition"
constexpr ::Animancer::PlayableAssetState_ITransition* Animancer::PlayableAssetTransition::i___Animancer__PlayableAssetState_ITransition() noexcept {
return static_cast<::Animancer::PlayableAssetState_ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr  Animancer::PlayableAssetTransition::operator ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>* Animancer::PlayableAssetTransition::i___Animancer__ITransition_1___Animancer__PlayableAssetState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::PlayableAssetTransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::PlayableAssetTransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::PlayableAssetTransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::PlayableAssetTransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::PlayableAssetTransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::PlayableAssetTransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr  Animancer::PlayableAssetTransition::operator ::Animancer::IAnimationClipCollection*() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* Animancer::PlayableAssetTransition::i___Animancer__IAnimationClipCollection() noexcept {
return static_cast<::Animancer::IAnimationClipCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>"
constexpr  Animancer::PlayableAssetTransition::operator ::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>"
constexpr ::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>* Animancer::PlayableAssetTransition::i___Animancer__ICopyable_1___Animancer__PlayableAssetTransition__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::PlayableAssetTransition*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::PlayableAssetTransition::PlayableAssetTransition()   {
}
