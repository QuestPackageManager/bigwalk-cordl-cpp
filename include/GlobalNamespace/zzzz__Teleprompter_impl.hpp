#pragma once
// IWYU pragma private; include "GlobalNamespace/Teleprompter.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Teleprompter_def.hpp"
#include "GlobalNamespace/zzzz__IOccasional_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalPartner_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PegTileSequenceGenerator_def.hpp"
#include "GlobalNamespace/zzzz__Teleprompter_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Prompt_Teleprompter_PromptType::Prompt_Teleprompter_PromptType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Prompt_Teleprompter_PromptType::Prompt_Teleprompter_PromptType()   {
}
constexpr ::GlobalNamespace::Prompt_Teleprompter_PromptType  GlobalNamespace::Prompt_Teleprompter_PromptType::FixedMessage{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Prompt_Teleprompter_PromptType  GlobalNamespace::Prompt_Teleprompter_PromptType::SequenceMessage{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "promptType", ty: "::GlobalNamespace::Prompt_Teleprompter_PromptType", modifiers: "", def_value: Some("{}") }, CppParam { name: "rawValue", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "sequenceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Teleprompter_Prompt::Teleprompter_Prompt(::GlobalNamespace::Prompt_Teleprompter_PromptType  promptType, ::StringW  rawValue, int32_t  sequenceIndex) noexcept  {
this->promptType = promptType;
this->rawValue = rawValue;
this->sequenceIndex = sequenceIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Teleprompter_Prompt::Teleprompter_Prompt()   {
}
// Ctor Parameters [CppParam { name: "propGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: Some("{}") }, CppParam { name: "rawValue", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Teleprompter_SequencePrompt::Teleprompter_SequencePrompt(::GlobalNamespace::PropGroup  propGroup, ::StringW  rawValue) noexcept  {
this->propGroup = propGroup;
this->rawValue = rawValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Teleprompter_SequencePrompt::Teleprompter_SequencePrompt()   {
}
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)()>(&::GlobalNamespace::Teleprompter::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804180b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.ButtonPeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::Teleprompter::ButtonPeck)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180418160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"ButtonPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.IsActivePeck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::Teleprompter::IsActivePeck)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804182d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"IsActivePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.OccasionalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)()>(&::GlobalNamespace::Teleprompter::OccasionalUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180418380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)(int32_t, int32_t)>(&::GlobalNamespace::Teleprompter::Refresh)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1804183e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"Refresh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.SetPrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)(::GlobalNamespace::Teleprompter_Prompt)>(&::GlobalNamespace::Teleprompter::SetPrompt)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1804185c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"SetPrompt", {}, {::i2c::type_of<::GlobalNamespace::Teleprompter_Prompt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)()>(&::GlobalNamespace::Teleprompter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804186f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)()>(&::GlobalNamespace::Teleprompter::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.get_NetworkcurrentPrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Teleprompter::*)()>(&::GlobalNamespace::Teleprompter::get_NetworkcurrentPrompt)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180418710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"get_NetworkcurrentPrompt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.set_NetworkcurrentPrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)(::ByRefConst<int32_t>)>(&::GlobalNamespace::Teleprompter::set_NetworkcurrentPrompt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180418720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"set_NetworkcurrentPrompt", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::Teleprompter::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180418570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                    {::i2c::class_of<::GlobalNamespace::Teleprompter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Teleprompter.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Teleprompter::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::Teleprompter::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804181f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                    {::i2c::class_of<::GlobalNamespace::Teleprompter*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::Teleprompter::__cordl_internal_get_pokeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pokeButton;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::Teleprompter::__cordl_internal_get_pokeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pokeButton;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_pokeButton(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pokeButton = value;
}
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::Teleprompter::__cordl_internal_get_isActiveSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveSystem;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::Teleprompter::__cordl_internal_get_isActiveSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isActiveSystem;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_isActiveSystem(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isActiveSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::Teleprompter::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::Teleprompter::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner>& GlobalNamespace::Teleprompter::__cordl_internal_get_occasionalPartner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr ::UnityW<::GlobalNamespace::OccasionalPartner> const& GlobalNamespace::Teleprompter::__cordl_internal_get_occasionalPartner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalPartner;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_occasionalPartner(::UnityW<::GlobalNamespace::OccasionalPartner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalPartner = value;
}
constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator>& GlobalNamespace::Teleprompter::__cordl_internal_get_sequenceGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceGenerator;
}
constexpr ::UnityW<::GlobalNamespace::PegTileSequenceGenerator> const& GlobalNamespace::Teleprompter::__cordl_internal_get_sequenceGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequenceGenerator;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_sequenceGenerator(::UnityW<::GlobalNamespace::PegTileSequenceGenerator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequenceGenerator = value;
}
constexpr ::ArrayW<::GlobalNamespace::Teleprompter_Prompt>& GlobalNamespace::Teleprompter::__cordl_internal_get_prompts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prompts;
}
constexpr ::ArrayW<::GlobalNamespace::Teleprompter_Prompt> const& GlobalNamespace::Teleprompter::__cordl_internal_get_prompts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prompts;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_prompts(::ArrayW<::GlobalNamespace::Teleprompter_Prompt>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prompts = value;
}
constexpr ::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt>& GlobalNamespace::Teleprompter::__cordl_internal_get_sequencePrompts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencePrompts;
}
constexpr ::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt> const& GlobalNamespace::Teleprompter::__cordl_internal_get_sequencePrompts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencePrompts;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_sequencePrompts(::ArrayW<::GlobalNamespace::Teleprompter_SequencePrompt>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequencePrompts = value;
}
constexpr float_t& GlobalNamespace::Teleprompter::__cordl_internal_get_promptDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptDuration;
}
constexpr float_t const& GlobalNamespace::Teleprompter::__cordl_internal_get_promptDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptDuration;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_promptDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promptDuration = value;
}
constexpr bool& GlobalNamespace::Teleprompter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::Teleprompter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr float_t& GlobalNamespace::Teleprompter::__cordl_internal_get_timeAtChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtChange;
}
constexpr float_t const& GlobalNamespace::Teleprompter::__cordl_internal_get_timeAtChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtChange;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_timeAtChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtChange = value;
}
constexpr int32_t& GlobalNamespace::Teleprompter::__cordl_internal_get_currentPrompt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPrompt;
}
constexpr int32_t const& GlobalNamespace::Teleprompter::__cordl_internal_get_currentPrompt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPrompt;
}
constexpr void GlobalNamespace::Teleprompter::__cordl_internal_set_currentPrompt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPrompt = value;
}
inline void GlobalNamespace::Teleprompter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Teleprompter::ButtonPeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"ButtonPeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::Teleprompter::IsActivePeck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"IsActivePeck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::Teleprompter::OccasionalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"OccasionalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Teleprompter::Refresh(int32_t  oldValue, int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"Refresh", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::Teleprompter::SetPrompt(::GlobalNamespace::Teleprompter_Prompt  prompt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"SetPrompt", {}, {::i2c::type_of<::GlobalNamespace::Teleprompter_Prompt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prompt);
}
inline void GlobalNamespace::Teleprompter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Teleprompter::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::Teleprompter::get_NetworkcurrentPrompt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"get_NetworkcurrentPrompt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Teleprompter::set_NetworkcurrentPrompt(::ByRefConst<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Teleprompter*>(),
                        {"set_NetworkcurrentPrompt", {}, {::i2c::type_of<::ByRefConst<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Teleprompter::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Teleprompter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::Teleprompter::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Teleprompter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::Teleprompter* GlobalNamespace::Teleprompter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Teleprompter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOccasional"
constexpr  GlobalNamespace::Teleprompter::operator ::GlobalNamespace::IOccasional*() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOccasional"
constexpr ::GlobalNamespace::IOccasional* GlobalNamespace::Teleprompter::i___GlobalNamespace__IOccasional() noexcept {
return static_cast<::GlobalNamespace::IOccasional*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Teleprompter::Teleprompter()   {
}
