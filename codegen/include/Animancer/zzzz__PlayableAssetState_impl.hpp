#pragma once
// IWYU pragma private; include "Animancer/PlayableAssetState.hpp"
#include "Animancer/zzzz__AnimancerState_impl.hpp"
#include "Animancer/zzzz__PlayableAssetState_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ICopyable_1_def.hpp"
#include "Animancer/zzzz__IHasKey_def.hpp"
#include "Animancer/zzzz__IPolymorphic_def.hpp"
#include "Animancer/zzzz__ITransition_1_def.hpp"
#include "Animancer/zzzz__ITransition_def.hpp"
#include "Animancer/zzzz__PlayableAssetState_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr  Animancer::PlayableAssetState_ITransition::operator ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition_1<::Animancer::PlayableAssetState*>"
constexpr ::Animancer::ITransition_1<::Animancer::PlayableAssetState*>* Animancer::PlayableAssetState_ITransition::i___Animancer__ITransition_1___Animancer__PlayableAssetState__() noexcept {
return static_cast<::Animancer::ITransition_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::ITransition"
constexpr  Animancer::PlayableAssetState_ITransition::operator ::Animancer::ITransition*() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* Animancer::PlayableAssetState_ITransition::i___Animancer__ITransition() noexcept {
return static_cast<::Animancer::ITransition*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr  Animancer::PlayableAssetState_ITransition::operator ::Animancer::IHasKey*() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* Animancer::PlayableAssetState_ITransition::i___Animancer__IHasKey() noexcept {
return static_cast<::Animancer::IHasKey*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr  Animancer::PlayableAssetState_ITransition::operator ::Animancer::IPolymorphic*() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* Animancer::PlayableAssetState_ITransition::i___Animancer__IPolymorphic() noexcept {
return static_cast<::Animancer::IPolymorphic*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::Animancer::PlayableAssetState.get_Asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableAsset> (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::get_Asset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"get_Asset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.set_Asset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::UnityEngine::Playables::PlayableAsset*)>(&::Animancer::PlayableAssetState::set_Asset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ec7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"set_Asset", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.get_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::get_MainObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.set_MainObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::UnityEngine::Object*)>(&::Animancer::PlayableAssetState::set_MainObject)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180312ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::get_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.OnSetIsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::OnSetIsPlaying)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180312d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.CopyIKFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::Animancer::AnimancerNode*)>(&::Animancer::PlayableAssetState::CopyIKFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.get_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::get_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.set_ApplyAnimatorIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(bool)>(&::Animancer::PlayableAssetState::set_ApplyAnimatorIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.get_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::get_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.set_ApplyFootIK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(bool)>(&::Animancer::PlayableAssetState::set_ApplyFootIK)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::UnityEngine::Playables::PlayableAsset*)>(&::Animancer::PlayableAssetState::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180312e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::by_ref<::UnityEngine::Playables::Playable>)>(&::Animancer::PlayableAssetState::CreatePlayable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180312340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.get_Bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>* (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::get_Bindings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"get_Bindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.set_Bindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*)>(&::Animancer::PlayableAssetState::set_Bindings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180312e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"set_Bindings", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.SetBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::ArrayW<::UnityEngine::Object*>)>(&::Animancer::PlayableAssetState::SetBindings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180312e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"SetBindings", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.InitializeBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::InitializeBindings)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x180312570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"InitializeBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.GetBindingDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Playables::PlayableBinding, ::by_ref<::StringW>, ::by_ref<::System::Type*>, ::by_ref<bool>)>(&::Animancer::PlayableAssetState::GetBindingDetails)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803124d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"GetBindingDetails", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableBinding>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)()>(&::Animancer::PlayableAssetState::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180305cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::PlayableAssetState::*)(::Animancer::AnimancerPlayable*)>(&::Animancer::PlayableAssetState::Clone)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180312230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.Animancer_ICopyable_Animancer_PlayableAssetState__CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::Animancer::PlayableAssetState*)>(&::Animancer::PlayableAssetState::Animancer_ICopyable_Animancer_PlayableAssetState__CopyFrom)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180311fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"Animancer.ICopyable<Animancer.PlayableAssetState>.CopyFrom", {}, {::i2c::type_of<::Animancer::PlayableAssetState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::PlayableAssetState.AppendDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PlayableAssetState::*)(::System::Text::StringBuilder*, ::StringW)>(&::Animancer::PlayableAssetState::AppendDetails)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180311ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                    {::i2c::class_of<::Animancer::PlayableAssetState*>(), 44}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& Animancer::PlayableAssetState::__cordl_internal_get__Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Asset;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& Animancer::PlayableAssetState::__cordl_internal_get__Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Asset;
}
constexpr void Animancer::PlayableAssetState::__cordl_internal_set__Asset(::UnityW<::UnityEngine::Playables::PlayableAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Asset = value;
}
constexpr float_t& Animancer::PlayableAssetState::__cordl_internal_get__Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length;
}
constexpr float_t const& Animancer::PlayableAssetState::__cordl_internal_get__Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Length;
}
constexpr void Animancer::PlayableAssetState::__cordl_internal_set__Length(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Length = value;
}
constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*& Animancer::PlayableAssetState::__cordl_internal_get__Bindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bindings;
}
constexpr ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>* const& Animancer::PlayableAssetState::__cordl_internal_get__Bindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bindings;
}
constexpr void Animancer::PlayableAssetState::__cordl_internal_set__Bindings(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bindings = value;
}
constexpr bool& Animancer::PlayableAssetState::__cordl_internal_get__HasInitializedBindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasInitializedBindings;
}
constexpr bool const& Animancer::PlayableAssetState::__cordl_internal_get__HasInitializedBindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasInitializedBindings;
}
constexpr void Animancer::PlayableAssetState::__cordl_internal_set__HasInitializedBindings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasInitializedBindings = value;
}
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> Animancer::PlayableAssetState::get_Asset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"get_Asset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableAsset>>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::set_Asset(::UnityEngine::Playables::PlayableAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"set_Asset", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> Animancer::PlayableAssetState::get_MainObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::set_MainObject(::UnityEngine::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::PlayableAssetState::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::OnSetIsPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::CopyIKFlags(::Animancer::AnimancerNode*  copyFrom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline bool Animancer::PlayableAssetState::get_ApplyAnimatorIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::set_ApplyAnimatorIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::PlayableAssetState::get_ApplyFootIK()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::set_ApplyFootIK(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::PlayableAssetState::_ctor(::UnityEngine::Playables::PlayableAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline void Animancer::PlayableAssetState::CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>* Animancer::PlayableAssetState::get_Bindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"get_Bindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::set_Bindings(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"set_Bindings", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::PlayableAssetState::SetBindings(::ArrayW<::UnityEngine::Object*>  bindings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"SetBindings", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindings);
}
inline void Animancer::PlayableAssetState::InitializeBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"InitializeBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::PlayableAssetState::GetBindingDetails(::UnityEngine::Playables::PlayableBinding  binding, ::by_ref<::StringW>  name, ::by_ref<::System::Type*>  type, ::by_ref<bool>  isMarkers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"GetBindingDetails", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableBinding>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binding, name, type, isMarkers);
}
inline void Animancer::PlayableAssetState::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::AnimancerState* Animancer::PlayableAssetState::Clone(::Animancer::AnimancerPlayable*  root)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, root);
}
inline void Animancer::PlayableAssetState::Animancer_ICopyable_Animancer_PlayableAssetState__CopyFrom(::Animancer::PlayableAssetState*  copyFrom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PlayableAssetState*>(),
                        {"Animancer.ICopyable<Animancer.PlayableAssetState>.CopyFrom", {}, {::i2c::type_of<::Animancer::PlayableAssetState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, copyFrom);
}
inline void Animancer::PlayableAssetState::AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::PlayableAssetState*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, separator);
}
inline ::Animancer::PlayableAssetState* Animancer::PlayableAssetState::New_ctor(::UnityEngine::Playables::PlayableAsset*  asset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::PlayableAssetState*>(asset));
}
/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>"
constexpr  Animancer::PlayableAssetState::operator ::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>*() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>* Animancer::PlayableAssetState::i___Animancer__ICopyable_1___Animancer__PlayableAssetState__() noexcept {
return static_cast<::Animancer::ICopyable_1<::Animancer::PlayableAssetState*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::PlayableAssetState::PlayableAssetState()   {
}
