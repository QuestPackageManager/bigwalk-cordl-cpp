#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTexter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerTexter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookSet_def.hpp"
#include "GlobalNamespace/zzzz__TextChatSource_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.get_isPlayerTextChatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::get_isPlayerTextChatting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180378960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"get_isPlayerTextChatting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.set_isPlayerTextChatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::set_isPlayerTextChatting)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803789b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"set_isPlayerTextChatting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.GetLookColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLookSet_LookColor (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::GetLookColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180377310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"GetLookColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.GetOpacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerTexter::*)(float_t)>(&::GlobalNamespace::PlayerTexter::GetOpacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180377450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"GetOpacity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerTexter::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.LateInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::LateInitialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180377470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"LateInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::Update)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180378620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.OnEndEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(::StringW)>(&::GlobalNamespace::PlayerTexter::OnEndEdit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803774b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"OnEndEdit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.TextChatCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::TextChatCancel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180378500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"TextChatCancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.ReceieveMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(::StringW)>(&::GlobalNamespace::PlayerTexter::ReceieveMessage)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803781e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"ReceieveMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.DisplayMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(::StringW)>(&::GlobalNamespace::PlayerTexter::DisplayMessage)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180376f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"DisplayMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.TrySendTextChat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::TrySendTextChat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180378570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"TrySendTextChat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.CompleteDisplayMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(::StringW)>(&::GlobalNamespace::PlayerTexter::CompleteDisplayMessage)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180376f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"CompleteDisplayMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.CompleteInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(::StringW, ::by_ref<bool>)>(&::GlobalNamespace::PlayerTexter::CompleteInput)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180377110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"CompleteInput", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.SetPauseMenuOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::SetPauseMenuOpen)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803783c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"SetPauseMenuOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.ActionTextChatStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::ActionTextChatStroke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180376df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"ActionTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.SetIsTextChatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::SetIsTextChatting)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180378320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"SetIsTextChatting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.ShowTextChatStroke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::ShowTextChatStroke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x180378430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"ShowTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.PlayChatOpenSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::PlayChatOpenSound)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x1803776b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatOpenSound", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.PlayChatCloseSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::PlayChatCloseSound)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180377530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatCloseSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.PlayChatStrokeSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::PlayChatStrokeSound)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x180377a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatStrokeSound", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter.PlayChatSubmitSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)(bool)>(&::GlobalNamespace::PlayerTexter::PlayChatSubmitSound)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x180377e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatSubmitSound", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTexter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTexter::*)()>(&::GlobalNamespace::PlayerTexter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextChatSource>& GlobalNamespace::PlayerTexter::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::UnityW<::GlobalNamespace::TextChatSource> const& GlobalNamespace::PlayerTexter::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_source(::UnityW<::GlobalNamespace::TextChatSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::UnityW<::GlobalNamespace::TextChatSource>& GlobalNamespace::PlayerTexter::__cordl_internal_get_globalTextChatOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalTextChatOutput;
}
constexpr ::UnityW<::GlobalNamespace::TextChatSource> const& GlobalNamespace::PlayerTexter::__cordl_internal_get_globalTextChatOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalTextChatOutput;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_globalTextChatOutput(::UnityW<::GlobalNamespace::TextChatSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalTextChatOutput = value;
}
constexpr float_t& GlobalNamespace::PlayerTexter::__cordl_internal_get_messageDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageDuration;
}
constexpr float_t const& GlobalNamespace::PlayerTexter::__cordl_internal_get_messageDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageDuration;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_messageDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___messageDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::PlayerTexter::__cordl_internal_get_opactityCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opactityCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::PlayerTexter::__cordl_internal_get_opactityCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opactityCurve;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_opactityCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opactityCurve = value;
}
constexpr bool& GlobalNamespace::PlayerTexter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerTexter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerTexter::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerTexter::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr bool& GlobalNamespace::PlayerTexter::__cordl_internal_get_isLocalPlayerTextChatting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocalPlayerTextChatting;
}
constexpr bool const& GlobalNamespace::PlayerTexter::__cordl_internal_get_isLocalPlayerTextChatting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocalPlayerTextChatting;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_isLocalPlayerTextChatting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocalPlayerTextChatting = value;
}
constexpr bool& GlobalNamespace::PlayerTexter::__cordl_internal_get_hasBeenClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenClosed;
}
constexpr bool const& GlobalNamespace::PlayerTexter::__cordl_internal_get_hasBeenClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenClosed;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_hasBeenClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBeenClosed = value;
}
constexpr bool& GlobalNamespace::PlayerTexter::__cordl_internal_get_hasBeenEdit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenEdit;
}
constexpr bool const& GlobalNamespace::PlayerTexter::__cordl_internal_get_hasBeenEdit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenEdit;
}
constexpr void GlobalNamespace::PlayerTexter::__cordl_internal_set_hasBeenEdit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBeenEdit = value;
}
inline bool GlobalNamespace::PlayerTexter::get_isPlayerTextChatting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"get_isPlayerTextChatting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTexter::set_isPlayerTextChatting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"set_isPlayerTextChatting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerLookSet_LookColor GlobalNamespace::PlayerTexter::GetLookColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"GetLookColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLookSet_LookColor>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerTexter::GetOpacity(float_t  audibility)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"GetOpacity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, audibility);
}
inline void GlobalNamespace::PlayerTexter::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerTexter::LateInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"LateInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTexter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTexter::OnEndEdit(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"OnEndEdit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GlobalNamespace::PlayerTexter::TextChatCancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"TextChatCancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTexter::ReceieveMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"ReceieveMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlayerTexter::DisplayMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"DisplayMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlayerTexter::TrySendTextChat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"TrySendTextChat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTexter::CompleteDisplayMessage(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"CompleteDisplayMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::PlayerTexter::CompleteInput(::StringW  message, ::by_ref<bool>  messageSent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"CompleteInput", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, messageSent);
}
inline void GlobalNamespace::PlayerTexter::SetPauseMenuOpen(bool  hasMenuOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"SetPauseMenuOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasMenuOpen);
}
inline void GlobalNamespace::PlayerTexter::ActionTextChatStroke(bool  isDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"ActionTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDelete);
}
inline void GlobalNamespace::PlayerTexter::SetIsTextChatting(bool  isTextChatting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"SetIsTextChatting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isTextChatting);
}
inline void GlobalNamespace::PlayerTexter::ShowTextChatStroke(bool  isDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"ShowTextChatStroke", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDelete);
}
inline void GlobalNamespace::PlayerTexter::PlayChatOpenSound(bool  local)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatOpenSound", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, local);
}
inline void GlobalNamespace::PlayerTexter::PlayChatCloseSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatCloseSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTexter::PlayChatStrokeSound(bool  isDelete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatStrokeSound", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDelete);
}
inline void GlobalNamespace::PlayerTexter::PlayChatSubmitSound(bool  local)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {"PlayChatSubmitSound", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, local);
}
inline void GlobalNamespace::PlayerTexter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTexter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerTexter* GlobalNamespace::PlayerTexter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerTexter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTexter::PlayerTexter()   {
}
