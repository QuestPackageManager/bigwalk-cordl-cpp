#pragma once
// IWYU pragma private; include "GlobalNamespace/CowbellAudio.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CowbellAudio_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__CowbellAudio_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CowbellAudio_CarryType::CowbellAudio_CarryType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CowbellAudio_CarryType::CowbellAudio_CarryType()   {
}
constexpr ::GlobalNamespace::CowbellAudio_CarryType  GlobalNamespace::CowbellAudio_CarryType::Held{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CowbellAudio_CarryType  GlobalNamespace::CowbellAudio_CarryType::Pocket{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)()>(&::GlobalNamespace::CowbellAudio::Awake)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180330eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)()>(&::GlobalNamespace::CowbellAudio::Start)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180331ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)()>(&::GlobalNamespace::CowbellAudio::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803318e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.OnChangePinOrHold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)()>(&::GlobalNamespace::CowbellAudio::OnChangePinOrHold)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x180331170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"OnChangePinOrHold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.SubscribeToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)(::GlobalNamespace::PlayerCharacter*, ::GlobalNamespace::CowbellAudio_CarryType)>(&::GlobalNamespace::CowbellAudio::SubscribeToPlayer)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x180331cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"SubscribeToPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::CowbellAudio_CarryType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.UnsubscribeToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::CowbellAudio::UnsubscribeToPlayer)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x1803320a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"UnsubscribeToPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.PlayShakeSoundOnPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::CowbellAudio::PlayShakeSoundOnPeck)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180331ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"PlayShakeSoundOnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.PlayShakeSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)()>(&::GlobalNamespace::CowbellAudio::PlayShakeSound)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180331be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"PlayShakeSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.PlayClangSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)()>(&::GlobalNamespace::CowbellAudio::PlayClangSound)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1803319c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"PlayClangSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CowbellAudio::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::CowbellAudio::GetX)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180331080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CowbellAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CowbellAudio::*)()>(&::GlobalNamespace::CowbellAudio::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::CowbellAudio::__cordl_internal_get_CarryLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CarryLoop;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::CowbellAudio::__cordl_internal_get_CarryLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CarryLoop;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set_CarryLoop(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CarryLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::CowbellAudio::__cordl_internal_get_ShakeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::CowbellAudio::__cordl_internal_get_ShakeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShakeSound;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set_ShakeSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShakeSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::CowbellAudio::__cordl_internal_get_ClangSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClangSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::CowbellAudio::__cordl_internal_get_ClangSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClangSound;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set_ClangSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClangSound = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::CowbellAudio::__cordl_internal_get_CowbellProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CowbellProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::CowbellAudio::__cordl_internal_get_CowbellProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CowbellProp;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set_CowbellProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CowbellProp = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::CowbellAudio::__cordl_internal_get_SystemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SystemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::CowbellAudio::__cordl_internal_get_SystemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SystemReference;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set_SystemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SystemReference = value;
}
constexpr int32_t& GlobalNamespace::CowbellAudio::__cordl_internal_get_PeckState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeckState;
}
constexpr int32_t const& GlobalNamespace::CowbellAudio::__cordl_internal_get_PeckState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeckState;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set_PeckState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PeckState = value;
}
constexpr bool& GlobalNamespace::CowbellAudio::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::CowbellAudio::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::CowbellAudio::__cordl_internal_get__holderPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holderPlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::CowbellAudio::__cordl_internal_get__holderPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____holderPlayer;
}
constexpr void GlobalNamespace::CowbellAudio::__cordl_internal_set__holderPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____holderPlayer = value;
}
inline void GlobalNamespace::CowbellAudio::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CowbellAudio::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CowbellAudio::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CowbellAudio::OnChangePinOrHold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"OnChangePinOrHold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CowbellAudio::SubscribeToPlayer(::GlobalNamespace::PlayerCharacter*  playerCharacter, ::GlobalNamespace::CowbellAudio_CarryType  carryType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"SubscribeToPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::GlobalNamespace::CowbellAudio_CarryType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter, carryType);
}
inline void GlobalNamespace::CowbellAudio::UnsubscribeToPlayer(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"UnsubscribeToPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::CowbellAudio::PlayShakeSoundOnPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"PlayShakeSoundOnPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::CowbellAudio::PlayShakeSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"PlayShakeSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CowbellAudio::PlayClangSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"PlayClangSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CowbellAudio::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline void GlobalNamespace::CowbellAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CowbellAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CowbellAudio* GlobalNamespace::CowbellAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CowbellAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CowbellAudio::CowbellAudio()   {
}
