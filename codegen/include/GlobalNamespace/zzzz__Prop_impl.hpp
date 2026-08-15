#pragma once
// IWYU pragma private; include "GlobalNamespace/Prop.hpp"
#include "GlobalNamespace/zzzz__BeakHandle_impl.hpp"
#include "GlobalNamespace/zzzz__PeckStateFilter_impl.hpp"
#include "GlobalNamespace/zzzz__PropCustomHome_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroupPeckSystemPair_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "GlobalNamespace/zzzz__PropRegistry_impl.hpp"
#include "GlobalNamespace/zzzz__PropSaveType_impl.hpp"
#include "GlobalNamespace/zzzz__SaveablePropName_impl.hpp"
#include "GlobalNamespace/zzzz__SeaShell_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlatformingBody_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__PropAnimatables_def.hpp"
#include "GlobalNamespace/zzzz__PropAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__PropSaveType_def.hpp"
#include "GlobalNamespace/zzzz__PropZoner_def.hpp"
#include "GlobalNamespace/zzzz__RadioVoiceAssigner_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "LobbyNetworking/zzzz__HouseNetworkTransform_def.hpp"
#include "Mirror/zzzz__NetworkIdentity_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Prop.get_houseNetworkTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::LobbyNetworking::HouseNetworkTransform> (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_houseNetworkTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_houseNetworkTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.set_houseNetworkTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::LobbyNetworking::HouseNetworkTransform*)>(&::GlobalNamespace::Prop::set_houseNetworkTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180322790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_houseNetworkTransform", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_propColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_propColliders)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180388370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_propColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_defaultStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_defaultStartPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180388320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_defaultStartPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.set_defaultStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::Prop::set_defaultStartPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803886f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_defaultStartPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.set_collidersAreHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(bool)>(&::GlobalNamespace::Prop::set_collidersAreHeld)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180388610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_collidersAreHeld", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_propZoner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropZoner> (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_propZoner)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180388470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_propZoner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_predictedPropHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropHome> (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_predictedPropHome)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180388360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_predictedPropHome", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.set_predictedPropHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropHome*)>(&::GlobalNamespace::Prop::set_predictedPropHome)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180388960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_predictedPropHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.set_isInInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(bool)>(&::GlobalNamespace::Prop::set_isInInventory)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180388710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_isInInventory", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_isInInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_isInInventory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180388340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_isInInventory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_locallyHiddenForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_locallyHiddenForPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180388350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_locallyHiddenForPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.set_locallyHiddenForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::Prop::set_locallyHiddenForPlayer)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x180388800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_locallyHiddenForPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_currentHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropHome> (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_currentHome)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180388310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_currentHome", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::Awake)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180384bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetUpPropZoner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::SetUpPropZoner)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180387cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetUpPropZoner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.PrepareForDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::PrepareForDestroy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803860b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"PrepareForDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.OnStopClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::OnStopClient)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803863f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Prop*>(),
                    {::i2c::class_of<::GlobalNamespace::Prop*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::Start)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x180387e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::OnStartClient)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180386340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Prop*>(),
                    {::i2c::class_of<::GlobalNamespace::Prop*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::Prop::SetHeld)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1803873c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetHeld", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetFixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::UnityEngine::Transform*, bool)>(&::GlobalNamespace::Prop::SetFixed)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1803870b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetFixed", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetLoose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::SetLoose)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180387730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetLoose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.PredictivelyPlaceInHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropHome*)>(&::GlobalNamespace::Prop::PredictivelyPlaceInHome)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180386660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"PredictivelyPlaceInHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::Prop::Position)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180386590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"Position", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetDropped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::Prop::SetDropped)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180386cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetDropped", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.ShouldUseDropPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::ShouldUseDropPeck)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180387e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ShouldUseDropPeck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetDropped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PlayerCharacter*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::Prop::SetDropped)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x180386d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetDropped", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.PreWarmCollidersCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::PreWarmCollidersCollection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180386650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"PreWarmCollidersCollection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SavePropHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropHome*, bool)>(&::GlobalNamespace::Prop::SavePropHome)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803866a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SavePropHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.LocallySetPinned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropHome*, bool)>(&::GlobalNamespace::Prop::LocallySetPinned)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x180385320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"LocallySetPinned", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.MatchesGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropGroup)>(&::GlobalNamespace::Prop::MatchesGroup)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180385be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"MatchesGroup", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.MatchesGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Prop::*)(::ArrayW<::GlobalNamespace::PropGroup>)>(&::GlobalNamespace::Prop::MatchesGroups)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180385c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"MatchesGroups", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PropGroup>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.ClearPrediction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::ClearPrediction)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180384f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ClearPrediction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.LocalUnpin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropHome*)>(&::GlobalNamespace::Prop::LocalUnpin)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180385290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"LocalUnpin", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.OnChangePropHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::SeaShell_ShellReference, ::GlobalNamespace::SeaShell_ShellReference)>(&::GlobalNamespace::Prop::OnChangePropHome)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x180385c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnChangePropHome", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.ServerSetPinned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropHome*)>(&::GlobalNamespace::Prop::ServerSetPinned)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180386820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ServerSetPinned", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.ServerSetUnpinned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::ServerSetUnpinned)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180386a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ServerSetUnpinned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetPinDirectControlSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropHome*, bool)>(&::GlobalNamespace::Prop::SetPinDirectControlSystem)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180387a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetPinDirectControlSystem", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180386220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.GetCrosshairTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::GetCrosshairTransform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180385250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"GetCrosshairTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::OnDestroy)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803860b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180386260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803861e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SetSaveType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::GlobalNamespace::PropSaveType)>(&::GlobalNamespace::Prop::SetSaveType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180387c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetSaveType", {}, {::i2c::type_of<::GlobalNamespace::PropSaveType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803882e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.get_NetworkpropHomeShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SeaShell_ShellReference (::GlobalNamespace::Prop::*)()>(&::GlobalNamespace::Prop::get_NetworkpropHomeShellReference)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803882f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_NetworkpropHomeShellReference", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.set_NetworkpropHomeShellReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::ByRefConst<::GlobalNamespace::SeaShell_ShellReference>)>(&::GlobalNamespace::Prop::set_NetworkpropHomeShellReference)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803884b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_NetworkpropHomeShellReference", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::SeaShell_ShellReference>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::Prop::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803867b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Prop*>(),
                    {::i2c::class_of<::GlobalNamespace::Prop*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Prop.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Prop::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::Prop::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180385110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Prop*>(),
                    {::i2c::class_of<::GlobalNamespace::Prop*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::Prop::__cordl_internal_get_startHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHome;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::Prop::__cordl_internal_get_startHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHome;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_startHome(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startHome = value;
}
constexpr float_t& GlobalNamespace::Prop::__cordl_internal_get_launchMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchMultiplier;
}
constexpr float_t const& GlobalNamespace::Prop::__cordl_internal_get_launchMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchMultiplier;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_launchMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Prop::__cordl_internal_get_customCrosshairPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCrosshairPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Prop::__cordl_internal_get_customCrosshairPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customCrosshairPoint;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_customCrosshairPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customCrosshairPoint = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_sticky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sticky;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_sticky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sticky;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_sticky(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sticky = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_blockRemovingFromHomes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRemovingFromHomes;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_blockRemovingFromHomes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRemovingFromHomes;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_blockRemovingFromHomes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockRemovingFromHomes = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_blockRaising()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRaising;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_blockRaising() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockRaising;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_blockRaising(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockRaising = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_blockCorpseHolding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCorpseHolding;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_blockCorpseHolding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockCorpseHolding;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_blockCorpseHolding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockCorpseHolding = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_affectedByMagnet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectedByMagnet;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_affectedByMagnet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___affectedByMagnet;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_affectedByMagnet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___affectedByMagnet = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& GlobalNamespace::Prop::__cordl_internal_get_primaryPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& GlobalNamespace::Prop::__cordl_internal_get_primaryPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryPose;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_primaryPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryPose = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::Prop::__cordl_internal_get_xray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xray;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::Prop::__cordl_internal_get_xray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xray;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_xray(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xray = value;
}
constexpr ::GlobalNamespace::PropRegistry& GlobalNamespace::Prop::__cordl_internal_get_registry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr ::GlobalNamespace::PropRegistry const& GlobalNamespace::Prop::__cordl_internal_get_registry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registry;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_registry(::GlobalNamespace::PropRegistry  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registry = value;
}
constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner>& GlobalNamespace::Prop::__cordl_internal_get_radioVoiceAssigner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioVoiceAssigner;
}
constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner> const& GlobalNamespace::Prop::__cordl_internal_get_radioVoiceAssigner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radioVoiceAssigner;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_radioVoiceAssigner(::UnityW<::GlobalNamespace::RadioVoiceAssigner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radioVoiceAssigner = value;
}
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform>& GlobalNamespace::Prop::__cordl_internal_get__houseNetworkTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____houseNetworkTransform_k__BackingField;
}
constexpr ::UnityW<::LobbyNetworking::HouseNetworkTransform> const& GlobalNamespace::Prop::__cordl_internal_get__houseNetworkTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____houseNetworkTransform_k__BackingField;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__houseNetworkTransform_k__BackingField(::UnityW<::LobbyNetworking::HouseNetworkTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____houseNetworkTransform_k__BackingField = value;
}
constexpr ::GlobalNamespace::SaveablePropName& GlobalNamespace::Prop::__cordl_internal_get_saveablePropName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveablePropName;
}
constexpr ::GlobalNamespace::SaveablePropName const& GlobalNamespace::Prop::__cordl_internal_get_saveablePropName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveablePropName;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_saveablePropName(::GlobalNamespace::SaveablePropName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveablePropName = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_canSaveHomeWithGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSaveHomeWithGuid;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_canSaveHomeWithGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSaveHomeWithGuid;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_canSaveHomeWithGuid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSaveHomeWithGuid = value;
}
constexpr ::StringW& GlobalNamespace::Prop::__cordl_internal_get_savablePropGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savablePropGuid;
}
constexpr ::StringW const& GlobalNamespace::Prop::__cordl_internal_get_savablePropGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savablePropGuid;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_savablePropGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savablePropGuid = value;
}
constexpr ::GlobalNamespace::PropSaveType& GlobalNamespace::Prop::__cordl_internal_get_propSaveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propSaveType;
}
constexpr ::GlobalNamespace::PropSaveType const& GlobalNamespace::Prop::__cordl_internal_get_propSaveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propSaveType;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_propSaveType(::GlobalNamespace::PropSaveType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propSaveType = value;
}
constexpr ::GlobalNamespace::BeakHandle& GlobalNamespace::Prop::__cordl_internal_get_beakHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakHandle;
}
constexpr ::GlobalNamespace::BeakHandle const& GlobalNamespace::Prop::__cordl_internal_get_beakHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beakHandle;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_beakHandle(::GlobalNamespace::BeakHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beakHandle = value;
}
constexpr ::UnityW<::GlobalNamespace::PropAnimatables>& GlobalNamespace::Prop::__cordl_internal_get_animatables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatables;
}
constexpr ::UnityW<::GlobalNamespace::PropAnimatables> const& GlobalNamespace::Prop::__cordl_internal_get_animatables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatables;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_animatables(::UnityW<::GlobalNamespace::PropAnimatables>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatables = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*& GlobalNamespace::Prop::__cordl_internal_get_propGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>* const& GlobalNamespace::Prop::__cordl_internal_get_propGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propGroups;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_propGroups(::System::Collections::Generic::List_1<::GlobalNamespace::PropGroup>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propGroups = value;
}
constexpr ::ArrayW<::GlobalNamespace::PropCustomHome>& GlobalNamespace::Prop::__cordl_internal_get_customHomes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHomes;
}
constexpr ::ArrayW<::GlobalNamespace::PropCustomHome> const& GlobalNamespace::Prop::__cordl_internal_get_customHomes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHomes;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_customHomes(::ArrayW<::GlobalNamespace::PropCustomHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customHomes = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::Prop::__cordl_internal_get_useHeldSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHeldSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::Prop::__cordl_internal_get_useHeldSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHeldSwitch;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_useHeldSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useHeldSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::Prop::__cordl_internal_get_useHeldUpSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHeldUpSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::Prop::__cordl_internal_get_useHeldUpSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHeldUpSwitch;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_useHeldUpSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useHeldUpSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::Prop::__cordl_internal_get_onDropSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDropSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::Prop::__cordl_internal_get_onDropSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDropSwitch;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_onDropSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDropSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::Prop::__cordl_internal_get_onEjectSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEjectSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::Prop::__cordl_internal_get_onEjectSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEjectSwitch;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_onEjectSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEjectSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::Prop::__cordl_internal_get_dropPeckFilterSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPeckFilterSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::Prop::__cordl_internal_get_dropPeckFilterSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPeckFilterSystem;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_dropPeckFilterSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropPeckFilterSystem = value;
}
constexpr ::GlobalNamespace::PeckStateFilter& GlobalNamespace::Prop::__cordl_internal_get_dropPeckFilterConditions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPeckFilterConditions;
}
constexpr ::GlobalNamespace::PeckStateFilter const& GlobalNamespace::Prop::__cordl_internal_get_dropPeckFilterConditions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPeckFilterConditions;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_dropPeckFilterConditions(::GlobalNamespace::PeckStateFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropPeckFilterConditions = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::Prop::__cordl_internal_get_onUseAsKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUseAsKey;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::Prop::__cordl_internal_get_onUseAsKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUseAsKey;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_onUseAsKey(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUseAsKey = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::Prop::__cordl_internal_get_pinDirectControlSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinDirectControlSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::Prop::__cordl_internal_get_pinDirectControlSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pinDirectControlSystem;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_pinDirectControlSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pinDirectControlSystem = value;
}
constexpr ::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair>& GlobalNamespace::Prop::__cordl_internal_get_taggedPinSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedPinSystems;
}
constexpr ::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair> const& GlobalNamespace::Prop::__cordl_internal_get_taggedPinSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedPinSystems;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_taggedPinSystems(::ArrayW<::GlobalNamespace::PropGroupPeckSystemPair>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedPinSystems = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::Prop::__cordl_internal_get_onPickUpSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPickUpSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::Prop::__cordl_internal_get_onPickUpSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPickUpSwitch;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_onPickUpSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPickUpSwitch = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::Prop::__cordl_internal_get_onSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpawn;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::Prop::__cordl_internal_get_onSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onSpawn;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_onSpawn(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onSpawn = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference& GlobalNamespace::Prop::__cordl_internal_get_propHomeShellReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeShellReference;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference const& GlobalNamespace::Prop::__cordl_internal_get_propHomeShellReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeShellReference;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_propHomeShellReference(::GlobalNamespace::SeaShell_ShellReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHomeShellReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PropAudioReferences>& GlobalNamespace::Prop::__cordl_internal_get_propAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propAudio;
}
constexpr ::UnityW<::GlobalNamespace::PropAudioReferences> const& GlobalNamespace::Prop::__cordl_internal_get_propAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propAudio;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_propAudio(::UnityW<::GlobalNamespace::PropAudioReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propAudio = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::Prop::__cordl_internal_get__looseLoopEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looseLoopEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::Prop::__cordl_internal_get__looseLoopEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____looseLoopEvent;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__looseLoopEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____looseLoopEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::Prop::__cordl_internal_get_attachPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::Prop::__cordl_internal_get_attachPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPoints;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_attachPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachPoints = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& GlobalNamespace::Prop::__cordl_internal_get_defaultPhysicsMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPhysicsMaterials;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& GlobalNamespace::Prop::__cordl_internal_get_defaultPhysicsMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPhysicsMaterials;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_defaultPhysicsMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultPhysicsMaterials = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::Prop::__cordl_internal_get__propColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::Prop::__cordl_internal_get__propColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propColliders;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__propColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propColliders = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::Prop::__cordl_internal_get_exclusiveHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusiveHolder;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::Prop::__cordl_internal_get_exclusiveHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusiveHolder;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_exclusiveHolder(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exclusiveHolder = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Prop::__cordl_internal_get_kernal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kernal;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Prop::__cordl_internal_get_kernal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kernal;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_kernal(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kernal = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::Prop::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::Prop::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::Mirror::NetworkIdentity>& GlobalNamespace::Prop::__cordl_internal_get_networkIdentity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkIdentity;
}
constexpr ::UnityW<::Mirror::NetworkIdentity> const& GlobalNamespace::Prop::__cordl_internal_get_networkIdentity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkIdentity;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_networkIdentity(::UnityW<::Mirror::NetworkIdentity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkIdentity = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::Prop::__cordl_internal_get_originalParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::Prop::__cordl_internal_get_originalParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalParent;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_originalParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalParent = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::Prop::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::Prop::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_XRayIsBlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XRayIsBlocked;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_XRayIsBlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XRayIsBlocked;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_XRayIsBlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XRayIsBlocked = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get_isInRadioDeadzone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInRadioDeadzone;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get_isInRadioDeadzone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInRadioDeadzone;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_isInRadioDeadzone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInRadioDeadzone = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*& GlobalNamespace::Prop::__cordl_internal_get_childPropHomes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childPropHomes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>* const& GlobalNamespace::Prop::__cordl_internal_get_childPropHomes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childPropHomes;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_childPropHomes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHome>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___childPropHomes = value;
}
constexpr ::UnityW<::GlobalNamespace::PlatformingBody>& GlobalNamespace::Prop::__cordl_internal_get_platformingBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformingBody;
}
constexpr ::UnityW<::GlobalNamespace::PlatformingBody> const& GlobalNamespace::Prop::__cordl_internal_get_platformingBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformingBody;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_platformingBody(::UnityW<::GlobalNamespace::PlatformingBody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformingBody = value;
}
constexpr ::UnityW<::GlobalNamespace::PropZoner>& GlobalNamespace::Prop::__cordl_internal_get__propZoner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propZoner;
}
constexpr ::UnityW<::GlobalNamespace::PropZoner> const& GlobalNamespace::Prop::__cordl_internal_get__propZoner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propZoner;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__propZoner(::UnityW<::GlobalNamespace::PropZoner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propZoner = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Prop::__cordl_internal_get__defaultStartPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultStartPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Prop::__cordl_internal_get__defaultStartPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultStartPosition_k__BackingField;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__defaultStartPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultStartPosition_k__BackingField = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get__collidersAreHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersAreHeld;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get__collidersAreHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collidersAreHeld;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__collidersAreHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collidersAreHeld = value;
}
constexpr ::UnityW<::GlobalNamespace::PropHome>& GlobalNamespace::Prop::__cordl_internal_get__predictedPropHome_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictedPropHome_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::PropHome> const& GlobalNamespace::Prop::__cordl_internal_get__predictedPropHome_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____predictedPropHome_k__BackingField;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__predictedPropHome_k__BackingField(::UnityW<::GlobalNamespace::PropHome>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____predictedPropHome_k__BackingField = value;
}
constexpr ::GlobalNamespace::PropGroup& GlobalNamespace::Prop::__cordl_internal_get_propGroupOfMostRecentPropHome()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propGroupOfMostRecentPropHome;
}
constexpr ::GlobalNamespace::PropGroup const& GlobalNamespace::Prop::__cordl_internal_get_propGroupOfMostRecentPropHome() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propGroupOfMostRecentPropHome;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_propGroupOfMostRecentPropHome(::GlobalNamespace::PropGroup  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propGroupOfMostRecentPropHome = value;
}
constexpr ::System::Action*& GlobalNamespace::Prop::__cordl_internal_get_onChangePinOrHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangePinOrHold;
}
constexpr ::System::Action* const& GlobalNamespace::Prop::__cordl_internal_get_onChangePinOrHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChangePinOrHold;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set_onChangePinOrHold(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChangePinOrHold = value;
}
constexpr bool& GlobalNamespace::Prop::__cordl_internal_get__isInInventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInInventory;
}
constexpr bool const& GlobalNamespace::Prop::__cordl_internal_get__isInInventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInInventory;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__isInInventory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInInventory = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::Prop::__cordl_internal_get__locallyHiddenForPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locallyHiddenForPlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::Prop::__cordl_internal_get__locallyHiddenForPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locallyHiddenForPlayer;
}
constexpr void GlobalNamespace::Prop::__cordl_internal_set__locallyHiddenForPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locallyHiddenForPlayer = value;
}
inline void GlobalNamespace::Prop::setStaticF_allProps(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*, "allProps", ::GlobalNamespace::Prop*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>* GlobalNamespace::Prop::getStaticF_allProps()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Prop>>*, "allProps", ::GlobalNamespace::Prop*>();
}
inline ::UnityW<::LobbyNetworking::HouseNetworkTransform> GlobalNamespace::Prop::get_houseNetworkTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_houseNetworkTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::LobbyNetworking::HouseNetworkTransform>>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::set_houseNetworkTransform(::LobbyNetworking::HouseNetworkTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_houseNetworkTransform", {}, {::i2c::type_of<::LobbyNetworking::HouseNetworkTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* GlobalNamespace::Prop::get_propColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_propColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::Prop::get_defaultStartPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_defaultStartPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::set_defaultStartPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_defaultStartPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Prop::set_collidersAreHeld(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_collidersAreHeld", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PropZoner> GlobalNamespace::Prop::get_propZoner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_propZoner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropZoner>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PropHome> GlobalNamespace::Prop::get_predictedPropHome()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_predictedPropHome", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropHome>>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::set_predictedPropHome(::GlobalNamespace::PropHome*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_predictedPropHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Prop::set_isInInventory(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_isInInventory", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::Prop::get_isInInventory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_isInInventory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::Prop::get_locallyHiddenForPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_locallyHiddenForPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::set_locallyHiddenForPlayer(::GlobalNamespace::PlayerCharacter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_locallyHiddenForPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PropHome> GlobalNamespace::Prop::get_currentHome()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_currentHome", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropHome>>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::SetUpPropZoner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetUpPropZoner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::PrepareForDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"PrepareForDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::OnStopClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Prop*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Prop*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::SetHeld(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetHeld", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::Prop::SetFixed(::UnityEngine::Transform*  newParent, bool  isOnRigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetFixed", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newParent, isOnRigidbody);
}
inline void GlobalNamespace::Prop::SetLoose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetLoose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::PredictivelyPlaceInHome(::GlobalNamespace::PropHome*  propHome)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"PredictivelyPlaceInHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome);
}
inline void GlobalNamespace::Prop::Position(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"Position", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPosition, localRotation);
}
inline void GlobalNamespace::Prop::SetDropped(::GlobalNamespace::PlayerCharacter*  holder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetDropped", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holder);
}
inline bool GlobalNamespace::Prop::ShouldUseDropPeck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ShouldUseDropPeck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::SetDropped(::GlobalNamespace::PlayerCharacter*  holder, ::UnityEngine::Vector3  throwForce, ::UnityEngine::Vector3  throwTorque)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetDropped", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holder, throwForce, throwTorque);
}
inline void GlobalNamespace::Prop::PreWarmCollidersCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"PreWarmCollidersCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::SavePropHome(::GlobalNamespace::PropHome*  propHome, bool  isPinned)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SavePropHome", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, isPinned);
}
inline void GlobalNamespace::Prop::LocallySetPinned(::GlobalNamespace::PropHome*  propHome, bool  alreadyPredicted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"LocallySetPinned", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, alreadyPredicted);
}
inline bool GlobalNamespace::Prop::MatchesGroup(::GlobalNamespace::PropGroup  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"MatchesGroup", {}, {::i2c::type_of<::GlobalNamespace::PropGroup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, group);
}
inline bool GlobalNamespace::Prop::MatchesGroups(::ArrayW<::GlobalNamespace::PropGroup>  groups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"MatchesGroups", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::PropGroup>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groups);
}
inline void GlobalNamespace::Prop::ClearPrediction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ClearPrediction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::LocalUnpin(::GlobalNamespace::PropHome*  oldHome)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"LocalUnpin", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldHome);
}
inline void GlobalNamespace::Prop::OnChangePropHome(::GlobalNamespace::SeaShell_ShellReference  oldValue, ::GlobalNamespace::SeaShell_ShellReference  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnChangePropHome", {}, {::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>(), ::i2c::type_of<::GlobalNamespace::SeaShell_ShellReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::Prop::ServerSetPinned(::GlobalNamespace::PropHome*  propHome)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ServerSetPinned", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome);
}
inline void GlobalNamespace::Prop::ServerSetUnpinned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"ServerSetUnpinned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::SetPinDirectControlSystem(::GlobalNamespace::PropHome*  propHome, bool  pinned)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetPinDirectControlSystem", {}, {::i2c::type_of<::GlobalNamespace::PropHome*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propHome, pinned);
}
inline void GlobalNamespace::Prop::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::Prop::GetCrosshairTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"GetCrosshairTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::SetSaveType(::GlobalNamespace::PropSaveType  newSaveType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"SetSaveType", {}, {::i2c::type_of<::GlobalNamespace::PropSaveType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSaveType);
}
inline void GlobalNamespace::Prop::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SeaShell_ShellReference GlobalNamespace::Prop::get_NetworkpropHomeShellReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"get_NetworkpropHomeShellReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SeaShell_ShellReference>(this, ___internal_method);
}
inline void GlobalNamespace::Prop::set_NetworkpropHomeShellReference(::ByRefConst<::GlobalNamespace::SeaShell_ShellReference>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Prop*>(),
                        {"set_NetworkpropHomeShellReference", {}, {::i2c::type_of<::ByRefConst<::GlobalNamespace::SeaShell_ShellReference>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Prop::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Prop*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::Prop::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Prop*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::Prop* GlobalNamespace::Prop::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Prop*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Prop::Prop()   {
}
