#pragma once
// IWYU pragma private; include "Dissonance/Demo/ChatInputController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Demo/zzzz__ChatInputController_def.hpp"
#include "Dissonance/Demo/zzzz__ChatInputController_def.hpp"
#include "Dissonance/Demo/zzzz__ChatLogController_def.hpp"
#include "Dissonance/zzzz__DissonanceComms_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
//  Writing Method size for method: ::Dissonance::Demo::ChatInputController___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatInputController___c::*)()>(&::Dissonance::Demo::ChatInputController___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatInputController___c._Start_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Demo::ChatInputController___c::*)(::UnityEngine::UI::InputField*)>(&::Dissonance::Demo::ChatInputController___c::_Start_b__7_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d2410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController___c*>(),
                        {"<Start>b__7_0", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Demo::ChatInputController___c::setStaticF___9(::Dissonance::Demo::ChatInputController___c*  value)  {
::cordl_internals::setStaticField<::Dissonance::Demo::ChatInputController___c*, "<>9", ::Dissonance::Demo::ChatInputController___c*>(std::forward<::Dissonance::Demo::ChatInputController___c*>(value));
}
inline ::Dissonance::Demo::ChatInputController___c* Dissonance::Demo::ChatInputController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Dissonance::Demo::ChatInputController___c*, "<>9", ::Dissonance::Demo::ChatInputController___c*>();
}
inline void Dissonance::Demo::ChatInputController___c::setStaticF___9__7_0(::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>*, "<>9__7_0", ::Dissonance::Demo::ChatInputController___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>* Dissonance::Demo::ChatInputController___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::UI::InputField>,bool>*, "<>9__7_0", ::Dissonance::Demo::ChatInputController___c*>();
}
inline void Dissonance::Demo::ChatInputController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Dissonance::Demo::ChatInputController___c::_Start_b__7_0(::UnityEngine::UI::InputField*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController___c*>(),
                        {"<Start>b__7_0", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a);
}
inline ::Dissonance::Demo::ChatInputController___c* Dissonance::Demo::ChatInputController___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::ChatInputController___c*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::ChatInputController___c::ChatInputController___c()   {
}
//  Writing Method size for method: ::Dissonance::Demo::ChatInputController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatInputController::*)()>(&::Dissonance::Demo::ChatInputController::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1805c5830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatInputController.OnInputEndEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatInputController::*)(::StringW)>(&::Dissonance::Demo::ChatInputController::OnInputEndEdit)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1805c55f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"OnInputEndEdit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatInputController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatInputController::*)()>(&::Dissonance::Demo::ChatInputController::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c59e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatInputController.ShowTextInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatInputController::*)(::StringW)>(&::Dissonance::Demo::ChatInputController::ShowTextInput)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c57b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"ShowTextInput", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Demo::ChatInputController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Demo::ChatInputController::*)()>(&::Dissonance::Demo::ChatInputController::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805c5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Dissonance::Demo::ChatInputController::__cordl_internal_get__isInputtingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInputtingText;
}
constexpr bool const& Dissonance::Demo::ChatInputController::__cordl_internal_get__isInputtingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isInputtingText;
}
constexpr void Dissonance::Demo::ChatInputController::__cordl_internal_set__isInputtingText(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isInputtingText = value;
}
constexpr ::StringW& Dissonance::Demo::ChatInputController::__cordl_internal_get__targetChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetChannel;
}
constexpr ::StringW const& Dissonance::Demo::ChatInputController::__cordl_internal_get__targetChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetChannel;
}
constexpr void Dissonance::Demo::ChatInputController::__cordl_internal_set__targetChannel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetChannel = value;
}
constexpr ::UnityW<::Dissonance::DissonanceComms>& Dissonance::Demo::ChatInputController::__cordl_internal_get_Comms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comms;
}
constexpr ::UnityW<::Dissonance::DissonanceComms> const& Dissonance::Demo::ChatInputController::__cordl_internal_get_Comms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comms;
}
constexpr void Dissonance::Demo::ChatInputController::__cordl_internal_set_Comms(::UnityW<::Dissonance::DissonanceComms>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Comms = value;
}
constexpr ::StringW& Dissonance::Demo::ChatInputController::__cordl_internal_get_Team1Channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Team1Channel;
}
constexpr ::StringW const& Dissonance::Demo::ChatInputController::__cordl_internal_get_Team1Channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Team1Channel;
}
constexpr void Dissonance::Demo::ChatInputController::__cordl_internal_set_Team1Channel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Team1Channel = value;
}
constexpr ::StringW& Dissonance::Demo::ChatInputController::__cordl_internal_get_Team2Channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Team2Channel;
}
constexpr ::StringW const& Dissonance::Demo::ChatInputController::__cordl_internal_get_Team2Channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Team2Channel;
}
constexpr void Dissonance::Demo::ChatInputController::__cordl_internal_set_Team2Channel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Team2Channel = value;
}
constexpr ::UnityW<::UnityEngine::UI::InputField>& Dissonance::Demo::ChatInputController::__cordl_internal_get__input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr ::UnityW<::UnityEngine::UI::InputField> const& Dissonance::Demo::ChatInputController::__cordl_internal_get__input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____input;
}
constexpr void Dissonance::Demo::ChatInputController::__cordl_internal_set__input(::UnityW<::UnityEngine::UI::InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____input = value;
}
constexpr ::UnityW<::Dissonance::Demo::ChatLogController>& Dissonance::Demo::ChatInputController::__cordl_internal_get__log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____log;
}
constexpr ::UnityW<::Dissonance::Demo::ChatLogController> const& Dissonance::Demo::ChatInputController::__cordl_internal_get__log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____log;
}
constexpr void Dissonance::Demo::ChatInputController::__cordl_internal_set__log(::UnityW<::Dissonance::Demo::ChatLogController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____log = value;
}
inline void Dissonance::Demo::ChatInputController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatInputController::OnInputEndEdit(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"OnInputEndEdit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Dissonance::Demo::ChatInputController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Demo::ChatInputController::ShowTextInput(::StringW  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {"ShowTextInput", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel);
}
inline void Dissonance::Demo::ChatInputController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Demo::ChatInputController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Demo::ChatInputController* Dissonance::Demo::ChatInputController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Demo::ChatInputController*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Demo::ChatInputController::ChatInputController()   {
}
