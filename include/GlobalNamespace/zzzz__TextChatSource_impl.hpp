#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatSource.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_impl.hpp"
#include "GlobalNamespace/zzzz__TextChatHud_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TextChatSource_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionBase_def.hpp"
#include "GlobalNamespace/zzzz__AudioOcclusionConfig_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__TextChatHud_def.hpp"
#include "GlobalNamespace/zzzz__TextChatMessage_def.hpp"
#include "GlobalNamespace/zzzz__TextChatSource_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::*)()>(&::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x180459ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::SetStateMachine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18038a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::TextChatSource__DelaySetBigBounds_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::TMPro::TMP_Text>  textComponent, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->textComponent = textComponent;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatSource__DelaySetBigBounds_d__39::TextChatSource__DelaySetBigBounds_d__39()   {
}
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.get_iconTypeForBlips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextChatHud_BlipIcon (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::get_iconTypeForBlips)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180458920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_iconTypeForBlips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.get_isVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::get_isVisible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180458940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_isVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.set_isVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)(bool)>(&::GlobalNamespace::TextChatSource::set_isVisible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180458aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"set_isVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180458910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.get_mostRecentMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextChatMessage (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::get_mostRecentMessage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180458950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_mostRecentMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180457660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.AddMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)(::GlobalNamespace::TextChatMessage, bool)>(&::GlobalNamespace::TextChatSource::AddMessage)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180456f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"AddMessage", {}, {::i2c::type_of<::GlobalNamespace::TextChatMessage>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.ClearMesssages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::ClearMesssages)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180457100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"ClearMesssages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)(bool)>(&::GlobalNamespace::TextChatSource::Activate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180456eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"Activate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.SetOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)(::StringW)>(&::GlobalNamespace::TextChatSource::SetOutput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180458860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetOutput", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.OnTransformParentChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180457b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.DelaySetBigBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::GlobalNamespace::TextChatSource::DelaySetBigBounds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180457140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"DelaySetBigBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.SetBigBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TMPro::TMP_Text*)>(&::GlobalNamespace::TextChatSource::SetBigBounds)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804583f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetBigBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.GetCombinedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::GetCombinedString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180457230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetCombinedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::LateUpdate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x180457820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.GetOcclusionFromAudioSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::GetOcclusionFromAudioSystem)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180457380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetOcclusionFromAudioSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.RefreshOpacityAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::RefreshOpacityAndRotation)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x180457b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"RefreshOpacityAndRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.GetActiveMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>* (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::GetActiveMessages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804571d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetActiveMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.SetAllMessagesBroadcasted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::SetAllMessagesBroadcasted)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180458280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetAllMessagesBroadcasted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.SetDisplayActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)(bool, bool)>(&::GlobalNamespace::TextChatSource::SetDisplayActive)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180458530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetDisplayActive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::OnEnable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180457a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804579d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TextChatSource::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::TextChatSource::GetX)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180457470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.get_isTyping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::get_isTyping)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803115f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_isTyping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.set_isTyping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)(bool)>(&::GlobalNamespace::TextChatSource::set_isTyping)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804589a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"set_isTyping", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.HasReadableMessageFromPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TextChatSource::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::TextChatSource::HasReadableMessageFromPlayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180457570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"HasReadableMessageFromPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource.IsPlayerTextLocallyReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::TextChatSource::IsPlayerTextLocallyReadable)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804576b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"IsPlayerTextLocallyReadable", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatSource::*)()>(&::GlobalNamespace::TextChatSource::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804588f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TextChatHud_BlipIcon& GlobalNamespace::TextChatSource::__cordl_internal_get_iconType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconType;
}
constexpr ::GlobalNamespace::TextChatHud_BlipIcon const& GlobalNamespace::TextChatSource::__cordl_internal_get_iconType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iconType;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_iconType(::GlobalNamespace::TextChatHud_BlipIcon  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iconType = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::TextChatSource::__cordl_internal_get_materialForDarkColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialForDarkColors;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::TextChatSource::__cordl_internal_get_materialForDarkColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialForDarkColors;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_materialForDarkColors(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialForDarkColors = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>*& GlobalNamespace::TextChatSource::__cordl_internal_get_activeMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeMessages;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>* const& GlobalNamespace::TextChatSource::__cordl_internal_get_activeMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeMessages;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_activeMessages(::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeMessages = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& GlobalNamespace::TextChatSource::__cordl_internal_get_occlusionConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& GlobalNamespace::TextChatSource::__cordl_internal_get_occlusionConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionConfig;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_occlusionConfig(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionConfig = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& GlobalNamespace::TextChatSource::__cordl_internal_get_occlusionConfigSpeechless()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionConfigSpeechless;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& GlobalNamespace::TextChatSource::__cordl_internal_get_occlusionConfigSpeechless() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusionConfigSpeechless;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_occlusionConfigSpeechless(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusionConfigSpeechless = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TextChatSource::__cordl_internal_get_opacityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opacityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TextChatSource::__cordl_internal_get_opacityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opacityCurve;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_opacityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opacityCurve = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::TextChatSource::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::TextChatSource::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_textField(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TextChatSource::__cordl_internal_get_dampedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TextChatSource::__cordl_internal_get_dampedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampedTransform;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_dampedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampedTransform = value;
}
constexpr bool& GlobalNamespace::TextChatSource::__cordl_internal_get_isLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocalPlayer;
}
constexpr bool const& GlobalNamespace::TextChatSource::__cordl_internal_get_isLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocalPlayer;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_isLocalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocalPlayer = value;
}
constexpr bool& GlobalNamespace::TextChatSource::__cordl_internal_get_allCaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allCaps;
}
constexpr bool const& GlobalNamespace::TextChatSource::__cordl_internal_get_allCaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allCaps;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_allCaps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allCaps = value;
}
constexpr float_t& GlobalNamespace::TextChatSource::__cordl_internal_get_dampTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTime;
}
constexpr float_t const& GlobalNamespace::TextChatSource::__cordl_internal_get_dampTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampTime;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_dampTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampTime = value;
}
constexpr float_t& GlobalNamespace::TextChatSource::__cordl_internal_get_distanceScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceScalar;
}
constexpr float_t const& GlobalNamespace::TextChatSource::__cordl_internal_get_distanceScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceScalar;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_distanceScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceScalar = value;
}
constexpr float_t& GlobalNamespace::TextChatSource::__cordl_internal_get_textScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textScalar;
}
constexpr float_t const& GlobalNamespace::TextChatSource::__cordl_internal_get_textScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textScalar;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_textScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textScalar = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TextChatSource::__cordl_internal_get_customAimTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customAimTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TextChatSource::__cordl_internal_get_customAimTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customAimTransform;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_customAimTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customAimTransform = value;
}
constexpr bool& GlobalNamespace::TextChatSource::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::TextChatSource::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::TextChatSource::__cordl_internal_get_showAudibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAudibility;
}
constexpr bool const& GlobalNamespace::TextChatSource::__cordl_internal_get_showAudibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAudibility;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_showAudibility(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAudibility = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase>& GlobalNamespace::TextChatSource::__cordl_internal_get_occlusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusion;
}
constexpr ::UnityW<::GlobalNamespace::AudioOcclusionBase> const& GlobalNamespace::TextChatSource::__cordl_internal_get_occlusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occlusion;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_occlusion(::UnityW<::GlobalNamespace::AudioOcclusionBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occlusion = value;
}
constexpr float_t& GlobalNamespace::TextChatSource::__cordl_internal_get_audibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audibility;
}
constexpr float_t const& GlobalNamespace::TextChatSource::__cordl_internal_get_audibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audibility;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_audibility(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audibility = value;
}
constexpr bool& GlobalNamespace::TextChatSource::__cordl_internal_get__isTyping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTyping;
}
constexpr bool const& GlobalNamespace::TextChatSource::__cordl_internal_get__isTyping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTyping;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set__isTyping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTyping = value;
}
constexpr bool& GlobalNamespace::TextChatSource::__cordl_internal_get__isVisible_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible_k__BackingField;
}
constexpr bool const& GlobalNamespace::TextChatSource::__cordl_internal_get__isVisible_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isVisible_k__BackingField;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set__isVisible_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isVisible_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TextChatSource::__cordl_internal_get_smoothDampedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothDampedPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TextChatSource::__cordl_internal_get_smoothDampedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothDampedPosition;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_smoothDampedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothDampedPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TextChatSource::__cordl_internal_get_smoothDampedVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothDampedVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TextChatSource::__cordl_internal_get_smoothDampedVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothDampedVelocity;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_smoothDampedVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothDampedVelocity = value;
}
constexpr ::GlobalNamespace::PlayerLookSet_LookColor& GlobalNamespace::TextChatSource::__cordl_internal_get_blipColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipColor;
}
constexpr ::GlobalNamespace::PlayerLookSet_LookColor const& GlobalNamespace::TextChatSource::__cordl_internal_get_blipColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blipColor;
}
constexpr void GlobalNamespace::TextChatSource::__cordl_internal_set_blipColor(::GlobalNamespace::PlayerLookSet_LookColor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blipColor = value;
}
inline void GlobalNamespace::TextChatSource::setStaticF_activeSources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*, "activeSources", ::GlobalNamespace::TextChatSource*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>* GlobalNamespace::TextChatSource::getStaticF_activeSources()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TextChatSource>>*, "activeSources", ::GlobalNamespace::TextChatSource*>();
}
inline ::GlobalNamespace::TextChatHud_BlipIcon GlobalNamespace::TextChatSource::get_iconTypeForBlips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_iconTypeForBlips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextChatHud_BlipIcon>(this, ___internal_method);
}
inline bool GlobalNamespace::TextChatSource::get_isVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_isVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::set_isVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"set_isVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::TextChatSource::get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::TextChatMessage GlobalNamespace::TextChatSource::get_mostRecentMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_mostRecentMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextChatMessage>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::AddMessage(::GlobalNamespace::TextChatMessage  message, bool  inaudible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"AddMessage", {}, {::i2c::type_of<::GlobalNamespace::TextChatMessage>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, inaudible);
}
inline void GlobalNamespace::TextChatSource::ClearMesssages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"ClearMesssages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::Activate(bool  inaudible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"Activate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inaudible);
}
inline void GlobalNamespace::TextChatSource::SetOutput(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetOutput", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::TextChatSource::OnTransformParentChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::DelaySetBigBounds(::TMPro::TMP_Text*  textComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"DelaySetBigBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textComponent);
}
inline void GlobalNamespace::TextChatSource::SetBigBounds(::TMPro::TMP_Text*  textComponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetBigBounds", {}, {::i2c::type_of<::TMPro::TMP_Text*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, textComponent);
}
inline ::StringW GlobalNamespace::TextChatSource::GetCombinedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetCombinedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::TextChatSource::GetOcclusionFromAudioSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetOcclusionFromAudioSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::RefreshOpacityAndRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"RefreshOpacityAndRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>* GlobalNamespace::TextChatSource::GetActiveMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetActiveMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::TextChatMessage>*>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::SetAllMessagesBroadcasted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetAllMessagesBroadcasted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::SetDisplayActive(bool  active, bool  inaudible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"SetDisplayActive", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active, inaudible);
}
inline void GlobalNamespace::TextChatSource::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TextChatSource::GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xType, x);
}
inline bool GlobalNamespace::TextChatSource::get_isTyping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"get_isTyping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatSource::set_isTyping(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"set_isTyping", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TextChatSource::HasReadableMessageFromPlayer(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"HasReadableMessageFromPlayer", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerCharacter);
}
inline bool GlobalNamespace::TextChatSource::IsPlayerTextLocallyReadable(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {"IsPlayerTextLocallyReadable", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::TextChatSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextChatSource* GlobalNamespace::TextChatSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextChatSource*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::TextChatSource::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::TextChatSource::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatSource::TextChatSource()   {
}
