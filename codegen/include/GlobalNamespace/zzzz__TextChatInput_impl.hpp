#pragma once
// IWYU pragma private; include "GlobalNamespace/TextChatInput.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextChatInput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_InputField_def.hpp"
#include "TMPro/zzzz__TMP_SelectionCaret_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::TextChatInput> (*)()>(&::GlobalNamespace::TextChatInput::get_instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180440bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.get_inputIsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::get_inputIsOpen)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180440ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"get_inputIsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.RecordMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)(::StringW)>(&::GlobalNamespace::TextChatInput::RecordMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804409d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"RecordMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180440a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804405c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180440780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)(::StringW)>(&::GlobalNamespace::TextChatInput::OnChange)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804406f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"OnChange", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.OpenInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::OpenInput)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1804407f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"OpenInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.CloseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::CloseInput)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804405f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"CloseInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput.GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::GetString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180440690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"GetString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextChatInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextChatInput::*)()>(&::GlobalNamespace::TextChatInput::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180440b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_InputField>& GlobalNamespace::TextChatInput::__cordl_internal_get_inputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr ::UnityW<::TMPro::TMP_InputField> const& GlobalNamespace::TextChatInput::__cordl_internal_get_inputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputField;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set_inputField(::UnityW<::TMPro::TMP_InputField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputField = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::TextChatInput::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::TextChatInput::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set_output(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& GlobalNamespace::TextChatInput::__cordl_internal_get_textChatVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textChatVisuals;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& GlobalNamespace::TextChatInput::__cordl_internal_get_textChatVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textChatVisuals;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set_textChatVisuals(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textChatVisuals = value;
}
constexpr bool& GlobalNamespace::TextChatInput::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::TextChatInput::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr int32_t& GlobalNamespace::TextChatInput::__cordl_internal_get_cycleIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleIndex;
}
constexpr int32_t const& GlobalNamespace::TextChatInput::__cordl_internal_get_cycleIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleIndex;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set_cycleIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::TextChatInput::__cordl_internal_get_recentMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recentMessages;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::TextChatInput::__cordl_internal_get_recentMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recentMessages;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set_recentMessages(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recentMessages = value;
}
constexpr ::UnityW<::TMPro::TMP_SelectionCaret>& GlobalNamespace::TextChatInput::__cordl_internal_get_caretComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caretComponent;
}
constexpr ::UnityW<::TMPro::TMP_SelectionCaret> const& GlobalNamespace::TextChatInput::__cordl_internal_get_caretComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caretComponent;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set_caretComponent(::UnityW<::TMPro::TMP_SelectionCaret>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___caretComponent = value;
}
constexpr ::StringW& GlobalNamespace::TextChatInput::__cordl_internal_get__stringAtMostRecentChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringAtMostRecentChange;
}
constexpr ::StringW const& GlobalNamespace::TextChatInput::__cordl_internal_get__stringAtMostRecentChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringAtMostRecentChange;
}
constexpr void GlobalNamespace::TextChatInput::__cordl_internal_set__stringAtMostRecentChange(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringAtMostRecentChange = value;
}
inline ::UnityW<::GlobalNamespace::TextChatInput> GlobalNamespace::TextChatInput::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::TextChatInput>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::TextChatInput::get_inputIsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"get_inputIsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatInput::RecordMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"RecordMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::TextChatInput::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatInput::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatInput::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatInput::OnChange(::StringW  newString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"OnChange", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newString);
}
inline void GlobalNamespace::TextChatInput::OpenInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"OpenInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatInput::CloseInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"CloseInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TextChatInput::GetString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {"GetString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TextChatInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextChatInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextChatInput* GlobalNamespace::TextChatInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextChatInput*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextChatInput::TextChatInput()   {
}
