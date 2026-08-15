#pragma once
// IWYU pragma private; include "GlobalNamespace/ChairliftAudio.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ChairliftAudio_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChairliftAudio.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairliftAudio::*)()>(&::GlobalNamespace::ChairliftAudio::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18032c3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChairliftAudio.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairliftAudio::*)()>(&::GlobalNamespace::ChairliftAudio::OnEnable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x18032c6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChairliftAudio.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairliftAudio::*)()>(&::GlobalNamespace::ChairliftAudio::OnDisable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18032c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChairliftAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChairliftAudio::*)()>(&::GlobalNamespace::ChairliftAudio::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18032c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ChairliftAudio::__cordl_internal_get_Parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ChairliftAudio::__cordl_internal_get_Parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parent;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set_Parent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parent = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::ChairliftAudio::__cordl_internal_get_PeckSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeckSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::ChairliftAudio::__cordl_internal_get_PeckSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeckSystem;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set_PeckSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PeckSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ChairliftAudio::__cordl_internal_get_StartSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ChairliftAudio::__cordl_internal_get_StartSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartSound;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set_StartSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ChairliftAudio::__cordl_internal_get_PoleLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoleLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ChairliftAudio::__cordl_internal_get_PoleLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PoleLoop;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set_PoleLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PoleLoop = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ChairliftAudio::__cordl_internal_get_ChairCreak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChairCreak;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ChairliftAudio::__cordl_internal_get_ChairCreak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChairCreak;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set_ChairCreak(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChairCreak = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::ChairliftAudio::__cordl_internal_get_MoveLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveLoop;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::ChairliftAudio::__cordl_internal_get_MoveLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MoveLoop;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set_MoveLoop(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MoveLoop = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::ChairliftAudio::__cordl_internal_get__poleLoopPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poleLoopPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::ChairliftAudio::__cordl_internal_get__poleLoopPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poleLoopPlayers;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set__poleLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poleLoopPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::ChairliftAudio::__cordl_internal_get__chairCreakPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chairCreakPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::ChairliftAudio::__cordl_internal_get__chairCreakPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chairCreakPlayers;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set__chairCreakPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chairCreakPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*& GlobalNamespace::ChairliftAudio::__cordl_internal_get__chairMoveLoopPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chairMoveLoopPlayers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>* const& GlobalNamespace::ChairliftAudio::__cordl_internal_get__chairMoveLoopPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chairMoveLoopPlayers;
}
constexpr void GlobalNamespace::ChairliftAudio::__cordl_internal_set__chairMoveLoopPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chairMoveLoopPlayers = value;
}
inline void GlobalNamespace::ChairliftAudio::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ChairliftAudio::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ChairliftAudio::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ChairliftAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChairliftAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChairliftAudio* GlobalNamespace::ChairliftAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChairliftAudio*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChairliftAudio::ChairliftAudio()   {
}
