#pragma once
// IWYU pragma private; include "GlobalNamespace/ModerationReportConfirmMenu.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ModerationReportConfirmMenu_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__ModerationReportConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x1804416f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::ModerationReportConfirmMenu__DoReporting_d__8(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>  __4__this, ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationReportConfirmMenu__DoReporting_d__8::ModerationReportConfirmMenu__DoReporting_d__8()   {
}
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180438ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180437370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu.GoBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu::GoBack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180437000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"GoBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu.ActionReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu::ActionReport)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804389f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"ActionReport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu.DoReporting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (::GlobalNamespace::ModerationReportConfirmMenu::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu::DoReporting)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180438a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"DoReporting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu.ActionBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu::ActionBack)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180437000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModerationReportConfirmMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModerationReportConfirmMenu::*)()>(&::GlobalNamespace::ModerationReportConfirmMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_candidatePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidatePlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_candidatePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___candidatePlayer;
}
constexpr void GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_set_candidatePlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___candidatePlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_playerNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_playerNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerNameText;
}
constexpr void GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_set_playerNameText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_encounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_encounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encounteredGroup;
}
constexpr void GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_set_encounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encounteredGroup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_unencounteredGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_get_unencounteredGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unencounteredGroup;
}
constexpr void GlobalNamespace::ModerationReportConfirmMenu::__cordl_internal_set_unencounteredGroup(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unencounteredGroup = value;
}
inline void GlobalNamespace::ModerationReportConfirmMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationReportConfirmMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationReportConfirmMenu::GoBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"GoBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationReportConfirmMenu::ActionReport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"ActionReport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid GlobalNamespace::ModerationReportConfirmMenu::DoReporting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"DoReporting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationReportConfirmMenu::ActionBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ModerationReportConfirmMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModerationReportConfirmMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ModerationReportConfirmMenu* GlobalNamespace::ModerationReportConfirmMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ModerationReportConfirmMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModerationReportConfirmMenu::ModerationReportConfirmMenu()   {
}
