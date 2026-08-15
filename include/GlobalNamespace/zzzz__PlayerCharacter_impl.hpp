#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCharacter.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__FootstepSound_def.hpp"
#include "GlobalNamespace/zzzz__PlayerActions_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAnimatables_def.hpp"
#include "GlobalNamespace/zzzz__PlayerArms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__PlayerBeak_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCameraMinder_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCaster_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCheater_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCollision_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCroucher_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDecisions_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDreamer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyes_def.hpp"
#include "GlobalNamespace/zzzz__PlayerFaller_def.hpp"
#include "GlobalNamespace/zzzz__PlayerFeet_def.hpp"
#include "GlobalNamespace/zzzz__PlayerGestures_def.hpp"
#include "GlobalNamespace/zzzz__PlayerGrease_def.hpp"
#include "GlobalNamespace/zzzz__PlayerGround_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHands_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHead_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHighlighter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerJumper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLips_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLooks_def.hpp"
#include "GlobalNamespace/zzzz__PlayerMenu_def.hpp"
#include "GlobalNamespace/zzzz__PlayerMisc_def.hpp"
#include "GlobalNamespace/zzzz__PlayerMover_def.hpp"
#include "GlobalNamespace/zzzz__PlayerNetworking_def.hpp"
#include "GlobalNamespace/zzzz__PlayerParticles_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPlatformer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPoser_def.hpp"
#include "GlobalNamespace/zzzz__PlayerRegistry_def.hpp"
#include "GlobalNamespace/zzzz__PlayerShepherd_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSitter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSleeper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpeechless_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSprinter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTeacher_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTeeterer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTexter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTunings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVegetation_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransform_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::Awake)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x18035e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::Start)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18035fc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.StartProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)(::StringW)>(&::GlobalNamespace::PlayerCharacter::StartProfile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"StartProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.EndProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::EndProfile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"EndProfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::Update)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x18035feb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::LateUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18035ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::FixedUpdate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18035ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::PlayerCharacter::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18035efa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnCollisionExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::PlayerCharacter::OnCollisionExit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18035f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18035f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::OnStopClient)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18035f500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.SetLayerRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)(::UnityEngine::Transform*, int32_t, int32_t)>(&::GlobalNamespace::PlayerCharacter::SetLayerRecursive)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x18035f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"SetLayerRecursive", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18035f320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18035f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnNetworkRestored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)(double_t)>(&::GlobalNamespace::PlayerCharacter::OnNetworkRestored)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18035f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18035f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)(bool)>(&::GlobalNamespace::PlayerCharacter::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18035ef70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCharacter.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCharacter::*)()>(&::GlobalNamespace::PlayerCharacter::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerHands*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_hands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr ::GlobalNamespace::PlayerHands* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_hands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_hands(::GlobalNamespace::PlayerHands*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hands = value;
}
constexpr ::GlobalNamespace::PlayerArms*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_arms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arms;
}
constexpr ::GlobalNamespace::PlayerArms* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_arms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arms;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_arms(::GlobalNamespace::PlayerArms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arms = value;
}
constexpr ::GlobalNamespace::PlayerTunings*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_tunings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunings;
}
constexpr ::GlobalNamespace::PlayerTunings* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_tunings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tunings;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_tunings(::GlobalNamespace::PlayerTunings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tunings = value;
}
constexpr ::GlobalNamespace::PlayerGround*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_ground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ground;
}
constexpr ::GlobalNamespace::PlayerGround* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_ground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ground;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_ground(::GlobalNamespace::PlayerGround*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ground = value;
}
constexpr ::GlobalNamespace::PlayerHead*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr ::GlobalNamespace::PlayerHead* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_head(::GlobalNamespace::PlayerHead*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
constexpr ::GlobalNamespace::PlayerMover*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_mover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mover;
}
constexpr ::GlobalNamespace::PlayerMover* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_mover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mover;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_mover(::GlobalNamespace::PlayerMover*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mover = value;
}
constexpr ::GlobalNamespace::PlayerLooks*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_looks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looks;
}
constexpr ::GlobalNamespace::PlayerLooks* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_looks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___looks;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_looks(::GlobalNamespace::PlayerLooks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___looks = value;
}
constexpr ::GlobalNamespace::PlayerPoser*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_poser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poser;
}
constexpr ::GlobalNamespace::PlayerPoser* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_poser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poser;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_poser(::GlobalNamespace::PlayerPoser*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poser = value;
}
constexpr ::GlobalNamespace::PlayerLips*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_lips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lips;
}
constexpr ::GlobalNamespace::PlayerLips* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_lips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lips;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_lips(::GlobalNamespace::PlayerLips*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lips = value;
}
constexpr ::GlobalNamespace::PlayerHighlighter*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_highlighter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highlighter;
}
constexpr ::GlobalNamespace::PlayerHighlighter* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_highlighter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highlighter;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_highlighter(::GlobalNamespace::PlayerHighlighter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highlighter = value;
}
constexpr ::GlobalNamespace::PlayerDecisions*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_decisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decisions;
}
constexpr ::GlobalNamespace::PlayerDecisions* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_decisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decisions;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_decisions(::GlobalNamespace::PlayerDecisions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decisions = value;
}
constexpr ::GlobalNamespace::PlayerGestures*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_gestures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gestures;
}
constexpr ::GlobalNamespace::PlayerGestures* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_gestures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gestures;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_gestures(::GlobalNamespace::PlayerGestures*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gestures = value;
}
constexpr ::GlobalNamespace::PlayerCroucher*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_croucher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___croucher;
}
constexpr ::GlobalNamespace::PlayerCroucher* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_croucher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___croucher;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_croucher(::GlobalNamespace::PlayerCroucher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___croucher = value;
}
constexpr ::GlobalNamespace::PlayerCameraMinder*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_cameraMinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraMinder;
}
constexpr ::GlobalNamespace::PlayerCameraMinder* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_cameraMinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraMinder;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_cameraMinder(::GlobalNamespace::PlayerCameraMinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraMinder = value;
}
constexpr ::GlobalNamespace::PlayerCheater*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_cheater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheater;
}
constexpr ::GlobalNamespace::PlayerCheater* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_cheater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheater;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_cheater(::GlobalNamespace::PlayerCheater*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cheater = value;
}
constexpr ::GlobalNamespace::PlayerCaster*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_caster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caster;
}
constexpr ::GlobalNamespace::PlayerCaster* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_caster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caster;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_caster(::GlobalNamespace::PlayerCaster*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___caster = value;
}
constexpr ::GlobalNamespace::PlayerEyes*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_playerEyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEyes;
}
constexpr ::GlobalNamespace::PlayerEyes* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_playerEyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerEyes;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_playerEyes(::GlobalNamespace::PlayerEyes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerEyes = value;
}
constexpr ::GlobalNamespace::PlayerRegistry*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_registry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr ::GlobalNamespace::PlayerRegistry* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_registry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_registry(::GlobalNamespace::PlayerRegistry*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registry = value;
}
constexpr ::GlobalNamespace::PlayerMisc*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_misc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___misc;
}
constexpr ::GlobalNamespace::PlayerMisc* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_misc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___misc;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_misc(::GlobalNamespace::PlayerMisc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___misc = value;
}
constexpr ::GlobalNamespace::PlayerGrease*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_grease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grease;
}
constexpr ::GlobalNamespace::PlayerGrease* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_grease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grease;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_grease(::GlobalNamespace::PlayerGrease*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grease = value;
}
constexpr ::GlobalNamespace::PlayerSleeper*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_sleeper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleeper;
}
constexpr ::GlobalNamespace::PlayerSleeper* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_sleeper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleeper;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_sleeper(::GlobalNamespace::PlayerSleeper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleeper = value;
}
constexpr ::GlobalNamespace::PlayerFaller*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_faller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faller;
}
constexpr ::GlobalNamespace::PlayerFaller* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_faller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faller;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_faller(::GlobalNamespace::PlayerFaller*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faller = value;
}
constexpr ::GlobalNamespace::PlayerParticles*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr ::GlobalNamespace::PlayerParticles* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_particles(::GlobalNamespace::PlayerParticles*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particles = value;
}
constexpr ::GlobalNamespace::PlayerActions*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr ::GlobalNamespace::PlayerActions* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_actions(::GlobalNamespace::PlayerActions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actions = value;
}
constexpr ::GlobalNamespace::PlayerTexter*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_texter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texter;
}
constexpr ::GlobalNamespace::PlayerTexter* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_texter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texter;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_texter(::GlobalNamespace::PlayerTexter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texter = value;
}
constexpr ::GlobalNamespace::PlayerSitter*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_sitter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitter;
}
constexpr ::GlobalNamespace::PlayerSitter* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_sitter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sitter;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_sitter(::GlobalNamespace::PlayerSitter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sitter = value;
}
constexpr ::GlobalNamespace::PlayerJumper*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_jumper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumper;
}
constexpr ::GlobalNamespace::PlayerJumper* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_jumper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumper;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_jumper(::GlobalNamespace::PlayerJumper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumper = value;
}
constexpr ::GlobalNamespace::PlayerTeeterer*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_teeterer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teeterer;
}
constexpr ::GlobalNamespace::PlayerTeeterer* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_teeterer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teeterer;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_teeterer(::GlobalNamespace::PlayerTeeterer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teeterer = value;
}
constexpr ::GlobalNamespace::PlayerSprinter*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_sprinter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprinter;
}
constexpr ::GlobalNamespace::PlayerSprinter* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_sprinter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sprinter;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_sprinter(::GlobalNamespace::PlayerSprinter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sprinter = value;
}
constexpr ::GlobalNamespace::PlayerFeet*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_feet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feet;
}
constexpr ::GlobalNamespace::PlayerFeet* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_feet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feet;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_feet(::GlobalNamespace::PlayerFeet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___feet = value;
}
constexpr ::GlobalNamespace::PlayerBeak*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_beak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beak;
}
constexpr ::GlobalNamespace::PlayerBeak* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_beak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beak;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_beak(::GlobalNamespace::PlayerBeak*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beak = value;
}
constexpr ::GlobalNamespace::PlayerPlatformer*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_platformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformer;
}
constexpr ::GlobalNamespace::PlayerPlatformer* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_platformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformer;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_platformer(::GlobalNamespace::PlayerPlatformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformer = value;
}
constexpr ::GlobalNamespace::PlayerVegetation*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_vegetation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vegetation;
}
constexpr ::GlobalNamespace::PlayerVegetation* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_vegetation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vegetation;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_vegetation(::GlobalNamespace::PlayerVegetation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vegetation = value;
}
constexpr ::GlobalNamespace::PlayerCollision*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_collision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collision;
}
constexpr ::GlobalNamespace::PlayerCollision* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_collision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collision;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_collision(::GlobalNamespace::PlayerCollision*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collision = value;
}
constexpr ::GlobalNamespace::PlayerMenu*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_menu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menu;
}
constexpr ::GlobalNamespace::PlayerMenu* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_menu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menu;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_menu(::GlobalNamespace::PlayerMenu*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menu = value;
}
constexpr ::GlobalNamespace::PlayerShepherd*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_shepherd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shepherd;
}
constexpr ::GlobalNamespace::PlayerShepherd* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_shepherd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shepherd;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_shepherd(::GlobalNamespace::PlayerShepherd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shepherd = value;
}
constexpr ::GlobalNamespace::PlayerSpeechless*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_speechless()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speechless;
}
constexpr ::GlobalNamespace::PlayerSpeechless* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_speechless() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speechless;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_speechless(::GlobalNamespace::PlayerSpeechless*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speechless = value;
}
constexpr ::GlobalNamespace::PlayerTeacher*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_teacher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teacher;
}
constexpr ::GlobalNamespace::PlayerTeacher* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_teacher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teacher;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_teacher(::GlobalNamespace::PlayerTeacher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teacher = value;
}
constexpr ::GlobalNamespace::PlayerDreamer*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_dreamer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamer;
}
constexpr ::GlobalNamespace::PlayerDreamer* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_dreamer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamer;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_dreamer(::GlobalNamespace::PlayerDreamer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamer = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerNetworking>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_playerNetworking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNetworking;
}
constexpr ::UnityW<::GlobalNamespace::PlayerNetworking> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_playerNetworking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNetworking;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_playerNetworking(::UnityW<::GlobalNamespace::PlayerNetworking>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNetworking = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_kernal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kernal;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_kernal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kernal;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_kernal(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kernal = value;
}
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_houseNetworkTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___houseNetworkTransform;
}
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_houseNetworkTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___houseNetworkTransform;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_houseNetworkTransform(::UnityW<::LobbyNetworking::HouseNetworkTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___houseNetworkTransform = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_myAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myAnimator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_myAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myAnimator;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_myAnimator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myAnimator = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerAnimatables>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_animatables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatables;
}
constexpr ::UnityW<::GlobalNamespace::PlayerAnimatables> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_animatables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatables;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_animatables(::UnityW<::GlobalNamespace::PlayerAnimatables>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatables = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_cameraTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_cameraTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTransform;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_cameraTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_crouchTranslator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchTranslator;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_crouchTranslator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchTranslator;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_crouchTranslator(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchTranslator = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerAudioReferences>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_playerAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerAudio;
}
constexpr ::UnityW<::GlobalNamespace::PlayerAudioReferences> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_playerAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerAudio;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_playerAudio(::UnityW<::GlobalNamespace::PlayerAudioReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::FootstepSound>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_footstepSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footstepSound;
}
constexpr ::UnityW<::GlobalNamespace::FootstepSound> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_footstepSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___footstepSound;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_footstepSound(::UnityW<::GlobalNamespace::FootstepSound>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___footstepSound = value;
}
constexpr bool& GlobalNamespace::PlayerCharacter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerCharacter::__cordl_internal_get_deeperProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deeperProfile;
}
constexpr bool const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_deeperProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deeperProfile;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_deeperProfile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deeperProfile = value;
}
constexpr bool& GlobalNamespace::PlayerCharacter::__cordl_internal_get_pipeCollisionSoundsToProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipeCollisionSoundsToProps;
}
constexpr bool const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_pipeCollisionSoundsToProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pipeCollisionSoundsToProps;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_pipeCollisionSoundsToProps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pipeCollisionSoundsToProps = value;
}
constexpr bool& GlobalNamespace::PlayerCharacter::__cordl_internal_get_bypassUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassUpdate;
}
constexpr bool const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_bypassUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassUpdate;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_bypassUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassUpdate = value;
}
constexpr bool& GlobalNamespace::PlayerCharacter::__cordl_internal_get_bypassLateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassLateUpdate;
}
constexpr bool const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_bypassLateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassLateUpdate;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_bypassLateUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassLateUpdate = value;
}
constexpr bool& GlobalNamespace::PlayerCharacter::__cordl_internal_get_bypassFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassFixedUpdate;
}
constexpr bool const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_bypassFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassFixedUpdate;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_bypassFixedUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassFixedUpdate = value;
}
constexpr ::Rewired::Player*& GlobalNamespace::PlayerCharacter::__cordl_internal_get_inputPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPlayer;
}
constexpr ::Rewired::Player* const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_inputPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputPlayer;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_inputPlayer(::Rewired::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputPlayer = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::PlayerCharacter::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::PlayerCharacter::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::PlayerCharacter::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
inline void GlobalNamespace::PlayerCharacter::setStaticF_allPlayerCharacters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*, "allPlayerCharacters", ::GlobalNamespace::PlayerCharacter*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* GlobalNamespace::PlayerCharacter::getStaticF_allPlayerCharacters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*, "allPlayerCharacters", ::GlobalNamespace::PlayerCharacter*>();
}
inline void GlobalNamespace::PlayerCharacter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::StartProfile(::StringW  profileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"StartProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profileName);
}
inline void GlobalNamespace::PlayerCharacter::EndProfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"EndProfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::OnCollisionEnter(::UnityEngine::Collision*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::PlayerCharacter::OnCollisionExit(::UnityEngine::Collision*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnCollisionExit", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void GlobalNamespace::PlayerCharacter::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::SetLayerRecursive(::UnityEngine::Transform*  thisTransform, int32_t  fromLayer, int32_t  toLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"SetLayerRecursive", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisTransform, fromLayer, toLayer);
}
inline void GlobalNamespace::PlayerCharacter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::OnNetworkRestored(double_t  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnNetworkRestored", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::PlayerCharacter::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::OnApplicationFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::PlayerCharacter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCharacter::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCharacter*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCharacter* GlobalNamespace::PlayerCharacter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCharacter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCharacter::PlayerCharacter()   {
}
