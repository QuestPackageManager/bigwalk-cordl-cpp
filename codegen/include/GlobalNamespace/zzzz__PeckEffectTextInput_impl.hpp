#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTextInput.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_impl.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckEffectTextInput_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__PeckContext_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__SaveIdentity_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18044e180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.OnStartClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::OnStartClient)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18044ec10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                    {::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.Peck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::GlobalNamespace::PeckContext)>(&::GlobalNamespace::PeckEffectTextInput::Peck)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18044ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.SetSignTextOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::SetSignTextOpen)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18044f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"SetSignTextOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.SetSignTextClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(bool)>(&::GlobalNamespace::PeckEffectTextInput::SetSignTextClosed)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18044ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"SetSignTextClosed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.CmdStopEditing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::CmdStopEditing)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18044e310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"CmdStopEditing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::Update)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18044f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.OnChangeNetworkedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::StringW, ::StringW)>(&::GlobalNamespace::PeckEffectTextInput::OnChangeNetworkedText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18044e9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnChangeNetworkedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.OnChangeAuthor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::StringW, ::StringW)>(&::GlobalNamespace::PeckEffectTextInput::OnChangeAuthor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18044e9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnChangeAuthor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.IsSilenced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::IsSilenced)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18044e840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"IsSilenced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.RefreshText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::RefreshText)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18044ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"RefreshText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.CmdSendNewText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::StringW, ::StringW)>(&::GlobalNamespace::PeckEffectTextInput::CmdSendNewText)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18044e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"CmdSendNewText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18044eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18044ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.OnChangePlayerSilence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PeckEffectTextInput::OnChangePlayerSilence)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18044e9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnChangePlayerSilence", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.get_NetworknetworkedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::get_NetworknetworkedText)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"get_NetworknetworkedText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.set_NetworknetworkedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::ByRefConst<::StringW>)>(&::GlobalNamespace::PeckEffectTextInput::set_NetworknetworkedText)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18044f420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"set_NetworknetworkedText", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.get_NetworkauthorIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::get_NetworkauthorIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"get_NetworkauthorIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.set_NetworkauthorIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::ByRefConst<::StringW>)>(&::GlobalNamespace::PeckEffectTextInput::set_NetworkauthorIdentifier)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18044f3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"set_NetworkauthorIdentifier", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.UserCode_CmdStopEditing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)()>(&::GlobalNamespace::PeckEffectTextInput::UserCode_CmdStopEditing)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18044f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"UserCode_CmdStopEditing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.InvokeUserCode_CmdStopEditing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PeckEffectTextInput::InvokeUserCode_CmdStopEditing)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18044e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"InvokeUserCode_CmdStopEditing", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.UserCode_CmdSendNewText__String__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::StringW, ::StringW)>(&::GlobalNamespace::PeckEffectTextInput::UserCode_CmdSendNewText__String__String)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18044f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"UserCode_CmdSendNewText__String__String", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.InvokeUserCode_CmdSendNewText__String__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::GlobalNamespace::PeckEffectTextInput::InvokeUserCode_CmdSendNewText__String__String)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18044e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"InvokeUserCode_CmdSendNewText__String__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::Mirror::NetworkWriter*, bool)>(&::GlobalNamespace::PeckEffectTextInput::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18044ef10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                    {::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckEffectTextInput.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckEffectTextInput::*)(::Mirror::NetworkReader*, bool)>(&::GlobalNamespace::PeckEffectTextInput::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18044e3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                    {::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PeckSystemReference& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_systemReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr ::GlobalNamespace::PeckSystemReference const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_systemReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___systemReference;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___systemReference = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_textField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_textField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textField;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textField = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_onStopEditingSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopEditingSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_onStopEditingSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopEditingSwitch;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_onStopEditingSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStopEditingSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::SaveIdentity>& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_saveIdentity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIdentity;
}
constexpr ::UnityW<::GlobalNamespace::SaveIdentity> const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_saveIdentity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveIdentity;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_saveIdentity(::UnityW<::GlobalNamespace::SaveIdentity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveIdentity = value;
}
constexpr ::StringW& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_networkedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedText;
}
constexpr ::StringW const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_networkedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedText;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_networkedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedText = value;
}
constexpr ::StringW& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_authorIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorIdentifier;
}
constexpr ::StringW const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_authorIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authorIdentifier;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_authorIdentifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authorIdentifier = value;
}
constexpr int32_t& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_openState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openState;
}
constexpr int32_t const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_openState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openState;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_openState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openState = value;
}
constexpr int32_t& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_closeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeState;
}
constexpr int32_t const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_closeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeState;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_closeState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeState = value;
}
constexpr bool& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_isInputting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInputting;
}
constexpr bool const& GlobalNamespace::PeckEffectTextInput::__cordl_internal_get_isInputting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isInputting;
}
constexpr void GlobalNamespace::PeckEffectTextInput::__cordl_internal_set_isInputting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isInputting = value;
}
inline void GlobalNamespace::PeckEffectTextInput::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::OnStartClient()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::Peck(::GlobalNamespace::PeckContext  peckContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"Peck", {}, {::i2c::type_of<::GlobalNamespace::PeckContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckContext);
}
inline void GlobalNamespace::PeckEffectTextInput::SetSignTextOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"SetSignTextOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::SetSignTextClosed(bool  submitResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"SetSignTextClosed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, submitResult);
}
inline void GlobalNamespace::PeckEffectTextInput::CmdStopEditing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"CmdStopEditing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::OnChangeNetworkedText(::StringW  oldValue, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnChangeNetworkedText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline void GlobalNamespace::PeckEffectTextInput::OnChangeAuthor(::StringW  oldValue, ::StringW  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnChangeAuthor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue);
}
inline bool GlobalNamespace::PeckEffectTextInput::IsSilenced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"IsSilenced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::RefreshText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"RefreshText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::CmdSendNewText(::StringW  text, ::StringW  authorIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"CmdSendNewText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, authorIdentifier);
}
inline void GlobalNamespace::PeckEffectTextInput::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::OnChangePlayerSilence(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"OnChangePlayerSilence", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PeckEffectTextInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PeckEffectTextInput::get_NetworknetworkedText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"get_NetworknetworkedText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::set_NetworknetworkedText(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"set_NetworknetworkedText", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PeckEffectTextInput::get_NetworkauthorIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"get_NetworkauthorIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::set_NetworkauthorIdentifier(::ByRefConst<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"set_NetworkauthorIdentifier", {}, {::i2c::type_of<::ByRefConst<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PeckEffectTextInput::UserCode_CmdStopEditing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"UserCode_CmdStopEditing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckEffectTextInput::InvokeUserCode_CmdStopEditing(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"InvokeUserCode_CmdStopEditing", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PeckEffectTextInput::UserCode_CmdSendNewText__String__String(::StringW  text, ::StringW  authorIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"UserCode_CmdSendNewText__String__String", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, authorIdentifier);
}
inline void GlobalNamespace::PeckEffectTextInput::InvokeUserCode_CmdSendNewText__String__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(),
                        {"InvokeUserCode_CmdSendNewText__String__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void GlobalNamespace::PeckEffectTextInput::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void GlobalNamespace::PeckEffectTextInput::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PeckEffectTextInput*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::GlobalNamespace::PeckEffectTextInput* GlobalNamespace::PeckEffectTextInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckEffectTextInput*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckEffectTextInput::PeckEffectTextInput()   {
}
