#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerLips.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "GlobalNamespace/zzzz__PropertyBlockHelper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerLips_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Dissonance/zzzz__IDissonancePlayer_def.hpp"
#include "Dissonance/zzzz__RemoteChannel_def.hpp"
#include "Dissonance/zzzz__VoiceBroadcastTrigger_def.hpp"
#include "Dissonance/zzzz__VoicePlayerState_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__FixedSizeFloatQueue_def.hpp"
#include "GlobalNamespace/zzzz__IVoiceDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLips_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVoicePlaybackControl_def.hpp"
#include "GlobalNamespace/zzzz__VoicePlayer_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::*)()>(&::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::MoveNext)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x18035c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlayerLips*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::PlayerLips__AsyncOnBlockListChanged_d__84(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::GlobalNamespace::PlayerLips*  __4__this, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLips__AsyncOnBlockListChanged_d__84::PlayerLips__AsyncOnBlockListChanged_d__84()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_isMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_isMuted)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180352aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isMuted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_isSilenced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_isSilenced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isSilenced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.set_isSilenced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool)>(&::GlobalNamespace::PlayerLips::set_isSilenced)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180352b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_isSilenced", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_isEncountered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_isEncountered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isEncountered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.set_isEncountered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool)>(&::GlobalNamespace::PlayerLips::set_isEncountered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_isEncountered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_amplitude)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_amplitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.set_amplitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(float_t)>(&::GlobalNamespace::PlayerLips::set_amplitude)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_amplitude", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_useMuteNose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_useMuteNose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_useMuteNose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.set_useMuteNose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool)>(&::GlobalNamespace::PlayerLips::set_useMuteNose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_useMuteNose", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_playerVoicePlaybackControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_playerVoicePlaybackControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_playerVoicePlaybackControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.set_playerVoicePlaybackControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(::GlobalNamespace::PlayerVoicePlaybackControl*)>(&::GlobalNamespace::PlayerLips::set_playerVoicePlaybackControl)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180352c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_playerVoicePlaybackControl", {}, {::i2c::type_of<::GlobalNamespace::PlayerVoicePlaybackControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_VoiceDataProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IVoiceDataProvider* (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_VoiceDataProvider)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180352a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_VoiceDataProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.SetGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool)>(&::GlobalNamespace::PlayerLips::SetGhost)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180351460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetGhost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.Set2DVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool)>(&::GlobalNamespace::PlayerLips::Set2DVoice)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803513b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"Set2DVoice", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.SetTalkingIntoRadio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool, ::StringW)>(&::GlobalNamespace::PlayerLips::SetTalkingIntoRadio)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803518b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetTalkingIntoRadio", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.SetOutdoorEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool)>(&::GlobalNamespace::PlayerLips::SetOutdoorEcho)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180351770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetOutdoorEcho", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.SetIsMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(bool, bool)>(&::GlobalNamespace::PlayerLips::SetIsMuted)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180351620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetIsMuted", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerLips::Initialize)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x180350d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180351240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.OnSetIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::OnSetIdentifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180351300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnSetIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.IsInEncounterDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::IsInEncounterDistance)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803510f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"IsInEncounterDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.UpdateEncountered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::UpdateEncountered)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180351a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"UpdateEncountered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::Update)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x180352100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.UpdateNoseVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(float_t, bool)>(&::GlobalNamespace::PlayerLips::UpdateNoseVisuals)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x180351cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"UpdateNoseVisuals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.AudioGetXCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerLips::AudioGetXCallback)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180350920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"AudioGetXCallback", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.GetIsSpeakingInto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)(::StringW)>(&::GlobalNamespace::PlayerLips::GetIsSpeakingInto)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180350a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"GetIsSpeakingInto", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.RegisterVoicePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(::GlobalNamespace::VoicePlayer*)>(&::GlobalNamespace::PlayerLips::RegisterVoicePlayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180351380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"RegisterVoicePlayer", {}, {::i2c::type_of<::GlobalNamespace::VoicePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.UnregisiterVoicePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(::GlobalNamespace::VoicePlayer*)>(&::GlobalNamespace::PlayerLips::UnregisiterVoicePlayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180351a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"UnregisiterVoicePlayer", {}, {::i2c::type_of<::GlobalNamespace::VoicePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.IsAudibleInAnyWay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::IsAudibleInAnyWay)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180350fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"IsAudibleInAnyWay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.InitializeBlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::InitializeBlocking)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180350c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"InitializeBlocking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.OnPlatformUserIdChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)(uint64_t)>(&::GlobalNamespace::PlayerLips::OnPlatformUserIdChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803511d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnPlatformUserIdChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.OnBlockListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::OnBlockListChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803511d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnBlockListChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.AsyncOnBlockListChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::AsyncOnBlockListChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803508b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"AsyncOnBlockListChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.get_isContentRestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::get_isContentRestricted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isContentRestricted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips.ShowContentRestrictionMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::ShowContentRestrictionMessage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"ShowContentRestrictionMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180352970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLips._AsyncOnBlockListChanged_b__84_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLips::*)()>(&::GlobalNamespace::PlayerLips::_AsyncOnBlockListChanged_b__84_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180351a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"<AsyncOnBlockListChanged>b__84_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerLips::__cordl_internal_get_lipTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerLips::__cordl_internal_get_lipTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipTransform;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_lipTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lipTransform = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>& GlobalNamespace::PlayerLips::__cordl_internal_get_propertyBlockHelpers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelpers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>> const& GlobalNamespace::PlayerLips::__cordl_internal_get_propertyBlockHelpers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertyBlockHelpers;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_propertyBlockHelpers(::ArrayW<::UnityW<::GlobalNamespace::PropertyBlockHelper>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertyBlockHelpers = value;
}
constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger>& GlobalNamespace::PlayerLips::__cordl_internal_get_broadcastTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastTrigger;
}
constexpr ::UnityW<::Dissonance::VoiceBroadcastTrigger> const& GlobalNamespace::PlayerLips::__cordl_internal_get_broadcastTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastTrigger;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_broadcastTrigger(::UnityW<::Dissonance::VoiceBroadcastTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastTrigger = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensitivity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerLips::__cordl_internal_get_lipsLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipsLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerLips::__cordl_internal_get_lipsLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipsLocalPosition;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_lipsLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lipsLocalPosition = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerLips::__cordl_internal_get_extendoCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendoCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerLips::__cordl_internal_get_extendoCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendoCurve;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_extendoCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendoCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerLips::__cordl_internal_get_scaleCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerLips::__cordl_internal_get_scaleCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleCurve;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_scaleCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerLips::__cordl_internal_get_bulgeAmplitudeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeAmplitudeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerLips::__cordl_internal_get_bulgeAmplitudeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeAmplitudeCurve;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_bulgeAmplitudeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bulgeAmplitudeCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerLips::__cordl_internal_get_bulgeCenterCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeCenterCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerLips::__cordl_internal_get_bulgeCenterCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeCenterCurve;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_bulgeCenterCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bulgeCenterCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerLips::__cordl_internal_get_bulgeWidthCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeWidthCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerLips::__cordl_internal_get_bulgeWidthCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bulgeWidthCurve;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_bulgeWidthCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bulgeWidthCurve = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_lipsSmoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipsSmoothTime;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_lipsSmoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipsSmoothTime;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_lipsSmoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lipsSmoothTime = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get_localIsMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localIsMuted;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get_localIsMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localIsMuted;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_localIsMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localIsMuted = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_smoothLipsValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothLipsValue;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_smoothLipsValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothLipsValue;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_smoothLipsValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothLipsValue = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_lipsVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipsVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_lipsVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lipsVelocity;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_lipsVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lipsVelocity = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get__isSilenced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSilenced;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get__isSilenced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSilenced;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set__isSilenced(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSilenced = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get__isEncountered_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEncountered_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get__isEncountered_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isEncountered_k__BackingField;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set__isEncountered_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isEncountered_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get_isBlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBlocked;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get_isBlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBlocked;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_isBlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBlocked = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerLips::__cordl_internal_get_mutedLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mutedLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerLips::__cordl_internal_get_mutedLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mutedLocalPosition;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_mutedLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mutedLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerLips::__cordl_internal_get_mutedLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mutedLocalScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerLips::__cordl_internal_get_mutedLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mutedLocalScale;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_mutedLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mutedLocalScale = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_muteBulgeAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteBulgeAmplitude;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_muteBulgeAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteBulgeAmplitude;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_muteBulgeAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteBulgeAmplitude = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_muteBulgeCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteBulgeCenter;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_muteBulgeCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteBulgeCenter;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_muteBulgeCenter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteBulgeCenter = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_muteBulgeWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteBulgeWidth;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_muteBulgeWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteBulgeWidth;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_muteBulgeWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteBulgeWidth = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerLips::__cordl_internal_get_muteSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerLips::__cordl_internal_get_muteSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteSound;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_muteSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerLips::__cordl_internal_get_unmuteSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmuteSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerLips::__cordl_internal_get_unmuteSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unmuteSound;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_unmuteSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unmuteSound = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get_logAudibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logAudibility;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get_logAudibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logAudibility;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_logAudibility(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logAudibility = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get_logAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logAmplitude;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get_logAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logAmplitude;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_logAmplitude(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logAmplitude = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerLips::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerLips::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::Dissonance::VoicePlayerState*& GlobalNamespace::PlayerLips::__cordl_internal_get_voicePlayerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voicePlayerState;
}
constexpr ::Dissonance::VoicePlayerState* const& GlobalNamespace::PlayerLips::__cordl_internal_get_voicePlayerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voicePlayerState;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_voicePlayerState(::Dissonance::VoicePlayerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voicePlayerState = value;
}
constexpr ::Dissonance::IDissonancePlayer*& GlobalNamespace::PlayerLips::__cordl_internal_get_dissonancePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dissonancePlayer;
}
constexpr ::Dissonance::IDissonancePlayer* const& GlobalNamespace::PlayerLips::__cordl_internal_get_dissonancePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dissonancePlayer;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_dissonancePlayer(::Dissonance::IDissonancePlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dissonancePlayer = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get_audibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audibility;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get_audibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audibility;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_audibility(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audibility = value;
}
constexpr float_t& GlobalNamespace::PlayerLips::__cordl_internal_get__amplitude_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude_k__BackingField;
}
constexpr float_t const& GlobalNamespace::PlayerLips::__cordl_internal_get__amplitude_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitude_k__BackingField;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set__amplitude_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitude_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerLips::__cordl_internal_get__useMuteNose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMuteNose_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerLips::__cordl_internal_get__useMuteNose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useMuteNose_k__BackingField;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set__useMuteNose_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useMuteNose_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*& GlobalNamespace::PlayerLips::__cordl_internal_get_isSpeakingInto()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpeakingInto;
}
constexpr ::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>* const& GlobalNamespace::PlayerLips::__cordl_internal_get_isSpeakingInto() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpeakingInto;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set_isSpeakingInto(::System::Collections::Generic::List_1<::Dissonance::RemoteChannel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSpeakingInto = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>& GlobalNamespace::PlayerLips::__cordl_internal_get__playerVoicePlaybackControl_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerVoicePlaybackControl_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> const& GlobalNamespace::PlayerLips::__cordl_internal_get__playerVoicePlaybackControl_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerVoicePlaybackControl_k__BackingField;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set__playerVoicePlaybackControl_k__BackingField(::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerVoicePlaybackControl_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>*& GlobalNamespace::PlayerLips::__cordl_internal_get__activeVoicePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeVoicePlayers;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>* const& GlobalNamespace::PlayerLips::__cordl_internal_get__activeVoicePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeVoicePlayers;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set__activeVoicePlayers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VoicePlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeVoicePlayers = value;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue*& GlobalNamespace::PlayerLips::__cordl_internal_get__amplitudeQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeQueue;
}
constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& GlobalNamespace::PlayerLips::__cordl_internal_get__amplitudeQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____amplitudeQueue;
}
constexpr void GlobalNamespace::PlayerLips::__cordl_internal_set__amplitudeQueue(::GlobalNamespace::FixedSizeFloatQueue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____amplitudeQueue = value;
}
inline void GlobalNamespace::PlayerLips::setStaticF_OnChangePlayerSilence(::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*, "OnChangePlayerSilence", ::GlobalNamespace::PlayerLips*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>* GlobalNamespace::PlayerLips::getStaticF_OnChangePlayerSilence()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*, "OnChangePlayerSilence", ::GlobalNamespace::PlayerLips*>();
}
inline void GlobalNamespace::PlayerLips::setStaticF_BulgeWidthShaderProperty(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BulgeWidthShaderProperty", ::GlobalNamespace::PlayerLips*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlayerLips::getStaticF_BulgeWidthShaderProperty()  {
return ::cordl_internals::getStaticField<int32_t, "BulgeWidthShaderProperty", ::GlobalNamespace::PlayerLips*>();
}
inline void GlobalNamespace::PlayerLips::setStaticF_BulgeCenterShaderProperty(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BulgeCenterShaderProperty", ::GlobalNamespace::PlayerLips*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlayerLips::getStaticF_BulgeCenterShaderProperty()  {
return ::cordl_internals::getStaticField<int32_t, "BulgeCenterShaderProperty", ::GlobalNamespace::PlayerLips*>();
}
inline void GlobalNamespace::PlayerLips::setStaticF_BulgeAmplitudeShaderProperty(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BulgeAmplitudeShaderProperty", ::GlobalNamespace::PlayerLips*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PlayerLips::getStaticF_BulgeAmplitudeShaderProperty()  {
return ::cordl_internals::getStaticField<int32_t, "BulgeAmplitudeShaderProperty", ::GlobalNamespace::PlayerLips*>();
}
inline bool GlobalNamespace::PlayerLips::get_isMuted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isMuted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLips::get_isSilenced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isSilenced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::set_isSilenced(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_isSilenced", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerLips::get_isEncountered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isEncountered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::set_isEncountered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_isEncountered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerLips::get_amplitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_amplitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::set_amplitude(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_amplitude", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerLips::get_useMuteNose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_useMuteNose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::set_useMuteNose(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_useMuteNose", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> GlobalNamespace::PlayerLips::get_playerVoicePlaybackControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_playerVoicePlaybackControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::set_playerVoicePlaybackControl(::GlobalNamespace::PlayerVoicePlaybackControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"set_playerVoicePlaybackControl", {}, {::i2c::type_of<::GlobalNamespace::PlayerVoicePlaybackControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IVoiceDataProvider* GlobalNamespace::PlayerLips::get_VoiceDataProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_VoiceDataProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IVoiceDataProvider*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::SetGhost(bool  isGhost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetGhost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGhost);
}
inline void GlobalNamespace::PlayerLips::Set2DVoice(bool  is2D)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"Set2DVoice", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, is2D);
}
inline void GlobalNamespace::PlayerLips::SetTalkingIntoRadio(bool  isTalking, ::StringW  radioRoomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetTalkingIntoRadio", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isTalking, radioRoomName);
}
inline void GlobalNamespace::PlayerLips::SetOutdoorEcho(bool  playEcho)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetOutdoorEcho", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playEcho);
}
inline void GlobalNamespace::PlayerLips::SetIsMuted(bool  isMuted, bool  noAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"SetIsMuted", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isMuted, noAudio);
}
inline void GlobalNamespace::PlayerLips::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerLips::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::OnSetIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnSetIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLips::IsInEncounterDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"IsInEncounterDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::UpdateEncountered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"UpdateEncountered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::UpdateNoseVisuals(float_t  amplitude, bool  muted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"UpdateNoseVisuals", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amplitude, muted);
}
inline bool GlobalNamespace::PlayerLips::AudioGetXCallback(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"AudioGetXCallback", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline bool GlobalNamespace::PlayerLips::GetIsSpeakingInto(::StringW  roomName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"GetIsSpeakingInto", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, roomName);
}
inline void GlobalNamespace::PlayerLips::RegisterVoicePlayer(::GlobalNamespace::VoicePlayer*  voicePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"RegisterVoicePlayer", {}, {::i2c::type_of<::GlobalNamespace::VoicePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voicePlayer);
}
inline void GlobalNamespace::PlayerLips::UnregisiterVoicePlayer(::GlobalNamespace::VoicePlayer*  voicePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"UnregisiterVoicePlayer", {}, {::i2c::type_of<::GlobalNamespace::VoicePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voicePlayer);
}
inline bool GlobalNamespace::PlayerLips::IsAudibleInAnyWay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"IsAudibleInAnyWay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::InitializeBlocking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"InitializeBlocking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::OnPlatformUserIdChanged(uint64_t  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnPlatformUserIdChanged", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::PlayerLips::OnBlockListChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"OnBlockListChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::PlayerLips::AsyncOnBlockListChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"AsyncOnBlockListChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLips::get_isContentRestricted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"get_isContentRestricted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::ShowContentRestrictionMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"ShowContentRestrictionMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLips::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLips::_AsyncOnBlockListChanged_b__84_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerLips*>(),
                        {"<AsyncOnBlockListChanged>b__84_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLips* GlobalNamespace::PlayerLips::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLips*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLips::PlayerLips()   {
}
