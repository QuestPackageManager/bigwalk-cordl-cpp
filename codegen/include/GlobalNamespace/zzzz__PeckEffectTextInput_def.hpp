#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectTextInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectTextInput)
namespace GlobalNamespace {
class LocalizedText;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class SaveIdentity;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class PeckEffectTextInput;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PeckEffectTextInput*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectTextInput*, "", "PeckEffectTextInput");
// Dependencies Mirror.NetworkBehaviour, PeckSystemReference
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectTextInput
class CORDL_TYPE PeckEffectTextInput : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkauthorIdentifier, put=set_NetworkauthorIdentifier)) ::StringW  NetworkauthorIdentifier;

 __declspec(property(get=get_NetworknetworkedText, put=set_NetworknetworkedText)) ::StringW  NetworknetworkedText;

/// @brief Field authorIdentifier, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_authorIdentifier, put=__cordl_internal_set_authorIdentifier)) ::StringW  authorIdentifier;

/// @brief Field closeState, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeState, put=__cordl_internal_set_closeState)) int32_t  closeState;

/// @brief Field isInputting, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInputting, put=__cordl_internal_set_isInputting)) bool  isInputting;

/// @brief Field logVerbose, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field networkedText, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedText, put=__cordl_internal_set_networkedText)) ::StringW  networkedText;

/// @brief Field onStopEditingSwitch, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStopEditingSwitch, put=__cordl_internal_set_onStopEditingSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onStopEditingSwitch;

/// @brief Field openState, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_openState, put=__cordl_internal_set_openState)) int32_t  openState;

/// @brief Field saveIdentity, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveIdentity, put=__cordl_internal_set_saveIdentity)) ::UnityW<::GlobalNamespace::SaveIdentity>  saveIdentity;

/// @brief Field systemReference, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field textField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_textField, put=__cordl_internal_set_textField)) ::UnityW<::GlobalNamespace::LocalizedText>  textField;

/// @brief Method Awake, addr 0x18044e180, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CmdSendNewText, addr 0x18044e230, size 0xe0, virtual false, abstract: false, final false
inline void CmdSendNewText(::StringW  text, ::StringW  authorIdentifier) ;

/// @brief Method CmdStopEditing, addr 0x18044e310, size 0xb0, virtual false, abstract: false, final false
inline void CmdStopEditing() ;

/// @brief Method DeserializeSyncVars, addr 0x18044e3c0, size 0x230, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method InvokeUserCode_CmdSendNewText__String__String, addr 0x18044e5f0, size 0x1b0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSendNewText__String__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdStopEditing, addr 0x18044e7a0, size 0xa0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdStopEditing(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method IsSilenced, addr 0x18044e840, size 0x170, virtual false, abstract: false, final false
inline bool IsSilenced() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PeckEffectTextInput* New_ctor() ;

/// @brief Method OnChangeAuthor, addr 0x18044e9b0, size 0x10, virtual false, abstract: false, final false
inline void OnChangeAuthor(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method OnChangeNetworkedText, addr 0x18044e9b0, size 0x10, virtual false, abstract: false, final false
inline void OnChangeNetworkedText(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method OnChangePlayerSilence, addr 0x18044e9c0, size 0x70, virtual false, abstract: false, final false
inline void OnChangePlayerSilence(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method OnDisable, addr 0x18044ea30, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18044eb20, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnStartClient, addr 0x18044ec10, size 0x60, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method Peck, addr 0x18044ec70, size 0x170, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method RefreshText, addr 0x18044ede0, size 0x130, virtual false, abstract: false, final false
inline void RefreshText() ;

/// @brief Method SerializeSyncVars, addr 0x18044ef10, size 0x80, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetSignTextClosed, addr 0x18044ef90, size 0xf0, virtual false, abstract: false, final false
inline void SetSignTextClosed(bool  submitResult) ;

/// @brief Method SetSignTextOpen, addr 0x18044f080, size 0x50, virtual false, abstract: false, final false
inline void SetSignTextOpen() ;

/// @brief Method Update, addr 0x18044f0d0, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UserCode_CmdSendNewText__String__String, addr 0x18044f1a0, size 0x110, virtual false, abstract: false, final false
inline void UserCode_CmdSendNewText__String__String(::StringW  text, ::StringW  authorIdentifier) ;

/// @brief Method UserCode_CmdStopEditing, addr 0x18044f2b0, size 0x30, virtual false, abstract: false, final false
inline void UserCode_CmdStopEditing() ;

constexpr ::StringW const& __cordl_internal_get_authorIdentifier() const;

constexpr ::StringW& __cordl_internal_get_authorIdentifier() ;

constexpr int32_t const& __cordl_internal_get_closeState() const;

constexpr int32_t& __cordl_internal_get_closeState() ;

constexpr bool const& __cordl_internal_get_isInputting() const;

constexpr bool& __cordl_internal_get_isInputting() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::StringW const& __cordl_internal_get_networkedText() const;

constexpr ::StringW& __cordl_internal_get_networkedText() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onStopEditingSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onStopEditingSwitch() ;

constexpr int32_t const& __cordl_internal_get_openState() const;

constexpr int32_t& __cordl_internal_get_openState() ;

constexpr ::UnityW<::GlobalNamespace::SaveIdentity> const& __cordl_internal_get_saveIdentity() const;

constexpr ::UnityW<::GlobalNamespace::SaveIdentity>& __cordl_internal_get_saveIdentity() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get_textField() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get_textField() ;

constexpr void __cordl_internal_set_authorIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set_closeState(int32_t  value) ;

constexpr void __cordl_internal_set_isInputting(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_networkedText(::StringW  value) ;

constexpr void __cordl_internal_set_onStopEditingSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_openState(int32_t  value) ;

constexpr void __cordl_internal_set_saveIdentity(::UnityW<::GlobalNamespace::SaveIdentity>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_textField(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkauthorIdentifier, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworkauthorIdentifier() ;

/// @brief Method get_NetworknetworkedText, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworknetworkedText() ;

/// @brief Method set_NetworkauthorIdentifier, addr 0x18044f3a0, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkauthorIdentifier(::ByRefConst<::StringW>  value) ;

/// @brief Method set_NetworknetworkedText, addr 0x18044f420, size 0x80, virtual false, abstract: false, final false
inline void set_NetworknetworkedText(::ByRefConst<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectTextInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTextInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectTextInput(PeckEffectTextInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectTextInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectTextInput(PeckEffectTextInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5417};

/// @brief Field systemReference, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field textField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ___textField;

/// @brief Field onStopEditingSwitch, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onStopEditingSwitch;

/// @brief Field saveIdentity, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SaveIdentity>  ___saveIdentity;

/// @brief Field networkedText, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___networkedText;

/// @brief Field authorIdentifier, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___authorIdentifier;

/// @brief Field openState, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___openState;

/// @brief Field closeState, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___closeState;

/// @brief Field logVerbose, offset: 0xc0, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field isInputting, offset: 0xc1, size: 0x1, def value: None
 bool  ___isInputting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___systemReference) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___textField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___onStopEditingSwitch) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___saveIdentity) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___networkedText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___authorIdentifier) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___openState) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___closeState) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___logVerbose) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectTextInput, ___isInputting) == 0xc1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectTextInput) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
